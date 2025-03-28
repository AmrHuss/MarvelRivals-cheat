#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102011

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102011.PyConfig_102011
// 0x0018 (0x00B0 - 0x0098)
class UPyConfig_102011 final : public UMarvelAbilityConfig
{
public:
	int32                                         ProjectileID;                                      // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           EnergyTag;                                         // 0x009C(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CriticalHitEnergyRestore;                          // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102011">();
	}
	static class UPyConfig_102011* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102011>();
	}
};
static_assert(alignof(UPyConfig_102011) == 0x000008, "Wrong alignment on UPyConfig_102011");
static_assert(sizeof(UPyConfig_102011) == 0x0000B0, "Wrong size on UPyConfig_102011");
static_assert(offsetof(UPyConfig_102011, ProjectileID) == 0x000098, "Member 'UPyConfig_102011::ProjectileID' has a wrong offset!");
static_assert(offsetof(UPyConfig_102011, EnergyTag) == 0x00009C, "Member 'UPyConfig_102011::EnergyTag' has a wrong offset!");
static_assert(offsetof(UPyConfig_102011, CriticalHitEnergyRestore) == 0x0000A8, "Member 'UPyConfig_102011::CriticalHitEnergyRestore' has a wrong offset!");

// PythonClass PyAbility_102011.PyAbility_102011
// 0x0010 (0x2568 - 0x2558)
class UPyAbility_102011 : public UAbility_108
{
public:
	FMulticastInlineDelegateProperty_             OnAddEnergyDispatcher;                             // 0x2558(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnAddEnergyDispatcher__DelegateSignature();
	void BeginPlay();
	void EndPlay();
	void OnMantisApplyDamage(class AActor* InSource, class AActor* InTarget, const struct FAttributeModifierHandle& ModifierParameterHandle);
	void HandleAnimSocketInfo(int32 SocketId, const struct FMarvelAbilitySocketInfo& SocketInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102011">();
	}
	static class UPyAbility_102011* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102011>();
	}
};
static_assert(alignof(UPyAbility_102011) == 0x000008, "Wrong alignment on UPyAbility_102011");
static_assert(sizeof(UPyAbility_102011) == 0x002568, "Wrong size on UPyAbility_102011");
static_assert(offsetof(UPyAbility_102011, OnAddEnergyDispatcher) == 0x002558, "Member 'UPyAbility_102011::OnAddEnergyDispatcher' has a wrong offset!");

}

