#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103311

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103311.PyConfig_103311
// 0x0008 (0x00D0 - 0x00C8)
class UPyConfig_103311 final : public UConfig_106
{
public:
	bool                                          AutoPullBullet;                                    // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_103311">();
	}
	static class UPyConfig_103311* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_103311>();
	}
};
static_assert(alignof(UPyConfig_103311) == 0x000008, "Wrong alignment on UPyConfig_103311");
static_assert(sizeof(UPyConfig_103311) == 0x0000D0, "Wrong size on UPyConfig_103311");
static_assert(offsetof(UPyConfig_103311, AutoPullBullet) == 0x0000C8, "Member 'UPyConfig_103311::AutoPullBullet' has a wrong offset!");

// PythonClass PyAbility_103311.PyAbility_103311
// 0x0000 (0x2668 - 0x2668)
class UPyAbility_103311 : public UAbility_106
{
public:
	void BeginPlay();
	void OnActivateFailed(const struct FGameplayTagContainer& FailReason);
	void K2_OnClientActivateAbilityRejected(bool bIsCurrentActivation);
	bool CanActivate();
	void OnMontageMissileEvent();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDurationEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103311">();
	}
	static class UPyAbility_103311* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103311>();
	}
};
static_assert(alignof(UPyAbility_103311) == 0x000008, "Wrong alignment on UPyAbility_103311");
static_assert(sizeof(UPyAbility_103311) == 0x002668, "Wrong size on UPyAbility_103311");

}

