#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Friends_StateBtn

#include "Basic.hpp"

#include "WBP_Friends_StateBtn_classes.hpp"
#include "WBP_Friends_StateBtn_parameters.hpp"


namespace SDK
{

// Function WBP_Friends_StateBtn.WBP_Friends_StateBtn_C.BndEvt__WBP_Friends_StateBtn_Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Friends_StateBtn_C::BndEvt__WBP_Friends_StateBtn_Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Friends_StateBtn_C", "BndEvt__WBP_Friends_StateBtn_Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Friends_StateBtn.WBP_Friends_StateBtn_C.ExecuteUbergraph_WBP_Friends_StateBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Friends_StateBtn_C::ExecuteUbergraph_WBP_Friends_StateBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Friends_StateBtn_C", "ExecuteUbergraph_WBP_Friends_StateBtn");

	Params::WBP_Friends_StateBtn_C_ExecuteUbergraph_WBP_Friends_StateBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Friends_StateBtn.WBP_Friends_StateBtn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Friends_StateBtn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Friends_StateBtn_C", "PreConstruct");

	Params::WBP_Friends_StateBtn_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
