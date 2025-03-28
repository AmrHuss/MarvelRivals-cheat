#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_104993_BP

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "PyAbility_104993_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_104993_BP.Ability_104993_BP_C
// 0x0B78 (0x32B0 - 0x2738)
class UAbility_104993_BP_C final : public UPyAbility_104993
{
public:
	struct FDashAbilityInfo                       Dash_Info;                                         // 0x2738(0x0B70)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AMarvelAbilityTargetActor_Scope*        Scope_Actor;                                       // 0x32A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_104993_BP_C">();
	}
	static class UAbility_104993_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_104993_BP_C>();
	}
};
static_assert(alignof(UAbility_104993_BP_C) == 0x000008, "Wrong alignment on UAbility_104993_BP_C");
static_assert(sizeof(UAbility_104993_BP_C) == 0x0032B0, "Wrong size on UAbility_104993_BP_C");
static_assert(offsetof(UAbility_104993_BP_C, Dash_Info) == 0x002738, "Member 'UAbility_104993_BP_C::Dash_Info' has a wrong offset!");
static_assert(offsetof(UAbility_104993_BP_C, Scope_Actor) == 0x0032A8, "Member 'UAbility_104993_BP_C::Scope_Actor' has a wrong offset!");

}

