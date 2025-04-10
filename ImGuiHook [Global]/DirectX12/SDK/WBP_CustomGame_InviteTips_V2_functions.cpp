#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CustomGame_InviteTips_V2

#include "Basic.hpp"

#include "WBP_CustomGame_InviteTips_V2_classes.hpp"
#include "WBP_CustomGame_InviteTips_V2_parameters.hpp"


namespace SDK
{

// Function WBP_CustomGame_InviteTips_V2.WBP_CustomGame_InviteTips_V2_C.ExecuteUbergraph_WBP_CustomGame_InviteTips_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CustomGame_InviteTips_V2_C::ExecuteUbergraph_WBP_CustomGame_InviteTips_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CustomGame_InviteTips_V2_C", "ExecuteUbergraph_WBP_CustomGame_InviteTips_V2");

	Params::WBP_CustomGame_InviteTips_V2_C_ExecuteUbergraph_WBP_CustomGame_InviteTips_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CustomGame_InviteTips_V2.WBP_CustomGame_InviteTips_V2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CustomGame_InviteTips_V2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CustomGame_InviteTips_V2_C", "PreConstruct");

	Params::WBP_CustomGame_InviteTips_V2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CustomGame_InviteTips_V2.WBP_CustomGame_InviteTips_V2_C.ShowPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CustomGame_InviteTips_V2_C::ShowPanel(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CustomGame_InviteTips_V2_C", "ShowPanel");

	Params::WBP_CustomGame_InviteTips_V2_C_ShowPanel Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CustomGame_InviteTips_V2.WBP_CustomGame_InviteTips_V2_C.Test Init 
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomGame_InviteTips_V2_C::Test_Init_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CustomGame_InviteTips_V2_C", "Test Init ");

	UObject::ProcessEvent(Func, nullptr);
}

}

