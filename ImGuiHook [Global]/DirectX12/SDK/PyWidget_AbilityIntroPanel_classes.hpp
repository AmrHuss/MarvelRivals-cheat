#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_AbilityIntroPanel

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "PyMarvelUserWidget_classes.hpp"
#include "PyWidget_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_AbilityIntroPanel.PyWidget_AbilityIntroUnit
// 0x0028 (0x0610 - 0x05E8)
class UPyWidget_AbilityIntroUnit : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NormalFontSize;                                    // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SmallFontSize;                                     // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5EC[0x4];                                      // 0x05EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             TextureNormal;                                     // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             TexturePassive;                                    // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             TextureSpecial;                                    // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RichInlineImageScale;                              // 0x0608(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AbilityIntroUnit">();
	}
	static class UPyWidget_AbilityIntroUnit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AbilityIntroUnit>();
	}
};
static_assert(alignof(UPyWidget_AbilityIntroUnit) == 0x000008, "Wrong alignment on UPyWidget_AbilityIntroUnit");
static_assert(sizeof(UPyWidget_AbilityIntroUnit) == 0x000610, "Wrong size on UPyWidget_AbilityIntroUnit");
static_assert(offsetof(UPyWidget_AbilityIntroUnit, NormalFontSize) == 0x0005E4, "Member 'UPyWidget_AbilityIntroUnit::NormalFontSize' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroUnit, SmallFontSize) == 0x0005E8, "Member 'UPyWidget_AbilityIntroUnit::SmallFontSize' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroUnit, TextureNormal) == 0x0005F0, "Member 'UPyWidget_AbilityIntroUnit::TextureNormal' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroUnit, TexturePassive) == 0x0005F8, "Member 'UPyWidget_AbilityIntroUnit::TexturePassive' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroUnit, TextureSpecial) == 0x000600, "Member 'UPyWidget_AbilityIntroUnit::TextureSpecial' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroUnit, RichInlineImageScale) == 0x000608, "Member 'UPyWidget_AbilityIntroUnit::RichInlineImageScale' has a wrong offset!");

// PythonClass PyWidget_AbilityIntroPanel.PyWidget_AbilityIntroPanel
// 0x0050 (0x0660 - 0x0610)
class UPyWidget_AbilityIntroPanel final : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_609[0x7];                                      // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             StarEmpty;                                         // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             StarFull;                                          // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            CurvePadding;                                      // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            CurvePadding_Left;                                 // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              DefaultSlotPaddingLeft;                            // 0x0630(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              DefaultSlotPaddingRight;                           // 0x0640(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           IA_NextSculpt;                                     // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           IA_PrevSculpt;                                     // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void OnEnterStack();
	void OnSoftTextureLoad(class UUserWidget* HeroPortrait, class UObject* Texture);
	void OnHeroPortraitLoaded(class UTexture2D* Picture);
	void OnHeroPortrai2tLoaded(class UTexture2D* Picture);
	void OnHeroLogoLoaded(class UTexture2D* Picture);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AbilityIntroPanel">();
	}
	static class UPyWidget_AbilityIntroPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AbilityIntroPanel>();
	}
};
static_assert(alignof(UPyWidget_AbilityIntroPanel) == 0x000008, "Wrong alignment on UPyWidget_AbilityIntroPanel");
static_assert(sizeof(UPyWidget_AbilityIntroPanel) == 0x000660, "Wrong size on UPyWidget_AbilityIntroPanel");
static_assert(offsetof(UPyWidget_AbilityIntroPanel, StarEmpty) == 0x000610, "Member 'UPyWidget_AbilityIntroPanel::StarEmpty' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroPanel, StarFull) == 0x000618, "Member 'UPyWidget_AbilityIntroPanel::StarFull' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroPanel, CurvePadding) == 0x000620, "Member 'UPyWidget_AbilityIntroPanel::CurvePadding' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroPanel, CurvePadding_Left) == 0x000628, "Member 'UPyWidget_AbilityIntroPanel::CurvePadding_Left' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroPanel, DefaultSlotPaddingLeft) == 0x000630, "Member 'UPyWidget_AbilityIntroPanel::DefaultSlotPaddingLeft' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroPanel, DefaultSlotPaddingRight) == 0x000640, "Member 'UPyWidget_AbilityIntroPanel::DefaultSlotPaddingRight' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroPanel, IA_NextSculpt) == 0x000650, "Member 'UPyWidget_AbilityIntroPanel::IA_NextSculpt' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroPanel, IA_PrevSculpt) == 0x000658, "Member 'UPyWidget_AbilityIntroPanel::IA_PrevSculpt' has a wrong offset!");

// PythonClass PyWidget_AbilityIntroPanel.PyWidget_AbilityIntroWeaponUnit
// 0x0000 (0x0610 - 0x0610)
class UPyWidget_AbilityIntroWeaponUnit final : public UPyWidget_AbilityIntroUnit
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AbilityIntroWeaponUnit">();
	}
	static class UPyWidget_AbilityIntroWeaponUnit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AbilityIntroWeaponUnit>();
	}
};
static_assert(alignof(UPyWidget_AbilityIntroWeaponUnit) == 0x000008, "Wrong alignment on UPyWidget_AbilityIntroWeaponUnit");
static_assert(sizeof(UPyWidget_AbilityIntroWeaponUnit) == 0x000610, "Wrong size on UPyWidget_AbilityIntroWeaponUnit");

// PythonClass PyWidget_AbilityIntroPanel.PyWidget_AbilityIntroUltimateUnit
// 0x0000 (0x0610 - 0x0610)
class UPyWidget_AbilityIntroUltimateUnit final : public UPyWidget_AbilityIntroUnit
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AbilityIntroUltimateUnit">();
	}
	static class UPyWidget_AbilityIntroUltimateUnit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AbilityIntroUltimateUnit>();
	}
};
static_assert(alignof(UPyWidget_AbilityIntroUltimateUnit) == 0x000008, "Wrong alignment on UPyWidget_AbilityIntroUltimateUnit");
static_assert(sizeof(UPyWidget_AbilityIntroUltimateUnit) == 0x000610, "Wrong size on UPyWidget_AbilityIntroUltimateUnit");

// PythonClass PyWidget_AbilityIntroPanel.PyWidget_AbilityIntroShapeLabel
// 0x0008 (0x0750 - 0x0748)
class UPyWidget_AbilityIntroShapeLabel : public UPyWidget_Button
{
public:
	bool                                          IsSelected;                                        // 0x0748(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsHovered_PyWidget_AbilityIntroShapeLabel;         // 0x0749(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetSelected(bool IsSelected_0);
	void SetIsHover(bool IsHover_0);
	void SetHeroID(int32 HeroID, int32 ShapeID);
	void OnHeroIconNoSelectedLoad(class UTexture2D* Picture);
	void OnHeroIconSelectedLoad(class UTexture2D* Picture);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AbilityIntroShapeLabel">();
	}
	static class UPyWidget_AbilityIntroShapeLabel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AbilityIntroShapeLabel>();
	}
};
static_assert(alignof(UPyWidget_AbilityIntroShapeLabel) == 0x000008, "Wrong alignment on UPyWidget_AbilityIntroShapeLabel");
static_assert(sizeof(UPyWidget_AbilityIntroShapeLabel) == 0x000750, "Wrong size on UPyWidget_AbilityIntroShapeLabel");
static_assert(offsetof(UPyWidget_AbilityIntroShapeLabel, IsSelected) == 0x000748, "Member 'UPyWidget_AbilityIntroShapeLabel::IsSelected' has a wrong offset!");
static_assert(offsetof(UPyWidget_AbilityIntroShapeLabel, IsHovered_PyWidget_AbilityIntroShapeLabel) == 0x000749, "Member 'UPyWidget_AbilityIntroShapeLabel::IsHovered_PyWidget_AbilityIntroShapeLabel' has a wrong offset!");

}
