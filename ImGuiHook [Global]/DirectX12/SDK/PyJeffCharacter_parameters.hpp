#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyJeffCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyJeffCharacter.PyJeffCharacter.K2_OnMovementModeChanged
// 0x0004 (0x0004 - 0x0000)
struct PyJeffCharacter_K2_OnMovementModeChanged final
{
public:
	EMovementMode                                 PreMovementMode;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 NewMovementMode;                                   // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Precustom;                                         // 0x0002(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         NewCustomMode;                                     // 0x0003(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyJeffCharacter_K2_OnMovementModeChanged) == 0x000001, "Wrong alignment on PyJeffCharacter_K2_OnMovementModeChanged");
static_assert(sizeof(PyJeffCharacter_K2_OnMovementModeChanged) == 0x000004, "Wrong size on PyJeffCharacter_K2_OnMovementModeChanged");
static_assert(offsetof(PyJeffCharacter_K2_OnMovementModeChanged, PreMovementMode) == 0x000000, "Member 'PyJeffCharacter_K2_OnMovementModeChanged::PreMovementMode' has a wrong offset!");
static_assert(offsetof(PyJeffCharacter_K2_OnMovementModeChanged, NewMovementMode) == 0x000001, "Member 'PyJeffCharacter_K2_OnMovementModeChanged::NewMovementMode' has a wrong offset!");
static_assert(offsetof(PyJeffCharacter_K2_OnMovementModeChanged, Precustom) == 0x000002, "Member 'PyJeffCharacter_K2_OnMovementModeChanged::Precustom' has a wrong offset!");
static_assert(offsetof(PyJeffCharacter_K2_OnMovementModeChanged, NewCustomMode) == 0x000003, "Member 'PyJeffCharacter_K2_OnMovementModeChanged::NewCustomMode' has a wrong offset!");

}
