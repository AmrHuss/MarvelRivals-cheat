#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103461

#include "Basic.hpp"

#include "PyAbility_103461_classes.hpp"
#include "PyAbility_103461_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_103461.PyAbility_103461.K2_ActivateAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_103461::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103461", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103461.PyAbility_103461.K2_OnEndAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_103461::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103461", "K2_OnEndAbility");

	Params::PyAbility_103461_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103461.PyAbility_103461.OnProjectileSuccess
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           SpawnActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyAbility_103461::OnProjectileSuccess(class AActor* SpawnActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103461", "OnProjectileSuccess");

	Params::PyAbility_103461_OnProjectileSuccess Parms{};

	Parms.SpawnActor = SpawnActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_103461.PyAbility_103461.OnProjectileEndTask
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Projectile                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyAbility_103461::OnProjectileEndTask(class AActor* Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_103461", "OnProjectileEndTask");

	Params::PyAbility_103461_OnProjectileEndTask Parms{};

	Parms.Projectile = Projectile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
