#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_102551_BP

#include "Basic.hpp"

#include "Ability_102551_BP_classes.hpp"
#include "Ability_102551_BP_parameters.hpp"


namespace SDK
{

// Function Ability_102551_BP.Ability_102551_BP_C.ExecuteUbergraph_Ability_102551_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_102551_BP_C::ExecuteUbergraph_Ability_102551_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_102551_BP_C", "ExecuteUbergraph_Ability_102551_BP");

	Params::Ability_102551_BP_C_ExecuteUbergraph_Ability_102551_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_102551_BP.Ability_102551_BP_C.MissileEventNotify
// (Event, Public, BlueprintEvent)

void UAbility_102551_BP_C::MissileEventNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_102551_BP_C", "MissileEventNotify");

	UObject::ProcessEvent(Func, nullptr);
}

}
