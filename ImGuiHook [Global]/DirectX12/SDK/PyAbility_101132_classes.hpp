#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101132

#include "Basic.hpp"

#include "PyAbility_HulkSculpt_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_101132.PyAbility_101132
// 0x0000 (0x2808 - 0x2808)
class UPyAbility_101132 : public UPyAbility_HulkSculpt
{
public:
	bool CanActivate();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDurationEnd();
	void OnTargetDeath(class AActor* DamageCauser, class AActor* TargetActor, const struct FAttributeModifierHandle& ModifierParameterHandle);
	void BeginPlay();

	float GetEnergyToCache() const;
	bool IsPrimaryAbility() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_101132">();
	}
	static class UPyAbility_101132* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_101132>();
	}
};
static_assert(alignof(UPyAbility_101132) == 0x000008, "Wrong alignment on UPyAbility_101132");
static_assert(sizeof(UPyAbility_101132) == 0x002808, "Wrong size on UPyAbility_101132");

}
