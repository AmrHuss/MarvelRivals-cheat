#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarvelPlayerControllerBP

#include "Basic.hpp"

#include "PyMarvelPlayerController_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MarvelPlayerControllerBP.MarvelPlayerControllerBP_C
// 0x00A8 (0x1288 - 0x11E0)
class AMarvelPlayerControllerBP_C final : public APyMarvelPlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x11E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPythonComponent*                       Wizcmd;                                            // 0x11E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClientCharacterBeginPlay;                        // 0x11F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnServerCmdMsg;                                    // 0x1200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnShowMessage;                                     // 0x1210(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Ability1ReleaseDispatcher;                         // 0x1220(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Ability2ReleaseDispatcher;                         // 0x1230(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Ability5ReleaseDispatcher;                         // 0x1240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Ability5PressDispatcher;                           // 0x1250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayEffectSpecHandle              EffectHandle;                                      // 0x1260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        AttributeData;                                     // 0x1270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnShowPlayerMessage;                               // 0x1278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ShowMessageToChatPanelWithType(const class FString& Message, int32 Type);
	void ShowMessageToChatPanel(const class FString& Message);
	void OnShowPlayerMessage__DelegateSignature(const class FText& Message, int32 Type);
	void OnShowMessage__DelegateSignature(const class FText& Message);
	void OnServerCmdMsg__DelegateSignature(const class FText& Message);
	void OnClientCharacterBeginPlay__DelegateSignature();
	void IsActiveAbility(bool* Abiliting);
	void InpActEvt_AbilityInstruction_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_AbilityInstruction_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Ability2_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Ability1_K2Node_InputActionEvent_3(const struct FKey& Key);
	void ExecuteUbergraph_MarvelPlayerControllerBP(int32 EntryPoint);
	void EventTellClientMsg(const class FText& Message);
	void Ability5ReleaseDispatcher__DelegateSignature();
	void Ability5PressDispatcher__DelegateSignature();
	void Ability2ReleaseDispatcher__DelegateSignature();
	void Ability1ReleaseDispatcher__DelegateSignature();
	void SendCmdToPython(const class FString& Command);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MarvelPlayerControllerBP_C">();
	}
	static class AMarvelPlayerControllerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMarvelPlayerControllerBP_C>();
	}
};
static_assert(alignof(AMarvelPlayerControllerBP_C) == 0x000008, "Wrong alignment on AMarvelPlayerControllerBP_C");
static_assert(sizeof(AMarvelPlayerControllerBP_C) == 0x001288, "Wrong size on AMarvelPlayerControllerBP_C");
static_assert(offsetof(AMarvelPlayerControllerBP_C, UberGraphFrame) == 0x0011E0, "Member 'AMarvelPlayerControllerBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, Wizcmd) == 0x0011E8, "Member 'AMarvelPlayerControllerBP_C::Wizcmd' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, OnClientCharacterBeginPlay) == 0x0011F0, "Member 'AMarvelPlayerControllerBP_C::OnClientCharacterBeginPlay' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, OnServerCmdMsg) == 0x001200, "Member 'AMarvelPlayerControllerBP_C::OnServerCmdMsg' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, OnShowMessage) == 0x001210, "Member 'AMarvelPlayerControllerBP_C::OnShowMessage' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, Ability1ReleaseDispatcher) == 0x001220, "Member 'AMarvelPlayerControllerBP_C::Ability1ReleaseDispatcher' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, Ability2ReleaseDispatcher) == 0x001230, "Member 'AMarvelPlayerControllerBP_C::Ability2ReleaseDispatcher' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, Ability5ReleaseDispatcher) == 0x001240, "Member 'AMarvelPlayerControllerBP_C::Ability5ReleaseDispatcher' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, Ability5PressDispatcher) == 0x001250, "Member 'AMarvelPlayerControllerBP_C::Ability5PressDispatcher' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, EffectHandle) == 0x001260, "Member 'AMarvelPlayerControllerBP_C::EffectHandle' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, AttributeData) == 0x001270, "Member 'AMarvelPlayerControllerBP_C::AttributeData' has a wrong offset!");
static_assert(offsetof(AMarvelPlayerControllerBP_C, OnShowPlayerMessage) == 0x001278, "Member 'AMarvelPlayerControllerBP_C::OnShowPlayerMessage' has a wrong offset!");

}

