#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CombatSituation_HeroUnit

#include "Basic.hpp"

#include "PyWidget_CombatSituationUnit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WBP_CombatSituation_HeroUnit.WBP_CombatSituation_HeroUnit_C
// 0x0000 (0x04B0 - 0x04B0)
class UWBP_CombatSituation_HeroUnit_C final : public UPyWidget_CombatSituation_HeroHead
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CombatSituation_HeroUnit_C">();
	}
	static class UWBP_CombatSituation_HeroUnit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CombatSituation_HeroUnit_C>();
	}
};
static_assert(alignof(UWBP_CombatSituation_HeroUnit_C) == 0x000010, "Wrong alignment on UWBP_CombatSituation_HeroUnit_C");
static_assert(sizeof(UWBP_CombatSituation_HeroUnit_C) == 0x0004B0, "Wrong size on UWBP_CombatSituation_HeroUnit_C");

}
