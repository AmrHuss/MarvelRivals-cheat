#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Mall_Recommend

#include "Basic.hpp"

#include "PyWidget_Mall_Recommend_classes.hpp"
#include "PyWidget_Mall_Recommend_parameters.hpp"


namespace SDK
{

// DelegateFunction PyWidget_Mall_Recommend.PyWidget_Mall_Recommend_Panel.OnArrowBtnHoveredChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                                    IsHovered_0                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Mall_Recommend_Panel::OnArrowBtnHoveredChanged__DelegateSignature(bool IsHovered_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Mall_Recommend_Panel", "OnArrowBtnHoveredChanged__DelegateSignature");

	Params::PyWidget_Mall_Recommend_Panel_OnArrowBtnHoveredChanged__DelegateSignature Parms{};

	Parms.IsHovered_0 = IsHovered_0;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_Mall_Recommend.PyWidget_Mall_Recommend_Panel.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Mall_Recommend_Panel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Mall_Recommend_Panel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Mall_Recommend.PyWidget_Mall_Recommend_Panel.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Mall_Recommend_Panel::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Mall_Recommend_Panel", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Mall_Recommend.PyWidget_Mall_Recommend_Panel.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_Mall_Recommend_Panel::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Mall_Recommend_Panel", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Mall_Recommend.PyWidget_Mall_Recommend_Panel.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_Mall_Recommend_Panel::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Mall_Recommend_Panel", "OnAnimationFinished");

	Params::PyWidget_Mall_Recommend_Panel_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

