#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LotteryJackpot_Show

#include "Basic.hpp"

#include "WBP_LotteryJackpot_Show_classes.hpp"
#include "WBP_LotteryJackpot_Show_parameters.hpp"


namespace SDK
{

// Function WBP_LotteryJackpot_Show.WBP_LotteryJackpot_Show_C.ExecuteUbergraph_WBP_LotteryJackpot_Show
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LotteryJackpot_Show_C::ExecuteUbergraph_WBP_LotteryJackpot_Show(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LotteryJackpot_Show_C", "ExecuteUbergraph_WBP_LotteryJackpot_Show");

	Params::WBP_LotteryJackpot_Show_C_ExecuteUbergraph_WBP_LotteryJackpot_Show Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

