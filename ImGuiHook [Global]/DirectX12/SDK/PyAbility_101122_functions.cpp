#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101122

#include "Basic.hpp"

#include "PyAbility_101122_classes.hpp"
#include "PyAbility_101122_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_101122.PyCue_Projectile_Loop_1011_floor_dust.WhileActiveFX
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Projectile_Loop_1011_floor_dust::WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Projectile_Loop_1011_floor_dust", "WhileActiveFX");

	Params::PyCue_Projectile_Loop_1011_floor_dust_WhileActiveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101122.PyCue_Projectile_Loop_1011_floor_dust.OnExecute
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool APyCue_Projectile_Loop_1011_floor_dust::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Projectile_Loop_1011_floor_dust", "OnExecute");

	Params::PyCue_Projectile_Loop_1011_floor_dust_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_101122.PyCue_Projectile_Loop_1011_floor_dust.OnRemoveFX
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Projectile_Loop_1011_floor_dust::OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Projectile_Loop_1011_floor_dust", "OnRemoveFX");

	Params::PyCue_Projectile_Loop_1011_floor_dust_OnRemoveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101122.PyProjectile_10112301.K2_OnProcessHit
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void APyProjectile_10112301::K2_OnProcessHit(const struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10112301", "K2_OnProcessHit");

	Params::PyProjectile_10112301_K2_OnProcessHit Parms{};

	Parms.ImpactResult = std::move(ImpactResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101122.PyProjectile_10112301.K2_OnPenetrate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FVector                          ImpactVelocity                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyProjectile_10112301::K2_OnPenetrate(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10112301", "K2_OnPenetrate");

	Params::PyProjectile_10112301_K2_OnPenetrate Parms{};

	Parms.ImpactResult = std::move(ImpactResult);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101122.PyProjectile_10112301.K2_OnEndAgentTask
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyProjectile_10112301::K2_OnEndAgentTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10112301", "K2_OnEndAgentTask");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101122.PyCue_Ability_Loop_10112201.WhileActiveFX
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void APyCue_Ability_Loop_10112201::WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Loop_10112201", "WhileActiveFX");

	Params::PyCue_Ability_Loop_10112201_WhileActiveFX Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101122.PyEffectiveComponent_10112301.K2_Initialize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyEffectiveComponent_10112301::K2_Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyEffectiveComponent_10112301", "K2_Initialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101122.PyEffectiveComponent_10112301.K2_OnPreApplyContainer
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>               HitResults                                             (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>               ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FHitResult> UPyEffectiveComponent_10112301::K2_OnPreApplyContainer(const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyEffectiveComponent_10112301", "K2_OnPreApplyContainer");

	Params::PyEffectiveComponent_10112301_K2_OnPreApplyContainer Parms{};

	Parms.HitResults = std::move(HitResults);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_101122.PyCue_Ability_Instant_10112201.OnExecuteAudio
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UPyCue_Ability_Instant_10112201::OnExecuteAudio(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Ability_Instant_10112201", "OnExecuteAudio");

	Params::PyCue_Ability_Instant_10112201_OnExecuteAudio Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101122.PyKnockUp_101122.CalcKnockUpDir
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UPyKnockUp_101122::CalcKnockUpDir()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyKnockUp_101122", "CalcKnockUpDir");

	Params::PyKnockUp_101122_CalcKnockUpDir Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
