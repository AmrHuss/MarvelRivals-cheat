#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_Prompt

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Common_Prompt.PyWidget_Common_Prompt
// 0x0358 (0x0940 - 0x05E8)
#pragma pack(push, 0x1)
class alignas(0x10) UPyWidget_Common_Prompt : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0xF];                                      // 0x05E1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            PromptBg_Brush;                                    // 0x05F0(0x00D0)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FSlateBrush                            PromptArrow_Brush;                                 // 0x06C0(0x00D0)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FSlateBrush                            WarningBg_Brush;                                   // 0x0790(0x00D0)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FSlateBrush                            WarningArrow_Brush;                                // 0x0860(0x00D0)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AKEvent_ShowWarning;                               // 0x0930(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetImgPromptBg(bool IsWarning);
	void SetTipsText(const class FText& Tips);
	void SetTipsRelativePosition(bool IsCenterAlign, bool IsTipDownside);
	void ShowTipWidget(bool IsWarning);
	void HideTipWidget();
	void SetTipBoxMaxDesiredWidth(float MaxDesiredWidth);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Common_Prompt">();
	}
	static class UPyWidget_Common_Prompt* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Common_Prompt>();
	}
};
#pragma pack(pop)
static_assert(alignof(UPyWidget_Common_Prompt) == 0x000010, "Wrong alignment on UPyWidget_Common_Prompt");
static_assert(sizeof(UPyWidget_Common_Prompt) == 0x000940, "Wrong size on UPyWidget_Common_Prompt");
static_assert(offsetof(UPyWidget_Common_Prompt, PromptBg_Brush) == 0x0005F0, "Member 'UPyWidget_Common_Prompt::PromptBg_Brush' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_Prompt, PromptArrow_Brush) == 0x0006C0, "Member 'UPyWidget_Common_Prompt::PromptArrow_Brush' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_Prompt, WarningBg_Brush) == 0x000790, "Member 'UPyWidget_Common_Prompt::WarningBg_Brush' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_Prompt, WarningArrow_Brush) == 0x000860, "Member 'UPyWidget_Common_Prompt::WarningArrow_Brush' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_Prompt, AKEvent_ShowWarning) == 0x000930, "Member 'UPyWidget_Common_Prompt::AKEvent_ShowWarning' has a wrong offset!");

}

