#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KnockUp_200002_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MarvelLevel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass KnockUp_200002_BP.KnockUp_200002_BP_C
// 0x0008 (0x1D58 - 0x1D50)
class UKnockUp_200002_BP_C final : public UMarvelLevelKnockUpAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1D50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_KnockUp_200002_BP(int32 EntryPoint);
	void GetOwnerAndCauser(class AActor** Owner, class AActor** Causer);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KnockUp_200002_BP_C">();
	}
	static class UKnockUp_200002_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKnockUp_200002_BP_C>();
	}
};
static_assert(alignof(UKnockUp_200002_BP_C) == 0x000008, "Wrong alignment on UKnockUp_200002_BP_C");
static_assert(sizeof(UKnockUp_200002_BP_C) == 0x001D58, "Wrong size on UKnockUp_200002_BP_C");
static_assert(offsetof(UKnockUp_200002_BP_C, UberGraphFrame) == 0x001D50, "Member 'UKnockUp_200002_BP_C::UberGraphFrame' has a wrong offset!");

}

