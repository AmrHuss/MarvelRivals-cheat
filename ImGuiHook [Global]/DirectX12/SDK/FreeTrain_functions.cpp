#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FreeTrain

#include "Basic.hpp"

#include "FreeTrain_classes.hpp"
#include "FreeTrain_parameters.hpp"


namespace SDK
{

// PythonFunction FreeTrain.UISettingEntryFreeTrainHandler.BP_GetCurrentValue
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Obj                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           Setting_key                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      P                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<int32, class FText>                O                                                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUISettingEntryFreeTrainHandler::BP_GetCurrentValue(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& P, const TMap<int32, class FText>& O)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UISettingEntryFreeTrainHandler", "BP_GetCurrentValue");

	Params::UISettingEntryFreeTrainHandler_BP_GetCurrentValue Parms{};

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


// PythonFunction FreeTrain.UISettingEntryFreeTrainHandler.BP_OnChanged
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Obj                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           Setting_key                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      Params_0                                               (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<int32, class FText>                OPTIONS                                                (ConstParm, Parm, OutParm, ReferenceParm)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, int32>              Tags                                                   (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<class FString, int32>              ReturnValue                                            (Parm, OutParm, ReturnParm)

TMap<class FString, int32> UUISettingEntryFreeTrainHandler::BP_OnChanged(class UObject* Obj, const class FString& Setting_key, const TMap<class FString, class FString>& Params_0, const TMap<int32, class FText>& OPTIONS, float Value, const TMap<class FString, int32>& Tags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UISettingEntryFreeTrainHandler", "BP_OnChanged");

	Params::UISettingEntryFreeTrainHandler_BP_OnChanged Parms{};

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
