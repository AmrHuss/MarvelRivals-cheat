#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Login_AgePrompt_CN

#include "Basic.hpp"

#include "PyLoginAgePrompt_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Login_AgePrompt_CN.WBP_Login_AgePrompt_CN_C
// 0x0030 (0x0618 - 0x05E8)
class UWBP_Login_AgePrompt_CN_C final : public UPyWidget_Login_AgePrompt
{
public:
	class UMarvelButton*                          Btn_AgePrompt;                                     // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Instructions;                              // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_GameAdvice;                                   // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_GameAdviceTitle;                              // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_PublishInfo;                                  // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_Instructions;                                 // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Login_AgePrompt_CN_C">();
	}
	static class UWBP_Login_AgePrompt_CN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Login_AgePrompt_CN_C>();
	}
};
static_assert(alignof(UWBP_Login_AgePrompt_CN_C) == 0x000008, "Wrong alignment on UWBP_Login_AgePrompt_CN_C");
static_assert(sizeof(UWBP_Login_AgePrompt_CN_C) == 0x000618, "Wrong size on UWBP_Login_AgePrompt_CN_C");
static_assert(offsetof(UWBP_Login_AgePrompt_CN_C, Btn_AgePrompt) == 0x0005E8, "Member 'UWBP_Login_AgePrompt_CN_C::Btn_AgePrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Login_AgePrompt_CN_C, SizeBox_Instructions) == 0x0005F0, "Member 'UWBP_Login_AgePrompt_CN_C::SizeBox_Instructions' has a wrong offset!");
static_assert(offsetof(UWBP_Login_AgePrompt_CN_C, Text_GameAdvice) == 0x0005F8, "Member 'UWBP_Login_AgePrompt_CN_C::Text_GameAdvice' has a wrong offset!");
static_assert(offsetof(UWBP_Login_AgePrompt_CN_C, Text_GameAdviceTitle) == 0x000600, "Member 'UWBP_Login_AgePrompt_CN_C::Text_GameAdviceTitle' has a wrong offset!");
static_assert(offsetof(UWBP_Login_AgePrompt_CN_C, Text_PublishInfo) == 0x000608, "Member 'UWBP_Login_AgePrompt_CN_C::Text_PublishInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Login_AgePrompt_CN_C, VBox_Instructions) == 0x000610, "Member 'UWBP_Login_AgePrompt_CN_C::VBox_Instructions' has a wrong offset!");

}
