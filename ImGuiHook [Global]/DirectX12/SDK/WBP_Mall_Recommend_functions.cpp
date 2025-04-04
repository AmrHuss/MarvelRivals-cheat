#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Recommend

#include "Basic.hpp"

#include "WBP_Mall_Recommend_classes.hpp"
#include "WBP_Mall_Recommend_parameters.hpp"


namespace SDK
{

// Function WBP_Mall_Recommend.WBP_Mall_Recommend_C.ExecuteUbergraph_WBP_Mall_Recommend
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mall_Recommend_C::ExecuteUbergraph_WBP_Mall_Recommend(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mall_Recommend_C", "ExecuteUbergraph_WBP_Mall_Recommend");

	Params::WBP_Mall_Recommend_C_ExecuteUbergraph_WBP_Mall_Recommend Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

