#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102612

#include "Basic.hpp"

#include "PyAbility_102612_classes.hpp"
#include "PyAbility_102612_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_102612.PyAbility_102612.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102612::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102612", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102612.PyAbility_102612.CanActivate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_102612::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102612", "CanActivate");

	Params::PyAbility_102612_CanActivate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_102612.PyAbility_102612.K2_CanGetOnWall
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_102612::K2_CanGetOnWall()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102612", "K2_CanGetOnWall");

	Params::PyAbility_102612_K2_CanGetOnWall Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_102612.PyAbility_102612.ResetDefault
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102612::ResetDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102612", "ResetDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102612.PyAbility_102612.K2_ActivateAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102612::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102612", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102612.PyAbility_102612.K2_OnEndAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_102612::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102612", "K2_OnEndAbility");

	Params::PyAbility_102612_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102612.PyAbility_102612.OnMovementChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// class ACharacter*                       MyCharacter                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EMovementMode                           PrevMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   CustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_102612::OnMovementChanged(class ACharacter* MyCharacter, EMovementMode PrevMode, uint8 CustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102612", "OnMovementChanged");

	Params::PyAbility_102612_OnMovementChanged Parms{};

	Parms.MyCharacter = MyCharacter;
	Parms.PrevMode = PrevMode;
	Parms.CustomMode = CustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102612.PyAbility_102612.OnCooldownTagUpdated
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                     TagUpdated                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    TagExists                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_102612::OnCooldownTagUpdated(const struct FGameplayTag& TagUpdated, bool TagExists)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102612", "OnCooldownTagUpdated");

	Params::PyAbility_102612_OnCooldownTagUpdated Parms{};

	Parms.TagUpdated = std::move(TagUpdated);
	Parms.TagExists = TagExists;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
