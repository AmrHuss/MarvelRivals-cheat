#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Lobby_Button

#include "Basic.hpp"

#include "WBP_Lobby_Button_classes.hpp"
#include "WBP_Lobby_Button_parameters.hpp"


namespace SDK
{

// Function WBP_Lobby_Button.WBP_Lobby_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Button_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Lobby_Button_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Lobby_Button.WBP_Lobby_Button_C.ExecuteUbergraph_WBP_Lobby_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Lobby_Button_C::ExecuteUbergraph_WBP_Lobby_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Lobby_Button_C", "ExecuteUbergraph_WBP_Lobby_Button");

	Params::WBP_Lobby_Button_C_ExecuteUbergraph_WBP_Lobby_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Lobby_Button.WBP_Lobby_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Lobby_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Lobby_Button_C", "PreConstruct");

	Params::WBP_Lobby_Button_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Lobby_Button.WBP_Lobby_Button_C.SetButtonName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Lobby_Button_C::SetButtonName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Lobby_Button_C", "SetButtonName");

	Params::WBP_Lobby_Button_C_SetButtonName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}
