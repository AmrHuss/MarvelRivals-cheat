#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104141

#include "Basic.hpp"

#include "PyAbility_104141_classes.hpp"
#include "PyAbility_104141_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_104141.PyAbility_104141.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_104141::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104141.PyAbility_104141.CanActivate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_104141::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "CanActivate");

	Params::PyAbility_104141_CanActivate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_104141.PyAbility_104141.TryMakeTriggerContext
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_104141::TryMakeTriggerContext(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "TryMakeTriggerContext");

	Params::PyAbility_104141_TryMakeTriggerContext Parms{};

	Parms.EventData = std::move(EventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	EventData = std::move(Parms.EventData);

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_104141.PyAbility_104141.K2_ActivateAbilityFromEvent
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, Parm, OutParm, ReferenceParm)

void UPyAbility_104141::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "K2_ActivateAbilityFromEvent");

	Params::PyAbility_104141_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104141.PyAbility_104141.OnStartDashing
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_104141::OnStartDashing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "OnStartDashing");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104141.PyAbility_104141.OnAfterDashing
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAbilityEnd                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104141::OnAfterDashing(bool bAbilityEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "OnAfterDashing");

	Params::PyAbility_104141_OnAfterDashing Parms{};

	Parms.bAbilityEnd = bAbilityEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104141.PyAbility_104141.OnNetSync
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                                                   (ConstParm, Parm, OutParm, ReferenceParm)

void UPyAbility_104141::OnNetSync(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "OnNetSync");

	Params::PyAbility_104141_OnNetSync Parms{};

	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104141.PyAbility_104141.NativeOnMontageEvent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104141::NativeOnMontageEvent(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "NativeOnMontageEvent");

	Params::PyAbility_104141_NativeOnMontageEvent Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104141.PyAbility_104141.K2_OnEndAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_104141::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "K2_OnEndAbility");

	Params::PyAbility_104141_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104141.PyAbility_104141.NativeOnMontageCompleted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104141::NativeOnMontageCompleted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "NativeOnMontageCompleted");

	Params::PyAbility_104141_NativeOnMontageCompleted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104141.PyAbility_104141.NativeOnMontageBlendOut
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104141::NativeOnMontageBlendOut(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "NativeOnMontageBlendOut");

	Params::PyAbility_104141_NativeOnMontageBlendOut Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104141.PyAbility_104141.NativeOnMontageInterrupted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104141::NativeOnMontageInterrupted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "NativeOnMontageInterrupted");

	Params::PyAbility_104141_NativeOnMontageInterrupted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_104141.PyAbility_104141.NativeOnMontageCancelled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_104141::NativeOnMontageCancelled(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_104141", "NativeOnMontageCancelled");

	Params::PyAbility_104141_NativeOnMontageCancelled Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
