#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1039

#include "Basic.hpp"

#include "Hero_1039_classes.hpp"
#include "Hero_1039_parameters.hpp"


namespace SDK
{

// Function Hero_1039.BuffAbility_10390102.IsValidTargetForEnergy
// (Final, Native, Public, Const)
// Parameters:
// class AActor*                           InActor                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuffAbility_10390102::IsValidTargetForEnergy(class AActor* InActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffAbility_10390102", "IsValidTargetForEnergy");

	Params::BuffAbility_10390102_IsValidTargetForEnergy Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Hero_1039.Scope_10393101.OnHitTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMarvelBaseCharacter*             Target                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScope_10393101::OnHitTarget(class AMarvelBaseCharacter* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scope_10393101", "OnHitTarget");

	Params::Scope_10393101_OnHitTarget Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Hero_1039.Ability_103941.ModifyDashInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMarvelAbilityTask_Dash*          InDashTask                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDashAbilityInfo                 InDashInfo                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbility_103941::ModifyDashInfo(class UMarvelAbilityTask_Dash* InDashTask, const struct FDashAbilityInfo& InDashInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_103941", "ModifyDashInfo");

	Params::Ability_103941_ModifyDashInfo Parms{};

	Parms.InDashTask = InDashTask;
	Parms.InDashInfo = std::move(InDashInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1039.Ability_103941.UpdateAnimation
// (Final, Native, Public)

void UAbility_103941::UpdateAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_103941", "UpdateAnimation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1039.Ability_103941.UpdateBodyInstance
// (Final, Native, Public)
// Parameters:
// class AMarvelBaseCharacter*             Character                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbility_103941::UpdateBodyInstance(class AMarvelBaseCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_103941", "UpdateBodyInstance");

	Params::Ability_103941_UpdateBodyInstance Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1039.Widget_Extra_ThorCharge.BeginMaxCharge
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWidget_Extra_ThorCharge::BeginMaxCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_Extra_ThorCharge", "BeginMaxCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Hero_1039.Widget_Extra_ThorCharge.GetChargePercent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidget_Extra_ThorCharge::GetChargePercent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Widget_Extra_ThorCharge", "GetChargePercent");

	Params::Widget_Extra_ThorCharge_GetChargePercent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Hero_1039.Cue_Ability_Loop_10395102.OnCharacterMoveChange
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bMoving                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACue_Ability_Loop_10395102::OnCharacterMoveChange(bool bMoving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cue_Ability_Loop_10395102", "OnCharacterMoveChange");

	Params::Cue_Ability_Loop_10395102_OnCharacterMoveChange Parms{};

	Parms.bMoving = bMoving;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1039.Cue_Ability_Loop_10395102.OnCharacterMovementUpdate
// (Final, Native, Public, HasDefaults)
// Parameters:
// float                                   DeltaTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          OldLocation                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          OldVelocity                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACue_Ability_Loop_10395102::OnCharacterMovementUpdate(float DeltaTime, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cue_Ability_Loop_10395102", "OnCharacterMovementUpdate");

	Params::Cue_Ability_Loop_10395102_OnCharacterMovementUpdate Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.OldLocation = std::move(OldLocation);
	Parms.OldVelocity = std::move(OldVelocity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1039.Ability_103961.ApplyScopeRelativePos
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                          InPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAbility_103961::ApplyScopeRelativePos(const struct FVector& InPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_103961", "ApplyScopeRelativePos");

	Params::Ability_103961_ApplyScopeRelativePos Parms{};

	Parms.InPos = std::move(InPos);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Hero_1039.MarvelAbilityTask_PreArrivedDash.ApplyPreDash
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UMarvelBaseGameplayAbility*       OwningAbility                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             TaskInstanceName                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDashAbilityInfo                 Info                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FPreArrivedInfo                  PreInfo                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                          InDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          InTargetLocation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           InTargetActor                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMarvelAbilityTask_PreArrivedDash*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMarvelAbilityTask_PreArrivedDash* UMarvelAbilityTask_PreArrivedDash::ApplyPreDash(class UMarvelBaseGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FDashAbilityInfo& Info, const struct FPreArrivedInfo& PreInfo, const struct FVector& InDirection, const struct FVector& InTargetLocation, class AActor* InTargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MarvelAbilityTask_PreArrivedDash", "ApplyPreDash");

	Params::MarvelAbilityTask_PreArrivedDash_ApplyPreDash Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.Info = std::move(Info);
	Parms.PreInfo = std::move(PreInfo);
	Parms.InDirection = std::move(InDirection);
	Parms.InTargetLocation = std::move(InTargetLocation);
	Parms.InTargetActor = InTargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Hero_1039.TabData_1039.OnActorDeath
// (Final, Native, Public, HasOutParams)
// Parameters:
// class AActor*                           Killer                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           Target                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAttributeModifierHandle         ModifierParameterHandle                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGlobalEventExtraData            ExtraData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UTabData_1039::OnActorDeath(class AActor* Killer, class AActor* Target, const struct FAttributeModifierHandle& ModifierParameterHandle, const struct FGlobalEventExtraData& ExtraData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabData_1039", "OnActorDeath");

	Params::TabData_1039_OnActorDeath Parms{};

	Parms.Killer = Killer;
	Parms.Target = Target;
	Parms.ModifierParameterHandle = std::move(ModifierParameterHandle);
	Parms.ExtraData = std::move(ExtraData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1039.ThorAnimInstance.OnTagUpdated
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    TagExists                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThorAnimInstance::OnTagUpdated(const struct FGameplayTag& Tag, bool TagExists)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThorAnimInstance", "OnTagUpdated");

	Params::ThorAnimInstance_OnTagUpdated Parms{};

	Parms.Tag = std::move(Tag);
	Parms.TagExists = TagExists;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
