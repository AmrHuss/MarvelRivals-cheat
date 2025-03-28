#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroSystem_LeftInfo

#include "Basic.hpp"

#include "PyWidget_HeroSystem_LeftInfo_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeroSystem_LeftInfo.WBP_HeroSystem_LeftInfo_C
// 0x0068 (0x06E8 - 0x0680)
class UWBP_HeroSystem_LeftInfo_C final : public UPyWidget_HeroSystem_LeftInfo
{
public:
	class UMarvelImage*                           Img_Duty;                                          // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Duty_1;                                        // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ImageMaskCut_C*                    Img_Hero_Icon;                                     // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_RealName_Single_Bg;                            // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_RealName_Single_Line;                          // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_HeroSign;                                  // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Duty;                                         // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Duty_1;                                       // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   Text_Hero_Story;                                   // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RealName_0;                                   // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_HeroName_C*                 WBP_HeroName;                                      // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_HeroName_C*                 WBP_HeroName_1;                                    // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroSystem_Difficulty_C*           WBP_HeroSystem_Difficulty;                         // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeroSystem_LeftInfo_C">();
	}
	static class UWBP_HeroSystem_LeftInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeroSystem_LeftInfo_C>();
	}
};
static_assert(alignof(UWBP_HeroSystem_LeftInfo_C) == 0x000008, "Wrong alignment on UWBP_HeroSystem_LeftInfo_C");
static_assert(sizeof(UWBP_HeroSystem_LeftInfo_C) == 0x0006E8, "Wrong size on UWBP_HeroSystem_LeftInfo_C");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, Img_Duty) == 0x000680, "Member 'UWBP_HeroSystem_LeftInfo_C::Img_Duty' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, Img_Duty_1) == 0x000688, "Member 'UWBP_HeroSystem_LeftInfo_C::Img_Duty_1' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, Img_Hero_Icon) == 0x000690, "Member 'UWBP_HeroSystem_LeftInfo_C::Img_Hero_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, Img_RealName_Single_Bg) == 0x000698, "Member 'UWBP_HeroSystem_LeftInfo_C::Img_RealName_Single_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, Img_RealName_Single_Line) == 0x0006A0, "Member 'UWBP_HeroSystem_LeftInfo_C::Img_RealName_Single_Line' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, SizeBox_HeroSign) == 0x0006A8, "Member 'UWBP_HeroSystem_LeftInfo_C::SizeBox_HeroSign' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, Text_Duty) == 0x0006B0, "Member 'UWBP_HeroSystem_LeftInfo_C::Text_Duty' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, Text_Duty_1) == 0x0006B8, "Member 'UWBP_HeroSystem_LeftInfo_C::Text_Duty_1' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, Text_Hero_Story) == 0x0006C0, "Member 'UWBP_HeroSystem_LeftInfo_C::Text_Hero_Story' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, Text_RealName_0) == 0x0006C8, "Member 'UWBP_HeroSystem_LeftInfo_C::Text_RealName_0' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, WBP_HeroName) == 0x0006D0, "Member 'UWBP_HeroSystem_LeftInfo_C::WBP_HeroName' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, WBP_HeroName_1) == 0x0006D8, "Member 'UWBP_HeroSystem_LeftInfo_C::WBP_HeroName_1' has a wrong offset!");
static_assert(offsetof(UWBP_HeroSystem_LeftInfo_C, WBP_HeroSystem_Difficulty) == 0x0006E0, "Member 'UWBP_HeroSystem_LeftInfo_C::WBP_HeroSystem_Difficulty' has a wrong offset!");

}

