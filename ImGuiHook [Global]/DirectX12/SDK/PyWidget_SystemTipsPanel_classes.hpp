#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SystemTipsPanel

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_SystemTipsPanel.PyWidget_SystemTipsPanel
// 0x0020 (0x0608 - 0x05E8)
class UPyWidget_SystemTipsPanel : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Max_Width;                                         // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Min_Width;                                         // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Speed_Marquee;                                     // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Max_Height;                                        // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Min_Height;                                        // 0x05F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Display_Time;                                      // 0x05F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5FC[0x4];                                      // 0x05FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AkEvent_OnShowTips;                                // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SystemTipsPanel">();
	}
	static class UPyWidget_SystemTipsPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SystemTipsPanel>();
	}
};
static_assert(alignof(UPyWidget_SystemTipsPanel) == 0x000008, "Wrong alignment on UPyWidget_SystemTipsPanel");
static_assert(sizeof(UPyWidget_SystemTipsPanel) == 0x000608, "Wrong size on UPyWidget_SystemTipsPanel");
static_assert(offsetof(UPyWidget_SystemTipsPanel, Max_Width) == 0x0005E4, "Member 'UPyWidget_SystemTipsPanel::Max_Width' has a wrong offset!");
static_assert(offsetof(UPyWidget_SystemTipsPanel, Min_Width) == 0x0005E8, "Member 'UPyWidget_SystemTipsPanel::Min_Width' has a wrong offset!");
static_assert(offsetof(UPyWidget_SystemTipsPanel, Speed_Marquee) == 0x0005EC, "Member 'UPyWidget_SystemTipsPanel::Speed_Marquee' has a wrong offset!");
static_assert(offsetof(UPyWidget_SystemTipsPanel, Max_Height) == 0x0005F0, "Member 'UPyWidget_SystemTipsPanel::Max_Height' has a wrong offset!");
static_assert(offsetof(UPyWidget_SystemTipsPanel, Min_Height) == 0x0005F4, "Member 'UPyWidget_SystemTipsPanel::Min_Height' has a wrong offset!");
static_assert(offsetof(UPyWidget_SystemTipsPanel, Display_Time) == 0x0005F8, "Member 'UPyWidget_SystemTipsPanel::Display_Time' has a wrong offset!");
static_assert(offsetof(UPyWidget_SystemTipsPanel, AkEvent_OnShowTips) == 0x000600, "Member 'UPyWidget_SystemTipsPanel::AkEvent_OnShowTips' has a wrong offset!");

}

