#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyTabData_1018

#include "Basic.hpp"

#include "PyTabData_1018_classes.hpp"
#include "PyTabData_1018_parameters.hpp"


namespace SDK
{

// PythonFunction PyTabData_1018.PyTabData_1018.K2_Initialize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyTabData_1018::K2_Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTabData_1018", "K2_Initialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyTabData_1018.PyTabData_1018.K2_Shutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyTabData_1018::K2_Shutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTabData_1018", "K2_Shutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyTabData_1018.PyTabData_1018.OnPortalChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           InActor                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyTabData_1018::OnPortalChanged(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTabData_1018", "OnPortalChanged");

	Params::PyTabData_1018_OnPortalChanged Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
