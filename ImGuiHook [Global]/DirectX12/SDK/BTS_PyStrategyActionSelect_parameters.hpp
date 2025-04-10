#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_PyStrategyActionSelect

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction BTS_PyStrategyActionSelect.Requirement_HeroNumericCheck.Requirement
// 0x0018 (0x0018 - 0x0000)
struct Requirement_HeroNumericCheck_Requirement final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Requirement_HeroNumericCheck_Requirement) == 0x000008, "Wrong alignment on Requirement_HeroNumericCheck_Requirement");
static_assert(sizeof(Requirement_HeroNumericCheck_Requirement) == 0x000018, "Wrong size on Requirement_HeroNumericCheck_Requirement");
static_assert(offsetof(Requirement_HeroNumericCheck_Requirement, OwnerController) == 0x000000, "Member 'Requirement_HeroNumericCheck_Requirement::OwnerController' has a wrong offset!");
static_assert(offsetof(Requirement_HeroNumericCheck_Requirement, ControlledPawn) == 0x000008, "Member 'Requirement_HeroNumericCheck_Requirement::ControlledPawn' has a wrong offset!");
static_assert(offsetof(Requirement_HeroNumericCheck_Requirement, ReturnValue) == 0x000010, "Member 'Requirement_HeroNumericCheck_Requirement::ReturnValue' has a wrong offset!");

// PythonFunction BTS_PyStrategyActionSelect.Requirement_CheckSideNumeric.Requirement
// 0x0018 (0x0018 - 0x0000)
struct Requirement_CheckSideNumeric_Requirement final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Requirement_CheckSideNumeric_Requirement) == 0x000008, "Wrong alignment on Requirement_CheckSideNumeric_Requirement");
static_assert(sizeof(Requirement_CheckSideNumeric_Requirement) == 0x000018, "Wrong size on Requirement_CheckSideNumeric_Requirement");
static_assert(offsetof(Requirement_CheckSideNumeric_Requirement, OwnerController) == 0x000000, "Member 'Requirement_CheckSideNumeric_Requirement::OwnerController' has a wrong offset!");
static_assert(offsetof(Requirement_CheckSideNumeric_Requirement, ControlledPawn) == 0x000008, "Member 'Requirement_CheckSideNumeric_Requirement::ControlledPawn' has a wrong offset!");
static_assert(offsetof(Requirement_CheckSideNumeric_Requirement, ReturnValue) == 0x000010, "Member 'Requirement_CheckSideNumeric_Requirement::ReturnValue' has a wrong offset!");

// PythonFunction BTS_PyStrategyActionSelect.Requirement_ControlSide.Requirement
// 0x0018 (0x0018 - 0x0000)
struct Requirement_ControlSide_Requirement final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Requirement_ControlSide_Requirement) == 0x000008, "Wrong alignment on Requirement_ControlSide_Requirement");
static_assert(sizeof(Requirement_ControlSide_Requirement) == 0x000018, "Wrong size on Requirement_ControlSide_Requirement");
static_assert(offsetof(Requirement_ControlSide_Requirement, OwnerController) == 0x000000, "Member 'Requirement_ControlSide_Requirement::OwnerController' has a wrong offset!");
static_assert(offsetof(Requirement_ControlSide_Requirement, ControlledPawn) == 0x000008, "Member 'Requirement_ControlSide_Requirement::ControlledPawn' has a wrong offset!");
static_assert(offsetof(Requirement_ControlSide_Requirement, ReturnValue) == 0x000010, "Member 'Requirement_ControlSide_Requirement::ReturnValue' has a wrong offset!");

// PythonFunction BTS_PyStrategyActionSelect.Requirement_ControlSideProgress.Requirement
// 0x0018 (0x0018 - 0x0000)
struct Requirement_ControlSideProgress_Requirement final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Requirement_ControlSideProgress_Requirement) == 0x000008, "Wrong alignment on Requirement_ControlSideProgress_Requirement");
static_assert(sizeof(Requirement_ControlSideProgress_Requirement) == 0x000018, "Wrong size on Requirement_ControlSideProgress_Requirement");
static_assert(offsetof(Requirement_ControlSideProgress_Requirement, OwnerController) == 0x000000, "Member 'Requirement_ControlSideProgress_Requirement::OwnerController' has a wrong offset!");
static_assert(offsetof(Requirement_ControlSideProgress_Requirement, ControlledPawn) == 0x000008, "Member 'Requirement_ControlSideProgress_Requirement::ControlledPawn' has a wrong offset!");
static_assert(offsetof(Requirement_ControlSideProgress_Requirement, ReturnValue) == 0x000010, "Member 'Requirement_ControlSideProgress_Requirement::ReturnValue' has a wrong offset!");

// PythonFunction BTS_PyStrategyActionSelect.Requirement_Timeout.Requirement
// 0x0018 (0x0018 - 0x0000)
struct Requirement_Timeout_Requirement final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Requirement_Timeout_Requirement) == 0x000008, "Wrong alignment on Requirement_Timeout_Requirement");
static_assert(sizeof(Requirement_Timeout_Requirement) == 0x000018, "Wrong size on Requirement_Timeout_Requirement");
static_assert(offsetof(Requirement_Timeout_Requirement, OwnerController) == 0x000000, "Member 'Requirement_Timeout_Requirement::OwnerController' has a wrong offset!");
static_assert(offsetof(Requirement_Timeout_Requirement, ControlledPawn) == 0x000008, "Member 'Requirement_Timeout_Requirement::ControlledPawn' has a wrong offset!");
static_assert(offsetof(Requirement_Timeout_Requirement, ReturnValue) == 0x000010, "Member 'Requirement_Timeout_Requirement::ReturnValue' has a wrong offset!");

}

