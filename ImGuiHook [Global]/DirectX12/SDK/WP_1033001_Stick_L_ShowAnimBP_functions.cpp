#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WP_1033001_Stick_L_ShowAnimBP

#include "Basic.hpp"

#include "WP_1033001_Stick_L_ShowAnimBP_classes.hpp"
#include "WP_1033001_Stick_L_ShowAnimBP_parameters.hpp"


namespace SDK
{

// Function WP_1033001_Stick_L_ShowAnimBP.WP_1033001_Stick_L_ShowAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UWP_1033001_Stick_L_ShowAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WP_1033001_Stick_L_ShowAnimBP_C", "AnimGraph");

	Params::WP_1033001_Stick_L_ShowAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function WP_1033001_Stick_L_ShowAnimBP.WP_1033001_Stick_L_ShowAnimBP_C.ExecuteUbergraph_WP_1033001_Stick_L_ShowAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWP_1033001_Stick_L_ShowAnimBP_C::ExecuteUbergraph_WP_1033001_Stick_L_ShowAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WP_1033001_Stick_L_ShowAnimBP_C", "ExecuteUbergraph_WP_1033001_Stick_L_ShowAnimBP");

	Params::WP_1033001_Stick_L_ShowAnimBP_C_ExecuteUbergraph_WP_1033001_Stick_L_ShowAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
