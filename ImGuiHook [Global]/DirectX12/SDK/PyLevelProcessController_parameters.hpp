#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelProcessController

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyLevelProcessController.PyLevelProcessController.GetProcessController
// 0x0010 (0x0010 - 0x0000)
struct PyLevelProcessController_GetProcessController final
{
public:
	class AActor*                                 WCO;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMarvelLevelProcessController*          ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLevelProcessController_GetProcessController) == 0x000008, "Wrong alignment on PyLevelProcessController_GetProcessController");
static_assert(sizeof(PyLevelProcessController_GetProcessController) == 0x000010, "Wrong size on PyLevelProcessController_GetProcessController");
static_assert(offsetof(PyLevelProcessController_GetProcessController, WCO) == 0x000000, "Member 'PyLevelProcessController_GetProcessController::WCO' has a wrong offset!");
static_assert(offsetof(PyLevelProcessController_GetProcessController, ReturnValue) == 0x000008, "Member 'PyLevelProcessController_GetProcessController::ReturnValue' has a wrong offset!");

// PythonFunction PyLevelProcessController.PyLevelProcessController.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyLevelProcessController_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLevelProcessController_ReceiveEndPlay) == 0x000001, "Wrong alignment on PyLevelProcessController_ReceiveEndPlay");
static_assert(sizeof(PyLevelProcessController_ReceiveEndPlay) == 0x000001, "Wrong size on PyLevelProcessController_ReceiveEndPlay");
static_assert(offsetof(PyLevelProcessController_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'PyLevelProcessController_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// PythonFunction PyLevelProcessController.PyLevelProcessController.OnMatchStateChanged
// 0x0001 (0x0001 - 0x0000)
struct PyLevelProcessController_OnMatchStateChanged final
{
public:
	EMatchState                                   MatchState;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLevelProcessController_OnMatchStateChanged) == 0x000001, "Wrong alignment on PyLevelProcessController_OnMatchStateChanged");
static_assert(sizeof(PyLevelProcessController_OnMatchStateChanged) == 0x000001, "Wrong size on PyLevelProcessController_OnMatchStateChanged");
static_assert(offsetof(PyLevelProcessController_OnMatchStateChanged, MatchState) == 0x000000, "Member 'PyLevelProcessController_OnMatchStateChanged::MatchState' has a wrong offset!");

// PythonFunction PyLevelProcessController.PyLevelProcessController.GetCurrentLevelPartName
// 0x0010 (0x0010 - 0x0000)
struct PyLevelProcessController_GetCurrentLevelPartName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(PyLevelProcessController_GetCurrentLevelPartName) == 0x000008, "Wrong alignment on PyLevelProcessController_GetCurrentLevelPartName");
static_assert(sizeof(PyLevelProcessController_GetCurrentLevelPartName) == 0x000010, "Wrong size on PyLevelProcessController_GetCurrentLevelPartName");
static_assert(offsetof(PyLevelProcessController_GetCurrentLevelPartName, ReturnValue) == 0x000000, "Member 'PyLevelProcessController_GetCurrentLevelPartName::ReturnValue' has a wrong offset!");

// PythonFunction PyLevelProcessController.PyLevelProcessController.EndCurrentLevel
// 0x0010 (0x0010 - 0x0000)
struct PyLevelProcessController_EndCurrentLevel final
{
public:
	TArray<EBattleSide>                           Win_side_list;                                     // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyLevelProcessController_EndCurrentLevel) == 0x000008, "Wrong alignment on PyLevelProcessController_EndCurrentLevel");
static_assert(sizeof(PyLevelProcessController_EndCurrentLevel) == 0x000010, "Wrong size on PyLevelProcessController_EndCurrentLevel");
static_assert(offsetof(PyLevelProcessController_EndCurrentLevel, Win_side_list) == 0x000000, "Member 'PyLevelProcessController_EndCurrentLevel::Win_side_list' has a wrong offset!");

// PythonFunction PyLevelProcessController.PyLevelProcessController.SetGroupActorsMoveState
// 0x0001 (0x0001 - 0x0000)
struct PyLevelProcessController_SetGroupActorsMoveState final
{
public:
	bool                                          IsMoving;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLevelProcessController_SetGroupActorsMoveState) == 0x000001, "Wrong alignment on PyLevelProcessController_SetGroupActorsMoveState");
static_assert(sizeof(PyLevelProcessController_SetGroupActorsMoveState) == 0x000001, "Wrong size on PyLevelProcessController_SetGroupActorsMoveState");
static_assert(offsetof(PyLevelProcessController_SetGroupActorsMoveState, IsMoving) == 0x000000, "Member 'PyLevelProcessController_SetGroupActorsMoveState::IsMoving' has a wrong offset!");

}
