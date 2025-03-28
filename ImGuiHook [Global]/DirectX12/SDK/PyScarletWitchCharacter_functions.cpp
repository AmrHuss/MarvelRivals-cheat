#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyScarletWitchCharacter

#include "Basic.hpp"

#include "PyScarletWitchCharacter_classes.hpp"
#include "PyScarletWitchCharacter_parameters.hpp"


namespace SDK
{

// PythonFunction PyScarletWitchCharacter.PyScarletWitchChildActor.OnGenericGameplayTagUpdate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InTag                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyScarletWitchChildActor::OnGenericGameplayTagUpdate(const struct FGameplayTag& InTag, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyScarletWitchChildActor", "OnGenericGameplayTagUpdate");

	Params::PyScarletWitchChildActor_OnGenericGameplayTagUpdate Parms{};

	Parms.InTag = std::move(InTag);
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyScarletWitchCharacter.PyScarletWitchCharacter.ReceiveBeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyScarletWitchCharacter::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyScarletWitchCharacter", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyScarletWitchCharacter.PyScarletWitchCharacter.ReceiveEndPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          Reason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyScarletWitchCharacter::ReceiveEndPlay(EEndPlayReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyScarletWitchCharacter", "ReceiveEndPlay");

	Params::PyScarletWitchCharacter_ReceiveEndPlay Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

