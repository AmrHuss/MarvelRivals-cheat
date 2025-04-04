#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hero_Unit

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "PyWidget_LobbyHero_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hero_Unit.WBP_Hero_Unit_C
// 0x0030 (0x07B8 - 0x0788)
class UWBP_Hero_Unit_C final : public UPyWidget_Hero_Button
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hero_Select;                                       // 0x0790(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Img_bg;                                            // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Hero;                                          // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Selected;                                      // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TabId;                                             // 0x07B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsSelected;                                        // 0x07B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Hero_Unit(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetHeroID(int32 HeroID_0, int32 ShapeID_0);
	void SetSelected(bool IsClicked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hero_Unit_C">();
	}
	static class UWBP_Hero_Unit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hero_Unit_C>();
	}
};
static_assert(alignof(UWBP_Hero_Unit_C) == 0x000008, "Wrong alignment on UWBP_Hero_Unit_C");
static_assert(sizeof(UWBP_Hero_Unit_C) == 0x0007B8, "Wrong size on UWBP_Hero_Unit_C");
static_assert(offsetof(UWBP_Hero_Unit_C, UberGraphFrame) == 0x000788, "Member 'UWBP_Hero_Unit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Hero_Unit_C, Hero_Select) == 0x000790, "Member 'UWBP_Hero_Unit_C::Hero_Select' has a wrong offset!");
static_assert(offsetof(UWBP_Hero_Unit_C, Img_bg) == 0x000798, "Member 'UWBP_Hero_Unit_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP_Hero_Unit_C, Img_Hero) == 0x0007A0, "Member 'UWBP_Hero_Unit_C::Img_Hero' has a wrong offset!");
static_assert(offsetof(UWBP_Hero_Unit_C, Img_Selected) == 0x0007A8, "Member 'UWBP_Hero_Unit_C::Img_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_Hero_Unit_C, TabId) == 0x0007B0, "Member 'UWBP_Hero_Unit_C::TabId' has a wrong offset!");
static_assert(offsetof(UWBP_Hero_Unit_C, IsSelected) == 0x0007B4, "Member 'UWBP_Hero_Unit_C::IsSelected' has a wrong offset!");

}

