#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SettingMiniKeyboard

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"
#include "InputCore_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_SettingMiniKeyboard.PyWidget_MiniHost
// 0x0090 (0x0678 - 0x05E8)
class UPyWidget_MiniHost : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Keynum;                                            // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   GamepadKey_1;                                      // 0x05E8(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   GamepadKey_2;                                      // 0x0608(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            Text_Key_Normal_Color;                             // 0x0628(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            Text_Key_Combine_Color;                            // 0x063C(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            Text_Key_Conflict_Color;                           // 0x0650(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_664[0x4];                                      // 0x0664(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UUserWidget>                Marquee_Widget;                                    // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                             TextStyleSet;                                      // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_MiniHost">();
	}
	static class UPyWidget_MiniHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_MiniHost>();
	}
};
static_assert(alignof(UPyWidget_MiniHost) == 0x000008, "Wrong alignment on UPyWidget_MiniHost");
static_assert(sizeof(UPyWidget_MiniHost) == 0x000678, "Wrong size on UPyWidget_MiniHost");
static_assert(offsetof(UPyWidget_MiniHost, Keynum) == 0x0005E4, "Member 'UPyWidget_MiniHost::Keynum' has a wrong offset!");
static_assert(offsetof(UPyWidget_MiniHost, GamepadKey_1) == 0x0005E8, "Member 'UPyWidget_MiniHost::GamepadKey_1' has a wrong offset!");
static_assert(offsetof(UPyWidget_MiniHost, GamepadKey_2) == 0x000608, "Member 'UPyWidget_MiniHost::GamepadKey_2' has a wrong offset!");
static_assert(offsetof(UPyWidget_MiniHost, Text_Key_Normal_Color) == 0x000628, "Member 'UPyWidget_MiniHost::Text_Key_Normal_Color' has a wrong offset!");
static_assert(offsetof(UPyWidget_MiniHost, Text_Key_Combine_Color) == 0x00063C, "Member 'UPyWidget_MiniHost::Text_Key_Combine_Color' has a wrong offset!");
static_assert(offsetof(UPyWidget_MiniHost, Text_Key_Conflict_Color) == 0x000650, "Member 'UPyWidget_MiniHost::Text_Key_Conflict_Color' has a wrong offset!");
static_assert(offsetof(UPyWidget_MiniHost, Marquee_Widget) == 0x000668, "Member 'UPyWidget_MiniHost::Marquee_Widget' has a wrong offset!");
static_assert(offsetof(UPyWidget_MiniHost, TextStyleSet) == 0x000670, "Member 'UPyWidget_MiniHost::TextStyleSet' has a wrong offset!");

// PythonClass PyWidget_SettingMiniKeyboard.PyWidget_SettingMiniKeyBoard
// 0x0008 (0x05F0 - 0x05E8)
class UPyWidget_SettingMiniKeyBoard : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelKeyUIAsset*                      KeyAsset;                                          // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetKeyAsset(class UMarvelKeyUIAsset* InKeyAsset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SettingMiniKeyBoard">();
	}
	static class UPyWidget_SettingMiniKeyBoard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SettingMiniKeyBoard>();
	}
};
static_assert(alignof(UPyWidget_SettingMiniKeyBoard) == 0x000008, "Wrong alignment on UPyWidget_SettingMiniKeyBoard");
static_assert(sizeof(UPyWidget_SettingMiniKeyBoard) == 0x0005F0, "Wrong size on UPyWidget_SettingMiniKeyBoard");
static_assert(offsetof(UPyWidget_SettingMiniKeyBoard, KeyAsset) == 0x0005E8, "Member 'UPyWidget_SettingMiniKeyBoard::KeyAsset' has a wrong offset!");

// PythonClass PyWidget_SettingMiniKeyboard.PyWidget_MiniHostPanel
// 0x0018 (0x0600 - 0x05E8)
class UPyWidget_MiniHostPanel : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   UltimateAbilityName;                               // 0x05E8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_MiniHostPanel">();
	}
	static class UPyWidget_MiniHostPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_MiniHostPanel>();
	}
};
static_assert(alignof(UPyWidget_MiniHostPanel) == 0x000008, "Wrong alignment on UPyWidget_MiniHostPanel");
static_assert(sizeof(UPyWidget_MiniHostPanel) == 0x000600, "Wrong size on UPyWidget_MiniHostPanel");
static_assert(offsetof(UPyWidget_MiniHostPanel, UltimateAbilityName) == 0x0005E8, "Member 'UPyWidget_MiniHostPanel::UltimateAbilityName' has a wrong offset!");

// PythonClass PyWidget_SettingMiniKeyboard.PyWidget_SettingMiniMouse
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_SettingMiniMouse : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void SetMouseStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SettingMiniMouse">();
	}
	static class UPyWidget_SettingMiniMouse* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SettingMiniMouse>();
	}
};
static_assert(alignof(UPyWidget_SettingMiniMouse) == 0x000008, "Wrong alignment on UPyWidget_SettingMiniMouse");
static_assert(sizeof(UPyWidget_SettingMiniMouse) == 0x0005E8, "Wrong size on UPyWidget_SettingMiniMouse");

// PythonClass PyWidget_SettingMiniKeyboard.PyWidget_MiniKey
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_MiniKey : public UPyMarvelUserWidget
{
public:
	void Construct();
	void SetKey();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_MiniKey">();
	}
	static class UPyWidget_MiniKey* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_MiniKey>();
	}
};
static_assert(alignof(UPyWidget_MiniKey) == 0x000008, "Wrong alignment on UPyWidget_MiniKey");
static_assert(sizeof(UPyWidget_MiniKey) == 0x0005E8, "Wrong size on UPyWidget_MiniKey");

}
