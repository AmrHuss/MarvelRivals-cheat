#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_SetFocus_BP

#include "Basic.hpp"

#include "BTS_PySetFocus_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTS_SetFocus_BP.BTS_SetFocus_BP_C
// 0x0000 (0x0130 - 0x0130)
class UBTS_SetFocus_BP_C final : public UBTS_PySetFocus
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTS_SetFocus_BP_C">();
	}
	static class UBTS_SetFocus_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_SetFocus_BP_C>();
	}
};
static_assert(alignof(UBTS_SetFocus_BP_C) == 0x000008, "Wrong alignment on UBTS_SetFocus_BP_C");
static_assert(sizeof(UBTS_SetFocus_BP_C) == 0x000130, "Wrong size on UBTS_SetFocus_BP_C");

}
