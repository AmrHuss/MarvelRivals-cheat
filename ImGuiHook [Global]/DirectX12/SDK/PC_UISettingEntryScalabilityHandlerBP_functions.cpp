#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC_UISettingEntryScalabilityHandlerBP

#include "Basic.hpp"

#include "PC_UISettingEntryScalabilityHandlerBP_classes.hpp"
#include "PC_UISettingEntryScalabilityHandlerBP_parameters.hpp"


namespace SDK
{

// Function PC_UISettingEntryScalabilityHandlerBP.PC_UISettingEntryScalabilityHandlerBP_C.BP_GetCurrentValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           SettingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<int32, class FText>                OPTIONS                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPC_UISettingEntryScalabilityHandlerBP_C::BP_GetCurrentValue(class UObject* Object, const class FString& SettingKey, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_UISettingEntryScalabilityHandlerBP_C", "BP_GetCurrentValue");

	Params::PC_UISettingEntryScalabilityHandlerBP_C_BP_GetCurrentValue Parms{};

	Parms.Object = Object;
	Parms.SettingKey = std::move(SettingKey);
	Parms.Params_0 = std::move(Params_0);
	Parms.OPTIONS = std::move(OPTIONS);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PC_UISettingEntryScalabilityHandlerBP.PC_UISettingEntryScalabilityHandlerBP_C.BP_OnApply
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           SettingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<int32, class FText>                OPTIONS                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPC_UISettingEntryScalabilityHandlerBP_C::BP_OnApply(class UObject* Object, const class FString& SettingKey, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_UISettingEntryScalabilityHandlerBP_C", "BP_OnApply");

	Params::PC_UISettingEntryScalabilityHandlerBP_C_BP_OnApply Parms{};

	Parms.Object = Object;
	Parms.SettingKey = std::move(SettingKey);
	Parms.Params_0 = std::move(Params_0);
	Parms.OPTIONS = std::move(OPTIONS);
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_UISettingEntryScalabilityHandlerBP.PC_UISettingEntryScalabilityHandlerBP_C.BP_OnChanged
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           SettingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<int32, class FText>                OPTIONS                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, int32>              CurrentTags                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<class FString, int32>              ReturnValue                                            (Parm, OutParm, ReturnParm)

TMap<class FString, int32> UPC_UISettingEntryScalabilityHandlerBP_C::BP_OnChanged(class UObject* Object, const class FString& SettingKey, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& CurrentTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_UISettingEntryScalabilityHandlerBP_C", "BP_OnChanged");

	Params::PC_UISettingEntryScalabilityHandlerBP_C_BP_OnChanged Parms{};

	Parms.Object = Object;
	Parms.SettingKey = std::move(SettingKey);
	Parms.Params_0 = std::move(Params_0);
	Parms.OPTIONS = std::move(OPTIONS);
	Parms.Value = Value;
	Parms.CurrentTags = std::move(CurrentTags);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PC_UISettingEntryScalabilityHandlerBP.PC_UISettingEntryScalabilityHandlerBP_C.ExecuteUbergraph_PC_UISettingEntryScalabilityHandlerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPC_UISettingEntryScalabilityHandlerBP_C::ExecuteUbergraph_PC_UISettingEntryScalabilityHandlerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_UISettingEntryScalabilityHandlerBP_C", "ExecuteUbergraph_PC_UISettingEntryScalabilityHandlerBP");

	Params::PC_UISettingEntryScalabilityHandlerBP_C_ExecuteUbergraph_PC_UISettingEntryScalabilityHandlerBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
