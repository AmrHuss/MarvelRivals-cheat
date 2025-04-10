#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAISelectTarget_1018_ShieldTeammates

#include "Basic.hpp"

#include "PyAISelectTargetLogicBase_classes.hpp"


namespace SDK
{

// PythonClass PyAISelectTarget_1018_ShieldTeammates.PyAISelectTarget_1018_ShieldTeammates
// 0x0000 (0x0070 - 0x0070)
class UPyAISelectTarget_1018_ShieldTeammates : public UPyAISelectTargetLogicBase
{
public:
	bool SelectTargetOrLocation(class AMarvelAIController* AIController, struct FMarvelAITarget& OutAITarget, const struct FAIAbilityUsage& AbilityUsage);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_1018_ShieldTeammates">();
	}
	static class UPyAISelectTarget_1018_ShieldTeammates* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_1018_ShieldTeammates>();
	}
};
static_assert(alignof(UPyAISelectTarget_1018_ShieldTeammates) == 0x000008, "Wrong alignment on UPyAISelectTarget_1018_ShieldTeammates");
static_assert(sizeof(UPyAISelectTarget_1018_ShieldTeammates) == 0x000070, "Wrong size on UPyAISelectTarget_1018_ShieldTeammates");

}

