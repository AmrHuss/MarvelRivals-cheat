#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103322

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103322.PyConfig_103322
// 0x0008 (0x00D0 - 0x00C8)
class UPyConfig_103322 final : public UConfig_106
{
public:
	bool                                          AutoPullBullet;                                    // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_103322">();
	}
	static class UPyConfig_103322* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_103322>();
	}
};
static_assert(alignof(UPyConfig_103322) == 0x000008, "Wrong alignment on UPyConfig_103322");
static_assert(sizeof(UPyConfig_103322) == 0x0000D0, "Wrong size on UPyConfig_103322");
static_assert(offsetof(UPyConfig_103322, AutoPullBullet) == 0x0000C8, "Member 'UPyConfig_103322::AutoPullBullet' has a wrong offset!");

// PythonClass PyAbility_103322.PyAbility_103322
// 0x0008 (0x2670 - 0x2668)
class UPyAbility_103322 : public UAbility_106
{
public:
	int32                                         SniperRifleID;                                     // 0x2668(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LoadBulletAbilityID;                               // 0x266C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void BeginPlay();
	void OnActivateFailed(const struct FGameplayTagContainer& FailReason);
	void K2_OnClientActivateAbilityRejected(bool bIsCurrentActivation);
	bool CanActivate();
	void OnMontageMissileEvent();
	void K2_ActivateAbility();
	void NativeOnMontageCompleted(const class FString& Tag);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDurationEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103322">();
	}
	static class UPyAbility_103322* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103322>();
	}
};
static_assert(alignof(UPyAbility_103322) == 0x000008, "Wrong alignment on UPyAbility_103322");
static_assert(sizeof(UPyAbility_103322) == 0x002670, "Wrong size on UPyAbility_103322");
static_assert(offsetof(UPyAbility_103322, SniperRifleID) == 0x002668, "Member 'UPyAbility_103322::SniperRifleID' has a wrong offset!");
static_assert(offsetof(UPyAbility_103322, LoadBulletAbilityID) == 0x00266C, "Member 'UPyAbility_103322::LoadBulletAbilityID' has a wrong offset!");

}

