#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LobbyGallerySubPanel

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "PyWidget_ModuleMainPanel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_LobbyGallerySubPanel.PyWidget_LobbyGallerySubPanel
// 0x0030 (0x0640 - 0x0610)
class UPyWidget_LobbyGallerySubPanel : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_609[0x7];                                      // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           FlipLeftBPAction;                                  // 0x0610(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           FlipRightBPAction;                                 // 0x0618(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                SwitchGalleryBookStyle;                            // 0x0620(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        CardAssets;                                        // 0x0630(0x0010)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void OnAnimationStarted(const class UWidgetAnimation* Animation);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayShowAnimAKEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LobbyGallerySubPanel">();
	}
	static class UPyWidget_LobbyGallerySubPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LobbyGallerySubPanel>();
	}
};
static_assert(alignof(UPyWidget_LobbyGallerySubPanel) == 0x000008, "Wrong alignment on UPyWidget_LobbyGallerySubPanel");
static_assert(sizeof(UPyWidget_LobbyGallerySubPanel) == 0x000640, "Wrong size on UPyWidget_LobbyGallerySubPanel");
static_assert(offsetof(UPyWidget_LobbyGallerySubPanel, FlipLeftBPAction) == 0x000610, "Member 'UPyWidget_LobbyGallerySubPanel::FlipLeftBPAction' has a wrong offset!");
static_assert(offsetof(UPyWidget_LobbyGallerySubPanel, FlipRightBPAction) == 0x000618, "Member 'UPyWidget_LobbyGallerySubPanel::FlipRightBPAction' has a wrong offset!");
static_assert(offsetof(UPyWidget_LobbyGallerySubPanel, SwitchGalleryBookStyle) == 0x000620, "Member 'UPyWidget_LobbyGallerySubPanel::SwitchGalleryBookStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_LobbyGallerySubPanel, CardAssets) == 0x000630, "Member 'UPyWidget_LobbyGallerySubPanel::CardAssets' has a wrong offset!");

}

