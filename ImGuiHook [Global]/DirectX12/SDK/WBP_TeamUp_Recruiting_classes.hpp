#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TeamUp_Recruiting

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TeamUp_Recruiting.WBP_TeamUp_Recruiting_C
// 0x0070 (0x0428 - 0x03B8)
class UWBP_TeamUp_Recruiting_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_FadeIn;                                       // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Btn_WYG_C*                  Btn_Recruit;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_WYG_C*                  Btn_World;                                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HorBox_Role;                                       // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_119;                                         // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Recruit;                                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsRecruit;                                         // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_TeamUp_Recruiting(int32 EntryPoint);
	void SetIsRecruit(bool IsRecruit_0, bool IsCaptain);
	void SetRoles(class UImage* Image_0, int32 Role, bool IsEmpty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TeamUp_Recruiting_C">();
	}
	static class UWBP_TeamUp_Recruiting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TeamUp_Recruiting_C>();
	}
};
static_assert(alignof(UWBP_TeamUp_Recruiting_C) == 0x000008, "Wrong alignment on UWBP_TeamUp_Recruiting_C");
static_assert(sizeof(UWBP_TeamUp_Recruiting_C) == 0x000428, "Wrong size on UWBP_TeamUp_Recruiting_C");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, UberGraphFrame) == 0x0003B8, "Member 'UWBP_TeamUp_Recruiting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Anim_FadeIn) == 0x0003C0, "Member 'UWBP_TeamUp_Recruiting_C::Anim_FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Btn_Recruit) == 0x0003C8, "Member 'UWBP_TeamUp_Recruiting_C::Btn_Recruit' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Btn_World) == 0x0003D0, "Member 'UWBP_TeamUp_Recruiting_C::Btn_World' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, HorBox_Role) == 0x0003D8, "Member 'UWBP_TeamUp_Recruiting_C::HorBox_Role' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Image) == 0x0003E0, "Member 'UWBP_TeamUp_Recruiting_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Image_1) == 0x0003E8, "Member 'UWBP_TeamUp_Recruiting_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Image_2) == 0x0003F0, "Member 'UWBP_TeamUp_Recruiting_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Image_3) == 0x0003F8, "Member 'UWBP_TeamUp_Recruiting_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Image_4) == 0x000400, "Member 'UWBP_TeamUp_Recruiting_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Image_5) == 0x000408, "Member 'UWBP_TeamUp_Recruiting_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Image_119) == 0x000410, "Member 'UWBP_TeamUp_Recruiting_C::Image_119' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, Text_Recruit) == 0x000418, "Member 'UWBP_TeamUp_Recruiting_C::Text_Recruit' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_Recruiting_C, IsRecruit) == 0x000420, "Member 'UWBP_TeamUp_Recruiting_C::IsRecruit' has a wrong offset!");

}

