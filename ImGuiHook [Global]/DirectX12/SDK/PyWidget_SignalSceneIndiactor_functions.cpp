#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SignalSceneIndiactor

#include "Basic.hpp"

#include "PyWidget_SignalSceneIndiactor_classes.hpp"
#include "PyWidget_SignalSceneIndiactor_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_SignalSceneIndiactor.PyWdiget_SignalSceneIndicator.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWdiget_SignalSceneIndicator::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWdiget_SignalSceneIndicator", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SignalSceneIndiactor.PyWdiget_SignalSceneIndicator.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWdiget_SignalSceneIndicator::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWdiget_SignalSceneIndicator", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SignalSceneIndiactor.PyWdiget_SignalSceneIndicator.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWdiget_SignalSceneIndicator::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWdiget_SignalSceneIndicator", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SignalSceneIndiactor.PyWdiget_SignalSceneIndicator.SetDying
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDying                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWdiget_SignalSceneIndicator::SetDying(bool IsDying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWdiget_SignalSceneIndicator", "SetDying");

	Params::PyWdiget_SignalSceneIndicator_SetDying Parms{};

	Parms.IsDying = IsDying;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SignalSceneIndiactor.PyWdiget_SignalSceneIndicator.OnCueTagActivated
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             CueTag                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWdiget_SignalSceneIndicator::OnCueTagActivated(class FName CueTag, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWdiget_SignalSceneIndicator", "OnCueTagActivated");

	Params::PyWdiget_SignalSceneIndicator_OnCueTagActivated Parms{};

	Parms.CueTag = CueTag;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SignalSceneIndiactor.PyWdiget_SignalSceneIndicator.OnSculptChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   SculptID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWdiget_SignalSceneIndicator::OnSculptChanged(int32 SculptID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWdiget_SignalSceneIndicator", "OnSculptChanged");

	Params::PyWdiget_SignalSceneIndicator_OnSculptChanged Parms{};

	Parms.SculptID = SculptID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SignalSceneIndiactor.PyWdiget_SignalSceneIndicator.OnViewCharacterChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMarvelBaseCharacter*             InChar                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWdiget_SignalSceneIndicator::OnViewCharacterChanged(class AMarvelBaseCharacter* InChar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWdiget_SignalSceneIndicator", "OnViewCharacterChanged");

	Params::PyWdiget_SignalSceneIndicator_OnViewCharacterChanged Parms{};

	Parms.InChar = InChar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SignalSceneIndiactor.PyWdiget_SignalSceneIndicator.K2_PostProjectionResultCalculated
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWdiget_SignalSceneIndicator::K2_PostProjectionResultCalculated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWdiget_SignalSceneIndicator", "K2_PostProjectionResultCalculated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SignalSceneIndiactor.PyWdiget_SignalSceneIndicator.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInVisible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWdiget_SignalSceneIndicator::MarvelSetVisible(bool bInVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWdiget_SignalSceneIndicator", "MarvelSetVisible");

	Params::PyWdiget_SignalSceneIndicator_MarvelSetVisible Parms{};

	Parms.bInVisible = bInVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_SignalSceneIndiactor.PyWdiget_SignalSceneIndicator.ShouldBeVisible
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyWdiget_SignalSceneIndicator::ShouldBeVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWdiget_SignalSceneIndicator", "ShouldBeVisible");

	Params::PyWdiget_SignalSceneIndicator_ShouldBeVisible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
