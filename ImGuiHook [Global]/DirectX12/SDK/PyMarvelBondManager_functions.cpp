#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelBondManager

#include "Basic.hpp"

#include "PyMarvelBondManager_classes.hpp"
#include "PyMarvelBondManager_parameters.hpp"


namespace SDK
{

// PythonFunction PyMarvelBondManager.PyMarvelBondManager.K2_OnInitialize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyMarvelBondManager::K2_OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "K2_OnInitialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.K2_OnDeInitialize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyMarvelBondManager::K2_OnDeInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "K2_OnDeInitialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.OnBondStateChange
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBondInstance                    InBondInstance                                         (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class AMarvelBaseCharacter*>     TriggerCharacters                                      (ConstParm, Parm, OutParm, ReferenceParm)

void APyMarvelBondManager::OnBondStateChange(const struct FBondInstance& InBondInstance, const TArray<class AMarvelBaseCharacter*>& TriggerCharacters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "OnBondStateChange");

	Params::PyMarvelBondManager_OnBondStateChange Parms{};

	Parms.InBondInstance = std::move(InBondInstance);
	Parms.TriggerCharacters = std::move(TriggerCharacters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.OnBondCharacterAdd
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AMarvelBaseCharacter*             TriggerCharacter                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBondInstance>            RefBondInstances                                       (ConstParm, Parm, OutParm, ReferenceParm)

void APyMarvelBondManager::OnBondCharacterAdd(class AMarvelBaseCharacter* TriggerCharacter, const TArray<struct FBondInstance>& RefBondInstances)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "OnBondCharacterAdd");

	Params::PyMarvelBondManager_OnBondCharacterAdd Parms{};

	Parms.TriggerCharacter = TriggerCharacter;
	Parms.RefBondInstances = std::move(RefBondInstances);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.OnBondCharacterRemove
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AMarvelBaseCharacter*             TriggerCharacter                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBondInstance>            RefBondInstances                                       (ConstParm, Parm, OutParm, ReferenceParm)

void APyMarvelBondManager::OnBondCharacterRemove(class AMarvelBaseCharacter* TriggerCharacter, const TArray<struct FBondInstance>& RefBondInstances)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "OnBondCharacterRemove");

	Params::PyMarvelBondManager_OnBondCharacterRemove Parms{};

	Parms.TriggerCharacter = TriggerCharacter;
	Parms.RefBondInstances = std::move(RefBondInstances);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.OnGlobalCharacterRegister
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Character                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APyMarvelBondManager::OnGlobalCharacterRegister(class AActor* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "OnGlobalCharacterRegister");

	Params::PyMarvelBondManager_OnGlobalCharacterRegister Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.OnGlobalActorReborn
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Instigator_0                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           RebornActor                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APyMarvelBondManager::OnGlobalActorReborn(class AActor* Instigator_0, class AActor* RebornActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "OnGlobalActorReborn");

	Params::PyMarvelBondManager_OnGlobalActorReborn Parms{};

	Parms.Instigator_0 = Instigator_0;
	Parms.RebornActor = RebornActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.OnCharacterAttributeInited
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMarvelBaseCharacter*             Character                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APyMarvelBondManager::OnCharacterAttributeInited(class AMarvelBaseCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "OnCharacterAttributeInited");

	Params::PyMarvelBondManager_OnCharacterAttributeInited Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.OnAssistKillCallback
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AMarvelBaseCharacter*             InTriggerCharacter                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMarvelBaseCharacter*             InTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAttributeModifierParameter      ModifierParameter                                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBondInstance                    InBondInstance                                         (ConstParm, Parm, OutParm, ReferenceParm)

void APyMarvelBondManager::OnAssistKillCallback(class AMarvelBaseCharacter* InTriggerCharacter, class AMarvelBaseCharacter* InTarget, const struct FAttributeModifierParameter& ModifierParameter, const struct FBondInstance& InBondInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "OnAssistKillCallback");

	Params::PyMarvelBondManager_OnAssistKillCallback Parms{};

	Parms.InTriggerCharacter = InTriggerCharacter;
	Parms.InTarget = InTarget;
	Parms.ModifierParameter = std::move(ModifierParameter);
	Parms.InBondInstance = std::move(InBondInstance);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.OnReceiverTriggeredCallback
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AMarvelBaseCharacter*             InTriggerCharacter                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   InTriggerAbilityID                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMarvelBaseCharacter*             InTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FBondInstance                    InBondInstance                                         (ConstParm, Parm, OutParm, ReferenceParm)

void APyMarvelBondManager::OnReceiverTriggeredCallback(class AMarvelBaseCharacter* InTriggerCharacter, int32 InTriggerAbilityID, class AMarvelBaseCharacter* InTarget, const struct FBondInstance& InBondInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "OnReceiverTriggeredCallback");

	Params::PyMarvelBondManager_OnReceiverTriggeredCallback Parms{};

	Parms.InTriggerCharacter = InTriggerCharacter;
	Parms.InTriggerAbilityID = InTriggerAbilityID;
	Parms.InTarget = InTarget;
	Parms.InBondInstance = std::move(InBondInstance);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.OnSenderTriggeredCallback
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AMarvelBaseCharacter*             InTriggerCharacter                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   InTriggerAbilityID                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMarvelBaseCharacter*             InTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FBondInstance                    InBondInstance                                         (ConstParm, Parm, OutParm, ReferenceParm)

void APyMarvelBondManager::OnSenderTriggeredCallback(class AMarvelBaseCharacter* InTriggerCharacter, int32 InTriggerAbilityID, class AMarvelBaseCharacter* InTarget, const struct FBondInstance& InBondInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "OnSenderTriggeredCallback");

	Params::PyMarvelBondManager_OnSenderTriggeredCallback Parms{};

	Parms.InTriggerCharacter = InTriggerCharacter;
	Parms.InTriggerAbilityID = InTriggerAbilityID;
	Parms.InTarget = InTarget;
	Parms.InBondInstance = std::move(InBondInstance);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelBondManager.TestBindEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                     InPS                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APyMarvelBondManager::TestBindEvent(class APlayerState* InPS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelBondManager", "TestBindEvent");

	Params::PyMarvelBondManager_TestBindEvent Parms{};

	Parms.InPS = InPS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelBondManager.PyMarvelDefaultBondAbility.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyMarvelDefaultBondAbility::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelDefaultBondAbility", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

