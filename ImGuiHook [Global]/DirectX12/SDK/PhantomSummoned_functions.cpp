#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhantomSummoned

#include "Basic.hpp"

#include "PhantomSummoned_classes.hpp"
#include "PhantomSummoned_parameters.hpp"


namespace SDK
{

// Function PhantomSummoned.PhantomAbilityInterface.GetSourceAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayAbility* IPhantomAbilityInterface::GetSourceAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhantomAbilityInterface", "GetSourceAbility");

	Params::PhantomAbilityInterface_GetSourceAbility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PhantomSummoned.PhantomAbilityInterface.IsPhantomAbility
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IPhantomAbilityInterface::IsPhantomAbility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhantomAbilityInterface", "IsPhantomAbility");

	Params::PhantomAbilityInterface_IsPhantomAbility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PhantomSummoned.PhantomInputSyncAbility.ServerNotifyInputToPhantom
// (Net, Native, Event, Public, NetServer)
// Parameters:
// EAbilityActionBindingType               InActionBindingType                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   InInputId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   InAbilityId                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPhantomInputSyncAbility::ServerNotifyInputToPhantom(EAbilityActionBindingType InActionBindingType, int32 InInputId, int32 InAbilityId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhantomInputSyncAbility", "ServerNotifyInputToPhantom");

	Params::PhantomInputSyncAbility_ServerNotifyInputToPhantom Parms{};

	Parms.InActionBindingType = InActionBindingType;
	Parms.InInputId = InInputId;
	Parms.InAbilityId = InAbilityId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PhantomSummoned.PhantomSummonedController.OnPhantomSourceActivateAbility
// (Final, Native, Protected)
// Parameters:
// class UGameplayAbility*                 SourceAbility                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APhantomSummonedController::OnPhantomSourceActivateAbility(class UGameplayAbility* SourceAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhantomSummonedController", "OnPhantomSourceActivateAbility");

	Params::PhantomSummonedController_OnPhantomSourceActivateAbility Parms{};

	Parms.SourceAbility = SourceAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PhantomSummoned.PhantomSummonedController.OnPhantomSourceEndAbility
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FAbilityEndedData                AbilityEndData                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void APhantomSummonedController::OnPhantomSourceEndAbility(const struct FAbilityEndedData& AbilityEndData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhantomSummonedController", "OnPhantomSourceEndAbility");

	Params::PhantomSummonedController_OnPhantomSourceEndAbility Parms{};

	Parms.AbilityEndData = std::move(AbilityEndData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
