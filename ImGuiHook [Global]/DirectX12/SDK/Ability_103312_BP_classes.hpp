#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_103312_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyAbility_103312_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_103312_BP.Ability_103312_BP_C
// 0x0008 (0x2560 - 0x2558)
class UAbility_103312_BP_C final : public UPyAbility_103312
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_103312_BP(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompletedDelegate_84DEEF1A48D8AD67FD0E86A2FA668C22(const struct FGameplayTag& TriggerNotifyTagEventDelegate__DelegateSignature_EventTag);
	void OnTriggerEvent_84DEEF1A48D8AD67FD0E86A2FA668C22(const struct FGameplayTag& TriggerNotifyTagEventDelegate__DelegateSignature_EventTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_103312_BP_C">();
	}
	static class UAbility_103312_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_103312_BP_C>();
	}
};
static_assert(alignof(UAbility_103312_BP_C) == 0x000008, "Wrong alignment on UAbility_103312_BP_C");
static_assert(sizeof(UAbility_103312_BP_C) == 0x002560, "Wrong size on UAbility_103312_BP_C");
static_assert(offsetof(UAbility_103312_BP_C, UberGraphFrame) == 0x002558, "Member 'UAbility_103312_BP_C::UberGraphFrame' has a wrong offset!");

}
