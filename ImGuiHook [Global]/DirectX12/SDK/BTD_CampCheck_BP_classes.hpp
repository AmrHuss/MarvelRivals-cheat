#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_CampCheck_BP

#include "Basic.hpp"

#include "BTD_PyCampCheck_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_CampCheck_BP.BTD_CampCheck_BP_C
// 0x0000 (0x0108 - 0x0108)
class UBTD_CampCheck_BP_C final : public UBTD_PyCampCheck
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_CampCheck_BP_C">();
	}
	static class UBTD_CampCheck_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_CampCheck_BP_C>();
	}
};
static_assert(alignof(UBTD_CampCheck_BP_C) == 0x000008, "Wrong alignment on UBTD_CampCheck_BP_C");
static_assert(sizeof(UBTD_CampCheck_BP_C) == 0x000108, "Wrong size on UBTD_CampCheck_BP_C");

}
