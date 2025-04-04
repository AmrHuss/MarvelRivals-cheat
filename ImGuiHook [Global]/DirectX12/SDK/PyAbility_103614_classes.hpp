#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103614

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "Hero_1036_structs.hpp"
#include "Hero_1036_classes.hpp"
#include "PyCue_AbilityLoop_Cable_Base_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// PythonClass PyAbility_103614.PyConfig_103614
// 0x3670 (0x3710 - 0x00A0)
class UPyConfig_103614 final : public UConfig_103614
{
public:
	struct FSelectTaskParam                       SelectParam;                                       // 0x00A0(0x1040)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FDashAbilityInfo                       DashInfo;                                          // 0x10E0(0x0B70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDashAbilityInfo                       DashBackInfo;                                      // 0x1C50(0x0B70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMarvelAbilityTraceContext             TraceContext;                                      // 0x27C0(0x0F30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ScreenCueTag;                                      // 0x36F0(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         KickDamage;                                        // 0x36FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnhancedKickDamage;                                // 0x3700(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_103614">();
	}
	static class UPyConfig_103614* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_103614>();
	}
};
static_assert(alignof(UPyConfig_103614) == 0x000010, "Wrong alignment on UPyConfig_103614");
static_assert(sizeof(UPyConfig_103614) == 0x003710, "Wrong size on UPyConfig_103614");
static_assert(offsetof(UPyConfig_103614, SelectParam) == 0x0000A0, "Member 'UPyConfig_103614::SelectParam' has a wrong offset!");
static_assert(offsetof(UPyConfig_103614, DashInfo) == 0x0010E0, "Member 'UPyConfig_103614::DashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_103614, DashBackInfo) == 0x001C50, "Member 'UPyConfig_103614::DashBackInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_103614, TraceContext) == 0x0027C0, "Member 'UPyConfig_103614::TraceContext' has a wrong offset!");
static_assert(offsetof(UPyConfig_103614, ScreenCueTag) == 0x0036F0, "Member 'UPyConfig_103614::ScreenCueTag' has a wrong offset!");
static_assert(offsetof(UPyConfig_103614, KickDamage) == 0x0036FC, "Member 'UPyConfig_103614::KickDamage' has a wrong offset!");
static_assert(offsetof(UPyConfig_103614, EnhancedKickDamage) == 0x003700, "Member 'UPyConfig_103614::EnhancedKickDamage' has a wrong offset!");

// PythonClass PyAbility_103614.PyCue_Buff_10361402
// 0x0018 (0x1000 - 0x0FE8)
class APyCue_Buff_10361402 final : public AMarvelCueNotify_Buff
{
public:
	int32                                         HitAudioID;                                        // 0x0FE8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AbilityID;                                         // 0x0FEC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         NormalFX;                                          // 0x0FF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         EnhancedFX;                                        // 0x0FF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Buff_10361402">();
	}
	static class APyCue_Buff_10361402* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Buff_10361402>();
	}
};
static_assert(alignof(APyCue_Buff_10361402) == 0x000008, "Wrong alignment on APyCue_Buff_10361402");
static_assert(sizeof(APyCue_Buff_10361402) == 0x001000, "Wrong size on APyCue_Buff_10361402");
static_assert(offsetof(APyCue_Buff_10361402, HitAudioID) == 0x000FE8, "Member 'APyCue_Buff_10361402::HitAudioID' has a wrong offset!");
static_assert(offsetof(APyCue_Buff_10361402, AbilityID) == 0x000FEC, "Member 'APyCue_Buff_10361402::AbilityID' has a wrong offset!");
static_assert(offsetof(APyCue_Buff_10361402, NormalFX) == 0x000FF0, "Member 'APyCue_Buff_10361402::NormalFX' has a wrong offset!");
static_assert(offsetof(APyCue_Buff_10361402, EnhancedFX) == 0x000FF8, "Member 'APyCue_Buff_10361402::EnhancedFX' has a wrong offset!");

// PythonClass PyAbility_103614.PyCue_AbilityLoop_103614
// 0x0020 (0x1100 - 0x10E0)
class APyCue_AbilityLoop_103614 final : public APyCue_AbilityLoop_Cable_Base
{
public:
	float                                         TimeToShootCable;                                  // 0x10E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeToBreakRightHand;                              // 0x10E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeToBreakCableHead;                              // 0x10E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CableFlySpeed;                                     // 0x10EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         HitFX;                                             // 0x10F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HitAudioID;                                        // 0x10F8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ResetDefault();
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_ListenProjectileSpawnAndHit();
	void K2_UnlistenProjectileSpawnAndHit();
	void OnAbilityState103614Changed(EAbilityState103614 AbilityState);
	void OnTimeToShootCable();
	void K2_OnCableHit(const struct FVector& HitLocation);
	void OnTimeToBreakRightHand();
	void OnTimeToBreakCableHead();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_AbilityLoop_103614">();
	}
	static class APyCue_AbilityLoop_103614* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_AbilityLoop_103614>();
	}
};
static_assert(alignof(APyCue_AbilityLoop_103614) == 0x000008, "Wrong alignment on APyCue_AbilityLoop_103614");
static_assert(sizeof(APyCue_AbilityLoop_103614) == 0x001100, "Wrong size on APyCue_AbilityLoop_103614");
static_assert(offsetof(APyCue_AbilityLoop_103614, TimeToShootCable) == 0x0010E0, "Member 'APyCue_AbilityLoop_103614::TimeToShootCable' has a wrong offset!");
static_assert(offsetof(APyCue_AbilityLoop_103614, TimeToBreakRightHand) == 0x0010E4, "Member 'APyCue_AbilityLoop_103614::TimeToBreakRightHand' has a wrong offset!");
static_assert(offsetof(APyCue_AbilityLoop_103614, TimeToBreakCableHead) == 0x0010E8, "Member 'APyCue_AbilityLoop_103614::TimeToBreakCableHead' has a wrong offset!");
static_assert(offsetof(APyCue_AbilityLoop_103614, CableFlySpeed) == 0x0010EC, "Member 'APyCue_AbilityLoop_103614::CableFlySpeed' has a wrong offset!");
static_assert(offsetof(APyCue_AbilityLoop_103614, HitFX) == 0x0010F0, "Member 'APyCue_AbilityLoop_103614::HitFX' has a wrong offset!");
static_assert(offsetof(APyCue_AbilityLoop_103614, HitAudioID) == 0x0010F8, "Member 'APyCue_AbilityLoop_103614::HitAudioID' has a wrong offset!");

// PythonClass PyAbility_103614.PyAbility_103614
// 0x0000 (0x2570 - 0x2570)
class UPyAbility_103614 : public UAbility_103614
{
public:
	void BeginPlay();
	bool TryMakeTriggerContext(struct FGameplayEventData& EventData);
	bool CanActivate();
	void K2_ActivateAbility();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void MissileEventNotify();
	void NativeOnMontageEvent(const class FString& Tag);
	void ServerReceiveKnockUpDirection(const struct FVector& Dir);
	void NativeOnMontageCompleted(const class FString& Tag);
	void K2_ReadyToRecovery();
	void OnDashFinish(EDashStopReason Reason);
	void DashBackAfterRecorery();
	class AActor* GetTargetActor();
	class AActor* GetTarget();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103614">();
	}
	static class UPyAbility_103614* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103614>();
	}
};
static_assert(alignof(UPyAbility_103614) == 0x000008, "Wrong alignment on UPyAbility_103614");
static_assert(sizeof(UPyAbility_103614) == 0x002570, "Wrong size on UPyAbility_103614");

}

