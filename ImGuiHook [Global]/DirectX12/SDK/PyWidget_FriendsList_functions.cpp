#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_FriendsList

#include "Basic.hpp"

#include "PyWidget_FriendsList_classes.hpp"
#include "PyWidget_FriendsList_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_FriendsList.PyWidget_Friends_List.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Friends_List::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Friends_List", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_FriendsList.PyWidget_Friends_List.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Friends_List::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Friends_List", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_FriendsList.PyWidget_Friends_List.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Friends_List::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Friends_List", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_FriendsList.PyWidget_Friends_List.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Friends_List::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Friends_List", "MarvelSetVisible");

	Params::PyWidget_Friends_List_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_FriendsList.PyWidget_Friends_List.SetFocusingWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Friends_List::SetFocusingWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Friends_List", "SetFocusingWidget");

	Params::PyWidget_Friends_List_SetFocusingWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_FriendsList.PyWidget_Friends_ListTitle.SetIsHover
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsHover_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Friends_ListTitle::SetIsHover(bool IsHover_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Friends_ListTitle", "SetIsHover");

	Params::PyWidget_Friends_ListTitle_SetIsHover Parms{};

	Parms.IsHover_0 = IsHover_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
