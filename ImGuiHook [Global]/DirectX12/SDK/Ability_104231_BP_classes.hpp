#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_104231_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyAbility_104231_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_104231_BP.Ability_104231_BP_C
// 0x0008 (0x2578 - 0x2570)
class UAbility_104231_BP_C final : public UPyAbility_104231
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_104231_BP(int32 EntryPoint);
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_104231_BP_C">();
	}
	static class UAbility_104231_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_104231_BP_C>();
	}
};
static_assert(alignof(UAbility_104231_BP_C) == 0x000008, "Wrong alignment on UAbility_104231_BP_C");
static_assert(sizeof(UAbility_104231_BP_C) == 0x002578, "Wrong size on UAbility_104231_BP_C");
static_assert(offsetof(UAbility_104231_BP_C, UberGraphFrame) == 0x002570, "Member 'UAbility_104231_BP_C::UberGraphFrame' has a wrong offset!");

}
