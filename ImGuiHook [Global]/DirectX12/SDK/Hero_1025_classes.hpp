#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1025

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "Hero_1025_structs.hpp"
#include "Niagara_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// Class Hero_1025.AbilityStatistics_102581
// 0x0000 (0x0088 - 0x0088)
class UAbilityStatistics_102581 final : public UTagAbilityStatistics
{
public:
	void OnAdsorbStateUpdated(const EAdsorbState AdsorbState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AbilityStatistics_102581">();
	}
	static class UAbilityStatistics_102581* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbilityStatistics_102581>();
	}
};
static_assert(alignof(UAbilityStatistics_102581) == 0x000008, "Wrong alignment on UAbilityStatistics_102581");
static_assert(sizeof(UAbilityStatistics_102581) == 0x000088, "Wrong size on UAbilityStatistics_102581");

// Class Hero_1025.Config_102511
// 0x0500 (0x0598 - 0x0098)
class UConfig_102511 : public UMarvelAbilityConfig
{
public:
	struct FMarvelAbilityTargetFilter             TargetToSpawnTreatScope;                           // 0x0098(0x0500)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Config_102511">();
	}
	static class UConfig_102511* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfig_102511>();
	}
};
static_assert(alignof(UConfig_102511) == 0x000008, "Wrong alignment on UConfig_102511");
static_assert(sizeof(UConfig_102511) == 0x000598, "Wrong size on UConfig_102511");
static_assert(offsetof(UConfig_102511, TargetToSpawnTreatScope) == 0x000098, "Member 'UConfig_102511::TargetToSpawnTreatScope' has a wrong offset!");

// Class Hero_1025.Projectile_10251101
// 0x0010 (0x2F70 - 0x2F60)
class AProjectile_10251101 : public AMarvelAbilityTargetActor_Projectile
{
public:
	class UConfig_102511*                         OriginAbilityConfig;                               // 0x2F60(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F68[0x8];                                     // 0x2F68(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool IsValidTargetToSpawnTreatScope(const struct FHitResult& InHitResult);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Projectile_10251101">();
	}
	static class AProjectile_10251101* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProjectile_10251101>();
	}
};
static_assert(alignof(AProjectile_10251101) == 0x000010, "Wrong alignment on AProjectile_10251101");
static_assert(sizeof(AProjectile_10251101) == 0x002F70, "Wrong size on AProjectile_10251101");
static_assert(offsetof(AProjectile_10251101, OriginAbilityConfig) == 0x002F60, "Member 'AProjectile_10251101::OriginAbilityConfig' has a wrong offset!");

// Class Hero_1025.Cue_Scope_Loop_10251101
// 0x0048 (0x0D68 - 0x0D20)
class ACue_Scope_Loop_10251101 final : public AMarvelCueNotify_Scope
{
public:
	class UCurveFloat*                            AlphaCurve;                                        // 0x0D20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TableScale;                                        // 0x0D28(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ScopeId;                                           // 0x0D2C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HideDecalAlphaThreshold;                           // 0x0D30(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D34[0x4];                                      // 0x0D34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalComponent*                        DecalComponent;                                    // 0x0D38(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0D40(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_D48[0x20];                                     // 0x0D48(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void UpdateAlpha(class FName TrackName, class FName PropertyName, float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Cue_Scope_Loop_10251101">();
	}
	static class ACue_Scope_Loop_10251101* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACue_Scope_Loop_10251101>();
	}
};
static_assert(alignof(ACue_Scope_Loop_10251101) == 0x000008, "Wrong alignment on ACue_Scope_Loop_10251101");
static_assert(sizeof(ACue_Scope_Loop_10251101) == 0x000D68, "Wrong size on ACue_Scope_Loop_10251101");
static_assert(offsetof(ACue_Scope_Loop_10251101, AlphaCurve) == 0x000D20, "Member 'ACue_Scope_Loop_10251101::AlphaCurve' has a wrong offset!");
static_assert(offsetof(ACue_Scope_Loop_10251101, TableScale) == 0x000D28, "Member 'ACue_Scope_Loop_10251101::TableScale' has a wrong offset!");
static_assert(offsetof(ACue_Scope_Loop_10251101, ScopeId) == 0x000D2C, "Member 'ACue_Scope_Loop_10251101::ScopeId' has a wrong offset!");
static_assert(offsetof(ACue_Scope_Loop_10251101, HideDecalAlphaThreshold) == 0x000D30, "Member 'ACue_Scope_Loop_10251101::HideDecalAlphaThreshold' has a wrong offset!");
static_assert(offsetof(ACue_Scope_Loop_10251101, DecalComponent) == 0x000D38, "Member 'ACue_Scope_Loop_10251101::DecalComponent' has a wrong offset!");
static_assert(offsetof(ACue_Scope_Loop_10251101, Mid) == 0x000D40, "Member 'ACue_Scope_Loop_10251101::Mid' has a wrong offset!");

// Class Hero_1025.Config_102581
// 0x2DE8 (0x2E80 - 0x0098)
class UConfig_102581 final : public UMarvelAbilityConfig
{
public:
	uint8                                         Pad_98[0x8];                                       // 0x0098(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAdsorbParam                           AdsorbParam;                                       // 0x00A0(0x2DD0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                         AdsorbHealBuffID;                                  // 0x2E70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2E74[0xC];                                     // 0x2E74(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Config_102581">();
	}
	static class UConfig_102581* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfig_102581>();
	}
};
static_assert(alignof(UConfig_102581) == 0x000010, "Wrong alignment on UConfig_102581");
static_assert(sizeof(UConfig_102581) == 0x002E80, "Wrong size on UConfig_102581");
static_assert(offsetof(UConfig_102581, AdsorbParam) == 0x0000A0, "Member 'UConfig_102581::AdsorbParam' has a wrong offset!");
static_assert(offsetof(UConfig_102581, AdsorbHealBuffID) == 0x002E70, "Member 'UConfig_102581::AdsorbHealBuffID' has a wrong offset!");

// Class Hero_1025.Ability_102581
// 0x0058 (0x25A8 - 0x2550)
class UAbility_102581 : public UMarvelGameplayAbility
{
public:
	FMulticastInlineDelegateProperty_             AdsorbStateUpdatedDispatcher;                      // 0x2550(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FAdsorbResult                          CurrentAdsorbResult;                               // 0x2560(0x0040)(BlueprintVisible, Net, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UMarvelAbilityTask_Adsorb*              AdsorbTask;                                        // 0x25A0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void AdsorbStateDelegate__DelegateSignature(const EAdsorbState AdsorbState);
	void OnReleaseKeyInput();
	void OnRep_CurrentAdsorbResult();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Ability_102581">();
	}
	static class UAbility_102581* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_102581>();
	}
};
static_assert(alignof(UAbility_102581) == 0x000008, "Wrong alignment on UAbility_102581");
static_assert(sizeof(UAbility_102581) == 0x0025A8, "Wrong size on UAbility_102581");
static_assert(offsetof(UAbility_102581, AdsorbStateUpdatedDispatcher) == 0x002550, "Member 'UAbility_102581::AdsorbStateUpdatedDispatcher' has a wrong offset!");
static_assert(offsetof(UAbility_102581, CurrentAdsorbResult) == 0x002560, "Member 'UAbility_102581::CurrentAdsorbResult' has a wrong offset!");
static_assert(offsetof(UAbility_102581, AdsorbTask) == 0x0025A0, "Member 'UAbility_102581::AdsorbTask' has a wrong offset!");

// Class Hero_1025.Cue_Ability_Loop_10258101
// 0x0080 (0x0E80 - 0x0E00)
class ACue_Ability_Loop_10258101 final : public AMarvelCueNotify_Ability
{
public:
	class UNiagaraComponent*                      NSRelease;                                         // 0x0E00(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                      NSHit;                                             // 0x0E08(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                      NSLink;                                            // 0x0E10(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitLocationOffset;                                 // 0x0E18(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReleaseFXSocketName;                               // 0x0E30(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NoTargetLoopAudioID;                               // 0x0E3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HitTargetLoopAudioID;                              // 0x0E40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HavingToNoTargetAudioID;                           // 0x0E44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AdsorbTargetLoopAudioID;                           // 0x0E48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NoToHitTargetAudioID;                              // 0x0E4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AdsorbToHitTargetAudioID;                          // 0x0E50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E54[0x4];                                      // 0x0E54(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbility_102581*                        OwningAbility;                                     // 0x0E58(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMarvelBaseCharacter*                   OwnerCharacter;                                    // 0x0E60(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bHasInited;                                        // 0x0E68(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EAdsorbState                                  AdsorbState;                                       // 0x0E69(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_E6A[0x16];                                     // 0x0E6A(0x0016)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FRotator GetReleaseAimRotation();
	bool GetVisualHitLocation(struct FVector* OutLocation);
	void OnAdsorbStateUpdated(EAdsorbState InAdsorbState);
	void PlayAdsorbAudio(int32 AudioID, bool bIsLoop);
	void SetAllFXsVisible(bool bIsShow, bool bIsReset);
	void SetFXVisible(class UNiagaraComponent* OutNSComp, bool bIsShow, bool bIsReset);
	void StopAdsorbAudio(int32 AudioID);
	void TryInitialize();
	void UpdateAudios(EAdsorbState LastAdsorbState);
	void UpdateFXs();
	void UpdateFXsParam();
	void UpdateFXsVisibility();
	void UpdateHitFXLocation(const struct FVector& InLocation);
	void UpdateLinkFXParam(const struct FVector& InHitLocation);
	void UpdateLoopFXLocationAndRotation();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Cue_Ability_Loop_10258101">();
	}
	static class ACue_Ability_Loop_10258101* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACue_Ability_Loop_10258101>();
	}
};
static_assert(alignof(ACue_Ability_Loop_10258101) == 0x000008, "Wrong alignment on ACue_Ability_Loop_10258101");
static_assert(sizeof(ACue_Ability_Loop_10258101) == 0x000E80, "Wrong size on ACue_Ability_Loop_10258101");
static_assert(offsetof(ACue_Ability_Loop_10258101, NSRelease) == 0x000E00, "Member 'ACue_Ability_Loop_10258101::NSRelease' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, NSHit) == 0x000E08, "Member 'ACue_Ability_Loop_10258101::NSHit' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, NSLink) == 0x000E10, "Member 'ACue_Ability_Loop_10258101::NSLink' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, HitLocationOffset) == 0x000E18, "Member 'ACue_Ability_Loop_10258101::HitLocationOffset' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, ReleaseFXSocketName) == 0x000E30, "Member 'ACue_Ability_Loop_10258101::ReleaseFXSocketName' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, NoTargetLoopAudioID) == 0x000E3C, "Member 'ACue_Ability_Loop_10258101::NoTargetLoopAudioID' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, HitTargetLoopAudioID) == 0x000E40, "Member 'ACue_Ability_Loop_10258101::HitTargetLoopAudioID' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, HavingToNoTargetAudioID) == 0x000E44, "Member 'ACue_Ability_Loop_10258101::HavingToNoTargetAudioID' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, AdsorbTargetLoopAudioID) == 0x000E48, "Member 'ACue_Ability_Loop_10258101::AdsorbTargetLoopAudioID' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, NoToHitTargetAudioID) == 0x000E4C, "Member 'ACue_Ability_Loop_10258101::NoToHitTargetAudioID' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, AdsorbToHitTargetAudioID) == 0x000E50, "Member 'ACue_Ability_Loop_10258101::AdsorbToHitTargetAudioID' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, OwningAbility) == 0x000E58, "Member 'ACue_Ability_Loop_10258101::OwningAbility' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, OwnerCharacter) == 0x000E60, "Member 'ACue_Ability_Loop_10258101::OwnerCharacter' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, bHasInited) == 0x000E68, "Member 'ACue_Ability_Loop_10258101::bHasInited' has a wrong offset!");
static_assert(offsetof(ACue_Ability_Loop_10258101, AdsorbState) == 0x000E69, "Member 'ACue_Ability_Loop_10258101::AdsorbState' has a wrong offset!");

// Class Hero_1025.Scope_10259101
// 0x0070 (0x1730 - 0x16C0)
class AScope_10259101 final : public AMarvelAbilityTargetActor_Scope
{
public:
	TArray<class AActor*>                         CachedTracedActors;                                // 0x16C0(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class AActor*, float>                    CachedActorsLeftTime;                              // 0x16D0(0x0050)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         BuffIDToRemoveWhenLeaveScope;                      // 0x1720(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxSpanToTemporarilyLeave;                         // 0x1724(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1728[0x8];                                     // 0x1728(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Scope_10259101">();
	}
	static class AScope_10259101* GetDefaultObj()
	{
		return GetDefaultObjImpl<AScope_10259101>();
	}
};
static_assert(alignof(AScope_10259101) == 0x000010, "Wrong alignment on AScope_10259101");
static_assert(sizeof(AScope_10259101) == 0x001730, "Wrong size on AScope_10259101");
static_assert(offsetof(AScope_10259101, CachedTracedActors) == 0x0016C0, "Member 'AScope_10259101::CachedTracedActors' has a wrong offset!");
static_assert(offsetof(AScope_10259101, CachedActorsLeftTime) == 0x0016D0, "Member 'AScope_10259101::CachedActorsLeftTime' has a wrong offset!");
static_assert(offsetof(AScope_10259101, BuffIDToRemoveWhenLeaveScope) == 0x001720, "Member 'AScope_10259101::BuffIDToRemoveWhenLeaveScope' has a wrong offset!");
static_assert(offsetof(AScope_10259101, MaxSpanToTemporarilyLeave) == 0x001724, "Member 'AScope_10259101::MaxSpanToTemporarilyLeave' has a wrong offset!");

// Class Hero_1025.Config_102591
// 0x0008 (0x00A0 - 0x0098)
class UConfig_102591 final : public UMarvelAbilityConfig
{
public:
	float                                         MaxSpanToTemporarilyLeaveScope;                    // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Config_102591">();
	}
	static class UConfig_102591* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfig_102591>();
	}
};
static_assert(alignof(UConfig_102591) == 0x000008, "Wrong alignment on UConfig_102591");
static_assert(sizeof(UConfig_102591) == 0x0000A0, "Wrong size on UConfig_102591");
static_assert(offsetof(UConfig_102591, MaxSpanToTemporarilyLeaveScope) == 0x000098, "Member 'UConfig_102591::MaxSpanToTemporarilyLeaveScope' has a wrong offset!");

// Class Hero_1025.Cue_Scope_Loop_10259101
// 0x0020 (0x0D40 - 0x0D20)
class ACue_Scope_Loop_10259101 final : public AMarvelCueNotify_Scope
{
public:
	class UNiagaraComponent*                      NSLoop;                                            // 0x0D20(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   DissolveParamName;                                 // 0x0D28(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndElapseTime;                                     // 0x0D34(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScopeRecycleDelay;                                 // 0x0D38(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3C[0x4];                                      // 0x0D3C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnScopeEnd(class AActor* OutScope);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Cue_Scope_Loop_10259101">();
	}
	static class ACue_Scope_Loop_10259101* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACue_Scope_Loop_10259101>();
	}
};
static_assert(alignof(ACue_Scope_Loop_10259101) == 0x000008, "Wrong alignment on ACue_Scope_Loop_10259101");
static_assert(sizeof(ACue_Scope_Loop_10259101) == 0x000D40, "Wrong size on ACue_Scope_Loop_10259101");
static_assert(offsetof(ACue_Scope_Loop_10259101, NSLoop) == 0x000D20, "Member 'ACue_Scope_Loop_10259101::NSLoop' has a wrong offset!");
static_assert(offsetof(ACue_Scope_Loop_10259101, DissolveParamName) == 0x000D28, "Member 'ACue_Scope_Loop_10259101::DissolveParamName' has a wrong offset!");
static_assert(offsetof(ACue_Scope_Loop_10259101, EndElapseTime) == 0x000D34, "Member 'ACue_Scope_Loop_10259101::EndElapseTime' has a wrong offset!");
static_assert(offsetof(ACue_Scope_Loop_10259101, ScopeRecycleDelay) == 0x000D38, "Member 'ACue_Scope_Loop_10259101::ScopeRecycleDelay' has a wrong offset!");

// Class Hero_1025.Cue_Buff_10259601
// 0x0000 (0x1148 - 0x1148)
class ACue_Buff_10259601 final : public ACueNotify_Stealth
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Cue_Buff_10259601">();
	}
	static class ACue_Buff_10259601* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACue_Buff_10259601>();
	}
};
static_assert(alignof(ACue_Buff_10259601) == 0x000008, "Wrong alignment on ACue_Buff_10259601");
static_assert(sizeof(ACue_Buff_10259601) == 0x001148, "Wrong size on ACue_Buff_10259601");

// Class Hero_1025.DaggerAnimInstance
// 0x0000 (0x0900 - 0x0900)
class UDaggerAnimInstance final : public UMarvelAnimInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaggerAnimInstance">();
	}
	static class UDaggerAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaggerAnimInstance>();
	}
};
static_assert(alignof(UDaggerAnimInstance) == 0x000010, "Wrong alignment on UDaggerAnimInstance");
static_assert(sizeof(UDaggerAnimInstance) == 0x000900, "Wrong size on UDaggerAnimInstance");

// Class Hero_1025.CloakAndDaggerCharacter
// 0x0010 (0x17D0 - 0x17C0)
class ACloakAndDaggerCharacter : public AMarvelBaseCharacter
{
public:
	class UDaggerMoveLogicBaseComponent*          DaggerMoveLogic;                                   // 0x17B8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EDaggerCharacterType                          CurrentCharacterType;                              // 0x17C0(0x0001)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_17C1[0xF];                                     // 0x17C1(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	EDaggerCharacterType GetCurrentCharacterType();
	void SetCurrentCharacterType(EDaggerCharacterType CharacterType);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CloakAndDaggerCharacter">();
	}
	static class ACloakAndDaggerCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACloakAndDaggerCharacter>();
	}
};
static_assert(alignof(ACloakAndDaggerCharacter) == 0x000010, "Wrong alignment on ACloakAndDaggerCharacter");
static_assert(sizeof(ACloakAndDaggerCharacter) == 0x0017D0, "Wrong size on ACloakAndDaggerCharacter");
static_assert(offsetof(ACloakAndDaggerCharacter, DaggerMoveLogic) == 0x0017B8, "Member 'ACloakAndDaggerCharacter::DaggerMoveLogic' has a wrong offset!");
static_assert(offsetof(ACloakAndDaggerCharacter, CurrentCharacterType) == 0x0017C0, "Member 'ACloakAndDaggerCharacter::CurrentCharacterType' has a wrong offset!");

// Class Hero_1025.NiagaraComponent_Cloak
// 0x0040 (0x0BA0 - 0x0B60)
class UNiagaraComponent_Cloak final : public UNiagaraComponent
{
public:
	class FString                                 OpacityVariableName;                               // 0x0B58(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            AlphaCurve;                                        // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTimelineComponent*               TimelineComponent;                                 // 0x0B70(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B78[0x28];                                     // 0x0B78(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void FadeInFromStart();
	void FadeOutFromEnd();
	void ForceUpdate();
	bool IsOwnerMoving();
	void SetEffectOpacity(float InValue);
	void UpdateAlpha(class FName TrackName, class FName PropertyName, float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraComponent_Cloak">();
	}
	static class UNiagaraComponent_Cloak* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraComponent_Cloak>();
	}
};
static_assert(alignof(UNiagaraComponent_Cloak) == 0x000010, "Wrong alignment on UNiagaraComponent_Cloak");
static_assert(sizeof(UNiagaraComponent_Cloak) == 0x000BA0, "Wrong size on UNiagaraComponent_Cloak");
static_assert(offsetof(UNiagaraComponent_Cloak, OpacityVariableName) == 0x000B58, "Member 'UNiagaraComponent_Cloak::OpacityVariableName' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent_Cloak, AlphaCurve) == 0x000B68, "Member 'UNiagaraComponent_Cloak::AlphaCurve' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent_Cloak, TimelineComponent) == 0x000B70, "Member 'UNiagaraComponent_Cloak::TimelineComponent' has a wrong offset!");

// Class Hero_1025.CloakChildActor
// 0x0090 (0x0AD0 - 0x0A40)
class ACloakChildActor final : public AMarvelCharacterChildActor
{
public:
	uint8                                         Pad_A40[0x18];                                     // 0x0A40(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  HideBodyFXTag;                                     // 0x0A58(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UNiagaraComponent_Cloak*                BodyFX;                                            // 0x0AC0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_AC8[0x8];                                      // 0x0AC8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HideBodyFX();
	void OnBodyFXShown();
	void OnCharacterDeath(class AActor* OutSourceAvatar, class AActor* OutTargetAvatar, const struct FAttributeModifierHandle& ModifierParameterHandle);
	void OnCharacterReborn(class AActor* OutTargetActor, const struct FCharacterRebornParam& Param);
	void OnTagUpdate(const struct FGameplayTag& Tag, bool bTagExists);
	void ShowBodyFX();
	void UpdateBodyFX();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CloakChildActor">();
	}
	static class ACloakChildActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACloakChildActor>();
	}
};
static_assert(alignof(ACloakChildActor) == 0x000008, "Wrong alignment on ACloakChildActor");
static_assert(sizeof(ACloakChildActor) == 0x000AD0, "Wrong size on ACloakChildActor");
static_assert(offsetof(ACloakChildActor, HideBodyFXTag) == 0x000A58, "Member 'ACloakChildActor::HideBodyFXTag' has a wrong offset!");
static_assert(offsetof(ACloakChildActor, BodyFX) == 0x000AC0, "Member 'ACloakChildActor::BodyFX' has a wrong offset!");

// Class Hero_1025.CloakAudioComponent
// 0x0000 (0x0C98 - 0x0C98)
class UCloakAudioComponent final : public UCharacterAudioComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CloakAudioComponent">();
	}
	static class UCloakAudioComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCloakAudioComponent>();
	}
};
static_assert(alignof(UCloakAudioComponent) == 0x000008, "Wrong alignment on UCloakAudioComponent");
static_assert(sizeof(UCloakAudioComponent) == 0x000C98, "Wrong size on UCloakAudioComponent");

// Class Hero_1025.DaggerMoveLogicBaseComponent
// 0x0000 (0x03F0 - 0x03F0)
class UDaggerMoveLogicBaseComponent final : public UMarvelMoveLogicBaseComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaggerMoveLogicBaseComponent">();
	}
	static class UDaggerMoveLogicBaseComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaggerMoveLogicBaseComponent>();
	}
};
static_assert(alignof(UDaggerMoveLogicBaseComponent) == 0x000008, "Wrong alignment on UDaggerMoveLogicBaseComponent");
static_assert(sizeof(UDaggerMoveLogicBaseComponent) == 0x0003F0, "Wrong size on UDaggerMoveLogicBaseComponent");

// Class Hero_1025.DaggerMovementComponent
// 0x0000 (0x1AF0 - 0x1AF0)
class UDaggerMovementComponent final : public UMarvelCharacterMovementComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaggerMovementComponent">();
	}
	static class UDaggerMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaggerMovementComponent>();
	}
};
static_assert(alignof(UDaggerMovementComponent) == 0x000010, "Wrong alignment on UDaggerMovementComponent");
static_assert(sizeof(UDaggerMovementComponent) == 0x001AF0, "Wrong size on UDaggerMovementComponent");

// Class Hero_1025.EpicMomentAction_1025
// 0x0068 (0x01D8 - 0x0170)
class UEpicMomentAction_1025 : public UEpicMomentAction_Treat
{
public:
	struct FEpicMomentNodeInfo                    ControlConfig;                                     // 0x0170(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         ControlBuffNum;                                    // 0x017C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ControlBuffID;                                     // 0x0180(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ControlScopeID;                                    // 0x0184(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_188[0x50];                                     // 0x0188(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnGameplayEffectAppliedToTarget(class UAbilitySystemComponent* ASC, const struct FGameplayEffectSpecStackHandle& GameplayEffectSpecHandle, const struct FActiveGameplayEffectHandle& ActiveGameplayEffectHandle);
	void OnScopeBegin(class AActor* SourceActor, class UMarvelGameplayAbility* SourceAbility, class AActor* Scope, const struct FMarvelTargetActorGenerateInfo& GenerateInfo);
	void OnScopeEnd(class AActor* InActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicMomentAction_1025">();
	}
	static class UEpicMomentAction_1025* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicMomentAction_1025>();
	}
};
static_assert(alignof(UEpicMomentAction_1025) == 0x000008, "Wrong alignment on UEpicMomentAction_1025");
static_assert(sizeof(UEpicMomentAction_1025) == 0x0001D8, "Wrong size on UEpicMomentAction_1025");
static_assert(offsetof(UEpicMomentAction_1025, ControlConfig) == 0x000170, "Member 'UEpicMomentAction_1025::ControlConfig' has a wrong offset!");
static_assert(offsetof(UEpicMomentAction_1025, ControlBuffNum) == 0x00017C, "Member 'UEpicMomentAction_1025::ControlBuffNum' has a wrong offset!");
static_assert(offsetof(UEpicMomentAction_1025, ControlBuffID) == 0x000180, "Member 'UEpicMomentAction_1025::ControlBuffID' has a wrong offset!");
static_assert(offsetof(UEpicMomentAction_1025, ControlScopeID) == 0x000184, "Member 'UEpicMomentAction_1025::ControlScopeID' has a wrong offset!");

}

