#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelPartStatistics

#include "Basic.hpp"

#include "PyLevelPartStatistics_classes.hpp"
#include "PyLevelPartStatistics_parameters.hpp"


namespace SDK
{

// PythonFunction PyLevelPartStatistics.PyLevelPartStatistics.Initialize
// (Native, Public, BlueprintCallable)

void UPyLevelPartStatistics::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelPartStatistics", "Initialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelPartStatistics.PyLevelPartStatistics.Shutdown
// (Native, Public, BlueprintCallable)

void UPyLevelPartStatistics::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelPartStatistics", "Shutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelPartStatistics.PyLevelPartStatistics.OnLevelPartStart
// (Native, Public, BlueprintCallable)

void UPyLevelPartStatistics::OnLevelPartStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelPartStatistics", "OnLevelPartStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelPartStatistics.PyLevelPartStatistics.OnLevelPartEnd
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyLevelPartStatistics::OnLevelPartEnd(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelPartStatistics", "OnLevelPartEnd");

	Params::PyLevelPartStatistics_OnLevelPartEnd Parms{};

	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
