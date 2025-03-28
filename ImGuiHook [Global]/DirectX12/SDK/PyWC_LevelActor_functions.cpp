#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWC_LevelActor

#include "Basic.hpp"

#include "PyWC_LevelActor_classes.hpp"
#include "PyWC_LevelActor_parameters.hpp"


namespace SDK
{

// PythonFunction PyWC_LevelActor.PyWC_LevelActor.ReceiveBeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWC_LevelActor::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWC_LevelActor", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWC_LevelActor.PyWC_LevelActor.SetAttachment
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           AttachedActor                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWC_LevelActor::SetAttachment(class AActor* AttachedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWC_LevelActor", "SetAttachment");

	Params::PyWC_LevelActor_SetAttachment Parms{};

	Parms.AttachedActor = AttachedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWC_LevelActor.PyWC_LevelActor.SetVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWC_LevelActor::SetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWC_LevelActor", "SetVisible");

	Params::PyWC_LevelActor_SetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

