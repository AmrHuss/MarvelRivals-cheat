#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CombatSituationUnit

#include "Basic.hpp"

#include "PyWidget_CombatSituationUnit_classes.hpp"
#include "PyWidget_CombatSituationUnit_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationPanel.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CombatSituationPanel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CombatSituationPanel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationPanel.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CombatSituationPanel::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CombatSituationPanel", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationPanel.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CombatSituationPanel::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CombatSituationPanel", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationPanel.OnReplayTimelineClickClearChildren
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   InValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CombatSituationPanel::OnReplayTimelineClickClearChildren(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CombatSituationPanel", "OnReplayTimelineClickClearChildren");

	Params::PyWidget_CombatSituationPanel_OnReplayTimelineClickClearChildren Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationPanel.OnKillEvent
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           Source                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Target                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAttributeModifierHandle         ModifierHandle                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FGlobalEventExtraData            ExtraData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UPyWidget_CombatSituationPanel::OnKillEvent(class AActor* Source, class AActor* Target, const struct FAttributeModifierHandle& ModifierHandle, const struct FGlobalEventExtraData& ExtraData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CombatSituationPanel", "OnKillEvent");

	Params::PyWidget_CombatSituationPanel_OnKillEvent Parms{};

	Parms.Source = Source;
	Parms.Target = Target;
	Parms.ModifierHandle = std::move(ModifierHandle);
	Parms.ExtraData = std::move(ExtraData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationPanel.ShowUIRebornInfo
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCharacterRebornParam            RebornParam                                            (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_CombatSituationPanel::ShowUIRebornInfo(const struct FCharacterRebornParam& RebornParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CombatSituationPanel", "ShowUIRebornInfo");

	Params::PyWidget_CombatSituationPanel_ShowUIRebornInfo Parms{};

	Parms.RebornParam = std::move(RebornParam);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationUnit_V3.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CombatSituationUnit_V3::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CombatSituationUnit_V3", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationUnit_V3.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CombatSituationUnit_V3::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CombatSituationUnit_V3", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationUnit_V3.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CombatSituationUnit_V3::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CombatSituationUnit_V3", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_CombatSituationUnit.PyWidget_CombatSituationUnit_V3.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CombatSituationUnit_V3::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CombatSituationUnit_V3", "OnAnimationFinished");

	Params::PyWidget_CombatSituationUnit_V3_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
