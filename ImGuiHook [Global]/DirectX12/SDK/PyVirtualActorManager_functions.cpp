#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyVirtualActorManager

#include "Basic.hpp"

#include "PyVirtualActorManager_classes.hpp"
#include "PyVirtualActorManager_parameters.hpp"


namespace SDK
{

// PythonFunction PyVirtualActorManager.PyVirtualActorManager.ReceiveBeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyVirtualActorManager::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyVirtualActorManager", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyVirtualActorManager.PyVirtualActorManager.ReceiveEndPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyVirtualActorManager::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyVirtualActorManager", "ReceiveEndPlay");

	Params::PyVirtualActorManager_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyVirtualActorManager.PyVirtualActorManager.OnEnterRound
// (Native, Public, BlueprintCallable)

void APyVirtualActorManager::OnEnterRound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyVirtualActorManager", "OnEnterRound");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyVirtualActorManager.PyVirtualActorManager.SpawnVirtualActor
// (Native, Public, BlueprintCallable)

void APyVirtualActorManager::SpawnVirtualActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyVirtualActorManager", "SpawnVirtualActor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

