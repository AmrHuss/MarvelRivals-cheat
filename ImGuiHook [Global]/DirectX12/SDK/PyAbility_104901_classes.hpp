#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104901

#include "Basic.hpp"

#include "Hero_1049_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104901.PyConfig_104901
// 0x0000 (0x00E8 - 0x00E8)
class UPyConfig_104901 final : public UConfig_104901
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104901">();
	}
	static class UPyConfig_104901* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104901>();
	}
};
static_assert(alignof(UPyConfig_104901) == 0x000008, "Wrong alignment on UPyConfig_104901");
static_assert(sizeof(UPyConfig_104901) == 0x0000E8, "Wrong size on UPyConfig_104901");

// PythonClass PyAbility_104901.PyAbility_104901
// 0x0000 (0x25D8 - 0x25D8)
class UPyAbility_104901 : public UAbility_104901
{
public:
	void BeginPlay();
	void BroadcastEnterHealStage(bool bCanHeal);
	void BindNotTreatShieldChanged(bool bBind);
	void OnNotTreatShieldhanged(class AActor* SourceAcatar, const struct FAttributeModifierHandle& ModifierParameterHandle);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104901">();
	}
	static class UPyAbility_104901* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104901>();
	}
};
static_assert(alignof(UPyAbility_104901) == 0x000008, "Wrong alignment on UPyAbility_104901");
static_assert(sizeof(UPyAbility_104901) == 0x0025D8, "Wrong size on UPyAbility_104901");

}
