#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIC_LevelTransitionBP

#include "Basic.hpp"

#include "PyUIC_LevelTransition_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UIC_LevelTransitionBP.UIC_LevelTransitionBP_C
// 0x0000 (0x0030 - 0x0030)
class UUIC_LevelTransitionBP_C final : public UPyUIC_LevelTransition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIC_LevelTransitionBP_C">();
	}
	static class UUIC_LevelTransitionBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIC_LevelTransitionBP_C>();
	}
};
static_assert(alignof(UUIC_LevelTransitionBP_C) == 0x000008, "Wrong alignment on UUIC_LevelTransitionBP_C");
static_assert(sizeof(UUIC_LevelTransitionBP_C) == 0x000030, "Wrong size on UUIC_LevelTransitionBP_C");

}
