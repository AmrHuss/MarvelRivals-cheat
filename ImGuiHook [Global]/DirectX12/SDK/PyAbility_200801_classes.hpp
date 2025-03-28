#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_200801

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_200801.PyConfig_200801
// 0x0010 (0x00A8 - 0x0098)
class UPyConfig_200801 final : public UMarvelAbilityConfig
{
public:
	TArray<int32>                                 TrajectoryPortalBuff;                              // 0x0098(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_200801">();
	}
	static class UPyConfig_200801* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_200801>();
	}
};
static_assert(alignof(UPyConfig_200801) == 0x000008, "Wrong alignment on UPyConfig_200801");
static_assert(sizeof(UPyConfig_200801) == 0x0000A8, "Wrong size on UPyConfig_200801");
static_assert(offsetof(UPyConfig_200801, TrajectoryPortalBuff) == 0x000098, "Member 'UPyConfig_200801::TrajectoryPortalBuff' has a wrong offset!");

// PythonClass PyAbility_200801.PyAbility_200801
// 0x0008 (0x2558 - 0x2550)
class UPyAbility_200801 : public UMarvelGameplayAbility
{
public:
	float                                         TraceProgress;                                     // 0x2550(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void BeginPlay();
	void K2_ActivateAbility();
	void ReceiveTick(float DeltaSeconds);
	void OnRep_TraceProgress();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_200801">();
	}
	static class UPyAbility_200801* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_200801>();
	}
};
static_assert(alignof(UPyAbility_200801) == 0x000008, "Wrong alignment on UPyAbility_200801");
static_assert(sizeof(UPyAbility_200801) == 0x002558, "Wrong size on UPyAbility_200801");
static_assert(offsetof(UPyAbility_200801, TraceProgress) == 0x002550, "Member 'UPyAbility_200801::TraceProgress' has a wrong offset!");

// PythonClass PyAbility_200801.PyCue_Ability_Loop_20080101
// 0x0018 (0x0E18 - 0x0E00)
class APyCue_Ability_Loop_20080101 final : public AMarvelCueNotify_Ability
{
public:
	class FString                                 FXSocketName;                                      // 0x0E00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnterStealthTime;                                  // 0x0E10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveTick(float DeltaSeconds);
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_20080101">();
	}
	static class APyCue_Ability_Loop_20080101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_20080101>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_20080101) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_20080101");
static_assert(sizeof(APyCue_Ability_Loop_20080101) == 0x000E18, "Wrong size on APyCue_Ability_Loop_20080101");
static_assert(offsetof(APyCue_Ability_Loop_20080101, FXSocketName) == 0x000E00, "Member 'APyCue_Ability_Loop_20080101::FXSocketName' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_20080101, EnterStealthTime) == 0x000E10, "Member 'APyCue_Ability_Loop_20080101::EnterStealthTime' has a wrong offset!");

}

