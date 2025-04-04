#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_PyFindDynamicWayPoint

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "PyBTNodeBase_classes.hpp"


namespace SDK
{

// PythonClass BTT_PyFindDynamicWayPoint.BTT_PyFindDynamicWayPoint
// 0x0070 (0x0130 - 0x00C0)
class UBTT_PyFindDynamicWayPoint : public UBTTask_PyBase
{
public:
	int32                                         SelectAngleSegment;                                // 0x00C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBlackboardKeySelector                 InTarget;                                          // 0x00C8(0x0030)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                 OutDynamicWayPointLocation;                        // 0x00F8(0x0030)(Edit, NativeAccessSpecifierPublic)
	bool                                          EnableLog;                                         // 0x0128(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTT_PyFindDynamicWayPoint">();
	}
	static class UBTT_PyFindDynamicWayPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_PyFindDynamicWayPoint>();
	}
};
static_assert(alignof(UBTT_PyFindDynamicWayPoint) == 0x000008, "Wrong alignment on UBTT_PyFindDynamicWayPoint");
static_assert(sizeof(UBTT_PyFindDynamicWayPoint) == 0x000130, "Wrong size on UBTT_PyFindDynamicWayPoint");
static_assert(offsetof(UBTT_PyFindDynamicWayPoint, SelectAngleSegment) == 0x0000C0, "Member 'UBTT_PyFindDynamicWayPoint::SelectAngleSegment' has a wrong offset!");
static_assert(offsetof(UBTT_PyFindDynamicWayPoint, InTarget) == 0x0000C8, "Member 'UBTT_PyFindDynamicWayPoint::InTarget' has a wrong offset!");
static_assert(offsetof(UBTT_PyFindDynamicWayPoint, OutDynamicWayPointLocation) == 0x0000F8, "Member 'UBTT_PyFindDynamicWayPoint::OutDynamicWayPointLocation' has a wrong offset!");
static_assert(offsetof(UBTT_PyFindDynamicWayPoint, EnableLog) == 0x000128, "Member 'UBTT_PyFindDynamicWayPoint::EnableLog' has a wrong offset!");

}

