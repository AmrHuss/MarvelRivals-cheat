#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetworkLogic

#include "Basic.hpp"

#include "NetworkLogic_classes.hpp"
#include "NetworkLogic_parameters.hpp"


namespace SDK
{

// PythonFunction NetworkLogic.UISettingEntryShowNetworkStatusHandler.BP_OnApply
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Obj                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           Setting_key                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      P                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<int32, class FText>                OPTIONS                                                (ConstParm, Parm, OutParm, ReferenceParm)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUISettingEntryShowNetworkStatusHandler::BP_OnApply(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& P, const TMap<int32, class FText>& OPTIONS, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UISettingEntryShowNetworkStatusHandler", "BP_OnApply");

	Params::UISettingEntryShowNetworkStatusHandler_BP_OnApply Parms{};

	Parms.Obj = Obj;
	Parms.Setting_key = std::move(Setting_key);
	Parms.P = std::move(P);
	Parms.OPTIONS = std::move(OPTIONS);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction NetworkLogic.UISettingEntryShowNetworkStatusHandler.BP_GetCurrentValue
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Obj                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           Setting_key                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      P                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<int32, class FText>                O                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUISettingEntryShowNetworkStatusHandler::BP_GetCurrentValue(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& P, const TMap<int32, class FText>& O)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UISettingEntryShowNetworkStatusHandler", "BP_GetCurrentValue");

	Params::UISettingEntryShowNetworkStatusHandler_BP_GetCurrentValue Parms{};

	Parms.Obj = Obj;
	Parms.Setting_key = std::move(Setting_key);
	Parms.P = std::move(P);
	Parms.O = std::move(O);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction NetworkLogic.UISettingEntryShowNetworkStatusHandler.BP_OnChanged
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Obj                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           Setting_key                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      Params_0                                               (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<int32, class FText>                OPTIONS                                                (ConstParm, Parm, OutParm, ReferenceParm)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, int32>              Tags                                                   (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<class FString, int32>              ReturnValue                                            (Parm, OutParm, ReturnParm)

TMap<class FString, int32> UUISettingEntryShowNetworkStatusHandler::BP_OnChanged(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UISettingEntryShowNetworkStatusHandler", "BP_OnChanged");

	Params::UISettingEntryShowNetworkStatusHandler_BP_OnChanged Parms{};

	Parms.Obj = Obj;
	Parms.Setting_key = std::move(Setting_key);
	Parms.Params_0 = std::move(Params_0);
	Parms.OPTIONS = std::move(OPTIONS);
	Parms.Value = Value;
	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction NetworkLogic.UISettingOtherNetworkDiagnosisHandler.BP_OnBtnClicked
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Obj                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           Setting_key                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      Params_0                                               (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<int32, class FText>                OPTIONS                                                (ConstParm, Parm, OutParm, ReferenceParm)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, int32>              Tags                                                   (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<class FString, int32>              ReturnValue                                            (Parm, OutParm, ReturnParm)

TMap<class FString, int32> UUISettingOtherNetworkDiagnosisHandler::BP_OnBtnClicked(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UISettingOtherNetworkDiagnosisHandler", "BP_OnBtnClicked");

	Params::UISettingOtherNetworkDiagnosisHandler_BP_OnBtnClicked Parms{};

	Parms.Obj = Obj;
	Parms.Setting_key = std::move(Setting_key);
	Parms.Params_0 = std::move(Params_0);
	Parms.OPTIONS = std::move(OPTIONS);
	Parms.Value = Value;
	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
