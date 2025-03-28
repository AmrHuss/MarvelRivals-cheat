#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Friends_Tips_V2

#include "Basic.hpp"

#include "WBP_Friends_Tips_V2_classes.hpp"
#include "WBP_Friends_Tips_V2_parameters.hpp"


namespace SDK
{

// Function WBP_Friends_Tips_V2.WBP_Friends_Tips_V2_C.ExecuteUbergraph_WBP_Friends_Tips_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Friends_Tips_V2_C::ExecuteUbergraph_WBP_Friends_Tips_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Friends_Tips_V2_C", "ExecuteUbergraph_WBP_Friends_Tips_V2");

	Params::WBP_Friends_Tips_V2_C_ExecuteUbergraph_WBP_Friends_Tips_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Friends_Tips_V2.WBP_Friends_Tips_V2_C.Update Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Friends_Tips_V2_C::Update_Text(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Friends_Tips_V2_C", "Update Text");

	Params::WBP_Friends_Tips_V2_C_Update_Text Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

