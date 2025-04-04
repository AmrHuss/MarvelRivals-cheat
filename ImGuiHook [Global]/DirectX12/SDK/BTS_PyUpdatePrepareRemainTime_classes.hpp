#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PyUpdatePrepareRemainTime

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "PyBTNodeBase_classes.hpp"


namespace SDK
{

// PythonClass BTS_PyUpdatePrepareRemainTime.BTS_PyUpdatePrepareRemainTime
// 0x0030 (0x00D8 - 0x00A8)
class UBTS_PyUpdatePrepareRemainTime : public UBTService_PyBase
{
public:
	struct FBlackboardKeySelector                 OutRemainTime;                                     // 0x00A8(0x0030)(Edit, NativeAccessSpecifierPublic)

public:
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTS_PyUpdatePrepareRemainTime">();
	}
	static class UBTS_PyUpdatePrepareRemainTime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_PyUpdatePrepareRemainTime>();
	}
};
static_assert(alignof(UBTS_PyUpdatePrepareRemainTime) == 0x000008, "Wrong alignment on UBTS_PyUpdatePrepareRemainTime");
static_assert(sizeof(UBTS_PyUpdatePrepareRemainTime) == 0x0000D8, "Wrong size on UBTS_PyUpdatePrepareRemainTime");
static_assert(offsetof(UBTS_PyUpdatePrepareRemainTime, OutRemainTime) == 0x0000A8, "Member 'UBTS_PyUpdatePrepareRemainTime::OutRemainTime' has a wrong offset!");

}

