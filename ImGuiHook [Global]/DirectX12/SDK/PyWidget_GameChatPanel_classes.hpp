#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_GameChatPanel

#include "Basic.hpp"

#include "PyWidget_ChatPanelV4_classes.hpp"
#include "Marvel_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_GameChatPanel.PyWidget_GameChatPanel
// 0x0000 (0x0738 - 0x0738)
class UPyWidget_GameChatPanel : public UPyWidget_ChatPanelV4
{
public:
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_GameChatPanel">();
	}
	static class UPyWidget_GameChatPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_GameChatPanel>();
	}
};
static_assert(alignof(UPyWidget_GameChatPanel) == 0x000008, "Wrong alignment on UPyWidget_GameChatPanel");
static_assert(sizeof(UPyWidget_GameChatPanel) == 0x000738, "Wrong size on UPyWidget_GameChatPanel");

// PythonClass PyWidget_GameChatPanel.PyWidget_GameChatGuideTips
// 0x0110 (0x06F8 - 0x05E8)
class UPyWidget_GameChatGuideTips : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuideTipsStyle                        TipsStyle;                                         // 0x05E8(0x0110)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_GameChatGuideTips">();
	}
	static class UPyWidget_GameChatGuideTips* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_GameChatGuideTips>();
	}
};
static_assert(alignof(UPyWidget_GameChatGuideTips) == 0x000008, "Wrong alignment on UPyWidget_GameChatGuideTips");
static_assert(sizeof(UPyWidget_GameChatGuideTips) == 0x0006F8, "Wrong size on UPyWidget_GameChatGuideTips");
static_assert(offsetof(UPyWidget_GameChatGuideTips, TipsStyle) == 0x0005E8, "Member 'UPyWidget_GameChatGuideTips::TipsStyle' has a wrong offset!");

}

