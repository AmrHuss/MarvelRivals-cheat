#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SettingPageOther

#include "Basic.hpp"

#include "PyWidget_SettingPageOther_classes.hpp"
#include "PyWidget_SettingPageOther_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_SettingPageOther.PyWidget_SettingPageOther.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_SettingPageOther::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SettingPageOther", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SettingPageOther.PyWidget_SettingPageOther.PreConstruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SettingPageOther::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SettingPageOther", "PreConstruct");

	Params::PyWidget_SettingPageOther_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SettingPageOther.PyWidget_SettingPageOther.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_SettingPageOther::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SettingPageOther", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SettingPageOther.PyWidget_SettingPageOther.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_SettingPageOther::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SettingPageOther", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
