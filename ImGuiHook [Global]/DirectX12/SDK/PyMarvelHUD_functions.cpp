#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelHUD

#include "Basic.hpp"

#include "PyMarvelHUD_classes.hpp"
#include "PyMarvelHUD_parameters.hpp"


namespace SDK
{

// PythonFunction PyMarvelHUD.PyMarvelHUD.ReceiveBeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyMarvelHUD::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelHUD", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelHUD.PyMarvelHUD.K2_OnReset
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyMarvelHUD::K2_OnReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelHUD", "K2_OnReset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelHUD.PyMarvelHUD.ReceiveEndPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          Reason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyMarvelHUD::ReceiveEndPlay(EEndPlayReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelHUD", "ReceiveEndPlay");

	Params::PyMarvelHUD_ReceiveEndPlay Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelHUD.PyMarvelHUD.GetTopWidget
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* APyMarvelHUD::GetTopWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelHUD", "GetTopWidget");

	Params::PyMarvelHUD_GetTopWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyMarvelHUD.PyMarvelHUD.WidgetIsInStack
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                          TargetWidget                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool APyMarvelHUD::WidgetIsInStack(class UWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelHUD", "WidgetIsInStack");

	Params::PyMarvelHUD_WidgetIsInStack Parms{};

	Parms.TargetWidget = TargetWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
