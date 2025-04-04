#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_NavigationBar

#include "Basic.hpp"

#include "PyWidget_Common_NavigationBar_classes.hpp"
#include "PyWidget_Common_NavigationBar_parameters.hpp"


namespace SDK
{

// DelegateFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.OnNavClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   Index_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_NavigationBar::OnNavClicked__DelegateSignature(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "OnNavClicked__DelegateSignature");

	Params::PyWidget_Common_NavigationBar_OnNavClicked__DelegateSignature Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.OnSubNavClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   ParentIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ChildIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_NavigationBar::OnSubNavClicked__DelegateSignature(int32 ParentIndex, int32 ChildIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "OnSubNavClicked__DelegateSignature");

	Params::PyWidget_Common_NavigationBar_OnSubNavClicked__DelegateSignature Parms{};

	Parms.ParentIndex = ParentIndex;
	Parms.ChildIndex = ChildIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.OnNavWidgetCreate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   Index_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      NavWidget                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_NavigationBar::OnNavWidgetCreate__DelegateSignature(int32 Index_0, class UUserWidget* NavWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "OnNavWidgetCreate__DelegateSignature");

	Params::PyWidget_Common_NavigationBar_OnNavWidgetCreate__DelegateSignature Parms{};

	Parms.Index_0 = Index_0;
	Parms.NavWidget = NavWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.OnSubNavWidgetCreate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   ParentIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ChildIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      NavWidget                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_NavigationBar::OnSubNavWidgetCreate__DelegateSignature(int32 ParentIndex, int32 ChildIndex, class UUserWidget* NavWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "OnSubNavWidgetCreate__DelegateSignature");

	Params::PyWidget_Common_NavigationBar_OnSubNavWidgetCreate__DelegateSignature Parms{};

	Parms.ParentIndex = ParentIndex;
	Parms.ChildIndex = ChildIndex;
	Parms.NavWidget = NavWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.OnNavWidgetRemove__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   Index_0                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_NavigationBar::OnNavWidgetRemove__DelegateSignature(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "OnNavWidgetRemove__DelegateSignature");

	Params::PyWidget_Common_NavigationBar_OnNavWidgetRemove__DelegateSignature Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.OnSubNavWidgetRemove__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   ParentIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ChildIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_NavigationBar::OnSubNavWidgetRemove__DelegateSignature(int32 ParentIndex, int32 ChildIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "OnSubNavWidgetRemove__DelegateSignature");

	Params::PyWidget_Common_NavigationBar_OnSubNavWidgetRemove__DelegateSignature Parms{};

	Parms.ParentIndex = ParentIndex;
	Parms.ChildIndex = ChildIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.OnSubNavCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UPyWidget_Common_NavigationBar::OnSubNavCreated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "OnSubNavCreated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// PythonFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Common_NavigationBar::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.PreConstruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_NavigationBar::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "PreConstruct");

	Params::PyWidget_Common_NavigationBar_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Common_NavigationBar::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Common_NavigationBar::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_NavigationBar::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "MarvelSetVisible");

	Params::PyWidget_Common_NavigationBar_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_NavigationBar.PyWidget_Common_NavigationBar.GetEnableRegisterInputContextBp
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyWidget_Common_NavigationBar::GetEnableRegisterInputContextBp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_NavigationBar", "GetEnableRegisterInputContextBp");

	Params::PyWidget_Common_NavigationBar_GetEnableRegisterInputContextBp Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

