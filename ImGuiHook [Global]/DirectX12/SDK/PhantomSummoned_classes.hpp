#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhantomSummoned

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "PhantomSummoned_structs.hpp"
#include "MarvelAI_classes.hpp"


namespace SDK
{

// Class PhantomSummoned.PhantomAbilityInterface
// 0x0000 (0x0030 - 0x0030)
class IPhantomAbilityInterface final : public IInterface
{
public:
	class UGameplayAbility* GetSourceAbility();

	bool IsPhantomAbility() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhantomAbilityInterface">();
	}
	static class IPhantomAbilityInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPhantomAbilityInterface>();
	}
};
static_assert(alignof(IPhantomAbilityInterface) == 0x000008, "Wrong alignment on IPhantomAbilityInterface");
static_assert(sizeof(IPhantomAbilityInterface) == 0x000030, "Wrong size on IPhantomAbilityInterface");

// Class PhantomSummoned.Config_PhantomInputSyncAbility
// 0x0010 (0x00A8 - 0x0098)
class UConfig_PhantomInputSyncAbility final : public UMarvelAbilityConfig
{
public:
	TArray<struct FSyncAbilityConfig>             SyncAbilityConfigs;                                // 0x0098(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Config_PhantomInputSyncAbility">();
	}
	static class UConfig_PhantomInputSyncAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfig_PhantomInputSyncAbility>();
	}
};
static_assert(alignof(UConfig_PhantomInputSyncAbility) == 0x000008, "Wrong alignment on UConfig_PhantomInputSyncAbility");
static_assert(sizeof(UConfig_PhantomInputSyncAbility) == 0x0000A8, "Wrong size on UConfig_PhantomInputSyncAbility");
static_assert(offsetof(UConfig_PhantomInputSyncAbility, SyncAbilityConfigs) == 0x000098, "Member 'UConfig_PhantomInputSyncAbility::SyncAbilityConfigs' has a wrong offset!");

// Class PhantomSummoned.PhantomInputSyncAbility
// 0x0018 (0x2568 - 0x2550)
class UPhantomInputSyncAbility final : public UMarvelGameplayAbility
{
public:
	uint8                                         Pad_2550[0x8];                                     // 0x2550(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TScriptInterface<class IPhantomInterface>> Phantoms;                                          // 0x2558(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	void ServerNotifyInputToPhantom(EAbilityActionBindingType InActionBindingType, int32 InInputId, int32 InAbilityId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhantomInputSyncAbility">();
	}
	static class UPhantomInputSyncAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhantomInputSyncAbility>();
	}
};
static_assert(alignof(UPhantomInputSyncAbility) == 0x000008, "Wrong alignment on UPhantomInputSyncAbility");
static_assert(sizeof(UPhantomInputSyncAbility) == 0x002568, "Wrong size on UPhantomInputSyncAbility");
static_assert(offsetof(UPhantomInputSyncAbility, Phantoms) == 0x002558, "Member 'UPhantomInputSyncAbility::Phantoms' has a wrong offset!");

// Class PhantomSummoned.PhantomSummonedController
// 0x0530 (0x0EF8 - 0x09C8)
class APhantomSummonedController final : public AMarvelAIController
{
public:
	bool                                          bInvertRightMove;                                  // 0x09C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_9C9[0x7];                                      // 0x09C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilityTargetFilter             PhantomAimTargetFilter;                            // 0x09D0(0x0500)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPhantomAbilitySetting>         PhantomAbilitySettings;                            // 0x0ED0(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_EE0[0x18];                                     // 0x0EE0(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnPhantomSourceActivateAbility(class UGameplayAbility* SourceAbility);
	void OnPhantomSourceEndAbility(const struct FAbilityEndedData& AbilityEndData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhantomSummonedController">();
	}
	static class APhantomSummonedController* GetDefaultObj()
	{
		return GetDefaultObjImpl<APhantomSummonedController>();
	}
};
static_assert(alignof(APhantomSummonedController) == 0x000008, "Wrong alignment on APhantomSummonedController");
static_assert(sizeof(APhantomSummonedController) == 0x000EF8, "Wrong size on APhantomSummonedController");
static_assert(offsetof(APhantomSummonedController, bInvertRightMove) == 0x0009C8, "Member 'APhantomSummonedController::bInvertRightMove' has a wrong offset!");
static_assert(offsetof(APhantomSummonedController, PhantomAimTargetFilter) == 0x0009D0, "Member 'APhantomSummonedController::PhantomAimTargetFilter' has a wrong offset!");
static_assert(offsetof(APhantomSummonedController, PhantomAbilitySettings) == 0x000ED0, "Member 'APhantomSummonedController::PhantomAbilitySettings' has a wrong offset!");

// Class PhantomSummoned.PhantomInterface
// 0x0000 (0x0030 - 0x0030)
class IPhantomInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PhantomInterface">();
	}
	static class IPhantomInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPhantomInterface>();
	}
};
static_assert(alignof(IPhantomInterface) == 0x000008, "Wrong alignment on IPhantomInterface");
static_assert(sizeof(IPhantomInterface) == 0x000030, "Wrong size on IPhantomInterface");

}
