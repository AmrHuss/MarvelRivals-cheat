#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_102591_BP

#include "Basic.hpp"

#include "Ability_102591_BP_classes.hpp"
#include "Ability_102591_BP_parameters.hpp"


namespace SDK
{

// Function Ability_102591_BP.Ability_102591_BP_C.ExecuteUbergraph_Ability_102591_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_102591_BP_C::ExecuteUbergraph_Ability_102591_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_102591_BP_C", "ExecuteUbergraph_Ability_102591_BP");

	Params::Ability_102591_BP_C_ExecuteUbergraph_Ability_102591_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_102591_BP.Ability_102591_BP_C.K2_OnEndAbility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_102591_BP_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_102591_BP_C", "K2_OnEndAbility");

	Params::Ability_102591_BP_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_102591_BP.Ability_102591_BP_C.MissileEventNotify
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAbility_102591_BP_C::MissileEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_102591_BP_C", "MissileEventNotify");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ability_102591_BP.Ability_102591_BP_C.OnPress_B3E5D2E64FF26154A83BFE93218BB1EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   WaitBindInputDelegate__DelegateSignature_TimeWaited    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_102591_BP_C::OnPress_B3E5D2E64FF26154A83BFE93218BB1EF(float WaitBindInputDelegate__DelegateSignature_TimeWaited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_102591_BP_C", "OnPress_B3E5D2E64FF26154A83BFE93218BB1EF");

	Params::Ability_102591_BP_C_OnPress_B3E5D2E64FF26154A83BFE93218BB1EF Parms{};

	Parms.WaitBindInputDelegate__DelegateSignature_TimeWaited = WaitBindInputDelegate__DelegateSignature_TimeWaited;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_102591_BP.Ability_102591_BP_C.OnPress_FA3163A14F8FF8AC44F216A00D07F637
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   WaitBindInputDelegate__DelegateSignature_TimeWaited    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_102591_BP_C::OnPress_FA3163A14F8FF8AC44F216A00D07F637(float WaitBindInputDelegate__DelegateSignature_TimeWaited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_102591_BP_C", "OnPress_FA3163A14F8FF8AC44F216A00D07F637");

	Params::Ability_102591_BP_C_OnPress_FA3163A14F8FF8AC44F216A00D07F637 Parms{};

	Parms.WaitBindInputDelegate__DelegateSignature_TimeWaited = WaitBindInputDelegate__DelegateSignature_TimeWaited;

	UObject::ProcessEvent(Func, &Parms);
}

}
