#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_103221_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyAbility_103221_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_103221_BP.Ability_103221_BP_C
// 0x0008 (0x2568 - 0x2560)
class UAbility_103221_BP_C final : public UPyAbility_103221
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2560(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_103221_BP(int32 EntryPoint);
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_103221_BP_C">();
	}
	static class UAbility_103221_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_103221_BP_C>();
	}
};
static_assert(alignof(UAbility_103221_BP_C) == 0x000008, "Wrong alignment on UAbility_103221_BP_C");
static_assert(sizeof(UAbility_103221_BP_C) == 0x002568, "Wrong size on UAbility_103221_BP_C");
static_assert(offsetof(UAbility_103221_BP_C, UberGraphFrame) == 0x002560, "Member 'UAbility_103221_BP_C::UberGraphFrame' has a wrong offset!");

}

