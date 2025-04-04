#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103441

#include "Basic.hpp"

#include "PyAbility_103441_classes.hpp"
#include "PyAbility_103441_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_103441.PyAbility_103441.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_103441::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103441", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103441.PyAbility_103441.MissileEventNotify
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_103441::MissileEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103441", "MissileEventNotify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103441.PyAbility_103441.GetSpawnSocketInfo
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMarvelAbilitySocketInfo         ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FMarvelAbilitySocketInfo UPyAbility_103441::GetSpawnSocketInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103441", "GetSpawnSocketInfo");

	Params::PyAbility_103441_GetSpawnSocketInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_103441.PyAbility_103441.CanSpawnProjectile
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_103441::CanSpawnProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103441", "CanSpawnProjectile");

	Params::PyAbility_103441_CanSpawnProjectile Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

