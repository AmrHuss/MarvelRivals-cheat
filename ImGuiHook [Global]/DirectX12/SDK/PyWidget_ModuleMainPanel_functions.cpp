#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_ModuleMainPanel

#include "Basic.hpp"

#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "PyWidget_ModuleMainPanel_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_ModuleMainPanel.PyWidget_ModuleMainPanel.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_ModuleMainPanel::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ModuleMainPanel", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ModuleMainPanel.PyWidget_ModuleMainPanel.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_ModuleMainPanel::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ModuleMainPanel", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ModuleMainPanel.PyWidget_ModuleMainPanel.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ModuleMainPanel::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ModuleMainPanel", "MarvelSetVisible");

	Params::PyWidget_ModuleMainPanel_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ModuleMainPanel.PyWidget_ModuleMainPanel.MarvelSetVisibleImmediately
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_ModuleMainPanel::MarvelSetVisibleImmediately(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ModuleMainPanel", "MarvelSetVisibleImmediately");

	Params::PyWidget_ModuleMainPanel_MarvelSetVisibleImmediately Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_ModuleMainPanel.PyWidget_ModuleMainPanel.GetEnableRegisterInputContextBp
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyWidget_ModuleMainPanel::GetEnableRegisterInputContextBp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_ModuleMainPanel", "GetEnableRegisterInputContextBp");

	Params::PyWidget_ModuleMainPanel_GetEnableRegisterInputContextBp Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
