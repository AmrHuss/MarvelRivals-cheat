#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Setting_HostMachine_Line

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_SettingMiniKeyboard_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Setting_HostMachine_Line.WBP_Setting_HostMachine_Line_C
// 0x00F8 (0x0770 - 0x0678)
class UWBP_Setting_HostMachine_Line_C final : public UPyWidget_MiniHost
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelImage*                           Img_line;                                          // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Line;                                      // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Height;                                            // 0x0690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Width;                                             // 0x0694(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_698[0x8];                                      // 0x0698(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            D_;                                                // 0x06A0(0x00D0)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Setting_HostMachine_Line(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void _6___();
	void ___GD_();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Setting_HostMachine_Line_C">();
	}
	static class UWBP_Setting_HostMachine_Line_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Setting_HostMachine_Line_C>();
	}
};
static_assert(alignof(UWBP_Setting_HostMachine_Line_C) == 0x000010, "Wrong alignment on UWBP_Setting_HostMachine_Line_C");
static_assert(sizeof(UWBP_Setting_HostMachine_Line_C) == 0x000770, "Wrong size on UWBP_Setting_HostMachine_Line_C");
static_assert(offsetof(UWBP_Setting_HostMachine_Line_C, UberGraphFrame) == 0x000678, "Member 'UWBP_Setting_HostMachine_Line_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_HostMachine_Line_C, Img_line) == 0x000680, "Member 'UWBP_Setting_HostMachine_Line_C::Img_line' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_HostMachine_Line_C, SizeBox_Line) == 0x000688, "Member 'UWBP_Setting_HostMachine_Line_C::SizeBox_Line' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_HostMachine_Line_C, Height) == 0x000690, "Member 'UWBP_Setting_HostMachine_Line_C::Height' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_HostMachine_Line_C, Width) == 0x000694, "Member 'UWBP_Setting_HostMachine_Line_C::Width' has a wrong offset!");
static_assert(offsetof(UWBP_Setting_HostMachine_Line_C, D_) == 0x0006A0, "Member 'UWBP_Setting_HostMachine_Line_C::D_' has a wrong offset!");

}

