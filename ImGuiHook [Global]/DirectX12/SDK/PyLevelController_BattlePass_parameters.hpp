#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelController_BattlePass

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyLevelController_BattlePass.PyLevelController_BattlePass.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyLevelController_BattlePass_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLevelController_BattlePass_ReceiveEndPlay) == 0x000001, "Wrong alignment on PyLevelController_BattlePass_ReceiveEndPlay");
static_assert(sizeof(PyLevelController_BattlePass_ReceiveEndPlay) == 0x000001, "Wrong size on PyLevelController_BattlePass_ReceiveEndPlay");
static_assert(offsetof(PyLevelController_BattlePass_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'PyLevelController_BattlePass_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}
