#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Summoned_10247101_BP

#include "Basic.hpp"

#include "PyAbility_102471_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Summoned_10247101_BP.Summoned_10247101_BP_C
// 0x0010 (0x0870 - 0x0860)
class ASummoned_10247101_BP_C final : public APySummoned_10247101
{
public:
	class USummonedMovementComponent*             SummonedMovement;                                  // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Summoned_10247101_BP_C">();
	}
	static class ASummoned_10247101_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASummoned_10247101_BP_C>();
	}
};
static_assert(alignof(ASummoned_10247101_BP_C) == 0x000010, "Wrong alignment on ASummoned_10247101_BP_C");
static_assert(sizeof(ASummoned_10247101_BP_C) == 0x000870, "Wrong size on ASummoned_10247101_BP_C");
static_assert(offsetof(ASummoned_10247101_BP_C, SummonedMovement) == 0x000860, "Member 'ASummoned_10247101_BP_C::SummonedMovement' has a wrong offset!");

}
