#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PyUpdateBirthBase

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction BTS_PyUpdateBirthBase.BTS_PyUpdateBirthBase.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_PyUpdateBirthBase_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_PyUpdateBirthBase_ReceiveActivationAI) == 0x000008, "Wrong alignment on BTS_PyUpdateBirthBase_ReceiveActivationAI");
static_assert(sizeof(BTS_PyUpdateBirthBase_ReceiveActivationAI) == 0x000010, "Wrong size on BTS_PyUpdateBirthBase_ReceiveActivationAI");
static_assert(offsetof(BTS_PyUpdateBirthBase_ReceiveActivationAI, OwnerController) == 0x000000, "Member 'BTS_PyUpdateBirthBase_ReceiveActivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_PyUpdateBirthBase_ReceiveActivationAI, ControlledPawn) == 0x000008, "Member 'BTS_PyUpdateBirthBase_ReceiveActivationAI::ControlledPawn' has a wrong offset!");

// PythonFunction BTS_PyUpdateBirthBase.BTS_PyUpdateBirthBase.ReceiveDeactivation
// 0x0008 (0x0008 - 0x0000)
struct BTS_PyUpdateBirthBase_ReceiveDeactivation final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_PyUpdateBirthBase_ReceiveDeactivation) == 0x000008, "Wrong alignment on BTS_PyUpdateBirthBase_ReceiveDeactivation");
static_assert(sizeof(BTS_PyUpdateBirthBase_ReceiveDeactivation) == 0x000008, "Wrong size on BTS_PyUpdateBirthBase_ReceiveDeactivation");
static_assert(offsetof(BTS_PyUpdateBirthBase_ReceiveDeactivation, OwnerActor) == 0x000000, "Member 'BTS_PyUpdateBirthBase_ReceiveDeactivation::OwnerActor' has a wrong offset!");

}

