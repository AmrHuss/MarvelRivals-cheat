#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LeagueMRCSignUpCard

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_LeagueMRCSignUpCard.PyWidget_LeagueMRCSignUpCard
// 0x0060 (0x0648 - 0x05E8)
class UPyWidget_LeagueMRCSignUpCard : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            RegionTextColorHover;                              // 0x05E4(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            RegionTextColorCommon;                             // 0x05F8(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            TimeTextColorHover;                                // 0x060C(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            OpenSignUpTimeTextColorCommon;                     // 0x0620(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            StopSignUpTimeTextColorCommon;                     // 0x0634(0x0014)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LeagueMRCSignUpCard">();
	}
	static class UPyWidget_LeagueMRCSignUpCard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LeagueMRCSignUpCard>();
	}
};
static_assert(alignof(UPyWidget_LeagueMRCSignUpCard) == 0x000008, "Wrong alignment on UPyWidget_LeagueMRCSignUpCard");
static_assert(sizeof(UPyWidget_LeagueMRCSignUpCard) == 0x000648, "Wrong size on UPyWidget_LeagueMRCSignUpCard");
static_assert(offsetof(UPyWidget_LeagueMRCSignUpCard, RegionTextColorHover) == 0x0005E4, "Member 'UPyWidget_LeagueMRCSignUpCard::RegionTextColorHover' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCSignUpCard, RegionTextColorCommon) == 0x0005F8, "Member 'UPyWidget_LeagueMRCSignUpCard::RegionTextColorCommon' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCSignUpCard, TimeTextColorHover) == 0x00060C, "Member 'UPyWidget_LeagueMRCSignUpCard::TimeTextColorHover' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCSignUpCard, OpenSignUpTimeTextColorCommon) == 0x000620, "Member 'UPyWidget_LeagueMRCSignUpCard::OpenSignUpTimeTextColorCommon' has a wrong offset!");
static_assert(offsetof(UPyWidget_LeagueMRCSignUpCard, StopSignUpTimeTextColorCommon) == 0x000634, "Member 'UPyWidget_LeagueMRCSignUpCard::StopSignUpTimeTextColorCommon' has a wrong offset!");

// PythonClass PyWidget_LeagueMRCSignUpCard.PyWidget_LeagueMRCSignUpCardTag
// 0x0018 (0x0600 - 0x05E8)
class UPyWidget_LeagueMRCSignUpCardTag : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TagContent;                                        // 0x05E8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LeagueMRCSignUpCardTag">();
	}
	static class UPyWidget_LeagueMRCSignUpCardTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LeagueMRCSignUpCardTag>();
	}
};
static_assert(alignof(UPyWidget_LeagueMRCSignUpCardTag) == 0x000008, "Wrong alignment on UPyWidget_LeagueMRCSignUpCardTag");
static_assert(sizeof(UPyWidget_LeagueMRCSignUpCardTag) == 0x000600, "Wrong size on UPyWidget_LeagueMRCSignUpCardTag");
static_assert(offsetof(UPyWidget_LeagueMRCSignUpCardTag, TagContent) == 0x0005E8, "Member 'UPyWidget_LeagueMRCSignUpCardTag::TagContent' has a wrong offset!");

}
