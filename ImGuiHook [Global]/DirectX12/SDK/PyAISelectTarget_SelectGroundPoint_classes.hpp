#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAISelectTarget_SelectGroundPoint

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "PyAISelectTargetLogicBase_classes.hpp"
#include "MarvelAI_structs.hpp"


namespace SDK
{

// PythonClass PyAISelectTarget_SelectGroundPoint.PyAISelectTarget_SelectGroundPointBase
// 0x0500 (0x0570 - 0x0070)
class UPyAISelectTarget_SelectGroundPointBase : public UPyAISelectTargetLogicBase
{
public:
	struct FMarvelAbilityTargetFilter             TraceFilter;                                       // 0x0070(0x0500)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_SelectGroundPointBase">();
	}
	static class UPyAISelectTarget_SelectGroundPointBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_SelectGroundPointBase>();
	}
};
static_assert(alignof(UPyAISelectTarget_SelectGroundPointBase) == 0x000008, "Wrong alignment on UPyAISelectTarget_SelectGroundPointBase");
static_assert(sizeof(UPyAISelectTarget_SelectGroundPointBase) == 0x000570, "Wrong size on UPyAISelectTarget_SelectGroundPointBase");
static_assert(offsetof(UPyAISelectTarget_SelectGroundPointBase, TraceFilter) == 0x000070, "Member 'UPyAISelectTarget_SelectGroundPointBase::TraceFilter' has a wrong offset!");

// PythonClass PyAISelectTarget_SelectGroundPoint.PyAISelectTarget_SelectGroundPointInRange
// 0x0010 (0x0580 - 0x0570)
class UPyAISelectTarget_SelectGroundPointInRange : public UPyAISelectTarget_SelectGroundPointBase
{
public:
	struct FRange_FloatValue                      DistancePercent;                                   // 0x0570(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRange_FloatValue                      DistanceRange;                                     // 0x0578(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISelectTarget_SelectGroundPointInRange">();
	}
	static class UPyAISelectTarget_SelectGroundPointInRange* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAISelectTarget_SelectGroundPointInRange>();
	}
};
static_assert(alignof(UPyAISelectTarget_SelectGroundPointInRange) == 0x000008, "Wrong alignment on UPyAISelectTarget_SelectGroundPointInRange");
static_assert(sizeof(UPyAISelectTarget_SelectGroundPointInRange) == 0x000580, "Wrong size on UPyAISelectTarget_SelectGroundPointInRange");
static_assert(offsetof(UPyAISelectTarget_SelectGroundPointInRange, DistancePercent) == 0x000570, "Member 'UPyAISelectTarget_SelectGroundPointInRange::DistancePercent' has a wrong offset!");
static_assert(offsetof(UPyAISelectTarget_SelectGroundPointInRange, DistanceRange) == 0x000578, "Member 'UPyAISelectTarget_SelectGroundPointInRange::DistanceRange' has a wrong offset!");

}

