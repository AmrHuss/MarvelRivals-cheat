#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyDeathCameraZone

#include "Basic.hpp"

#include "PyDeathCameraZone_classes.hpp"


namespace SDK
{

// PythonFunction PyDeathCameraZone.PyDeathCamaraZone.ReceiveBeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyDeathCamaraZone::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyDeathCamaraZone", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
