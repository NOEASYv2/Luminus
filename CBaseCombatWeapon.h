#pragma once

// last update 18-10-2017
#define m_iClip1						0x3204
#define m_iClip2						m_iClip1 + 0x8
#define m_bInReload						0x3245 // m_bCanReload ?
#define m_flNextPrimaryAttack_			0x31D8
#define m_bReloadVisuallyComplete		0x32CC
#define m_fAccuracyPenalty				0x32B0
#define m_flPostponeFireReadyTime_		0x32C8
#define m_nViewModelIndex				0x31E0
#define m_iState_						0x31F8
#define m_iRecoilIndex_					0x32BC
#define m_iShotsFired_					0xA2B0
#define m_bPinPulled_					0x3342
#define m_fThrowTime_					0x3344

class CHudTexture;
typedef int CSWeaponType;

struct WeaponInfo_t
{
	/*BYTE		m_pad_0x0000[4];			//0x0000
	bool		m_bParsedScript;			//0x0004
	bool		m_bLoadedHudElements;		//0x0005
	char		m_szClassName[80];		//0x0006
	char		m_szPrintName[80];		//0x0056
	char		m_szViewModel[80];		//0x00A6
	char		m_szWorldModel[80];		//0x00F6
	char		m_szBulletType[32];		//0x0146
	char		m_szWorldDroppedModel[80];//0x0166
	char		m_szAnimationPrefix[16];	//0x01B6
	BYTE		m_pad_0x01C6[2];			//0x01C6
	int			m_iSlot;					//0x01C8
	int			m_iPosition;				//0x01CC
	int			m_iMaxClip1;				//0x01D0
	int			m_iMaxClip2;				//0x01D4
	int			m_iDefaultClip1;			//0x01D8
	int			m_iDefaultClip2;			//0x01DC
	int			m_iWeight;				//0x01E0
	int			m_iRumbleEffect;			//0x01E4
	bool		m_bAutoSwitchTo;			//0x01E8
	bool		m_bAutoSwitchFrom;		//0x01E9
	BYTE		m_pad_0x01EA[2];			//0x01EA
	int			m_iFlags;					//0x01EC
	char		m_szAmmo1[16];			//0x01F0
	char		m_szAmmo2[16];			//0x0200
	char		m_szAIAddOn[80];			//0x0210
	char		m_aShootSounds[17][80];	//0x0260
	char PAD_NEW[80];
	int			m_iAmmoType;
	int			m_iAmmo2Type;
	bool		m_bMeleeWeapon;
	bool		m_bBuiltRightHanded;
	bool		m_bAllowFlipping;
	BYTE		m_pad_0x07BB;
	int			m_iSpriteCount;
	CHudTexture* m_iconWeaponS;
	CHudTexture* m_iconWeapon;
	CHudTexture* m_iconAmmo;
	CHudTexture* m_iconAmmo2;
	CHudTexture* m_iconCrosshair;
	CHudTexture* m_iconAutoaim;
	CHudTexture* m_iconZoomedCrosshair;
	CHudTexture* m_iconZoomedAutoaim;
	CHudTexture* m_iconWeaponSmall;
	bool		m_bShowUsageHint;
	BYTE		m_pad_0x07E5[3];
	CSWeaponType m_iWeaponType;
	int			m_iTeam;
	int			m_iWeaponId;
	bool		m_bFullAuto;
	BYTE		m_pad_0x07F5[3];
	float		m_flHeatPerShot;
	int			m_iWeaponPrice;
	float		m_flArmorRatio;
	float		m_flMaxPlayerSpeed;
	float		m_flMaxPlayerSpeedAlt;
	int			m_iCrosshairMinDistance;
	int			m_iCrosshairDeltaDistance;
	float		m_flPenetration;
	int			m_iDamage;
	float		m_flRange;
	float		m_flRangeModifier;
	int			m_iBullets;
	float		m_flCycleTime;
	float		m_flCycleTimeAlt;
	char		m_szHeatEffect[80];
	float		m_aflSmokeColor[3];
	char		m_szMuzzleFlashEffect_1stPerson[80];
	char		m_szMuzzleFlashEffect_3rdPerson[80];
	char		m_szEjectBrassEffect[80];
	char		m_szTracerEffect[80];
	int			m_iTracerFrequency;
	float		m_flSpread;
	float		m_flSpreadAlt;
	float		m_flInaccuracyCrouch;
	float		m_flInaccuracyCrouchAlt;
	float		m_flInaccuracyStand;
	float		m_flInaccuracyStandAlt;
	float		m_flInaccuracyJump;
	float		m_flInaccuracyJumpAlt;
	float		m_flInaccuracyLand;
	float		m_flInaccuracyLandAlt;
	float		m_flInaccuracyLadder;
	float		m_flInaccuracyLadderAlt;
	float		m_flInaccuracyFire;
	float		m_flInaccuracyFireAlt;
	float		m_flInaccuracyMove;
	float		m_flInaccuracyMoveAlt;
	float		m_flRecoveryTimeStand;
	float		m_flRecoveryTimeCrouch;
	float		m_flInaccuracyReload;
	float		m_flInaccuracyAltSwitch;
	float		m_flRecoilAngle;
	float		m_flRecoilAngleAlt;
	float		m_flRecoilAngleVariance;
	float		m_flRecoilAngleVarianceAlt;
	float		m_flRecoilMagnitude;
	float		m_flRecoilMagnitudeAlt;
	float		m_flRecoilMagnitudeVariance;
	float		m_flRecoilMagnitudeVarianceAlt;
	int			m_iRecoilSeed;
	float		m_flFlinchVelocityModifierLarge;
	float		m_flFlinchVelocityModifierSmall;
	float		m_flTimeToIdle;
	float		m_flIdleInterval;
	float		m_recoilTable[2][128];
	int			m_iZoomLevels;
	int			m_iZoomFOV[3];
	float		m_fZoomTime[3];
	bool		m_bHideViewModelZoomed;
	char		m_szZoomInSound[80];
	char		m_szZoomOutSound[80];
	BYTE		m_pad_0x0F11[3];
	float		m_flBotAudibleRange;
	bool		m_bCanUseWithShield;
	char		m_szWrongTeamMsg[32];
	char		m_szAnimPrefix[16];
	char		m_szShieldViewModel[64];
	char		m_szAddonModel[80];
	char		m_szAddonLocation[80];
	char		m_szSilencerModel[80];
	BYTE		m_pad_0x1079[3];
	float		m_flAddonScale;
	float		m_flThrowVelocity;
	int			m_iKillAward;
	BYTE		m_pad_0x1088[8];*/

	char		m_pad_0x0000[4];			// 0x0000
	char*		m_consoleName;			// 0x0004
	char		m_pad_0008[12];			// 0x0008
	int			m_iMaxClip1;				// 0x0014
	int			m_iMaxClip2;				// 0x0018
	int			m_iDefaultClip1;			// 0x001C
	int			m_iDefaultClip2;			// 0x0020
	char		m_pad_0024[8];			// 0x0024
	char*		m_szWorldModel;			// 0x002C
	char*		m_szViewModel;			// 0x0030
	char*		m_szDroppedModel;			// 0x0034
	char		m_pad_0038[4];			// 0x0038
	char*		m_N0000023E;				// 0x003C
	char		m_pad_0040[56];			// 0x0040
	char*		m_szEmptySound;			// 0x0078
	char		m_pad_007C[4];			// 0x007C
	char*		m_szBulletType;			// 0x0080
	char		m_pad_0084[4];			// 0x0084
	char*		m_szHudName;				// 0x0088
	char*		m_szWeaponName;			// 0x008C
	char		m_pad_0090[56];			// 0x0090
	int 		m_WeaponType;				// 0x00C8
	int			m_iWeaponPrice;			// 0x00CC
	int			m_iKillAward;				// 0x00D0
	char*		m_szAnimationPrefix;		// 0x00D4
	float		m_flCycleTime;			// 0x00D8
	float		m_flCycleTimeAlt;			// 0x00DC
	float		m_flTimeToIdle;			// 0x00E0
	float		m_flIdleInterval;			// 0x00E4
	bool		m_bFullAuto;				// 0x00E8
	char		m_pad_0x00E5[3];			// 0x00E9
	int			m_iDamage;				// 0x00EC
	float		m_flArmorRatio;			// 0x00F0
	int			m_iBullets;				// 0x00F4
	float		m_flPenetration;			// 0x00F8
	float		m_flFlinchVelocityModifierLarge;	// 0x00FC
	float		m_flFlinchVelocityModifierSmall;	// 0x0100
	float		m_flRange;				// 0x0104
	float		m_flRangeModifier;		// 0x0108
	float		m_flThrowVelocity;		// 0x010C
	char		m_pad_0x010C[12];			// 0x0110
	bool		m_bHasSilencer;			// 0x011C
	char		m_pad_0x0119[3];			// 0x011D
	char*		m_pSilencerModel;			// 0x0120
	int			m_iCrosshairMinDistance;	// 0x0124
	int			m_iCrosshairDeltaDistance;// 0x0128 - iTeam?
	float		m_flMaxPlayerSpeed;		// 0x012C
	float		m_flMaxPlayerSpeedAlt;	// 0x0130
	float		m_flSpread;				// 0x0134
	float		m_flSpreadAlt;			// 0x0138
	float		m_flInaccuracyCrouch;		// 0x013C
	float		m_flInaccuracyCrouchAlt;	// 0x0140
	float		m_flInaccuracyStand;		// 0x0144
	float		m_flInaccuracyStandAlt;	// 0x0148
	float		m_flInaccuracyJumpInitial;// 0x014C
	float		m_flInaccuracyJump;		// 0x0150
	float		m_flInaccuracyJumpAlt;	// 0x0154
	float		m_flInaccuracyLand;		// 0x0158
	float		m_flInaccuracyLandAlt;	// 0x015C
	float		m_flInaccuracyLadder;		// 0x0160
	float		m_flInaccuracyLadderAlt;	// 0x0164
	float		m_flInaccuracyFire;		// 0x0168
	float		m_flInaccuracyFireAlt;	// 0x016C
	float		m_flInaccuracyMove;		// 0x0170
	float		m_flInaccuracyMoveAlt;	// 0x0174
	float		m_flInaccuracyReload;		// 0x0178
	int			m_iRecoilSeed;			// 0x017C
	float		m_flRecoilAngle;			// 0x0180
	float		m_flRecoilAngleAlt;		// 0x0184
	float		m_flRecoilAngleVariance;	// 0x0188
	float		m_flRecoilAngleVarianceAlt;	// 0x018C
	float		m_flRecoilMagnitude;		// 0x0190
	float		m_flRecoilMagnitudeAlt;	// 0x0194
	float		m_flRecoilMagnitudeVariance;	// 0x0198
	float		m_flRecoilMagnitudeVarianceAlt;	// 0x019C
	float		m_flRecoveryTimeCrouch;	// 0x01A0
	float		m_flRecoveryTimeStand;	// 0x01A4
	float		m_flRecoveryTimeCrouchFinal;	// 0x01A8
	float		m_flRecoveryTimeStandFinal;	// 0x01AC
	int			m_iRecoveryTransitionStartBullet;// 0x01B0 
	int			m_iRecoveryTransitionEndBullet;	// 0x01B4
	bool		m_bUnzoomAfterShot;		// 0x01B8
	bool		m_bHideViewModelZoomed;	// 0x01B9
	//char		m_pad_0x01B5[2];			// 0x01BA
	float		m_recoilTable[2][128];
	short		m_iZoomLevels;
	int			m_iZoomFOV[2];			// 0x01C0
	float		m_fZoomTime[3];			// 0x01C4
	char*		m_szWeaponClass;			// 0x01D4
	float		m_flAddonScale;			// 0x01D8
	char		m_pad_0x01DC[4];			// 0x01DC
	char*		m_szEjectBrassEffect;		// 0x01E0
	char*		m_szTracerEffect;			// 0x01E4
	int			m_iTracerFrequency;		// 0x01E8
	int			m_iTracerFrequencyAlt;	// 0x01EC
	char*		m_szMuzzleFlashEffect_1stPerson; // 0x01F0
	char		m_pad_0x01F4[4];			 // 0x01F4
	char*		m_szMuzzleFlashEffect_3rdPerson; // 0x01F8
	char		m_pad_0x01FC[4];			// 0x01FC
	char*		m_szMuzzleSmokeEffect;	// 0x0200
	float		m_flHeatPerShot;			// 0x0204
	char*		m_szZoomInSound;			// 0x0208
	char*		m_szZoomOutSound;			// 0x020C
	float		m_flInaccuracyPitchShift;	// 0x0210
	float		m_flInaccuracySoundThreshold;	// 0x0214
	float		m_flBotAudibleRange;		// 0x0218
	BYTE		m_pad_0x0218[8];			// 0x0220
	char*		m_pWrongTeamMsg;			// 0x0224
	bool		m_bHasBurstMode;			// 0x0228
	BYTE		m_pad_0x0225[3];			// 0x0229
	bool		m_bIsRevolver;			// 0x022C
	bool		m_bCannotShootUnderwater;	// 0x0230
};

class CBaseCombatWeapon : public CBaseEntity
{
public:
	OFFSET_FUNC_GET_MAKE(float, GetNextPrimaryAttack, m_flNextPrimaryAttack_)
	OFFSET_FUNC_SET_MAKE(float, SetNextPrimaryAttack, next, m_flNextPrimaryAttack_)
	OFFSET_FUNC_GET_MAKE(byte, GetClip1, m_iClip1)
	OFFSET_FUNC_GET_MAKE(byte, GetClip2, m_iClip2)
	OFFSET_FUNC_GET_MAKE(bool, InReload, m_bInReload)
	OFFSET_FUNC_GET_MAKE(bool, ReloadVisuallyComplete, m_bReloadVisuallyComplete)
	OFFSET_FUNC_GET_MAKE(float, GetAccuracyPenalty, m_fAccuracyPenalty)
	OFFSET_FUNC_GET_MAKE(float, GetPostponeFireReadyTime, m_flPostponeFireReadyTime_)
	OFFSET_FUNC_SET_MAKE(float, SetPostponeFireReadyTime, val, m_flPostponeFireReadyTime_)
	OFFSET_FUNC_GET_MAKE(int, GetViewModelIndex, m_nViewModelIndex)
	OFFSET_FUNC_GET_MAKE(int, GetState, m_iState_)
	OFFSET_FUNC_GET_MAKE(int, GetRecoilIndex, m_iRecoilIndex_)
	OFFSET_FUNC_GET_MAKE(int, GetShotsFired, m_iShotsFired_)
	OFFSET_FUNC_GET_MAKE(bool, GetPinPulled, m_bPinPulled_)
	OFFSET_FUNC_GET_MAKE(float, GetThrowTime, m_fThrowTime_)

	PCHAR GetName()
	{
		typedef PCHAR(__thiscall* _GetName)(PVOID);
		return Mem::CallVirtualFunction<_GetName>(this, 436)(this);
	}

	PCHAR GetPrintName()
	{
		typedef PCHAR(__thiscall* _GetPrintName)(PVOID);
		return Mem::CallVirtualFunction<_GetPrintName>(this, 437)(this);
	}

	WeaponInfo_t* GetCSWpnData()
	{
		if (!this || this == NULL)
			return NULL;

		typedef WeaponInfo_t *(__thiscall *o_getWeapInfo)(void*);
		return Mem::CallVirtualFunction<o_getWeapInfo>(this, 446)(this); // 456
	}

	float GetInaccuracy()
	{
		typedef float(__thiscall* oGetSpread)(PVOID);
		return Mem::CallVirtualFunction<oGetSpread>(this, 469)(this);
	}

	float GetSpread()
	{
		typedef float(__thiscall* oGetInac)(PVOID);
		return Mem::CallVirtualFunction<oGetInac>(this, 439)(this);
	}
	bool CanFire();
	void UpdateAccuracyPenalty()
	{
		if (!this) return;

		typedef void(__thiscall* oUpdateAccuracyPenalty)(PVOID);
		return Mem::CallVirtualFunction<oUpdateAccuracyPenalty>(this, 470)(this);
	}
};

/*

http://www.unknowncheats.me/forum/counterstrike-global-offensive/138243-fresh-vtable-dumps.html

Old 27th March 2015, 07:49 AM	  #2
SKREAMEX
Ads/Selling/Trading / Violation - Rule #17

SKREAMEX's Avatar

Join Date: Mar 2015
Posts: 49
Reputation: 37
Rep Power: 0
SKREAMEX has made posts that are generally average in quality
If someone need C_BaseCombatWeapon
PHP Code:

// Auto reconstructed from vtable block @ 0x00D41360
// from "client.dylib", by ida_vtables.idc
0    C_BaseEntity::SetRefEHandle(CBaseHandle const&)
1    C_BaseEntity::GetRefEHandle(void)const
2    C_BaseEntity::GetCollideable(void)
3    C_BaseEntity::GetClientNetworkable(void)
4    C_BaseEntity::GetClientRenderable(void)
5    C_BaseEntity::GetIClientEntity(void)
6    C_BaseEntity::GetBaseEntity(void)
7    C_BaseEntity::GetClientThinkable(void)
8    C_BaseEntity::GetClientAlphaProperty(void)
9    C_BaseAnimating::Release(void)
10    C_BaseEntity::GetAbsOrigin(void)const
11    C_BaseEntity::GetAbsAngles(void)const
12    C_BaseAnimating::GetMouth(void)
13    C_BaseFlex::GetSoundSpatialization(SpatializationInfo_t &)
14    C_BaseEntity::IsBlurred(void)
15    C_EconEntity::GetDataDescMap(void)
16    C_BaseCombatWeapon::YouForgotToImplementOrDeclareClientClass(void)
17    C_BaseCombatWeapon::GetClientClass(void)
18    C_BaseCombatWeapon::GetPredDescMap(void)
19    C_BaseAnimating::GetScriptDesc(void)
20    C_BaseEntity::FireBullets(FireBulletsInfo_t const&)
21    C_BaseEntity::ShouldDrawUnderwaterBulletBubbles(void)
22    C_BaseEntity::ShouldDrawWaterImpacts(void)
23    C_BaseEntity::HandleShotImpactingWater(FireBulletsInfo_t const&,Vector const&,ITraceFilter *,Vector*)
24    C_BaseEntity::GetBeamTraceFilter(void)
25    C_BaseEntity::DispatchTraceAttack(CTakeDamageInfo const&,Vector const&,CGameTrace *)
26    C_BaseEntity::TraceAttack(CTakeDamageInfo const&,Vector const&,CGameTrace *)
27    C_BaseEntity::DoImpactEffect(CGameTrace &,int)
28    C_BaseCombatWeapon::MakeTracer(Vector const&,CGameTrace const&,int)
29    C_BaseEntity::GetTracerAttachment(void)
30    C_BaseEntity::BloodColor(void)
31    C_BaseEntity::GetTracerType(void)
32    C_BaseEntity::TakeDamage(CTakeDamageInfo const&)
33    C_BaseCombatWeapon::Spawn(void)
34    C_BaseEntity::SpawnClientEntity(void)
35    C_BaseCombatWeapon::Precache(void)
36    C_BaseCombatWeapon::Activate(void)
37    C_BaseEntity::OnParseMapDataFinished(void)
38    C_BaseEntity::KeyValue(char const*,char const*)
39    C_BaseEntity::KeyValue(char const*,float)
40    C_BaseEntity::KeyValue(char const*,int)
41    C_BaseEntity::KeyValue(char const*,Vector const&)
42    C_BaseEntity::GetKeyValue(char const*,char *,int)
43    C_BaseEntity::InitSharedVars(void)
44    C_BaseEntity::Init(int,int)
45    C_BaseEntity::GetIClientUnknown(void)
46    C_BaseAnimating::GetBaseAnimating(void)
47    C_BaseAnimatingOverlay::GetBaseAnimatingOverlay(void)
48    C_BaseEntity::SetClassname(char const*)
49    C_BaseEntity::Classify(void)
50    C_BaseEntity::RecordToolMessage(void)
51    C_BaseEntity::OnToolStartRecording(void)
52    C_BaseCombatWeapon::GetClientModelRenderable(void)
53    C_BaseAnimating::GetRenderData(void *,ModelDataCategory_t)
54    C_BaseAnimating::GetRenderOrigin(void)
55    C_BaseAnimating::GetRenderAngles(void)
56    C_BaseEntity::GetObserverCamOrigin(void)
57    C_BaseEntity::RenderableToWorldTransform(void)
58    C_BaseEntity::IsTransparent(void)
59    C_BaseAnimating::GetRenderFlags(void)
60    C_BaseEntity::GetModel(void)const
61    C_BaseCombatWeapon::DrawModel(int,RenderableInstance_t const&)
62    C_BaseEntity::LODTest(void)
63    C_BaseAnimatingOverlay::GetRenderBounds(Vector &,Vector &)
64    C_BaseEntity::GetPVSNotifyInterface(void)
65    C_BaseEntity::GetRenderBoundsWorldspace(Vector &,Vector &)
66    C_BaseEntity::GetShadowRenderBounds(Vector &,Vector &,ShadowType_t)
67    C_BaseEntity::GetColorModulation(float *)
68    C_BaseFlex::OnThreadedDrawSetup(void)
69    C_BaseAnimating::TestCollision(Ray_t const&,unsigned int,CGameTrace &)
70    C_BaseAnimating::TestHitboxes(Ray_t const&,unsigned int,CGameTrace &)
71    C_BaseEntity::GetAttackDamageScale(void)
72    C_BaseCombatWeapon::NotifyShouldTransmit(ShouldTransmitState_t)
73    C_BaseAnimating::PreDataUpdate(DataUpdateType_t)
74    C_BaseAnimating::PostDataUpdate(DataUpdateType_t)
75    C_BaseEntity::OnDataUnchangedInPVS(void)
76    C_BaseEntity::ValidateModelIndex(void)
77    C_BaseCombatWeapon::SetDormant(bool)
78    C_BaseEntity::IsDormant(void)const
79    C_BaseEntity::OnSetDormant(bool)
80    C_BaseEntity::SetDestroyedOnRecreateEntities(void)
81    C_BaseEntity::GetEFlags(void)const
82    C_BaseEntity::SetEFlags(int)
83    C_BaseEntity::entindex(void)const
84    C_BaseEntity::ReceiveMessage(int,bf_read &)
85    C_BaseEntity::GetDataTableBasePtr(void)
86    C_BaseEntity::ClientThink(void)
87    C_BaseEntity::GetThinkHandle(void)
88    C_BaseEntity::SetThinkHandle(CClientThinkHandlePtr *)
89    C_BaseEntity::ShouldSavePhysics(void)
90    C_BaseEntity::OnSave(void)
91    C_BaseCombatWeapon::OnRestore(void)
92    C_BaseEntity::ObjectCaps(void)
93    C_BaseEntity::Save(ISave &)
94    C_BaseEntity::Restore(IRestore &)
95    C_BaseEntity::CreateVPhysics(void)
96    C_BaseEntity::VPhysicsDestroyObject(void)
97    C_BaseAnimating::VPhysicsUpdate(IPhysicsObject *)
98    C_BaseEntity::VPhysicsShadowUpdate(IPhysicsObject *)
99    C_BaseAnimating::VPhysicsGetObjectList(IPhysicsObject **,int)
100    C_BaseEntity::VPhysicsIsFlesh(void)
101    C_BaseEntity::VPhysicsCompensateForPredictionErrors(unsigned char const*)
102    C_BaseAnimating::SetupBones(matrix3x4a_t *,int,int,float)
103    C_EconEntity::SetupWeights(matrix3x4_t const*,int,float *,float *)
104    C_EconEntity::UsesFlexDelayedWeights(void)
105    C_BaseEntity::DoAnimationEvents(void)
106    C_BaseEntity::GetPrevLocalOrigin(void)const
107    C_BaseEntity::GetPrevLocalAngles(void)const
108    C_BaseEntity::Teleport(Vector const*,QAngle const*,Vector const*)
109    C_BaseEntity::SetModelIndex(int)
110    C_BaseEntity::WorldAlignMins(void)const
111    C_BaseEntity::WorldAlignMaxs(void)const
112    C_BaseEntity::WorldSpaceCenter(void)const
113    C_BaseEntity::ComputeWorldSpaceSurroundingBox(Vector *,Vector *)
114    C_BaseEntity::GetVectors(Vector *,Vector *,Vector *)const
115    C_BaseEntity::GetSolid(void)const
116    C_BaseEntity::GetSolidFlags(void)const
117    C_BaseCombatWeapon::LookupAttachment(char const*)
118    C_EconEntity::GetAttachment(int,matrix3x4_t &)
119    C_EconEntity::GetAttachment(int,Vector &)
120    C_EconEntity::GetAttachment(int,Vector &,QAngle &)
121    C_BaseAnimating::ComputeLightingOrigin(int,Vector,matrix3x4_t const&,Vector&)
122    C_EconEntity::GetAttachmentVelocity(int,Vector &,Quaternion &)
123    C_BaseAnimating::InvalidateAttachments(void)
124    C_BaseEntity::GetTeam(void)
125    C_BaseEntity::GetTeamNumber(void)const
126    C_BaseEntity::GetPendingTeamNumber(void)const
127    C_BaseEntity::ChangeTeam(int)
128    C_BaseEntity::GetRenderTeamNumber(void)
129    C_BaseEntity::InSameTeam(C_BaseEntity*)
130    C_BaseEntity::InLocalTeam(void)
131    C_BaseEntity::IsValidIDTarget(void)
132    C_BaseEntity::GetIDString(void)
133    C_BaseEntity::UpdatePartitionListEntry(void)
134    C_EconEntity::InitializeAsClientEntity(char const*,bool)
135    C_BaseAnimating::Simulate(void)
136    C_BaseCombatWeapon::OnDataChanged(DataUpdateType_t)
137    C_EconEntity::OnPreDataChanged(DataUpdateType_t)
138    C_BaseEntity::GetClientVehicle(void)
139    C_BaseAnimating::GetAimEntOrigin(IClientEntity *,Vector *,QAngle *)
140    C_BaseEntity::GetOldOrigin(void)
141    C_BaseEntity::ComputeTranslucencyType(void)
142    C_BaseEntity::OverrideAlphaModulation(unsigned char)
143    C_BaseEntity::OverrideShadowAlphaModulation(unsigned char)
144    C_BaseCombatWeapon::GetToolRecordingState(KeyValues *)
145    C_BaseAnimating::CleanupToolRecordingState(KeyValues *)
146    C_BaseAnimating::GetCollideType(void)
147    C_BaseCombatWeapon::ShouldDraw(void)
148    C_BaseCombatWeapon::ShouldSuppressForSplitScreenPlayer(int)
149    C_BaseAnimating::IsSelfAnimating(void)
150    C_BaseEntity::OnLatchInterpolatedVariables(int)
151    C_EconEntity::OnNewModel(void)
152    C_BaseEntity::OnNewParticleEffect(char const*,CNewParticleEffect *)
153    C_BaseEntity::OnParticleEffectDeleted(CNewParticleEffect *)
154    C_BaseAnimating::ResetLatched(void)
155    C_BaseAnimatingOverlay::Interpolate(float)
156    C_BaseEntity::IsSubModel(void)
157    C_BaseEntity::CreateLightEffects(void)
158    C_BaseAnimating::Clear(void)
159    C_BaseEntity::DrawBrushModel(bool,bool,bool)
160    C_BaseEntity::GetTextureAnimationStartTime(void)
161    C_BaseEntity::TextureAnimationWrapped(void)
162    C_BaseEntity::SetNextClientThink(float)
163    C_BaseEntity::SetHealth(int)
164    C_BaseEntity::GetHealth(void)const
165    C_BaseEntity::GetMaxHealth(void)const
166    C_BaseCombatWeapon::ShadowCastType(void)
167    C_BaseEntity::ShouldReceiveProjectedTextures(int)
168    C_BaseEntity::IsShadowDirty(void)
169    C_BaseEntity::MarkShadowDirty(bool)
170    C_BaseEntity::GetShadowParent(void)
171    C_BaseEntity::FirstShadowChild(void)
172    C_BaseEntity::NextShadowPeer(void)
173    C_BaseEntity::AddDecal(Vector const&,Vector const&,Vector const&,int,int,bool,CGameTrace &,int)
174    C_BaseEntity::IsClientCreated(void)const
175    C_BaseCombatWeapon::UpdateOnRemove(void)
176    C_BaseEntity::SUB_Remove(void)
177    C_BaseEntity::GetPredictionOwner(void)
178    C_BaseEntity::InitPredictable(C_BasePlayer *)
179    C_BaseAnimating::SetPredictable(bool)
180    C_BaseEntity::HandlePredictionError(bool)
181    C_BaseEntity::PredictionErrorShouldResetLatchedForAllPredictables(void)
182    C_BaseEntity::PredictionIsPhysicallySimulated(void)
183    C_BaseEntity::DamageDecal(int,int)
184    C_BaseEntity::DecalTrace(CGameTrace *,char const*)
185    C_BaseEntity::ImpactTrace(CGameTrace *,int,char *)
186    C_BaseEntity::ShouldPredict(void)
187    C_BaseEntity::Think(void)
188    C_BaseEntity::PreRender(int)
189    C_BaseEntity::GetClassname(void)
190    C_BaseEntity::GetPlayerName(void)const
191    C_BaseEntity::EstimateAbsVelocity(Vector &)
192    C_BaseEntity::CanBePoweredUp(void)
193    C_BaseEntity::AttemptToPowerup(int,float,float,C_BaseEntity*,CDamageModifier *)
194    C_BaseEntity::IsCurrentlyTouching(void)const
195    C_BaseEntity::StartTouch(C_BaseEntity*)
196    C_BaseEntity::Touch(C_BaseEntity*)
197    C_BaseEntity::EndTouch(C_BaseEntity*)
198    C_BaseEntity::PhysicsSolidMaskForEntity(void)const
199    C_BaseEntity::PhysicsSimulate(void)
200    C_BaseEntity::IsAlive(void)
201    C_BaseEntity::ShouldRegenerateOriginFromCellBits(void)const
202    C_BaseEntity::IsPlayer(void)const
203    C_BaseEntity::IsBaseCombatCharacter(void)
204    C_BaseEntity::MyCombatCharacterPointer(void)
205    C_BaseEntity::IsNPC(void)
206    C_BaseEntity::IsSprite(void)const
207    C_BaseEntity::IsProp(void)const
208    C_BaseEntity::IsBaseObject(void)const
209    C_BaseCombatWeapon::IsBaseCombatWeapon(void)const
210    C_BaseCombatWeapon::MyCombatWeaponPointer(void)
211    C_BaseEntity::ShouldDrawForSplitScreenUser(int)
212    C_BaseEntity::IsBaseTrain(void)const
213    C_BaseEntity::EyePosition(void)
214    C_BaseEntity::EyeAngles(void)
215    C_BaseEntity::LocalEyeAngles(void)
216    C_BaseEntity::EarPosition(void)
217    C_BaseEntity::ShouldCollide(int,int)const
218    C_BaseCombatWeapon::SetModelPointer(model_t const*)
219    C_BaseEntity::GetViewOffset(void)const
220    C_BaseEntity::SetViewOffset(Vector const&)
221    C_BaseEntity::GetGroundVelocityToApply(Vector &)
222    C_BaseAnimating::GetBody(void)
223    C_BaseAnimating::GetSkin(void)
224    C_BaseEntity::GetModelInstance(void)
225    C_BaseEntity::GetShadowHandle(void)const
226    C_BaseEntity::RenderHandle(void)
227    C_BaseEntity::CreateModelInstance(void)
228    C_BaseEntity::ShouldInterpolate(void)
229    C_BaseCombatWeapon::BoneMergeFastCullBloat(Vector &,Vector &,Vector const&,Vector const&)const
230    C_BaseEntity::OnPredictedEntityRemove(bool,C_BaseEntity*)
231    C_BaseEntity::GetShadowCastDistance(float *,ShadowType_t)const
232    C_BaseEntity::GetShadowCastDirection(Vector *,ShadowType_t)const
233    C_BaseEntity::GetShadowUseOtherEntity(void)const
234    C_BaseEntity::SetShadowUseOtherEntity(C_BaseEntity*)
235    C_BaseEntity::AddRagdollToFadeQueue(void)
236    C_BaseAnimating::GetStudioBody(void)
237    C_BaseEntity::PerformCustomPhysics(Vector *,Vector *,QAngle *,QAngle *)
238    C_BaseEntity::GetRenderClipPlane(void)
239    C_BaseAnimating::GetBoneControllers(float *)
240    C_BaseAnimating::SetBoneController(int,float)
241    C_BaseAnimating::GetPoseParameters(CStudioHdr *,float *)
242    C_BaseFlex::BuildTransformations(CStudioHdr *,Vector *,Quaternion *,matrix3x4_t const&,int,CBoneBitList &)
243    C_BaseAnimating::ApplyBoneMatrixTransform(matrix3x4_t &)
244    C_BaseAnimating::UpdateIKLocks(float)
245    C_BaseAnimating::CalculateIKLocks(float)
246    C_EconEntity::InternalDrawModel(int,RenderableInstance_t const&)
247    C_EconEntity::OnInternalDrawModel(ClientModelRenderInfo_t *)
248    C_BaseAnimating::OnPostInternalDrawModel(ClientModelRenderInfo_t *)
249    C_BaseAnimating::ControlMouth(CStudioHdr *)
250    C_BaseAnimatingOverlay::DoAnimationEvents(CStudioHdr *)
251    C_EconEntity::FireEvent(Vector const&,QAngle const&,int,char const*)
252    C_BaseAnimating::FireObsoleteEvent(Vector const&,QAngle const&,int,char const*)
253    C_BaseAnimating::ModifyEventParticles(char const*)
254    C_BaseAnimating::DispatchMuzzleEffect(char const*,bool)
255    C_BaseAnimating::EjectParticleBrass(char const*,int)
256    C_BaseCombatWeapon::InvalidateMdlCache(void)
257    C_BaseFlex::StandardBlendingRules(CStudioHdr *,Vector *,QuaternionAligned *,float,int)
258    C_BaseAnimatingOverlay::AccumulateLayers(IBoneSetup &,Vector *,Quaternion *,float)
259    C_BaseAnimating::AttachEntityToBone(C_BaseAnimating*,int,Vector,QAngle)
260    C_BaseAnimating::NotifyBoneAttached(C_BaseAnimating*)
261    C_BaseAnimating::UpdateBoneAttachments(void)
262    C_BaseAnimating::GetThirdPersonViewPosition(void)
263    C_BaseAnimating::IsClientRagdoll(void)const
264    C_BaseAnimating::BecomeRagdollOnClient(void)
265    C_BaseAnimating::CreateClientRagdoll(bool)
266    C_BaseAnimating::SaveRagdollInfo(int,matrix3x4_t const&,CBoneAccessor &)
267    C_BaseAnimating::RetrieveRagdollInfo(Vector *,Quaternion *)
268    C_BaseAnimating::GetRagdollInitBoneArrays(matrix3x4a_t *,matrix3x4a_t *,matrix3x4a_t *,float)
269    C_BaseAnimating::StudioFrameAdvance(void)
270    C_BaseAnimating::FrameAdvance(float)
271    C_BaseAnimating::GetSequenceCycleRate(CStudioHdr *,int)
272    C_BaseAnimating::GetLayerSequenceCycleRate(C_AnimationLayer *,int)
273    C_BaseAnimating::UpdateClientSideAnimation(void)
274    C_BaseAnimating::ComputeClientSideAnimationFlags(void)
275    C_BaseAnimating::ReachedEndOfSequence(void)
276    C_BaseAnimating::IsActivityFinished(void)
277    C_BaseAnimating::UncorrectViewModelAttachment(Vector &)
278    C_BaseAnimating::DoMuzzleFlash(void)
279    C_BaseAnimating::ProcessMuzzleFlashEvent(void)
280    C_BaseAnimating::SetServerIntendedCycle(float)
281    C_BaseAnimating::GetServerIntendedCycle(void)
282    C_BaseAnimating::ShouldResetSequenceOnNewModel(void)
283    C_BaseAnimating::IsViewModel(void)const
284    C_BaseAnimating::ShouldFlipModel(void)
285    C_BaseAnimating::IsViewModelOrAttachment(void)const
286    C_BaseAnimating::GetBoneSetupDependancy(void)
287    C_BaseAnimating::SetCustomMaterial(ICustomMaterial *,int)
288    C_BaseAnimating::SetAllowFastPath(bool)
289    C_BaseAnimating::FormatViewModelAttachment(int,matrix3x4_t &)
290    C_BaseAnimating::IsMenuModel(void)const
291    C_BaseAnimating::CalcAttachments(void)
292    C_BaseAnimating::ComputeStencilState(ShaderStencilState_t *)
293    C_BaseAnimating::WantsInterpolatedVars(void)
294    C_BaseAnimating::ResetSequenceLooping(void)
295    C_BaseAnimating::LastBoneChangedTime(void)
296    C_BaseAnimating::UpdateBlending(int,RenderableInstance_t const&)
297    C_BaseFlex::InitPhonemeMappings(void)
298    C_BaseFlex::StartSceneEvent(CSceneEventInfo *,CChoreoScene *,CChoreoEvent *,CChoreoActor *,C_BaseEntity *)
299    C_BaseFlex::ProcessSequenceSceneEvent(CSceneEventInfo *,CChoreoScene *,CChoreoEvent *)
300    C_BaseFlex::ClearSceneEvent(CSceneEventInfo *,bool,bool)
301    C_BaseFlex::CheckSceneEventCompletion(CSceneEventInfo *,float,CChoreoScene *,CChoreoEvent *)
302    C_EconEntity::ShouldShowToolTip(void)
303    C_BaseCombatWeapon::OnFireEvent(C_BaseViewModel *,Vector const&,QAngle const&,int,char const*)
304    C_EconEntity::ShouldDrawParticleSystems(void)
305    C_EconEntity::UpdateAttachmentModels(void)
306    C_EconEntity::AttachmentModelsShouldBeVisible(void)
307    C_EconEntity::ViewModel_IsTransparent(void)
308    C_EconEntity::ViewModel_IsUsingFBTexture(void)
309    C_BaseCombatWeapon::IsOverridingViewmodel(void)
310    C_EconEntity::DrawOverriddenViewmodel(C_BaseViewModel *,int)
311    C_EconEntity::GetAttachment(char const*,Vector &)
312    C_EconEntity::GetAttachment(char const*,Vector &,QAngle &)
313    C_EconEntity::ViewModelAttachmentBlending(CStudioHdr *,Vector *,Quaternion *,float,int)
314    C_EconEntity::ValidateEntityAttachedToPlayer(bool &)
315    C_EconEntity::SetMaterialOverride(char const*)
316    C_EconEntity::SetMaterialOverride(CMaterialReference &)
317    C_EconEntity::GetAttributeManager(void)
318    C_EconEntity::GetAttributeContainer(void)
319    C_EconEntity::GetAttributeOwner(void)
320    C_EconEntity::GetAttributeList(void)
321    C_EconEntity::SetOriginalOwnerXuid(unsigned int,unsigned int)
322    C_EconEntity::GetOriginalOwnerXuid(void)const
323    C_EconEntity::GetFallbackPaintKit(void)const
324    C_EconEntity::GetFallbackSeed(void)const
325    C_EconEntity::GetFallbackWear(void)const
326    C_EconEntity::GetFallbackStatTrak(void)const
327    C_EconEntity::GenerateKillEaterTypeVector(void)
328    C_EconEntity::GetKillEaterTypes(CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>> &)
329    C_EconEntity::GetKillEaterValueByType(unsigned int)
330    C_EconEntity::ReapplyProvision(void)
331    C_EconEntity::UpdateBodygroups(C_BaseCombatCharacter *,int)
332    C_EconEntity::TranslateViewmodelHandActivityInternal(Activity)
333    C_BaseCombatWeapon::GetWeaponID(void)const
334    C_BaseCombatWeapon::IsPredicted(void)const
335    C_BaseCombatWeapon::GetSubType(void)
336    C_BaseCombatWeapon::SetSubType(int)
337    C_BaseCombatWeapon::Equip(C_BaseCombatCharacter *)
338    C_BaseCombatWeapon::Drop(Vector const&)
339    C_BaseCombatWeapon::UpdateClientData(C_BasePlayer *)
340    C_BaseCombatWeapon::IsAllowedToSwitch(void)
341    C_BaseCombatWeapon::CanBeSelected(void)
342    C_BaseCombatWeapon::VisibleInWeaponSelection(void)
343    C_BaseCombatWeapon::HasAmmo(void)
344    C_BaseCombatWeapon::SetPickupTouch(void)
345    C_BaseCombatWeapon::DefaultTouch(C_BaseEntity *)
346    C_BaseCombatWeapon::GiveTo(C_BaseEntity *)
347    C_BaseCombatWeapon::ShouldDisplayAltFireHUDHint(void)
348    C_BaseCombatWeapon::DisplayAltFireHudHint(void)
349    C_BaseCombatWeapon::RescindAltFireHudHint(void)
350    C_BaseCombatWeapon::ShouldDisplayReloadHUDHint(void)
351    C_BaseCombatWeapon::DisplayReloadHudHint(void)
352    C_BaseCombatWeapon::RescindReloadHudHint(void)
353    C_BaseCombatWeapon::SetViewModelIndex(int)
354    C_BaseCombatWeapon::SendWeaponAnim(int)
355    C_BaseCombatWeapon::SendViewModelAnim(int)
356    C_BaseCombatWeapon::SetViewModel(void)
357    C_BaseCombatWeapon::HasWeaponIdleTimeElapsed(void)
358    C_BaseCombatWeapon::SetWeaponIdleTime(float)
359    C_BaseCombatWeapon::GetWeaponIdleTime(void)
360    C_BaseCombatWeapon::HasAnyAmmo(void)
361    C_BaseCombatWeapon::HasPrimaryAmmo(void)
362    C_BaseCombatWeapon::HasSecondaryAmmo(void)
363    C_BaseCombatWeapon::CanHolster(void)
364    C_BaseCombatWeapon::DefaultDeploy(char *,char *,int,char *)
365    C_BaseCombatWeapon::CanDeploy(void)
366    C_BaseCombatWeapon::Deploy(void)
367    C_BaseCombatWeapon::Holster(C_BaseCombatWeapon*)
368    C_BaseCombatWeapon::GetLastWeapon(void)
369    C_BaseCombatWeapon::SetWeaponVisible(bool)
370    C_BaseCombatWeapon::IsWeaponVisible(void)
371    C_BaseCombatWeapon::ReloadOrSwitchWeapons(void)
372    C_BaseCombatWeapon::HolsterOnDetach(void)
373    C_BaseCombatWeapon::IsHolstered(void)
374    C_BaseCombatWeapon::ItemPreFrame(void)
375    C_BaseCombatWeapon::ItemPostFrame(void)
376    C_BaseCombatWeapon::ItemBusyFrame(void)
377    C_BaseCombatWeapon::ItemHolsterFrame(void)
378    C_BaseCombatWeapon::WeaponIdle(void)
379    C_BaseCombatWeapon::HandleFireOnEmpty(void)
380    C_BaseCombatWeapon::ShouldBlockPrimaryFire(void)
381    C_BaseCombatWeapon::CreateMove(float,CUserCmd *,QAngle const&)
382    C_BaseCombatWeapon::IsZoomed(void)const
383    C_BaseCombatWeapon::CheckReload(void)
384    C_BaseCombatWeapon::FinishReload(void)
385    C_BaseCombatWeapon::AbortReload(void)
386    C_BaseCombatWeapon::Reload(void)
387    C_BaseCombatWeapon::PrimaryAttack(void)
388    C_BaseCombatWeapon::SecondaryAttack(void)
389    C_BaseCombatWeapon::BaseForceFire(C_BaseCombatCharacter *,C_BaseEntity *)
390    C_BaseCombatWeapon::GetPrimaryAttackActivity(void)
391    C_BaseCombatWeapon::GetSecondaryAttackActivity(void)
392    C_BaseCombatWeapon::GetDrawActivity(void)
393    C_BaseCombatWeapon::GetDefaultAnimSpeed(void)
394    C_BaseCombatWeapon::GetBulletType(void)
395    C_BaseCombatWeapon::GetBulletSpread(void)
396    C_BaseCombatWeapon::GetBulletSpread(WeaponProficiency_t)
397    C_BaseCombatWeapon::GetSpreadBias(WeaponProficiency_t)
398    C_BaseCombatWeapon::GetAccuracyFishtail(void)const
399    C_BaseCombatWeapon::GetFireRate(void)
400    C_BaseCombatWeapon::GetMinBurst(void)
401    C_BaseCombatWeapon::GetMaxBurst(void)
402    C_BaseCombatWeapon::GetMinRestTime(void)
403    C_BaseCombatWeapon::GetMaxRestTime(void)
404    C_BaseCombatWeapon::GetRandomBurst(void)
405    C_BaseCombatWeapon::WeaponSound(WeaponSound_t,float)
406    C_BaseCombatWeapon::StopWeaponSound(WeaponSound_t)
407    C_BaseCombatWeapon::GetProficiencyValues(void)
408    C_BaseCombatWeapon::GetMaxAutoAimDeflection(void)
409    C_BaseCombatWeapon::WeaponAutoAimScale(void)
410    C_BaseCombatWeapon::StartSprinting(void)
411    C_BaseCombatWeapon::StopSprinting(void)
412    C_BaseCombatWeapon::GetDamage(float,int)
413    C_BaseCombatWeapon::SetActivity(Activity,float)
414    C_BaseCombatWeapon::AddViewKick(void)
415    C_BaseCombatWeapon::GetDeathNoticeName(void)
416    C_BaseCombatWeapon::OnPickedUp(C_BaseCombatCharacter *)
417    C_BaseCombatWeapon::AddViewmodelBob(C_BaseViewModel *,Vector &,QAngle &)
418    C_BaseCombatWeapon::CalcViewmodelBob(void)
419    C_BaseCombatWeapon::GetControlPanelInfo(int,char const*&)
420    C_BaseCombatWeapon::GetControlPanelClassName(int,char const*&)
421    C_BaseCombatWeapon::ShouldShowControlPanels(void)
422    C_BaseCombatWeapon::CanBePickedUpByNPCs(void)
423    C_BaseCombatWeapon::GetViewModel(int)const
424    C_BaseCombatWeapon::GetWorldModel(void)const
425    C_BaseCombatWeapon::GetAnimPrefix(void)const
426    C_BaseCombatWeapon::GetMaxClip1(void)const
427    C_BaseCombatWeapon::GetMaxClip2(void)const
428    C_BaseCombatWeapon::GetDefaultClip1(void)const
429    C_BaseCombatWeapon::GetDefaultClip2(void)const
430    C_BaseCombatWeapon::GetWeight(void)const
431    C_BaseCombatWeapon::AllowsAutoSwitchTo(void)const
432    C_BaseCombatWeapon::AllowsAutoSwitchFrom(void)const
433    C_BaseCombatWeapon::GetWeaponFlags(void)const
434    C_BaseCombatWeapon::GetSlot(void)const
435    C_BaseCombatWeapon::GetPosition(void)const
436    C_BaseCombatWeapon::GetName(void)const
437    C_BaseCombatWeapon::GetPrintName(void)const
438    C_BaseCombatWeapon::GetShootSound(int)const
439    C_BaseCombatWeapon::GetRumbleEffect(void)const
440    C_BaseCombatWeapon::UsesClipsForAmmo1(void)const
441    C_BaseCombatWeapon::UsesClipsForAmmo2(void)const
442    C_BaseCombatWeapon::OnMouseWheel(int)
443    C_BaseCombatWeapon::GetEncryptionKey(void)
444    C_BaseCombatWeapon::GetPrimaryAmmoType(void)const
445    C_BaseCombatWeapon::GetSecondaryAmmoType(void)const
446    C_BaseCombatWeapon::GetSpriteActive(void)const
447    C_BaseCombatWeapon::GetSpriteInactive(void)const
448    C_BaseCombatWeapon::GetSpriteAmmo(void)const
449    C_BaseCombatWeapon::GetSpriteAmmo2(void)const
450    C_BaseCombatWeapon::GetSpriteCrosshair(void)const
451    C_BaseCombatWeapon::GetSpriteAutoaim(void)const
452    C_BaseCombatWeapon::GetSpriteZoomedCrosshair(void)const
453    C_BaseCombatWeapon::GetSpriteZoomedAutoaim(void)const
454    C_BaseCombatWeapon::ActivityOverride(Activity,bool *)
455    C_BaseCombatWeapon::ActivityList(void)
456    C_BaseCombatWeapon::ActivityListCount(void)
457    C_BaseCombatWeapon::Redraw(void)
458    C_BaseCombatWeapon::ViewModelDrawn(int,C_BaseViewModel *)
459    C_BaseCombatWeapon::DrawCrosshair(void)
460    C_BaseCombatWeapon::ShouldDrawCrosshair(void)
461    C_BaseCombatWeapon::IsCarriedByLocalPlayer(void)
462    C_BaseCombatWeapon::IsActiveByLocalPlayer(void)
463    C_BaseCombatWeapon::ShouldDrawPickup(void)
464    C_BaseCombatWeapon::HandleInput(void)
465    C_BaseCombatWeapon::OverrideMouseInput(float *,float *)
466    C_BaseCombatWeapon::KeyInput(int,ButtonCode_t,char const*)
467    C_BaseCombatWeapon::AddLookShift(void)
468    C_BaseCombatWeapon::GetViewmodelBoneControllers(C_BaseViewModel *,float *)
469    C_BaseCombatWeapon::GetWorldModelIndex(void)
470    C_BaseCombatWeapon::EnsureCorrectRenderingModel(void)
471    C_BaseCombatWeapon::GetWeaponCrosshairScale(float &)
472    C_BaseCombatWeapon::GetToolViewModelState(KeyValues *)
473    C_BaseCombatWeapon::DrawOverriddenViewmodel(C_BaseViewModel *,int,RenderableInstance_t const&)
474    C_BaseCombatWeapon::IsAlwaysActive(void)
475    C_BaseCombatWeapon::CanLower(void)
476    C_BaseCombatWeapon::Ready(void)
477    C_BaseCombatWeapon::Lower(void)
478    C_BaseCombatWeapon::HideThink(void)
479    C_BaseCombatWeapon::CanReload(void)
480    C_BaseCombatWeapon::IsSilentPickupThirdperson(C_BaseCombatCharacter *)
481    C_BaseCombatWeapon::NetworkStateChanged_m_nNextThinkTick(void)
482    C_BaseCombatWeapon::NetworkStateChanged_m_nNextThinkTick(void *)

*/
