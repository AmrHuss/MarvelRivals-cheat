#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DebugAudio

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "PyWidget_AudioDebugPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DebugAudio.WBP_DebugAudio_C
// 0x0218 (0x0800 - 0x05E8)
class UWBP_DebugAudio_C final : public UPyWidget_AudioDebugPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelButton*                          Btn_Expression;                                    // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_SwitchAbility;                                 // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_SwitchProcedure;                               // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ExpressionContent;                                 // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          LockThreatButton;                                  // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          LockThreatInput;                                   // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_DebugInfo;                                    // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_SpatialVolume;                                // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_00Hero;                                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_00Name;                                         // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_01Value;                                        // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_02Enemy;                                        // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_03Dist;                                         // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_04View;                                         // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_05Aim;                                          // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_05Back;                                         // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_06Block;                                        // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_07Fire;                                         // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_08Damage;                                       // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_09Buff;                                         // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_10Ultimate;                                     // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TV_11Weight;                                       // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          UnlockAllThreatButton;                             // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          UnlockThreatButton;                                // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           VoiceUiPanel;                                      // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugAudioAbility_C*               WBP_DebugAudioAbility;                             // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugAudioTrigger_C*               WBP_DebugAudioTrigger;                             // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugProcedureAudio_C*             WBP_DebugProcedureAudio;                           // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroVoiceLines_C*                  WBP_HeroVoiceLines;                                // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIEvents_C*                        WBP_UIEventLines;                                  // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        TimeSinceLastUpdate;                               // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LN;                                                // 0x06E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_00Hero;                                       // 0x06F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_00Name;                                       // 0x0708(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_01Value;                                      // 0x0718(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_02Enemy;                                      // 0x0728(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_03Dist;                                       // 0x0738(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_04View;                                       // 0x0748(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_05Aim;                                        // 0x0758(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_05Back;                                       // 0x0768(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_06Block;                                      // 0x0778(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_07Fire;                                       // 0x0788(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_08Damage;                                     // 0x0798(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_09Buff;                                       // 0x07A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_10Ultimate;                                   // 0x07B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Text_11Weight;                                     // 0x07C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AThreatValueAdmin*                      ThreatAdmin;                                       // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         SwitchValue;                                       // 0x07E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNewCmdPanelVisible;                               // 0x07E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E5[0x3];                                      // 0x07E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         OldCmdNames;                                       // 0x07E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AChaosDestructionActor*                 CachedDestructionActor;                            // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Append(const class FString& Ori, const class FString& Append_0, class FString* Out);
	void BndEvt__LockThreatButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UnlockAllThreatButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UnlockThreatButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DebugAudio_Btn_Expression_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DebugAudio_Btn_SwitchAbility_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DebugAudio_Btn_SwitchProcedure_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BoolStr(bool Bool, bool Pass, class FString* Str);
	void Build_Threat_Value_Text(class AMarvelGameStateBP_C* MGS);
	void Construct();
	void ExecuteUbergraph_WBP_DebugAudio(int32 EntryPoint);
	void GetFormatedStr(TArray<class FString>& StrArr, const class FString& PerPrefix, const class FString& PerSuffix, class FString* OutStr);
	void GetFrontedCharacter(class AMarvelBaseCharacter** FrontCharacter);
	void GetHeroName(class AMarvelBaseCharacter* Char, class FString* TName);
	void GetStateStrings(class FString* OutStr);
	void OnHighFrequency();
	void OnLowFrequency();
	void OnMiddleFrequency();
	void PreConstruct(bool IsDesignTime);
	void SwitchDynamicPanel(int32 SWITCH);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DebugAudio_C">();
	}
	static class UWBP_DebugAudio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DebugAudio_C>();
	}
};
static_assert(alignof(UWBP_DebugAudio_C) == 0x000008, "Wrong alignment on UWBP_DebugAudio_C");
static_assert(sizeof(UWBP_DebugAudio_C) == 0x000800, "Wrong size on UWBP_DebugAudio_C");
static_assert(offsetof(UWBP_DebugAudio_C, UberGraphFrame) == 0x0005E8, "Member 'UWBP_DebugAudio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Btn_Expression) == 0x0005F0, "Member 'UWBP_DebugAudio_C::Btn_Expression' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Btn_SwitchAbility) == 0x0005F8, "Member 'UWBP_DebugAudio_C::Btn_SwitchAbility' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Btn_SwitchProcedure) == 0x000600, "Member 'UWBP_DebugAudio_C::Btn_SwitchProcedure' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, ExpressionContent) == 0x000608, "Member 'UWBP_DebugAudio_C::ExpressionContent' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, LockThreatButton) == 0x000610, "Member 'UWBP_DebugAudio_C::LockThreatButton' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, LockThreatInput) == 0x000618, "Member 'UWBP_DebugAudio_C::LockThreatInput' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_DebugInfo) == 0x000620, "Member 'UWBP_DebugAudio_C::Text_DebugInfo' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_SpatialVolume) == 0x000628, "Member 'UWBP_DebugAudio_C::Text_SpatialVolume' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_00Hero) == 0x000630, "Member 'UWBP_DebugAudio_C::TV_00Hero' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_00Name) == 0x000638, "Member 'UWBP_DebugAudio_C::TV_00Name' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_01Value) == 0x000640, "Member 'UWBP_DebugAudio_C::TV_01Value' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_02Enemy) == 0x000648, "Member 'UWBP_DebugAudio_C::TV_02Enemy' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_03Dist) == 0x000650, "Member 'UWBP_DebugAudio_C::TV_03Dist' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_04View) == 0x000658, "Member 'UWBP_DebugAudio_C::TV_04View' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_05Aim) == 0x000660, "Member 'UWBP_DebugAudio_C::TV_05Aim' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_05Back) == 0x000668, "Member 'UWBP_DebugAudio_C::TV_05Back' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_06Block) == 0x000670, "Member 'UWBP_DebugAudio_C::TV_06Block' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_07Fire) == 0x000678, "Member 'UWBP_DebugAudio_C::TV_07Fire' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_08Damage) == 0x000680, "Member 'UWBP_DebugAudio_C::TV_08Damage' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_09Buff) == 0x000688, "Member 'UWBP_DebugAudio_C::TV_09Buff' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_10Ultimate) == 0x000690, "Member 'UWBP_DebugAudio_C::TV_10Ultimate' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TV_11Weight) == 0x000698, "Member 'UWBP_DebugAudio_C::TV_11Weight' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, UnlockAllThreatButton) == 0x0006A0, "Member 'UWBP_DebugAudio_C::UnlockAllThreatButton' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, UnlockThreatButton) == 0x0006A8, "Member 'UWBP_DebugAudio_C::UnlockThreatButton' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, VoiceUiPanel) == 0x0006B0, "Member 'UWBP_DebugAudio_C::VoiceUiPanel' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, WBP_DebugAudioAbility) == 0x0006B8, "Member 'UWBP_DebugAudio_C::WBP_DebugAudioAbility' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, WBP_DebugAudioTrigger) == 0x0006C0, "Member 'UWBP_DebugAudio_C::WBP_DebugAudioTrigger' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, WBP_DebugProcedureAudio) == 0x0006C8, "Member 'UWBP_DebugAudio_C::WBP_DebugProcedureAudio' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, WBP_HeroVoiceLines) == 0x0006D0, "Member 'UWBP_DebugAudio_C::WBP_HeroVoiceLines' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, WBP_UIEventLines) == 0x0006D8, "Member 'UWBP_DebugAudio_C::WBP_UIEventLines' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, TimeSinceLastUpdate) == 0x0006E0, "Member 'UWBP_DebugAudio_C::TimeSinceLastUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, LN) == 0x0006E8, "Member 'UWBP_DebugAudio_C::LN' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_00Hero) == 0x0006F8, "Member 'UWBP_DebugAudio_C::Text_00Hero' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_00Name) == 0x000708, "Member 'UWBP_DebugAudio_C::Text_00Name' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_01Value) == 0x000718, "Member 'UWBP_DebugAudio_C::Text_01Value' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_02Enemy) == 0x000728, "Member 'UWBP_DebugAudio_C::Text_02Enemy' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_03Dist) == 0x000738, "Member 'UWBP_DebugAudio_C::Text_03Dist' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_04View) == 0x000748, "Member 'UWBP_DebugAudio_C::Text_04View' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_05Aim) == 0x000758, "Member 'UWBP_DebugAudio_C::Text_05Aim' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_05Back) == 0x000768, "Member 'UWBP_DebugAudio_C::Text_05Back' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_06Block) == 0x000778, "Member 'UWBP_DebugAudio_C::Text_06Block' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_07Fire) == 0x000788, "Member 'UWBP_DebugAudio_C::Text_07Fire' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_08Damage) == 0x000798, "Member 'UWBP_DebugAudio_C::Text_08Damage' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_09Buff) == 0x0007A8, "Member 'UWBP_DebugAudio_C::Text_09Buff' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_10Ultimate) == 0x0007B8, "Member 'UWBP_DebugAudio_C::Text_10Ultimate' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, Text_11Weight) == 0x0007C8, "Member 'UWBP_DebugAudio_C::Text_11Weight' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, ThreatAdmin) == 0x0007D8, "Member 'UWBP_DebugAudio_C::ThreatAdmin' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, SwitchValue) == 0x0007E0, "Member 'UWBP_DebugAudio_C::SwitchValue' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, bNewCmdPanelVisible) == 0x0007E4, "Member 'UWBP_DebugAudio_C::bNewCmdPanelVisible' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, OldCmdNames) == 0x0007E8, "Member 'UWBP_DebugAudio_C::OldCmdNames' has a wrong offset!");
static_assert(offsetof(UWBP_DebugAudio_C, CachedDestructionActor) == 0x0007F8, "Member 'UWBP_DebugAudio_C::CachedDestructionActor' has a wrong offset!");

}
