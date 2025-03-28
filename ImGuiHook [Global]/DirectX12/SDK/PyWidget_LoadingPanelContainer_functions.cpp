#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LoadingPanelContainer

#include "Basic.hpp"

#include "PyWidget_LoadingPanelContainer_classes.hpp"
#include "PyWidget_LoadingPanelContainer_parameters.hpp"


namespace SDK
{

// DelegateFunction PyWidget_LoadingPanelContainer.PyWidget_LoadingPanelContainer.OnVisibleChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                                    bInVisible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_LoadingPanelContainer::OnVisibleChanged__DelegateSignature(bool bInVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_LoadingPanelContainer", "OnVisibleChanged__DelegateSignature");

	Params::PyWidget_LoadingPanelContainer_OnVisibleChanged__DelegateSignature Parms{};

	Parms.bInVisible = bInVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_LoadingPanelContainer.PyWidget_LoadingPanelContainer.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_LoadingPanelContainer::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_LoadingPanelContainer", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_LoadingPanelContainer.PyWidget_LoadingPanelContainer.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_LoadingPanelContainer::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_LoadingPanelContainer", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_LoadingPanelContainer.PyWidget_LoadingPanelContainer.MarvelSetVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bInVisible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_LoadingPanelContainer::MarvelSetVisible(bool bInVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_LoadingPanelContainer", "MarvelSetVisible");

	Params::PyWidget_LoadingPanelContainer_MarvelSetVisible Parms{};

	Parms.bInVisible = bInVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

