#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_exit_stage_logic

#include "Basic.hpp"

#include "Ability_exit_stage_logic_classes.hpp"
#include "Ability_exit_stage_logic_parameters.hpp"


namespace SDK
{

// PythonFunction ability_exit_stage_logic.PyAIAbilityExitStageLogicBase.InitLogic
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAIAbilityExitStageLogicBase::InitLogic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAIAbilityExitStageLogicBase", "InitLogic");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction ability_exit_stage_logic.PyAIAbilityExitStageLogicBase.CheckLogic
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIAbilityUsage                  AbilityUsage                                           (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class AMarvelAIController*              Controller                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAIAbilityExitStageLogicBase::CheckLogic(const struct FAIAbilityUsage& AbilityUsage, class AMarvelAIController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAIAbilityExitStageLogicBase", "CheckLogic");

	Params::PyAIAbilityExitStageLogicBase_CheckLogic Parms{};

	Parms.AbilityUsage = std::move(AbilityUsage);
	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
