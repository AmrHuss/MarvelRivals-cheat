#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Summoned_10235101_BP

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Summoned_10235101_BP.Summoned_10235101_BP_C
// 0x0000 (0x0800 - 0x0800)
class ASummoned_10235101_BP_C final : public AMarvelSummonerBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Summoned_10235101_BP_C">();
	}
	static class ASummoned_10235101_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASummoned_10235101_BP_C>();
	}
};
static_assert(alignof(ASummoned_10235101_BP_C) == 0x000010, "Wrong alignment on ASummoned_10235101_BP_C");
static_assert(sizeof(ASummoned_10235101_BP_C) == 0x000800, "Wrong size on ASummoned_10235101_BP_C");

}

