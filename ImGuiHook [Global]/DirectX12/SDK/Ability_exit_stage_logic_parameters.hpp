#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_exit_stage_logic

#include "Basic.hpp"

#include "MarvelAI_structs.hpp"


namespace SDK::Params
{

// PythonFunction ability_exit_stage_logic.PyAIAbilityExitStageLogicBase.CheckLogic
// 0x00F8 (0x00F8 - 0x0000)
struct PyAIAbilityExitStageLogicBase_CheckLogic final
{
public:
	struct FAIAbilityUsage                        AbilityUsage;                                      // 0x0000(0x00E8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class AMarvelAIController*                    Controller;                                        // 0x00E8(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAIAbilityExitStageLogicBase_CheckLogic) == 0x000008, "Wrong alignment on PyAIAbilityExitStageLogicBase_CheckLogic");
static_assert(sizeof(PyAIAbilityExitStageLogicBase_CheckLogic) == 0x0000F8, "Wrong size on PyAIAbilityExitStageLogicBase_CheckLogic");
static_assert(offsetof(PyAIAbilityExitStageLogicBase_CheckLogic, AbilityUsage) == 0x000000, "Member 'PyAIAbilityExitStageLogicBase_CheckLogic::AbilityUsage' has a wrong offset!");
static_assert(offsetof(PyAIAbilityExitStageLogicBase_CheckLogic, Controller) == 0x0000E8, "Member 'PyAIAbilityExitStageLogicBase_CheckLogic::Controller' has a wrong offset!");
static_assert(offsetof(PyAIAbilityExitStageLogicBase_CheckLogic, ReturnValue) == 0x0000F0, "Member 'PyAIAbilityExitStageLogicBase_CheckLogic::ReturnValue' has a wrong offset!");

}
