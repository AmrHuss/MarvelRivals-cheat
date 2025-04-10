#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102921

#include "Basic.hpp"

#include "PyAbility_102921_classes.hpp"
#include "PyAbility_102921_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_102921.PyCue_Projectile_Loop_10292101.WhileActiveFX
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Projectile_Loop_10292101::WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Projectile_Loop_10292101", "WhileActiveFX");

	Params::PyCue_Projectile_Loop_10292101_WhileActiveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyCue_Projectile_Loop_10292101.OnRemoveFX
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Projectile_Loop_10292101::OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Projectile_Loop_10292101", "OnRemoveFX");

	Params::PyCue_Projectile_Loop_10292101_OnRemoveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyAbility_102921.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102921::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102921", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyAbility_102921.K2_ActivateAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_102921::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102921", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyAbility_102921.K2_TriggerGameplay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HoldTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_102921::K2_TriggerGameplay(float HoldTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102921", "K2_TriggerGameplay");

	Params::PyAbility_102921_K2_TriggerGameplay Parms{};

	Parms.HoldTime = HoldTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyAbility_102921.K2_OnGatherCallback
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   GatherIdx                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_102921::K2_OnGatherCallback(int32 GatherIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102921", "K2_OnGatherCallback");

	Params::PyAbility_102921_K2_OnGatherCallback Parms{};

	Parms.GatherIdx = GatherIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyAbility_102921.K2_OnEndAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_102921::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102921", "K2_OnEndAbility");

	Params::PyAbility_102921_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyAbility_102921.NativeOnMontageCompleted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_102921::NativeOnMontageCompleted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102921", "NativeOnMontageCompleted");

	Params::PyAbility_102921_NativeOnMontageCompleted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyAbility_102921.NativeOnMontageCancelled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_102921::NativeOnMontageCancelled(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102921", "NativeOnMontageCancelled");

	Params::PyAbility_102921_NativeOnMontageCancelled Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyAbility_102921.NativeOnMontageInterrupted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_102921::NativeOnMontageInterrupted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_102921", "NativeOnMontageInterrupted");

	Params::PyAbility_102921_NativeOnMontageInterrupted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyProjectile_10292101.K2_OnInitializeData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyProjectile_10292101::K2_OnInitializeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10292101", "K2_OnInitializeData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyProjectile_10292101.GetAccumulateTime
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float APyProjectile_10292101::GetAccumulateTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10292101", "GetAccumulateTime");

	Params::PyProjectile_10292101_GetAccumulateTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_102921.PyUIController_102921.OnInit
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyUIController_102921::OnInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_102921", "OnInit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyUIController_102921.OnDestruct
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyUIController_102921::OnDestruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_102921", "OnDestruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyUIController_102921.OnServerTimeDeltaChanged
// (Native, Public, BlueprintCallable)

void UPyUIController_102921::OnServerTimeDeltaChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_102921", "OnServerTimeDeltaChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyUIController_102921.UpdateReticle
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Radius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyUIController_102921::UpdateReticle(float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyUIController_102921", "UpdateReticle");

	Params::PyUIController_102921_UpdateReticle Parms{};

	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyCue_Ability_Loop_10292101.WhileActiveFX
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Ability_Loop_10292101::WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10292101", "WhileActiveFX");

	Params::PyCue_Ability_Loop_10292101_WhileActiveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyCue_Ability_Loop_10292101.OnRemoveFX
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Ability_Loop_10292101::OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10292101", "OnRemoveFX");

	Params::PyCue_Ability_Loop_10292101_OnRemoveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_102921.PyCue_Ability_Loop_10292101.OnAbilityGatherStateChange
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsStart                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyCue_Ability_Loop_10292101::OnAbilityGatherStateChange(bool IsStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10292101", "OnAbilityGatherStateChange");

	Params::PyCue_Ability_Loop_10292101_OnAbilityGatherStateChange Parms{};

	Parms.IsStart = IsStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

