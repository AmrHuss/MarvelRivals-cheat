#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104981

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Hero_1049_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104981.PyConfig_104981
// 0x2908 (0x29A0 - 0x0098)
class UPyConfig_104981 final : public UMarvelAbilityConfig
{
public:
	float                                         JumpVelocity;                                      // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDashAbilityInfo                       RaiseDashInfo;                                     // 0x00A0(0x0B70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         HoverBuffID;                                       // 0x0C10(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C14[0xC];                                      // 0x0C14(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFindGroundParam                       TraceParam;                                        // 0x0C20(0x0F70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTag                           TraceCueTag;                                       // 0x1B90(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B9C[0x4];                                     // 0x1B9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDashAbilityInfo                       DashInfo;                                          // 0x1BA0(0x0B70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         DashScopeID;                                       // 0x2710(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GrabBuffID;                                        // 0x2714(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GrabBuffID_CollideKnockDown;                       // 0x2718(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           GrabCollideTag;                                    // 0x271C(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements               CollideKnockTagRequire;                            // 0x2728(0x0118)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMarvelApplyPinnedMotionConfig         PinnedConfig;                                      // 0x2840(0x0160)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104981">();
	}
	static class UPyConfig_104981* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104981>();
	}
};
static_assert(alignof(UPyConfig_104981) == 0x000010, "Wrong alignment on UPyConfig_104981");
static_assert(sizeof(UPyConfig_104981) == 0x0029A0, "Wrong size on UPyConfig_104981");
static_assert(offsetof(UPyConfig_104981, JumpVelocity) == 0x000098, "Member 'UPyConfig_104981::JumpVelocity' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, RaiseDashInfo) == 0x0000A0, "Member 'UPyConfig_104981::RaiseDashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, HoverBuffID) == 0x000C10, "Member 'UPyConfig_104981::HoverBuffID' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, TraceParam) == 0x000C20, "Member 'UPyConfig_104981::TraceParam' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, TraceCueTag) == 0x001B90, "Member 'UPyConfig_104981::TraceCueTag' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, DashInfo) == 0x001BA0, "Member 'UPyConfig_104981::DashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, DashScopeID) == 0x002710, "Member 'UPyConfig_104981::DashScopeID' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, GrabBuffID) == 0x002714, "Member 'UPyConfig_104981::GrabBuffID' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, GrabBuffID_CollideKnockDown) == 0x002718, "Member 'UPyConfig_104981::GrabBuffID_CollideKnockDown' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, GrabCollideTag) == 0x00271C, "Member 'UPyConfig_104981::GrabCollideTag' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, CollideKnockTagRequire) == 0x002728, "Member 'UPyConfig_104981::CollideKnockTagRequire' has a wrong offset!");
static_assert(offsetof(UPyConfig_104981, PinnedConfig) == 0x002840, "Member 'UPyConfig_104981::PinnedConfig' has a wrong offset!");

// PythonClass PyAbility_104981.PyAbility_AirGrab_104981
// 0x0000 (0x1158 - 0x1158)
class UPyAbility_AirGrab_104981 final : public UAbility_AirGrab
{
public:
	void OnActiveAbility();
	bool K2_ShouldSkipInstigatorHit(class AActor* SelfActor, const struct FHitResult& InHit);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_AirGrab_104981">();
	}
	static class UPyAbility_AirGrab_104981* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_AirGrab_104981>();
	}
};
static_assert(alignof(UPyAbility_AirGrab_104981) == 0x000008, "Wrong alignment on UPyAbility_AirGrab_104981");
static_assert(sizeof(UPyAbility_AirGrab_104981) == 0x001158, "Wrong size on UPyAbility_AirGrab_104981");

// PythonClass PyAbility_104981.PyAbility_104981
// 0x0020 (0x2588 - 0x2568)
class UPyAbility_104981 : public UAbility_104981
{
public:
	FMulticastInlineDelegateProperty_             OnPawnFloatStart;                                  // 0x2568(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPawnFloatEnd;                                    // 0x2578(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnPawnFloatStart__DelegateSignature();
	void OnPawnFloatEnd__DelegateSignature();
	void BeginPlay();
	float GetAbilityDuration();
	void K2_ActivateAbility();
	void MissileEventNotify();
	void OnRaiseDashFinish(EDashStopReason Reason);
	void OnReachedJumpApex();
	void OnSelectConfirm(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnTraceResults(const TArray<struct FHitResult>& HitResults);
	struct FGameplayTagRequirements GetCollideKnockDownRequire();
	void OnDashFinish(EDashStopReason Reason);
	void OnHoverBuffRemove(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104981">();
	}
	static class UPyAbility_104981* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104981>();
	}
};
static_assert(alignof(UPyAbility_104981) == 0x000008, "Wrong alignment on UPyAbility_104981");
static_assert(sizeof(UPyAbility_104981) == 0x002588, "Wrong size on UPyAbility_104981");
static_assert(offsetof(UPyAbility_104981, OnPawnFloatStart) == 0x002568, "Member 'UPyAbility_104981::OnPawnFloatStart' has a wrong offset!");
static_assert(offsetof(UPyAbility_104981, OnPawnFloatEnd) == 0x002578, "Member 'UPyAbility_104981::OnPawnFloatEnd' has a wrong offset!");

}

