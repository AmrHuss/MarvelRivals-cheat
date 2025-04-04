#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CareerPlayerInfo

#include "Basic.hpp"

#include "PyWidget_CareerPlayerInfo_classes.hpp"
#include "PyWidget_CareerPlayerInfo_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_CareerPlayerInfo.PyWidget_CareerPlayerInfo.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CareerPlayerInfo::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CareerPlayerInfo", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CareerPlayerInfo.PyWidget_CareerPlayerInfo.PreConstruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CareerPlayerInfo::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CareerPlayerInfo", "PreConstruct");

	Params::PyWidget_CareerPlayerInfo_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CareerPlayerInfo.PyWidget_CareerPlayerInfo.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CareerPlayerInfo::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CareerPlayerInfo", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CareerPlayerInfo.PyWidget_CareerPlayerInfo.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CareerPlayerInfo::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CareerPlayerInfo", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

