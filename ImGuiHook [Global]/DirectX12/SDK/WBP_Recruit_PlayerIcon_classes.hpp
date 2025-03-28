#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Recruit_PlayerIcon

#include "Basic.hpp"

#include "PyWidget_Recruit_PlayerIcon_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Recruit_PlayerIcon.WBP_Recruit_PlayerIcon_C
// 0x0010 (0x05F8 - 0x05E8)
class UWBP_Recruit_PlayerIcon_C final : public UPyWidget_Recruit_PlayerIcon
{
public:
	class UMarvelImage*                           Img_Player_Empty;                                  // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Player_Light;                                  // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Recruit_PlayerIcon_C">();
	}
	static class UWBP_Recruit_PlayerIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Recruit_PlayerIcon_C>();
	}
};
static_assert(alignof(UWBP_Recruit_PlayerIcon_C) == 0x000008, "Wrong alignment on UWBP_Recruit_PlayerIcon_C");
static_assert(sizeof(UWBP_Recruit_PlayerIcon_C) == 0x0005F8, "Wrong size on UWBP_Recruit_PlayerIcon_C");
static_assert(offsetof(UWBP_Recruit_PlayerIcon_C, Img_Player_Empty) == 0x0005E8, "Member 'UWBP_Recruit_PlayerIcon_C::Img_Player_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_Recruit_PlayerIcon_C, Img_Player_Light) == 0x0005F0, "Member 'UWBP_Recruit_PlayerIcon_C::Img_Player_Light' has a wrong offset!");

}

