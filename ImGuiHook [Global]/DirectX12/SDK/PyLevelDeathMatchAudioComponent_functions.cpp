#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelDeathMatchAudioComponent

#include "Basic.hpp"

#include "PyLevelDeathMatchAudioComponent_classes.hpp"


namespace SDK
{

// PythonFunction PyLevelDeathMatchAudioComponent.PyLevelDeathMatchAudioComponent.ReceiveBeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyLevelDeathMatchAudioComponent::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelDeathMatchAudioComponent", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

