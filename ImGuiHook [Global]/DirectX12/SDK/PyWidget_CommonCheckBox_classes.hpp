#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CommonCheckBox

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "PyWidget_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_CommonCheckBox.PyWidget_CommonCheckBox
// 0x00F8 (0x0840 - 0x0748)
class UPyWidget_CommonCheckBox : public UPyWidget_Button
{
public:
	bool                                          IsCheck;                                           // 0x0748(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsUnuseHoverFrame;                                 // 0x0749(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74A[0x6];                                      // 0x074A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CheckText;                                         // 0x0750(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         ButtonTextFont;                                    // 0x0768(0x0068)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            BtnTextColor_Normal;                               // 0x07D0(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            BtnTextColor_Hovered;                              // 0x07E4(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            BtnTextColor_Pressed;                              // 0x07F8(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            BtnTextColor_Disable;                              // 0x080C(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Check;                                        // 0x0820(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          BtnDiable;                                         // 0x0828(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OnlyClickOnce;                                     // 0x0829(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DisableText;                                       // 0x082A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_82B[0x5];                                      // 0x082B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCheckStateChanged;                               // 0x0830(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnCheckStateChanged__DelegateSignature(bool Checked);
	void OnInitialized();
	void SetIsHover(bool IsHover_0);
	void SetBtnIsPressed(bool IsBtnPressed_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CommonCheckBox">();
	}
	static class UPyWidget_CommonCheckBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CommonCheckBox>();
	}
};
static_assert(alignof(UPyWidget_CommonCheckBox) == 0x000008, "Wrong alignment on UPyWidget_CommonCheckBox");
static_assert(sizeof(UPyWidget_CommonCheckBox) == 0x000840, "Wrong size on UPyWidget_CommonCheckBox");
static_assert(offsetof(UPyWidget_CommonCheckBox, IsCheck) == 0x000748, "Member 'UPyWidget_CommonCheckBox::IsCheck' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, IsUnuseHoverFrame) == 0x000749, "Member 'UPyWidget_CommonCheckBox::IsUnuseHoverFrame' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, CheckText) == 0x000750, "Member 'UPyWidget_CommonCheckBox::CheckText' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, ButtonTextFont) == 0x000768, "Member 'UPyWidget_CommonCheckBox::ButtonTextFont' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, BtnTextColor_Normal) == 0x0007D0, "Member 'UPyWidget_CommonCheckBox::BtnTextColor_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, BtnTextColor_Hovered) == 0x0007E4, "Member 'UPyWidget_CommonCheckBox::BtnTextColor_Hovered' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, BtnTextColor_Pressed) == 0x0007F8, "Member 'UPyWidget_CommonCheckBox::BtnTextColor_Pressed' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, BtnTextColor_Disable) == 0x00080C, "Member 'UPyWidget_CommonCheckBox::BtnTextColor_Disable' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, Text_Check) == 0x000820, "Member 'UPyWidget_CommonCheckBox::Text_Check' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, BtnDiable) == 0x000828, "Member 'UPyWidget_CommonCheckBox::BtnDiable' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, OnlyClickOnce) == 0x000829, "Member 'UPyWidget_CommonCheckBox::OnlyClickOnce' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, DisableText) == 0x00082A, "Member 'UPyWidget_CommonCheckBox::DisableText' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonCheckBox, OnCheckStateChanged) == 0x000830, "Member 'UPyWidget_CommonCheckBox::OnCheckStateChanged' has a wrong offset!");

}
