#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KnockUp_102171_BP

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass KnockUp_102171_BP.KnockUp_102171_BP_C
// 0x0000 (0x1D50 - 0x1D50)
class UKnockUp_102171_BP_C final : public UMarvelKnockUpAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KnockUp_102171_BP_C">();
	}
	static class UKnockUp_102171_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKnockUp_102171_BP_C>();
	}
};
static_assert(alignof(UKnockUp_102171_BP_C) == 0x000008, "Wrong alignment on UKnockUp_102171_BP_C");
static_assert(sizeof(UKnockUp_102171_BP_C) == 0x001D50, "Wrong size on UKnockUp_102171_BP_C");

}
