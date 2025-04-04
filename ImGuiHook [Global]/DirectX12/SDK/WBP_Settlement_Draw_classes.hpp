#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settlement_Draw

#include "Basic.hpp"

#include "PyWidget_MatchResult_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settlement_Draw.WBP_Settlement_Draw_C
// 0x0078 (0x0678 - 0x0600)
class UWBP_Settlement_Draw_C final : public UPyWidget_MatchResult
{
public:
	class UWidgetAnimation*                       Anim_Text_FadeOut;                                 // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Appear_BG_Blue;                                    // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Appear_BG_Green;                                   // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_bg;                                            // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Glow;                                       // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_bg_shine;                                      // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_GLow_1;                                        // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_GreenAdd;                                      // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_RedAdd;                                        // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Tex_Add;                                       // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Text_Shine;                                    // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULazyWidget*                            Lazy_WinterFestivalResult;                         // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Content;                                   // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_ScoreBoard;                                   // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settlement_Scoreboard_C*           WBP_Scoreboard;                                    // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settlement_Draw_C">();
	}
	static class UWBP_Settlement_Draw_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settlement_Draw_C>();
	}
};
static_assert(alignof(UWBP_Settlement_Draw_C) == 0x000008, "Wrong alignment on UWBP_Settlement_Draw_C");
static_assert(sizeof(UWBP_Settlement_Draw_C) == 0x000678, "Wrong size on UWBP_Settlement_Draw_C");
static_assert(offsetof(UWBP_Settlement_Draw_C, Anim_Text_FadeOut) == 0x000600, "Member 'UWBP_Settlement_Draw_C::Anim_Text_FadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Appear_BG_Blue) == 0x000608, "Member 'UWBP_Settlement_Draw_C::Appear_BG_Blue' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Appear_BG_Green) == 0x000610, "Member 'UWBP_Settlement_Draw_C::Appear_BG_Green' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Img_bg) == 0x000618, "Member 'UWBP_Settlement_Draw_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Img_Bg_Glow) == 0x000620, "Member 'UWBP_Settlement_Draw_C::Img_Bg_Glow' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Img_bg_shine) == 0x000628, "Member 'UWBP_Settlement_Draw_C::Img_bg_shine' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Img_GLow_1) == 0x000630, "Member 'UWBP_Settlement_Draw_C::Img_GLow_1' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Img_GreenAdd) == 0x000638, "Member 'UWBP_Settlement_Draw_C::Img_GreenAdd' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Img_RedAdd) == 0x000640, "Member 'UWBP_Settlement_Draw_C::Img_RedAdd' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Img_Tex_Add) == 0x000648, "Member 'UWBP_Settlement_Draw_C::Img_Tex_Add' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Img_Text_Shine) == 0x000650, "Member 'UWBP_Settlement_Draw_C::Img_Text_Shine' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Lazy_WinterFestivalResult) == 0x000658, "Member 'UWBP_Settlement_Draw_C::Lazy_WinterFestivalResult' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Overlay_Content) == 0x000660, "Member 'UWBP_Settlement_Draw_C::Overlay_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, Slot_ScoreBoard) == 0x000668, "Member 'UWBP_Settlement_Draw_C::Slot_ScoreBoard' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Draw_C, WBP_Scoreboard) == 0x000670, "Member 'UWBP_Settlement_Draw_C::WBP_Scoreboard' has a wrong offset!");

}

