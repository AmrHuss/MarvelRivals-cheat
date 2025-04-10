#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101401

#include "Basic.hpp"

#include "PyAbility_101401_classes.hpp"
#include "PyAbility_101401_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_101401.PyAbility_101401.GetCurrentTimelineIndex
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UPyAbility_101401::GetCurrentTimelineIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101401", "GetCurrentTimelineIndex");

	Params::PyAbility_101401_GetCurrentTimelineIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

