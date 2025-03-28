#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattlePass_Popup

#include "Basic.hpp"

#include "WBP_BattlePass_Popup_classes.hpp"
#include "WBP_BattlePass_Popup_parameters.hpp"


namespace SDK
{

// Function WBP_BattlePass_Popup.WBP_BattlePass_Popup_C.ExecuteUbergraph_WBP_BattlePass_Popup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BattlePass_Popup_C::ExecuteUbergraph_WBP_BattlePass_Popup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattlePass_Popup_C", "ExecuteUbergraph_WBP_BattlePass_Popup");

	Params::WBP_BattlePass_Popup_C_ExecuteUbergraph_WBP_BattlePass_Popup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BattlePass_Popup.WBP_BattlePass_Popup_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_BattlePass_Popup_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattlePass_Popup_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BattlePass_Popup.WBP_BattlePass_Popup_C.SequenceEvent__ENTRYPOINTWBP_BattlePass_Popup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_BattlePass_Popup_C::SequenceEvent__ENTRYPOINTWBP_BattlePass_Popup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BattlePass_Popup_C", "SequenceEvent__ENTRYPOINTWBP_BattlePass_Popup");

	UObject::ProcessEvent(Func, nullptr);
}

}

