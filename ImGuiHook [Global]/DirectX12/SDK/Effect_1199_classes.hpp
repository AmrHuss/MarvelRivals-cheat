#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect_1199

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Effect_1199.Effect_1199_C
// 0x0000 (0x13A0 - 0x13A0)
class UEffect_1199_C final : public UMarvelGameplayEffectTemplate
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Effect_1199_C">();
	}
	static class UEffect_1199_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffect_1199_C>();
	}
};
static_assert(alignof(UEffect_1199_C) == 0x000008, "Wrong alignment on UEffect_1199_C");
static_assert(sizeof(UEffect_1199_C) == 0x0013A0, "Wrong size on UEffect_1199_C");

}

