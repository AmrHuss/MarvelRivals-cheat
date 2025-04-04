#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_AbilityActionTips

#include "Basic.hpp"

#include "PyWidget_AbilityActionTips_classes.hpp"
#include "PyWidget_AbilityActionTips_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTip.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CommonAbilityActionTip::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTip", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTip.SetHintText
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                             InText                                                 (Parm)

void UPyWidget_CommonAbilityActionTip::SetHintText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTip", "SetHintText");

	Params::PyWidget_CommonAbilityActionTip_SetHintText Parms{};

	Parms.InText = std::move(InText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTip.SetStyle
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWidget_ActionTip                Style                                                  (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_CommonAbilityActionTip::SetStyle(const struct FWidget_ActionTip& Style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTip", "SetStyle");

	Params::PyWidget_CommonAbilityActionTip_SetStyle Parms{};

	Parms.Style = std::move(Style);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTip.SetAction
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                           InActionName                                           (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyWidget_CommonAbilityActionTip::SetAction(const class FString& InActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTip", "SetAction");

	Params::PyWidget_CommonAbilityActionTip_SetAction Parms{};

	Parms.InActionName = std::move(InActionName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.OnTipAdded__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UPyWidget_CommonAbilityActionTips::OnTipAdded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "OnTipAdded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CommonAbilityActionTips::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.OnUserSettingUpdate
// (Native, Public, BlueprintCallable)

void UPyWidget_CommonAbilityActionTips::OnUserSettingUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "OnUserSettingUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.Reset
// (Native, Public, BlueprintCallable)

void UPyWidget_CommonAbilityActionTips::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.SetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible_0                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonAbilityActionTips::SetVisible(bool bVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "SetVisible");

	Params::PyWidget_CommonAbilityActionTips_SetVisible Parms{};

	Parms.bVisible_0 = bVisible_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.AddTips
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilityId                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidget_ActionTip                Tips                                                   (Parm)

void UPyWidget_CommonAbilityActionTips::AddTips(const int32 InAbilityId, const struct FWidget_ActionTip& Tips)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "AddTips");

	Params::PyWidget_CommonAbilityActionTips_AddTips Parms{};

	Parms.InAbilityId = InAbilityId;
	Parms.Tips = std::move(Tips);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.RemoveTips
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilityId                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommonAbilityActionTips::RemoveTips(const int32 InAbilityId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "RemoveTips");

	Params::PyWidget_CommonAbilityActionTips_RemoveTips Parms{};

	Parms.InAbilityId = InAbilityId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.RemoveOnlyTips
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilityId                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidget_ActionTip                Tips                                                   (Parm)

void UPyWidget_CommonAbilityActionTips::RemoveOnlyTips(const int32 InAbilityId, const struct FWidget_ActionTip& Tips)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "RemoveOnlyTips");

	Params::PyWidget_CommonAbilityActionTips_RemoveOnlyTips Parms{};

	Parms.InAbilityId = InAbilityId;
	Parms.Tips = std::move(Tips);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.AddTipsByActionTipsParam
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IndexID                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionTipsParam                 Tips                                                   (Parm)

void UPyWidget_CommonAbilityActionTips::AddTipsByActionTipsParam(const int32 IndexID, const struct FActionTipsParam& Tips)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "AddTipsByActionTipsParam");

	Params::PyWidget_CommonAbilityActionTips_AddTipsByActionTipsParam Parms{};

	Parms.IndexID = IndexID;
	Parms.Tips = std::move(Tips);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.RemoveOnlyTipsByActionTipsParam
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IndexID                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionTipsParam                 Tips                                                   (Parm)

void UPyWidget_CommonAbilityActionTips::RemoveOnlyTipsByActionTipsParam(const int32 IndexID, const struct FActionTipsParam& Tips)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "RemoveOnlyTipsByActionTipsParam");

	Params::PyWidget_CommonAbilityActionTips_RemoveOnlyTipsByActionTipsParam Parms{};

	Parms.IndexID = IndexID;
	Parms.Tips = std::move(Tips);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_AbilityActionTips.PyWidget_CommonAbilityActionTips.Update
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CommonAbilityActionTips::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommonAbilityActionTips", "Update");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

