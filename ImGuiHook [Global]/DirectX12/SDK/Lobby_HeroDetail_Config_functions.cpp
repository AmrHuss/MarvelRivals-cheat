#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_HeroDetail_Config

#include "Basic.hpp"

#include "Lobby_HeroDetail_Config_classes.hpp"
#include "Lobby_HeroDetail_Config_parameters.hpp"


namespace SDK
{

// Function Lobby_HeroDetail_Config.Lobby_HeroDetail_Config_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALobby_HeroDetail_Config_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_HeroDetail_Config_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lobby_HeroDetail_Config.Lobby_HeroDetail_Config_C.ExecuteUbergraph_Lobby_HeroDetail_Config
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobby_HeroDetail_Config_C::ExecuteUbergraph_Lobby_HeroDetail_Config(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_HeroDetail_Config_C", "ExecuteUbergraph_Lobby_HeroDetail_Config");

	Params::Lobby_HeroDetail_Config_C_ExecuteUbergraph_Lobby_HeroDetail_Config Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

