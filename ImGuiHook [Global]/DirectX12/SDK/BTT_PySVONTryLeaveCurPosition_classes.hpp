#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_PySVONTryLeaveCurPosition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BTT_PyMoveToBase_classes.hpp"


namespace SDK
{

// PythonClass BTT_PySVONTryLeaveCurPosition.BTT_PySVONTryLeaveCurPosition
// 0x0008 (0x00D8 - 0x00D0)
class UBTT_PySVONTryLeaveCurPosition : public UBTT_PyMoveToBase
{
public:
	uint8                                         Pad_CA[0x2];                                       // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SphereRadius;                                      // 0x00CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxRandomCnt;                                      // 0x00D0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETraceTypeQuery                               TraceTypeQuery;                                    // 0x00D4(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	struct FVector GetMoveTargetLocation(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTT_PySVONTryLeaveCurPosition">();
	}
	static class UBTT_PySVONTryLeaveCurPosition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_PySVONTryLeaveCurPosition>();
	}
};
static_assert(alignof(UBTT_PySVONTryLeaveCurPosition) == 0x000008, "Wrong alignment on UBTT_PySVONTryLeaveCurPosition");
static_assert(sizeof(UBTT_PySVONTryLeaveCurPosition) == 0x0000D8, "Wrong size on UBTT_PySVONTryLeaveCurPosition");
static_assert(offsetof(UBTT_PySVONTryLeaveCurPosition, SphereRadius) == 0x0000CC, "Member 'UBTT_PySVONTryLeaveCurPosition::SphereRadius' has a wrong offset!");
static_assert(offsetof(UBTT_PySVONTryLeaveCurPosition, MaxRandomCnt) == 0x0000D0, "Member 'UBTT_PySVONTryLeaveCurPosition::MaxRandomCnt' has a wrong offset!");
static_assert(offsetof(UBTT_PySVONTryLeaveCurPosition, TraceTypeQuery) == 0x0000D4, "Member 'UBTT_PySVONTryLeaveCurPosition::TraceTypeQuery' has a wrong offset!");

}
