#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WC_DebugHeroAudioInfoBP

#include "Basic.hpp"

#include "WC_DebugHeroAudioInfoBP_classes.hpp"
#include "WC_DebugHeroAudioInfoBP_parameters.hpp"


namespace SDK
{

// Function WC_DebugHeroAudioInfoBP.WC_DebugHeroAudioInfoBP_C.ExecuteUbergraph_WC_DebugHeroAudioInfoBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWC_DebugHeroAudioInfoBP_C::ExecuteUbergraph_WC_DebugHeroAudioInfoBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WC_DebugHeroAudioInfoBP_C", "ExecuteUbergraph_WC_DebugHeroAudioInfoBP");

	Params::WC_DebugHeroAudioInfoBP_C_ExecuteUbergraph_WC_DebugHeroAudioInfoBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WC_DebugHeroAudioInfoBP.WC_DebugHeroAudioInfoBP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UWC_DebugHeroAudioInfoBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WC_DebugHeroAudioInfoBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WC_DebugHeroAudioInfoBP.WC_DebugHeroAudioInfoBP_C.SetOwnerAk
// (Private, BlueprintCallable, BlueprintEvent)

void UWC_DebugHeroAudioInfoBP_C::SetOwnerAk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WC_DebugHeroAudioInfoBP_C", "SetOwnerAk");

	UObject::ProcessEvent(Func, nullptr);
}

}
