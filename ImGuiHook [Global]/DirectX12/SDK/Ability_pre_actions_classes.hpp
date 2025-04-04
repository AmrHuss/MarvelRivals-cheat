#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_pre_actions

#include "Basic.hpp"

#include "MarvelAI_classes.hpp"


namespace SDK
{

// PythonClass ability_pre_actions.PyAbilityPreActionBase
// 0x0000 (0x0030 - 0x0030)
class UPyAbilityPreActionBase : public UAIAbilityPreAction
{
public:
	void DoPreAction(class UMarvelGameplayAbility* Ability, class AMarvelAIController* AIController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbilityPreActionBase">();
	}
	static class UPyAbilityPreActionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbilityPreActionBase>();
	}
};
static_assert(alignof(UPyAbilityPreActionBase) == 0x000008, "Wrong alignment on UPyAbilityPreActionBase");
static_assert(sizeof(UPyAbilityPreActionBase) == 0x000030, "Wrong size on UPyAbilityPreActionBase");

// PythonClass ability_pre_actions.PyPreAction_SetWeaponActionName
// 0x0010 (0x0040 - 0x0030)
class UPyPreAction_SetWeaponActionName final : public UPyAbilityPreActionBase
{
public:
	class FString                                 WeaponActionName;                                  // 0x0030(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void DoPreAction(class UMarvelGameplayAbility* Ability, class AMarvelAIController* AIController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyPreAction_SetWeaponActionName">();
	}
	static class UPyPreAction_SetWeaponActionName* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyPreAction_SetWeaponActionName>();
	}
};
static_assert(alignof(UPyPreAction_SetWeaponActionName) == 0x000008, "Wrong alignment on UPyPreAction_SetWeaponActionName");
static_assert(sizeof(UPyPreAction_SetWeaponActionName) == 0x000040, "Wrong size on UPyPreAction_SetWeaponActionName");
static_assert(offsetof(UPyPreAction_SetWeaponActionName, WeaponActionName) == 0x000030, "Member 'UPyPreAction_SetWeaponActionName::WeaponActionName' has a wrong offset!");

}

