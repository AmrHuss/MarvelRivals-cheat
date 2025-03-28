#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GMCmd_EditorBox

#include "Basic.hpp"

#include "PyWidget_GMCmdEditorBox_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GMCmd_EditorBox.WBP_GMCmd_EditorBox_C
// 0x0040 (0x0638 - 0x05F8)
class UWBP_GMCmd_EditorBox_C final : public UPyWidget_GMCmdEditorBox
{
public:
	class UWBP_Common_Input_C*                    Cmd_Editable;                                      // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Input_C*                    CmdName_Editable;                                  // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     CustomCmdBox;                                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Input_C*                    GroupName_Editable;                                // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TextBlock_Description;                             // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TextBlock_Description_1;                           // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TextBlock_Description_2;                           // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 InputBoxClass;                                     // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GMCmd_EditorBox_C">();
	}
	static class UWBP_GMCmd_EditorBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GMCmd_EditorBox_C>();
	}
};
static_assert(alignof(UWBP_GMCmd_EditorBox_C) == 0x000008, "Wrong alignment on UWBP_GMCmd_EditorBox_C");
static_assert(sizeof(UWBP_GMCmd_EditorBox_C) == 0x000638, "Wrong size on UWBP_GMCmd_EditorBox_C");
static_assert(offsetof(UWBP_GMCmd_EditorBox_C, Cmd_Editable) == 0x0005F8, "Member 'UWBP_GMCmd_EditorBox_C::Cmd_Editable' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_EditorBox_C, CmdName_Editable) == 0x000600, "Member 'UWBP_GMCmd_EditorBox_C::CmdName_Editable' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_EditorBox_C, CustomCmdBox) == 0x000608, "Member 'UWBP_GMCmd_EditorBox_C::CustomCmdBox' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_EditorBox_C, GroupName_Editable) == 0x000610, "Member 'UWBP_GMCmd_EditorBox_C::GroupName_Editable' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_EditorBox_C, TextBlock_Description) == 0x000618, "Member 'UWBP_GMCmd_EditorBox_C::TextBlock_Description' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_EditorBox_C, TextBlock_Description_1) == 0x000620, "Member 'UWBP_GMCmd_EditorBox_C::TextBlock_Description_1' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_EditorBox_C, TextBlock_Description_2) == 0x000628, "Member 'UWBP_GMCmd_EditorBox_C::TextBlock_Description_2' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_EditorBox_C, InputBoxClass) == 0x000630, "Member 'UWBP_GMCmd_EditorBox_C::InputBoxClass' has a wrong offset!");

}

