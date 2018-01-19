#include "SDK.h"
#include "Global.h"
#include "Configs.h"
#include "FrameStageNotify.h"
#include "NoVisualRecoil.h"
#include "ViewAntiAim.h"
#include "Render.h"
#include "SkinChanger.h"
#include "Chams.h"
#include "AntiAimV2.h"
#include "NightMode.h"
#include "ResolverV2.h"
#include "MainThread.h"
#include "LagCompensation.h"
FrameStageNotify_t oFrameStageNotify = NULL;

void __fastcall FrameStageNotify(void* ecx, void* edx, ClientFrameStage_t Stage)
{
	return oFrameStageNotify(ecx, Stage);
	if (G::exit)
	{
		NightMode::Remove();

		return oFrameStageNotify(ecx, Stage);
	}

	//G::pLocal = I::pClientEntityList->GetClientEntity(I::pEngineClient->GetLocalPlayer());
	if (!G::pLocal)
		return oFrameStageNotify(ecx, Stage);
	if (Stage == FRAME_RENDER_START)
	{
		if (!I::pEngineClient->IsInGame() || !I::pEngineClient->IsConnected())
		{
			if (ConvarSpoofer::IsReady())
			{
				ConvarSpoofer::Release();
			}
		}
		else
		{
			if (!ConvarSpoofer::IsReady())
			{
				ConvarSpoofer::Init();
				ConvarSpoofer::Spoof();
			}
		}

		if (ConvarSpoofer::IsReady())
		{
			ConvarSpoofer::Get(xorstr("fog_override"))->SetValue(cfg.Visual.fpsBoost || cfg.Visual.nightMode);
			ConvarSpoofer::Get(xorstr("fog_enable"))->SetValue(!cfg.Visual.fpsBoost && !cfg.Visual.nightMode);
			ConvarSpoofer::Get(xorstr("fog_enableskybox"))->SetValue(!cfg.Visual.fpsBoost && !cfg.Visual.nightMode);
			//ConvarSpoofer::Get(xorstr("fog_colorskybox"))->SetString(xorstr("0 0 0"));
			//ConvarSpoofer::Get(xorstr("sv_cheats"))->SetValue(cfg.Misc.bypassSvCheats ? 1 : 0);
			ConvarSpoofer::Get(xorstr("mat_postprocess_enable"))->SetValue(cfg.Visual.disablePostProcess || cfg.Visual.fpsBoost ? 0 : 1);
			ConvarSpoofer::Get(xorstr("sv_allow_thirdperson"))->SetValue(1);
			//ConvarSpoofer::Get(xorstr("mp_forcecamera"))->SetValue(cfg.Misc.thirdPerson ? 0 : I::pCVar->FindVar(xorstr("mp_forcecamera"))->GetInt());


			if (cfg.Misc.unlockFps)
			{
				I::pCVar->FindVar(xorstr("fps_max"))->SetValue(1000.0f);
				I::pCVar->FindVar(xorstr("fps_max_menu"))->SetValue(1000.0f);
			}
			else
			{
				/*I::pCVar->FindVar(xorstr("fps_max"))->SetValue(300.0f);
				I::pCVar->FindVar(xorstr("fps_max_menu"))->SetValue(120.0f);*/
			}

			if (cfg.Rage.Resolver.noInterpolation)
			{
				ConvarSpoofer::Get(xorstr("cl_extrapolate"))->SetValue(0);
			}
			else
			{
				ConvarSpoofer::Get(xorstr("cl_extrapolate"))->SetValue(1);
			}
		}
	}

	CBaseEntity *pLocal = G::pLocal;
	CUserCmd *pCmd = G::pCmd;

	NightMode::FrameStageNotify(Stage);

	antiAim->FrameStageNotify(Stage);

	if (!I::pEngineClient->IsInGame() || !pLocal || !pCmd)
		return oFrameStageNotify(ecx, Stage);

	if (Stage == FRAME_NET_UPDATE_START)
	{
		for (int i = 1; i < I::pGlobals->maxClients; i++)
		{
			CBaseEntity *player = I::pClientEntityList->GetClientEntity(i);

			if (!player)
				continue;

			if (player == G::pLocal)
				continue;

			if (player->GetTeam() == G::pLocal->GetTeam())
				continue;

			VarMapping_t *map = player->VarMapping();
			if (map)
			{
				if (cfg.Rage.Resolver.noInterpolation)
				{
					map->m_nInterpolatedEntries = 0;
				}
				else
				{
					if (map->m_nInterpolatedEntries == 0)
						map->m_nInterpolatedEntries = 6;
				}
			}
		}
	}

	ResolverV2::FrameStageNotifyPreReal(Stage);
	//Backtrack::FrameStageNotify(Stage);

	if (pLocal->GetLifeState() == LIFE_ALIVE && pLocal->GetHealth() > 0)
	{
		if (Stage == FRAME_NET_UPDATE_POSTDATAUPDATE_START)
		{
			CMBacktracking::Get().CacheInfo();

		}
		ViewAntiAim(Stage, 0);
		NoVisualRecoil(Stage, 0);

		oFrameStageNotify(ecx, Stage);

		SkinChanger(Stage);
		NoVisualRecoil(Stage, 1);
		ViewAntiAim(Stage, 1);
	}
	else
	{
		oFrameStageNotify(ecx, Stage);
	}

	ResolverV2::FrameStageNotifyPostReal(Stage);
	//Backtrack::FrameStageNotifyPostReal(Stage);
}