#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyScope_101541

#include "Basic.hpp"

#include "PyScope_101541_classes.hpp"
#include "PyScope_101541_parameters.hpp"


namespace SDK
{

// PythonFunction PyScope_101541.PyScope_101541_Common.K2_OnBeginAgentTask
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyScope_101541_Common::K2_OnBeginAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyScope_101541_Common", "K2_OnBeginAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyScope_101541.PyScope_101541_Common.K2_OnEndAgentTask
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyScope_101541_Common::K2_OnEndAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyScope_101541_Common", "K2_OnEndAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyScope_101541.PyScope_10154106.TraceResults
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          TraceSource                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>               HitResults                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyScope_10154106::TraceResults(class UObject* TraceSource, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyScope_10154106", "TraceResults");

	Params::PyScope_10154106_TraceResults Parms{};

	Parms.TraceSource = TraceSource;
	Parms.HitResults = std::move(HitResults);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyScope_101541.PyScope_10154106.K2_OnEndAgentTask
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyScope_10154106::K2_OnEndAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyScope_10154106", "K2_OnEndAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyScope_101541.PyTraceComponent_10154106.K2_Initialize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyTraceComponent_10154106::K2_Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTraceComponent_10154106", "K2_Initialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
