#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103851

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_classes.hpp"
#include "Hero_1038_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103851.PyAbility_103852
// 0x0000 (0x5A90 - 0x5A90)
class UPyAbility_103852 : public UMarvelAeroBaseAbility
{
public:
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103852">();
	}
	static class UPyAbility_103852* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103852>();
	}
};
static_assert(alignof(UPyAbility_103852) == 0x000010, "Wrong alignment on UPyAbility_103852");
static_assert(sizeof(UPyAbility_103852) == 0x005A90, "Wrong size on UPyAbility_103852");

// PythonClass PyAbility_103851.PyConfig_103851
// 0x0008 (0x00A0 - 0x0098)
class UPyConfig_103851 final : public UMarvelAbilityConfig
{
public:
	float                                         ChargeTime;                                        // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinHeightAboveGround;                              // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_103851">();
	}
	static class UPyConfig_103851* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_103851>();
	}
};
static_assert(alignof(UPyConfig_103851) == 0x000008, "Wrong alignment on UPyConfig_103851");
static_assert(sizeof(UPyConfig_103851) == 0x0000A0, "Wrong size on UPyConfig_103851");
static_assert(offsetof(UPyConfig_103851, ChargeTime) == 0x000098, "Member 'UPyConfig_103851::ChargeTime' has a wrong offset!");
static_assert(offsetof(UPyConfig_103851, MinHeightAboveGround) == 0x00009C, "Member 'UPyConfig_103851::MinHeightAboveGround' has a wrong offset!");

// PythonClass PyAbility_103851.PyAbility_103851
// 0x0000 (0x2558 - 0x2558)
class UPyAbility_103851 : public UAbility_108
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void BreakEventNotify();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_103851">();
	}
	static class UPyAbility_103851* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_103851>();
	}
};
static_assert(alignof(UPyAbility_103851) == 0x000008, "Wrong alignment on UPyAbility_103851");
static_assert(sizeof(UPyAbility_103851) == 0x002558, "Wrong size on UPyAbility_103851");

// PythonClass PyAbility_103851.PyCue_Scope_HitImpact_10385101
// 0x0018 (0x04E8 - 0x04D0)
class UPyCue_Scope_HitImpact_10385101 final : public UMarvelCueNotify_HitImpact
{
public:
	class UFXSystemAsset*                         ChainFx;                                           // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FxEndLocParam;                                     // 0x04D8(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Scope_HitImpact_10385101">();
	}
	static class UPyCue_Scope_HitImpact_10385101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyCue_Scope_HitImpact_10385101>();
	}
};
static_assert(alignof(UPyCue_Scope_HitImpact_10385101) == 0x000008, "Wrong alignment on UPyCue_Scope_HitImpact_10385101");
static_assert(sizeof(UPyCue_Scope_HitImpact_10385101) == 0x0004E8, "Wrong size on UPyCue_Scope_HitImpact_10385101");
static_assert(offsetof(UPyCue_Scope_HitImpact_10385101, ChainFx) == 0x0004D0, "Member 'UPyCue_Scope_HitImpact_10385101::ChainFx' has a wrong offset!");
static_assert(offsetof(UPyCue_Scope_HitImpact_10385101, FxEndLocParam) == 0x0004D8, "Member 'UPyCue_Scope_HitImpact_10385101::FxEndLocParam' has a wrong offset!");

// PythonClass PyAbility_103851.PyCue_Scope_Start_10385101
// 0x0028 (0x0390 - 0x0368)
class UPyCue_Scope_Start_10385101 final : public UMarvelCueNotify_Base
{
public:
	class UFXSystemAsset*                         ExplodeFxSelf;                                     // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         ExplodeFxOther;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ExpldeFxOffset;                                    // 0x0378(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Scope_Start_10385101">();
	}
	static class UPyCue_Scope_Start_10385101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyCue_Scope_Start_10385101>();
	}
};
static_assert(alignof(UPyCue_Scope_Start_10385101) == 0x000008, "Wrong alignment on UPyCue_Scope_Start_10385101");
static_assert(sizeof(UPyCue_Scope_Start_10385101) == 0x000390, "Wrong size on UPyCue_Scope_Start_10385101");
static_assert(offsetof(UPyCue_Scope_Start_10385101, ExplodeFxSelf) == 0x000368, "Member 'UPyCue_Scope_Start_10385101::ExplodeFxSelf' has a wrong offset!");
static_assert(offsetof(UPyCue_Scope_Start_10385101, ExplodeFxOther) == 0x000370, "Member 'UPyCue_Scope_Start_10385101::ExplodeFxOther' has a wrong offset!");
static_assert(offsetof(UPyCue_Scope_Start_10385101, ExpldeFxOffset) == 0x000378, "Member 'UPyCue_Scope_Start_10385101::ExpldeFxOffset' has a wrong offset!");

// PythonClass PyAbility_103851.PyCue_Ability_Loop_10385101
// 0x0000 (0x0FA0 - 0x0FA0)
class APyCue_Ability_Loop_10385101 final : public ACue_Ability_Loop_10385101
{
public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10385101">();
	}
	static class APyCue_Ability_Loop_10385101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10385101>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10385101) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_10385101");
static_assert(sizeof(APyCue_Ability_Loop_10385101) == 0x000FA0, "Wrong size on APyCue_Ability_Loop_10385101");

}
