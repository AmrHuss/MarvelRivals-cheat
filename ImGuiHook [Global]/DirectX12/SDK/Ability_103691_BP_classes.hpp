#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_103691_BP

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_103691_BP.Ability_103691_BP_C
// 0x0000 (0x2550 - 0x2550)
class UAbility_103691_BP_C final : public UMarvelGameplayAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_103691_BP_C">();
	}
	static class UAbility_103691_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_103691_BP_C>();
	}
};
static_assert(alignof(UAbility_103691_BP_C) == 0x000008, "Wrong alignment on UAbility_103691_BP_C");
static_assert(sizeof(UAbility_103691_BP_C) == 0x002550, "Wrong size on UAbility_103691_BP_C");

}
