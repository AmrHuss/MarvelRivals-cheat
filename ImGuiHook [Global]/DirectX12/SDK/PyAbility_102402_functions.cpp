#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102402

#include "Basic.hpp"

#include "PyAbility_102402_classes.hpp"
#include "PyAbility_102402_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_102402.PyCue_Buff_10240202.OnActiveAudio
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Buff_10240202::OnActiveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Buff_10240202", "OnActiveAudio");

	Params::PyCue_Buff_10240202_OnActiveAudio Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102402.PyAbility_102402.NativeOnMontageCompleted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_102402::NativeOnMontageCompleted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102402", "NativeOnMontageCompleted");

	Params::PyAbility_102402_NativeOnMontageCompleted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102402.PyAbility_102402.NativeOnMontageInterrupted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_102402::NativeOnMontageInterrupted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102402", "NativeOnMontageInterrupted");

	Params::PyAbility_102402_NativeOnMontageInterrupted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102402.PyAbility_102402.NativeOnMontageCancelled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_102402::NativeOnMontageCancelled(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102402", "NativeOnMontageCancelled");

	Params::PyAbility_102402_NativeOnMontageCancelled Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102402.PySummonedComp_10240201.MulticastOnHelaKill
// (Net, Native, NetMulticast, Public, BlueprintCallable)

void UPySummonedComp_10240201::MulticastOnHelaKill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PySummonedComp_10240201", "MulticastOnHelaKill");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction PyAbility_102402.PySummonedComp_10240201.OnHelaKill__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UPySummonedComp_10240201::OnHelaKill__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PySummonedComp_10240201", "OnHelaKill__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// DelegateFunction PyAbility_102402.PyCue_Summoner_Loop_10240201.OnAbilityIsNotInCD__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void APyCue_Summoner_Loop_10240201::OnAbilityIsNotInCD__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Summoner_Loop_10240201", "OnAbilityIsNotInCD__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// DelegateFunction PyAbility_102402.PyCue_Summoner_Loop_10240201.OnAbilityIsInCD__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void APyCue_Summoner_Loop_10240201::OnAbilityIsInCD__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Summoner_Loop_10240201", "OnAbilityIsInCD__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// PythonFunction PyAbility_102402.PyCue_Summoner_Loop_10240201.OnActiveAudio
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Summoner_Loop_10240201::OnActiveAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Summoner_Loop_10240201", "OnActiveAudio");

	Params::PyCue_Summoner_Loop_10240201_OnActiveAudio Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102402.PyCue_Summoner_Loop_10240201.WhileActiveFX
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Summoner_Loop_10240201::WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Summoner_Loop_10240201", "WhileActiveFX");

	Params::PyCue_Summoner_Loop_10240201_WhileActiveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102402.PyCue_Summoner_Loop_10240201.OnAbilityTagUpdate
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                     InTag                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    bExists                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyCue_Summoner_Loop_10240201::OnAbilityTagUpdate(const struct FGameplayTag& InTag, bool bExists)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Summoner_Loop_10240201", "OnAbilityTagUpdate");

	Params::PyCue_Summoner_Loop_10240201_OnAbilityTagUpdate Parms{};

	Parms.InTag = std::move(InTag);
	Parms.bExists = bExists;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102402.PyCue_Summoner_Loop_10240201.OnExecuteFX
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Summoner_Loop_10240201::OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Summoner_Loop_10240201", "OnExecuteFX");

	Params::PyCue_Summoner_Loop_10240201_OnExecuteFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction PyAbility_102402.PyCue_Summoner_Loop_10240201.OnHelaKill__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void APyCue_Summoner_Loop_10240201::OnHelaKill__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Summoner_Loop_10240201", "OnHelaKill__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// PythonFunction PyAbility_102402.PyCue_Summoner_Loop_10240201.StartNSCurve
// (Native, Public, BlueprintCallable)

void APyCue_Summoner_Loop_10240201::StartNSCurve()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Summoner_Loop_10240201", "StartNSCurve");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
