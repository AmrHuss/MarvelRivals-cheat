#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102237

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102237.PyAbility_102237
// 0x0000 (0x2550 - 0x2550)
class UPyAbility_102237 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void MissileEventNotify();
	void BreakEventNotify();
	void K2_OnEndAbility(bool bWasCancelled);
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102237">();
	}
	static class UPyAbility_102237* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102237>();
	}
};
static_assert(alignof(UPyAbility_102237) == 0x000008, "Wrong alignment on UPyAbility_102237");
static_assert(sizeof(UPyAbility_102237) == 0x002550, "Wrong size on UPyAbility_102237");

}
