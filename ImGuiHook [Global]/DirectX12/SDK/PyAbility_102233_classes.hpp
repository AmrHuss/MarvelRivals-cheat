#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102233

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102233.PyConfig_102233
// 0x0070 (0x0108 - 0x0098)
class UPyConfig_102233 final : public UMarvelAbilityConfig
{
public:
	float                                         HitCount;                                          // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BuffID;                                            // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  IgnoreTags;                                        // 0x00A0(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102233">();
	}
	static class UPyConfig_102233* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102233>();
	}
};
static_assert(alignof(UPyConfig_102233) == 0x000008, "Wrong alignment on UPyConfig_102233");
static_assert(sizeof(UPyConfig_102233) == 0x000108, "Wrong size on UPyConfig_102233");
static_assert(offsetof(UPyConfig_102233, HitCount) == 0x000098, "Member 'UPyConfig_102233::HitCount' has a wrong offset!");
static_assert(offsetof(UPyConfig_102233, BuffID) == 0x00009C, "Member 'UPyConfig_102233::BuffID' has a wrong offset!");
static_assert(offsetof(UPyConfig_102233, IgnoreTags) == 0x0000A0, "Member 'UPyConfig_102233::IgnoreTags' has a wrong offset!");

// PythonClass PyAbility_102233.PyAbility_102233
// 0x0000 (0x2550 - 0x2550)
class UPyAbility_102233 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	bool CanPreActivate();
	void OnAbilityHit(class UGameplayAbility* Ability, const TArray<struct FHitResult>& HitResults);
	void OnAbilityInitialize(int32 AbilityID);
	void OnAbilityCanActivateChanged(bool CanActivate_0);
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102233">();
	}
	static class UPyAbility_102233* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102233>();
	}
};
static_assert(alignof(UPyAbility_102233) == 0x000008, "Wrong alignment on UPyAbility_102233");
static_assert(sizeof(UPyAbility_102233) == 0x002550, "Wrong size on UPyAbility_102233");

}

