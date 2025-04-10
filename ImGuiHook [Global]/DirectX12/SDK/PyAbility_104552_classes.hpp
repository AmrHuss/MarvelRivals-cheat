#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_104552

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_104552.PyConfig_104552
// 0x0F38 (0x0FD0 - 0x0098)
class UPyConfig_104552 : public UMarvelAbilityConfig
{
public:
	uint8                                         Pad_98[0x8];                                       // 0x0098(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilityTraceContext             EnemyTraceContext;                                 // 0x00A0(0x0F30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_104552">();
	}
	static class UPyConfig_104552* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_104552>();
	}
};
static_assert(alignof(UPyConfig_104552) == 0x000010, "Wrong alignment on UPyConfig_104552");
static_assert(sizeof(UPyConfig_104552) == 0x000FD0, "Wrong size on UPyConfig_104552");
static_assert(offsetof(UPyConfig_104552, EnemyTraceContext) == 0x0000A0, "Member 'UPyConfig_104552::EnemyTraceContext' has a wrong offset!");

// PythonClass PyAbility_104552.PyAbility_104552
// 0x0000 (0x2550 - 0x2550)
class UPyAbility_104552 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	void EndPlay();
	bool CanActivate();
	void K2_ActivateAbility();
	void OnAbilityHit(class UGameplayAbility* Ability, const struct FMarvelAbilityHitParams& HitParams, const TArray<struct FHitResult>& HitResults);
	void OnOwnerSummonedBeginAgentTask();
	void OnCommandOctopusEnhancedAttack(class UPrimitiveComponent* TargetActorComponent, const struct FVector& HitPosition);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_104552">();
	}
	static class UPyAbility_104552* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_104552>();
	}
};
static_assert(alignof(UPyAbility_104552) == 0x000008, "Wrong alignment on UPyAbility_104552");
static_assert(sizeof(UPyAbility_104552) == 0x002550, "Wrong size on UPyAbility_104552");

}

