#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_PyCheckIsInBirthBase

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction BTD_PyCheckIsInBirthBase.BTD_PyCheckIsInBirthBase.PerformConditionCheckAI
// 0x0018 (0x0018 - 0x0000)
struct BTD_PyCheckIsInBirthBase_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_PyCheckIsInBirthBase_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTD_PyCheckIsInBirthBase_PerformConditionCheckAI");
static_assert(sizeof(BTD_PyCheckIsInBirthBase_PerformConditionCheckAI) == 0x000018, "Wrong size on BTD_PyCheckIsInBirthBase_PerformConditionCheckAI");
static_assert(offsetof(BTD_PyCheckIsInBirthBase_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTD_PyCheckIsInBirthBase_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_PyCheckIsInBirthBase_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTD_PyCheckIsInBirthBase_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_PyCheckIsInBirthBase_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTD_PyCheckIsInBirthBase_PerformConditionCheckAI::ReturnValue' has a wrong offset!");

}
