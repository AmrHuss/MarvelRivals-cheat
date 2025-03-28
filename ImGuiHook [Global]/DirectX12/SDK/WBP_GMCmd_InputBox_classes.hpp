#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GMCmd_InputBox

#include "Basic.hpp"

#include "PyWidget_GMCmdCustomBox_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GMCmd_InputBox.WBP_GMCmd_InputBox_C
// 0x0048 (0x0650 - 0x0608)
class UWBP_GMCmd_InputBox_C final : public UPyWidget_GMAttrInputBox
{
public:
	class UWBP_Common_Btn_Lv3_Dark_C*             Btn_Popup;                                         // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     CustomCmdBox;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDownList_Lv2_C*                DDL_Input;                                         // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Input_C*                    EditableText_Custom;                               // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Input;                                     // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_InputBox;                                  // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_AttrName;                                     // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Kwargs;                                       // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       TextBlock_Description;                             // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GMCmd_InputBox_C">();
	}
	static class UWBP_GMCmd_InputBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GMCmd_InputBox_C>();
	}
};
static_assert(alignof(UWBP_GMCmd_InputBox_C) == 0x000008, "Wrong alignment on UWBP_GMCmd_InputBox_C");
static_assert(sizeof(UWBP_GMCmd_InputBox_C) == 0x000650, "Wrong size on UWBP_GMCmd_InputBox_C");
static_assert(offsetof(UWBP_GMCmd_InputBox_C, Btn_Popup) == 0x000608, "Member 'UWBP_GMCmd_InputBox_C::Btn_Popup' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_InputBox_C, CustomCmdBox) == 0x000610, "Member 'UWBP_GMCmd_InputBox_C::CustomCmdBox' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_InputBox_C, DDL_Input) == 0x000618, "Member 'UWBP_GMCmd_InputBox_C::DDL_Input' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_InputBox_C, EditableText_Custom) == 0x000620, "Member 'UWBP_GMCmd_InputBox_C::EditableText_Custom' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_InputBox_C, SizeBox_Input) == 0x000628, "Member 'UWBP_GMCmd_InputBox_C::SizeBox_Input' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_InputBox_C, SizeBox_InputBox) == 0x000630, "Member 'UWBP_GMCmd_InputBox_C::SizeBox_InputBox' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_InputBox_C, Text_AttrName) == 0x000638, "Member 'UWBP_GMCmd_InputBox_C::Text_AttrName' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_InputBox_C, Text_Kwargs) == 0x000640, "Member 'UWBP_GMCmd_InputBox_C::Text_Kwargs' has a wrong offset!");
static_assert(offsetof(UWBP_GMCmd_InputBox_C, TextBlock_Description) == 0x000648, "Member 'UWBP_GMCmd_InputBox_C::TextBlock_Description' has a wrong offset!");

}

