#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyEscortAudioComponent

#include "Basic.hpp"

#include "PyEscortAudioComponent_classes.hpp"
#include "PyEscortAudioComponent_parameters.hpp"


namespace SDK
{

// PythonFunction PyEscortAudioComponent.PyEscortAudioComponent.DispatchOnPayloadReachCheckpoint
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          TaskOwner                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                                   Magnitude                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyEscortAudioComponent::DispatchOnPayloadReachCheckpoint(class UObject* TaskOwner, int64 Magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyEscortAudioComponent", "DispatchOnPayloadReachCheckpoint");

	Params::PyEscortAudioComponent_DispatchOnPayloadReachCheckpoint Parms{};

	Parms.TaskOwner = TaskOwner;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
