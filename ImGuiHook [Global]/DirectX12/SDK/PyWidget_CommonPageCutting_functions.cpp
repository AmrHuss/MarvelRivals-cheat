#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CommonPageCutting

#include "Basic.hpp"

#include "PyWidget_CommonPageCutting_classes.hpp"
#include "PyWidget_CommonPageCutting_parameters.hpp"


namespace SDK
{

// DelegateFunction PyWidget_CommonPageCutting.PyWidget_CommonPageCutting.OnPageChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   Page                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonPageCutting::OnPageChanged__DelegateSignature(int32 Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonPageCutting", "OnPageChanged__DelegateSignature");

	Params::PyWidget_CommonPageCutting_OnPageChanged__DelegateSignature Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_CommonPageCutting.PyWidget_CommonPageCutting.OnPageReset__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   CurrentNum_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum_0                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonPageCutting::OnPageReset__DelegateSignature(int32 CurrentNum_0, int32 MaxNum_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonPageCutting", "OnPageReset__DelegateSignature");

	Params::PyWidget_CommonPageCutting_OnPageReset__DelegateSignature Parms{};

	Parms.CurrentNum_0 = CurrentNum_0;
	Parms.MaxNum_0 = MaxNum_0;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_CommonPageCutting.PyWidget_CommonPageCutting.PreConstruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonPageCutting::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonPageCutting", "PreConstruct");

	Params::PyWidget_CommonPageCutting_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CommonPageCutting.PyWidget_CommonPageCutting.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CommonPageCutting::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonPageCutting", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CommonPageCutting.PyWidget_CommonPageCutting.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CommonPageCutting::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonPageCutting", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CommonPageCutting.PyWidget_CommonPageCutting.OnReceiveInputAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ActionName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputEvent                             EventType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonPageCutting::OnReceiveInputAction(class FName ActionName, const EInputEvent EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonPageCutting", "OnReceiveInputAction");

	Params::PyWidget_CommonPageCutting_OnReceiveInputAction Parms{};

	Parms.ActionName = ActionName;
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CommonPageCutting.PyWidget_CommonPageCutting.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonPageCutting::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonPageCutting", "MarvelSetVisible");

	Params::PyWidget_CommonPageCutting_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
