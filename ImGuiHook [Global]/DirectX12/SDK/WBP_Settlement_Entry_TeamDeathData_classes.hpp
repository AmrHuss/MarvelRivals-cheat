#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settlement_Entry_TeamDeathData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_SettlementDataUnit_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settlement_Entry_TeamDeathData.WBP_Settlement_Entry_TeamDeathData_C
// 0x0100 (0x0760 - 0x0660)
class UWBP_Settlement_Entry_TeamDeathData_C final : public UPyWidget_SettlementDataUnit_TeamDeath
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelHorizontalBox*                   HBox_PlayerName;                                   // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Icon_Developer;                                    // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Clan_Icon;                                     // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_escape;                                        // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Slash1;                                        // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Slash2;                                        // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              SBox_Clan_Icon;                                    // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_A;                                            // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_ClanName;                                     // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_D;                                            // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_DataNum_1;                                    // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_DataNum_2;                                    // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_DataNum_3;                                    // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_DataNum_4;                                    // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_DataNum_5;                                    // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_K;                                            // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_PlayerName_Marquee_C*       Text_Player_Name;                                  // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Score;                                        // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settlement_EntrySlot_C*            WBP_Settlement_EntrySlot;                          // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ___;                                               // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_701[0x3];                                      // 0x0701(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            DataColor_False;                                   // 0x0704(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            DataColor_True;                                    // 0x0718(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NameColor_False;                                   // 0x072C(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NameColor_Ture;                                    // 0x0740(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Opacity_Text;                                      // 0x0754(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Opacity_Icon;                                      // 0x0758(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Settlement_Entry_TeamDeathData(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settlement_Entry_TeamDeathData_C">();
	}
	static class UWBP_Settlement_Entry_TeamDeathData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settlement_Entry_TeamDeathData_C>();
	}
};
static_assert(alignof(UWBP_Settlement_Entry_TeamDeathData_C) == 0x000008, "Wrong alignment on UWBP_Settlement_Entry_TeamDeathData_C");
static_assert(sizeof(UWBP_Settlement_Entry_TeamDeathData_C) == 0x000760, "Wrong size on UWBP_Settlement_Entry_TeamDeathData_C");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, UberGraphFrame) == 0x000660, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, HBox_PlayerName) == 0x000668, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::HBox_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Icon_Developer) == 0x000670, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Icon_Developer' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Img_Clan_Icon) == 0x000678, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Img_Clan_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Img_escape) == 0x000680, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Img_escape' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Img_Slash1) == 0x000688, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Img_Slash1' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Img_Slash2) == 0x000690, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Img_Slash2' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, SBox_Clan_Icon) == 0x000698, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::SBox_Clan_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_A) == 0x0006A0, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_A' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_ClanName) == 0x0006A8, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_ClanName' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_D) == 0x0006B0, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_D' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_DataNum_1) == 0x0006B8, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_DataNum_1' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_DataNum_2) == 0x0006C0, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_DataNum_2' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_DataNum_3) == 0x0006C8, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_DataNum_3' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_DataNum_4) == 0x0006D0, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_DataNum_4' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_DataNum_5) == 0x0006D8, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_DataNum_5' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_K) == 0x0006E0, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_K' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_Player_Name) == 0x0006E8, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_Player_Name' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Text_Score) == 0x0006F0, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Text_Score' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, WBP_Settlement_EntrySlot) == 0x0006F8, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::WBP_Settlement_EntrySlot' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, ___) == 0x000700, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::___' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, DataColor_False) == 0x000704, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::DataColor_False' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, DataColor_True) == 0x000718, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::DataColor_True' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, NameColor_False) == 0x00072C, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::NameColor_False' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, NameColor_Ture) == 0x000740, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::NameColor_Ture' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Opacity_Text) == 0x000754, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Opacity_Text' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_Entry_TeamDeathData_C, Opacity_Icon) == 0x000758, "Member 'UWBP_Settlement_Entry_TeamDeathData_C::Opacity_Icon' has a wrong offset!");

}
