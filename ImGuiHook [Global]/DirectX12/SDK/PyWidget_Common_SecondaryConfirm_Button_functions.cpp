#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_SecondaryConfirm_Button

#include "Basic.hpp"

#include "PyWidget_Common_SecondaryConfirm_Button_classes.hpp"
#include "PyWidget_Common_SecondaryConfirm_Button_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_Common_SecondaryConfirm_Button.PyWidget_Common_Confirm_Button.SetBtnIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Enabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Common_Confirm_Button::SetBtnIsEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_Confirm_Button", "SetBtnIsEnabled");

	Params::PyWidget_Common_Confirm_Button_SetBtnIsEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction PyWidget_Common_SecondaryConfirm_Button.PyWidget_Common_SecondaryConfirm_Button.OnClickConfirm__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UPyWidget_Common_SecondaryConfirm_Button::OnClickConfirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_SecondaryConfirm_Button", "OnClickConfirm__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// DelegateFunction PyWidget_Common_SecondaryConfirm_Button.PyWidget_Common_SecondaryConfirm_Button.OnClickCancel__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UPyWidget_Common_SecondaryConfirm_Button::OnClickCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_SecondaryConfirm_Button", "OnClickCancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// PythonFunction PyWidget_Common_SecondaryConfirm_Button.PyWidget_Common_SecondaryConfirm_Button.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Common_SecondaryConfirm_Button::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_SecondaryConfirm_Button", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_SecondaryConfirm_Button.PyWidget_Common_SecondaryConfirm_Button.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Common_SecondaryConfirm_Button::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_SecondaryConfirm_Button", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Common_SecondaryConfirm_Button.PyWidget_Common_SecondaryConfirm_Button.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Common_SecondaryConfirm_Button::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Common_SecondaryConfirm_Button", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
