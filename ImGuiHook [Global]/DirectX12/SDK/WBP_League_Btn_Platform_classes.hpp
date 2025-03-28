#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_Btn_Platform

#include "Basic.hpp"

#include "PyWidget_LeagueMRCObverseCard_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_Btn_Platform.WBP_League_Btn_Platform_C
// 0x0038 (0x0668 - 0x0630)
class UWBP_League_Btn_Platform_C final : public UPyWidget_LeagueMRCObverseCardBtn
{
public:
	class UMarvelButton*                          Btn_Platform;                                      // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Btn_Hover;                                     // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Btn_Normal;                                    // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Btn_Press;                                     // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Btn_Region;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_Tag_C*                      WBP_League_Tag;                                    // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Com_Platform_HList_C*              WBP_Platform_HList;                                // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_Btn_Platform_C">();
	}
	static class UWBP_League_Btn_Platform_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_Btn_Platform_C>();
	}
};
static_assert(alignof(UWBP_League_Btn_Platform_C) == 0x000008, "Wrong alignment on UWBP_League_Btn_Platform_C");
static_assert(sizeof(UWBP_League_Btn_Platform_C) == 0x000668, "Wrong size on UWBP_League_Btn_Platform_C");
static_assert(offsetof(UWBP_League_Btn_Platform_C, Btn_Platform) == 0x000630, "Member 'UWBP_League_Btn_Platform_C::Btn_Platform' has a wrong offset!");
static_assert(offsetof(UWBP_League_Btn_Platform_C, Img_Btn_Hover) == 0x000638, "Member 'UWBP_League_Btn_Platform_C::Img_Btn_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_League_Btn_Platform_C, Img_Btn_Normal) == 0x000640, "Member 'UWBP_League_Btn_Platform_C::Img_Btn_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_League_Btn_Platform_C, Img_Btn_Press) == 0x000648, "Member 'UWBP_League_Btn_Platform_C::Img_Btn_Press' has a wrong offset!");
static_assert(offsetof(UWBP_League_Btn_Platform_C, Text_Btn_Region) == 0x000650, "Member 'UWBP_League_Btn_Platform_C::Text_Btn_Region' has a wrong offset!");
static_assert(offsetof(UWBP_League_Btn_Platform_C, WBP_League_Tag) == 0x000658, "Member 'UWBP_League_Btn_Platform_C::WBP_League_Tag' has a wrong offset!");
static_assert(offsetof(UWBP_League_Btn_Platform_C, WBP_Platform_HList) == 0x000660, "Member 'UWBP_League_Btn_Platform_C::WBP_Platform_HList' has a wrong offset!");

}

