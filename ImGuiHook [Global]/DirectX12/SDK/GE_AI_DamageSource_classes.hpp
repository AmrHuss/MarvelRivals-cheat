#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_AI_DamageSource

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_AI_DamageSource.GE_AI_DamageSource_C
// 0x0000 (0x13A0 - 0x13A0)
class UGE_AI_DamageSource_C final : public UMarvelGameplayEffectTemplate
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_AI_DamageSource_C">();
	}
	static class UGE_AI_DamageSource_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_AI_DamageSource_C>();
	}
};
static_assert(alignof(UGE_AI_DamageSource_C) == 0x000008, "Wrong alignment on UGE_AI_DamageSource_C");
static_assert(sizeof(UGE_AI_DamageSource_C) == 0x0013A0, "Wrong size on UGE_AI_DamageSource_C");

}
