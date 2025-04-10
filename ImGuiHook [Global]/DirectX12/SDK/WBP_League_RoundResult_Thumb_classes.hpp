#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_RoundResult_Thumb

#include "Basic.hpp"

#include "PyWidget_League_ScoreIcon_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_RoundResult_Thumb.WBP_League_RoundResult_Thumb_C
// 0x0020 (0x0608 - 0x05E8)
class UWBP_League_RoundResult_Thumb_C final : public UPyWidget_League_ScoreIcon
{
public:
	class UMarvelImage*                           Img_Round_Bg;                                      // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Round_Show;                                    // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Round_Show_Vx;                                 // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         MarvelOverlay;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_RoundResult_Thumb_C">();
	}
	static class UWBP_League_RoundResult_Thumb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_RoundResult_Thumb_C>();
	}
};
static_assert(alignof(UWBP_League_RoundResult_Thumb_C) == 0x000008, "Wrong alignment on UWBP_League_RoundResult_Thumb_C");
static_assert(sizeof(UWBP_League_RoundResult_Thumb_C) == 0x000608, "Wrong size on UWBP_League_RoundResult_Thumb_C");
static_assert(offsetof(UWBP_League_RoundResult_Thumb_C, Img_Round_Bg) == 0x0005E8, "Member 'UWBP_League_RoundResult_Thumb_C::Img_Round_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_League_RoundResult_Thumb_C, Img_Round_Show) == 0x0005F0, "Member 'UWBP_League_RoundResult_Thumb_C::Img_Round_Show' has a wrong offset!");
static_assert(offsetof(UWBP_League_RoundResult_Thumb_C, Img_Round_Show_Vx) == 0x0005F8, "Member 'UWBP_League_RoundResult_Thumb_C::Img_Round_Show_Vx' has a wrong offset!");
static_assert(offsetof(UWBP_League_RoundResult_Thumb_C, MarvelOverlay) == 0x000600, "Member 'UWBP_League_RoundResult_Thumb_C::MarvelOverlay' has a wrong offset!");

}

