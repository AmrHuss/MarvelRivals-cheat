#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Squad_MatchInfo_Card

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyWidget_Squad_MatchPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Squad_MatchInfo_Card.WBP_Squad_MatchInfo_Card_C
// 0x0098 (0x06E8 - 0x0650)
class UWBP_Squad_MatchInfo_Card_C final : public UPyWidget_Squad_MatchInfo_Card
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0650(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Loop_Stream;                                  // 0x0658(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_MatchInfo;                                     // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelCanvasPanel*                     CanvasPanel_Triangle;                              // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_AIStars;                                      // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Matching_TimeBg;                               // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Star0;                                         // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Star1;                                         // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Star2;                                         // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Stream;                                        // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Matching_Card;                             // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Stream;                                   // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Apostrophe_1;                                 // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Apostrophe_2;                                 // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Apostrophe_3;                                 // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Match_Success;                                // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_ModeName;                                     // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv0_B_C*                WBP_Countermand;                                   // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Com_Platform_HList_C*              WBP_Platform_HList;                                // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Squad_MatchInfo_Card(int32 EntryPoint);
	void SequenceEvent();
	void SequenceEvent__ENTRYPOINTWBP_Squad_MatchInfo_Card();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Squad_MatchInfo_Card_C">();
	}
	static class UWBP_Squad_MatchInfo_Card_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Squad_MatchInfo_Card_C>();
	}
};
static_assert(alignof(UWBP_Squad_MatchInfo_Card_C) == 0x000008, "Wrong alignment on UWBP_Squad_MatchInfo_Card_C");
static_assert(sizeof(UWBP_Squad_MatchInfo_Card_C) == 0x0006E8, "Wrong size on UWBP_Squad_MatchInfo_Card_C");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, UberGraphFrame) == 0x000650, "Member 'UWBP_Squad_MatchInfo_Card_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Anim_Loop_Stream) == 0x000658, "Member 'UWBP_Squad_MatchInfo_Card_C::Anim_Loop_Stream' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Btn_MatchInfo) == 0x000660, "Member 'UWBP_Squad_MatchInfo_Card_C::Btn_MatchInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, CanvasPanel_Triangle) == 0x000668, "Member 'UWBP_Squad_MatchInfo_Card_C::CanvasPanel_Triangle' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, HBox_AIStars) == 0x000670, "Member 'UWBP_Squad_MatchInfo_Card_C::HBox_AIStars' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Img_Matching_TimeBg) == 0x000678, "Member 'UWBP_Squad_MatchInfo_Card_C::Img_Matching_TimeBg' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Img_Star0) == 0x000680, "Member 'UWBP_Squad_MatchInfo_Card_C::Img_Star0' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Img_Star1) == 0x000688, "Member 'UWBP_Squad_MatchInfo_Card_C::Img_Star1' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Img_Star2) == 0x000690, "Member 'UWBP_Squad_MatchInfo_Card_C::Img_Star2' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Img_Stream) == 0x000698, "Member 'UWBP_Squad_MatchInfo_Card_C::Img_Stream' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Overlay_Matching_Card) == 0x0006A0, "Member 'UWBP_Squad_MatchInfo_Card_C::Overlay_Matching_Card' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, ScaleBox_Stream) == 0x0006A8, "Member 'UWBP_Squad_MatchInfo_Card_C::ScaleBox_Stream' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Text_Apostrophe_1) == 0x0006B0, "Member 'UWBP_Squad_MatchInfo_Card_C::Text_Apostrophe_1' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Text_Apostrophe_2) == 0x0006B8, "Member 'UWBP_Squad_MatchInfo_Card_C::Text_Apostrophe_2' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Text_Apostrophe_3) == 0x0006C0, "Member 'UWBP_Squad_MatchInfo_Card_C::Text_Apostrophe_3' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Text_Match_Success) == 0x0006C8, "Member 'UWBP_Squad_MatchInfo_Card_C::Text_Match_Success' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, Text_ModeName) == 0x0006D0, "Member 'UWBP_Squad_MatchInfo_Card_C::Text_ModeName' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, WBP_Countermand) == 0x0006D8, "Member 'UWBP_Squad_MatchInfo_Card_C::WBP_Countermand' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_MatchInfo_Card_C, WBP_Platform_HList) == 0x0006E0, "Member 'UWBP_Squad_MatchInfo_Card_C::WBP_Platform_HList' has a wrong offset!");

}

