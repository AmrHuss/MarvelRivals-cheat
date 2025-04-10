#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC_UISettingEntryScalabilityGeneratorBP

#include "Basic.hpp"

#include "PC_UISettingEntryScalabilityGeneratorBP_classes.hpp"
#include "PC_UISettingEntryScalabilityGeneratorBP_parameters.hpp"


namespace SDK
{

// Function PC_UISettingEntryScalabilityGeneratorBP.PC_UISettingEntryScalabilityGeneratorBP_C.BP_Gen
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           SettingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<int32, class FText>                OPTIONS                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<int32, class FText>                ReturnValue                                            (Parm, OutParm, ReturnParm)

TMap<int32, class FText> UPC_UISettingEntryScalabilityGeneratorBP_C::BP_Gen(class UObject* Object, const class FString& SettingKey, const TMap<int32, class FText>& OPTIONS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_UISettingEntryScalabilityGeneratorBP_C", "BP_Gen");

	Params::PC_UISettingEntryScalabilityGeneratorBP_C_BP_Gen Parms{};

	Parms.Object = Object;
	Parms.SettingKey = std::move(SettingKey);
	Parms.OPTIONS = std::move(OPTIONS);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

