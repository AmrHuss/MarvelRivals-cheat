#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102761

#include "Basic.hpp"

#include "PyAbility_102761_classes.hpp"
#include "PyAbility_102761_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_102761.PyEffectiveComponent_10276101.K2_OnPreApplyContainer
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>               HitResults                                             (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>               ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FHitResult> UPyEffectiveComponent_10276101::K2_OnPreApplyContainer(const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyEffectiveComponent_10276101", "K2_OnPreApplyContainer");

	Params::PyEffectiveComponent_10276101_K2_OnPreApplyContainer Parms{};

	Parms.HitResults = std::move(HitResults);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
