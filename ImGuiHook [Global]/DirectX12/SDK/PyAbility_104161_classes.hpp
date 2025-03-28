#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104161

#include "Basic.hpp"

#include "Hero_1041_classes.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// PythonClass PyAbility_104161.PyUIController_104161
// 0x0000 (0x0C58 - 0x0C58)
class UPyUIController_104161 final : public UUIC_Ability
{
public:
	void OnInit();
	void UpdateUIActionTips(bool Is_need);
	void OnDestruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_104161">();
	}
	static class UPyUIController_104161* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_104161>();
	}
};
static_assert(alignof(UPyUIController_104161) == 0x000008, "Wrong alignment on UPyUIController_104161");
static_assert(sizeof(UPyUIController_104161) == 0x000C58, "Wrong size on UPyUIController_104161");

// PythonClass PyAbility_104161.PyEffectiveComponent_10416101
// 0x0000 (0x1C00 - 0x1C00)
class UPyEffectiveComponent_10416101 final : public UEffectiveComponent_10416101
{
public:
	void K2_Initialize();
	TArray<struct FHitResult> K2_OnPreApplyContainer(const TArray<struct FHitResult>& HitResults);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyEffectiveComponent_10416101">();
	}
	static class UPyEffectiveComponent_10416101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyEffectiveComponent_10416101>();
	}
};
static_assert(alignof(UPyEffectiveComponent_10416101) == 0x000010, "Wrong alignment on UPyEffectiveComponent_10416101");
static_assert(sizeof(UPyEffectiveComponent_10416101) == 0x001C00, "Wrong size on UPyEffectiveComponent_10416101");

// PythonClass PyAbility_104161.PyConfig_104161
// 0x16F0 (0x28A0 - 0x11B0)
class UPyConfig_104161 final : public UConfig_104161
{
public:
	struct FDashAbilityInfo                       RiseDashInfo;                                      // 0x11B0(0x0B70)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FDashAbilityInfo                       DropDashInfo;                                      // 0x1D20(0x0B70)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                         DamageRatio;                                       // 0x2890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinDashDegree;                                     // 0x2894(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDashDegree;                                     // 0x2898(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WallAngleThreshold;                                // 0x289C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104161">();
	}
	static class UPyConfig_104161* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104161>();
	}
};
static_assert(alignof(UPyConfig_104161) == 0x000010, "Wrong alignment on UPyConfig_104161");
static_assert(sizeof(UPyConfig_104161) == 0x0028A0, "Wrong size on UPyConfig_104161");
static_assert(offsetof(UPyConfig_104161, RiseDashInfo) == 0x0011B0, "Member 'UPyConfig_104161::RiseDashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_104161, DropDashInfo) == 0x001D20, "Member 'UPyConfig_104161::DropDashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_104161, DamageRatio) == 0x002890, "Member 'UPyConfig_104161::DamageRatio' has a wrong offset!");
static_assert(offsetof(UPyConfig_104161, MinDashDegree) == 0x002894, "Member 'UPyConfig_104161::MinDashDegree' has a wrong offset!");
static_assert(offsetof(UPyConfig_104161, MaxDashDegree) == 0x002898, "Member 'UPyConfig_104161::MaxDashDegree' has a wrong offset!");
static_assert(offsetof(UPyConfig_104161, WallAngleThreshold) == 0x00289C, "Member 'UPyConfig_104161::WallAngleThreshold' has a wrong offset!");

// PythonClass PyAbility_104161.PyAbility_104161
// 0x0030 (0x2938 - 0x2908)
class UPyAbility_104161 : public UAbility_104161
{
public:
	bool                                          ValidKillState;                                    // 0x2908(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2909[0x7];                                     // 0x2909(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelAbilityTask_NetworkSyncPointWithHitResult* SmashDownNetSyncTask;                              // 0x2910(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnBeforeSpwanScope;                                // 0x2918(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnNeedShowUIActionTips;                            // 0x2928(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void BeginPlay();
	bool CanActivate();
	void K2_ActivateAbility();
	void MissileEventNotify();
	void K2_OnLaunchCharacterCallback();
	void NativeOnMontageEvent(const class FString& Tag);
	struct FVector GetJumpInitialDirection(bool bIsUp);
	void K2_EnterWindowState();
	void OnSmashDownSync(const struct FGameplayAbilityTargetDataHandle& Data);
	void K2_BeginHover();
	void OnBeforeSpwanScope__DelegateSignature();
	void begin_hover();
	void OnKillOther(class AActor* InSourceAvatar, class AActor* InTargetAvatar, const struct FAttributeModifierHandle& ParamHandle);
	void OnOwnerCharacterDeath(class AActor* DamageCauser, class AActor* TargetActor, const struct FAttributeModifierHandle& ParamHandle);
	void OnLanded(const struct FHitResult& Hit);
	void OnRep_ValidKillState();
	void BreakEventNotify();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnNeedShowUIActionTips__DelegateSignature(bool bIsNeed);
	void K2_UpdateValidHitForUI(bool Valid_hit);
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);
	void NativeOnMontageBlendOut(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104161">();
	}
	static class UPyAbility_104161* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104161>();
	}
};
static_assert(alignof(UPyAbility_104161) == 0x000008, "Wrong alignment on UPyAbility_104161");
static_assert(sizeof(UPyAbility_104161) == 0x002938, "Wrong size on UPyAbility_104161");
static_assert(offsetof(UPyAbility_104161, ValidKillState) == 0x002908, "Member 'UPyAbility_104161::ValidKillState' has a wrong offset!");
static_assert(offsetof(UPyAbility_104161, SmashDownNetSyncTask) == 0x002910, "Member 'UPyAbility_104161::SmashDownNetSyncTask' has a wrong offset!");
static_assert(offsetof(UPyAbility_104161, OnBeforeSpwanScope) == 0x002918, "Member 'UPyAbility_104161::OnBeforeSpwanScope' has a wrong offset!");
static_assert(offsetof(UPyAbility_104161, OnNeedShowUIActionTips) == 0x002928, "Member 'UPyAbility_104161::OnNeedShowUIActionTips' has a wrong offset!");

// PythonClass PyAbility_104161.PyCue_Buff_10416201
// 0x0068 (0x0EE0 - 0x0E78)
class APyCue_Buff_10416201 final : public AMarvelCueNotify_Loop
{
public:
	struct FGameplayTagContainer                  HPBarEffectTag;                                    // 0x0E78(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Buff_10416201">();
	}
	static class APyCue_Buff_10416201* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Buff_10416201>();
	}
};
static_assert(alignof(APyCue_Buff_10416201) == 0x000008, "Wrong alignment on APyCue_Buff_10416201");
static_assert(sizeof(APyCue_Buff_10416201) == 0x000EE0, "Wrong size on APyCue_Buff_10416201");
static_assert(offsetof(APyCue_Buff_10416201, HPBarEffectTag) == 0x000E78, "Member 'APyCue_Buff_10416201::HPBarEffectTag' has a wrong offset!");

// PythonClass PyAbility_104161.PyCue_Buff_10416105
// 0x0008 (0x0E80 - 0x0E78)
class APyCue_Buff_10416105 final : public AMarvelCueNotify_Loop
{
public:
	class UFXSystemAsset*                         KillEffect;                                        // 0x0E78(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnCharacterDeath(class AActor* DamageCauser, class AActor* TargetActor, const struct FAttributeModifierHandle& ParamHandle);
	void WhileActiveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Buff_10416105">();
	}
	static class APyCue_Buff_10416105* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Buff_10416105>();
	}
};
static_assert(alignof(APyCue_Buff_10416105) == 0x000008, "Wrong alignment on APyCue_Buff_10416105");
static_assert(sizeof(APyCue_Buff_10416105) == 0x000E80, "Wrong size on APyCue_Buff_10416105");
static_assert(offsetof(APyCue_Buff_10416105, KillEffect) == 0x000E78, "Member 'APyCue_Buff_10416105::KillEffect' has a wrong offset!");

// PythonClass PyAbility_104161.PyCue_Ability_Loop_10416101
// 0x0028 (0x0E28 - 0x0E00)
class APyCue_Ability_Loop_10416101 final : public AMarvelCueNotify_Ability
{
public:
	class USkeletalMeshComponent*                 Tantacle;                                          // 0x0E00(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachSocketName;                                  // 0x0E08(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E14[0x4];                                      // 0x0E14(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           AttackMT;                                          // 0x0E18(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                           SprintMT;                                          // 0x0E20(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnMontageNotifyBegin(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10416101">();
	}
	static class APyCue_Ability_Loop_10416101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10416101>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10416101) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_10416101");
static_assert(sizeof(APyCue_Ability_Loop_10416101) == 0x000E28, "Wrong size on APyCue_Ability_Loop_10416101");
static_assert(offsetof(APyCue_Ability_Loop_10416101, Tantacle) == 0x000E00, "Member 'APyCue_Ability_Loop_10416101::Tantacle' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10416101, AttachSocketName) == 0x000E08, "Member 'APyCue_Ability_Loop_10416101::AttachSocketName' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10416101, AttackMT) == 0x000E18, "Member 'APyCue_Ability_Loop_10416101::AttackMT' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10416101, SprintMT) == 0x000E20, "Member 'APyCue_Ability_Loop_10416101::SprintMT' has a wrong offset!");

}

