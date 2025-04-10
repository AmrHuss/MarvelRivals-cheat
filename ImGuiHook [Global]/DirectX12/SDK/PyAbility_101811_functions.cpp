#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101811

#include "Basic.hpp"

#include "PyAbility_101811_classes.hpp"
#include "PyAbility_101811_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_101811.PyProjectile_10181111.K2_OnInitializeData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyProjectile_10181111::K2_OnInitializeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10181111", "K2_OnInitializeData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101811.PyProjectile_10181111.K2_OnProjectileInfoForceChanged_ThreadSafe
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileForceChangedInfo      InProjectileForceChangedInfo                           (ConstParm, Parm, OutParm, ReferenceParm)

void APyProjectile_10181111::K2_OnProjectileInfoForceChanged_ThreadSafe(const struct FProjectileForceChangedInfo& InProjectileForceChangedInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyProjectile_10181111", "K2_OnProjectileInfoForceChanged_ThreadSafe");

	Params::PyProjectile_10181111_K2_OnProjectileInfoForceChanged_ThreadSafe Parms{};

	Parms.InProjectileForceChangedInfo = std::move(InProjectileForceChangedInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101811.PyAbility_101811.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_101811::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101811", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101811.PyAbility_101811.K2_ActivateAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_101811::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101811", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101811.PyAbility_101811.HandleAnimSocketInfo
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SocketId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMarvelAbilitySocketInfo         SocketInfo                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)

void UPyAbility_101811::HandleAnimSocketInfo(int32 SocketId, const struct FMarvelAbilitySocketInfo& SocketInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101811", "HandleAnimSocketInfo");

	Params::PyAbility_101811_HandleAnimSocketInfo Parms{};

	Parms.SocketId = SocketId;
	Parms.SocketInfo = std::move(SocketInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101811.PyAbility_101811.Time_To_Spawn_Projectile
// (Native, Public, BlueprintCallable)

void UPyAbility_101811::Time_To_Spawn_Projectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101811", "Time_To_Spawn_Projectile");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101811.PyAbility_101811.K2_OnEndAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_101811::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101811", "K2_OnEndAbility");

	Params::PyAbility_101811_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

