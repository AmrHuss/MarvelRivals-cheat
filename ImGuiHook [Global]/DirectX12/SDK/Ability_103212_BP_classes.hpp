#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_103212_BP

#include "Basic.hpp"

#include "PyAbility_103212_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_103212_BP.Ability_103212_BP_C
// 0x0008 (0x2720 - 0x2718)
class UAbility_103212_BP_C final : public UPyAbility_103212
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_103212_BP(int32 EntryPoint);
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_103212_BP_C">();
	}
	static class UAbility_103212_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_103212_BP_C>();
	}
};
static_assert(alignof(UAbility_103212_BP_C) == 0x000008, "Wrong alignment on UAbility_103212_BP_C");
static_assert(sizeof(UAbility_103212_BP_C) == 0x002720, "Wrong size on UAbility_103212_BP_C");
static_assert(offsetof(UAbility_103212_BP_C, UberGraphFrame) == 0x002718, "Member 'UAbility_103212_BP_C::UberGraphFrame' has a wrong offset!");

}
