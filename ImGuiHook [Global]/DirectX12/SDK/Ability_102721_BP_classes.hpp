#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_102721_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_102721_BP.Ability_102721_BP_C
// 0x0008 (0x2560 - 0x2558)
class UAbility_102721_BP_C final : public UAbility_108
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_102721_BP(int32 EntryPoint);
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_102721_BP_C">();
	}
	static class UAbility_102721_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_102721_BP_C>();
	}
};
static_assert(alignof(UAbility_102721_BP_C) == 0x000008, "Wrong alignment on UAbility_102721_BP_C");
static_assert(sizeof(UAbility_102721_BP_C) == 0x002560, "Wrong size on UAbility_102721_BP_C");
static_assert(offsetof(UAbility_102721_BP_C, UberGraphFrame) == 0x002558, "Member 'UAbility_102721_BP_C::UberGraphFrame' has a wrong offset!");

}

