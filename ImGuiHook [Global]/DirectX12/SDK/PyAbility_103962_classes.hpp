#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103962

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103962.PyAbility_103962
// 0x0000 (0x5A90 - 0x5A90)
class UPyAbility_103962 : public UMarvelAeroBaseAbility
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDurationEnd();
	float GetAbilityDuration();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103962">();
	}
	static class UPyAbility_103962* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103962>();
	}
};
static_assert(alignof(UPyAbility_103962) == 0x000010, "Wrong alignment on UPyAbility_103962");
static_assert(sizeof(UPyAbility_103962) == 0x005A90, "Wrong size on UPyAbility_103962");

}

