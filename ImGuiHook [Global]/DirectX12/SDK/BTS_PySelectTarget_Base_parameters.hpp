#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PySelectTarget_Base

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction BTS_PySelectTarget_Base.BTS_PySelectTarget_Base.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_PySelectTarget_Base_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_PySelectTarget_Base_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_PySelectTarget_Base_ReceiveTickAI");
static_assert(sizeof(BTS_PySelectTarget_Base_ReceiveTickAI) == 0x000018, "Wrong size on BTS_PySelectTarget_Base_ReceiveTickAI");
static_assert(offsetof(BTS_PySelectTarget_Base_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_PySelectTarget_Base_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_PySelectTarget_Base_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTS_PySelectTarget_Base_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_PySelectTarget_Base_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_PySelectTarget_Base_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}

