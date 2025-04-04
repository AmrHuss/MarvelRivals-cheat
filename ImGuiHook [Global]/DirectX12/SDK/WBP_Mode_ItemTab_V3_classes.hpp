#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mode_ItemTab_V3

#include "Basic.hpp"

#include "PyWidget_SelectModeItem_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mode_ItemTab_V3.WBP_Mode_ItemTab_V3_C
// 0x0020 (0x0940 - 0x0920)
class UWBP_Mode_ItemTab_V3_C final : public UPyWiget_SelectModeAIDiffV2
{
public:
	class UMarvelHorizontalBox*                   HBox_Stars;                                        // 0x0918(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_line;                                          // 0x0920(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mode_ItemTab_Star_C*               WBP_Star1;                                         // 0x0928(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mode_ItemTab_Star_C*               WBP_Star2;                                         // 0x0930(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mode_ItemTab_Star_C*               WBP_Star3;                                         // 0x0938(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mode_ItemTab_V3_C">();
	}
	static class UWBP_Mode_ItemTab_V3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mode_ItemTab_V3_C>();
	}
};
static_assert(alignof(UWBP_Mode_ItemTab_V3_C) == 0x000010, "Wrong alignment on UWBP_Mode_ItemTab_V3_C");
static_assert(sizeof(UWBP_Mode_ItemTab_V3_C) == 0x000940, "Wrong size on UWBP_Mode_ItemTab_V3_C");
static_assert(offsetof(UWBP_Mode_ItemTab_V3_C, HBox_Stars) == 0x000918, "Member 'UWBP_Mode_ItemTab_V3_C::HBox_Stars' has a wrong offset!");
static_assert(offsetof(UWBP_Mode_ItemTab_V3_C, Img_line) == 0x000920, "Member 'UWBP_Mode_ItemTab_V3_C::Img_line' has a wrong offset!");
static_assert(offsetof(UWBP_Mode_ItemTab_V3_C, WBP_Star1) == 0x000928, "Member 'UWBP_Mode_ItemTab_V3_C::WBP_Star1' has a wrong offset!");
static_assert(offsetof(UWBP_Mode_ItemTab_V3_C, WBP_Star2) == 0x000930, "Member 'UWBP_Mode_ItemTab_V3_C::WBP_Star2' has a wrong offset!");
static_assert(offsetof(UWBP_Mode_ItemTab_V3_C, WBP_Star3) == 0x000938, "Member 'UWBP_Mode_ItemTab_V3_C::WBP_Star3' has a wrong offset!");

}

