#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Nameplate

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "PyWidget_Common_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Nameplate.PyWidget_Nameplate
// 0x0060 (0x0940 - 0x08E0)
#pragma pack(push, 0x1)
class alignas(0x10) UPyWidget_Nameplate : public UPyWidget_BaseCommonButton
{
public:
	bool                                          ShowTrainingTips;                                  // 0x08D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowLoadingPercentage;                             // 0x08D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowCaptainIcon;                                   // 0x08DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowVoiceIcon;                                     // 0x08DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowSignalIcon;                                    // 0x08DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowRankIcon;                                      // 0x08DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowPlatformIcon;                                  // 0x08DE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableSelectState;                                 // 0x08DF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsCommonNameplate;                                 // 0x08E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsSelfColor;                                       // 0x08E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowLeagueEmblem;                                  // 0x08E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowHeroTitle;                                     // 0x08E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowHonorBadge;                                    // 0x08E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8E5[0x3];                                      // 0x08E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UUserWidget>                CreditVXSource;                                    // 0x08E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                DynamicCardVxSource;                               // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            ClanMiniNameColor_Formal;                          // 0x08F8(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            ClanMiniNameColor_Temporary;                       // 0x090C(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UMarvelImage*                           Img_NameInfo_Bg;                                   // 0x0920(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ClanMiniNameVisibility;                            // 0x0928(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_92C[0x4];                                      // 0x092C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                WBP_Voice_NamePlateIcon;                           // 0x0930(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnCascadingVisibleChanged(bool Visible);
	void OnAnimationsDisabled();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Nameplate">();
	}
	static class UPyWidget_Nameplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Nameplate>();
	}
};
#pragma pack(pop)
static_assert(alignof(UPyWidget_Nameplate) == 0x000010, "Wrong alignment on UPyWidget_Nameplate");
static_assert(sizeof(UPyWidget_Nameplate) == 0x000940, "Wrong size on UPyWidget_Nameplate");
static_assert(offsetof(UPyWidget_Nameplate, ShowTrainingTips) == 0x0008D8, "Member 'UPyWidget_Nameplate::ShowTrainingTips' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ShowLoadingPercentage) == 0x0008D9, "Member 'UPyWidget_Nameplate::ShowLoadingPercentage' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ShowCaptainIcon) == 0x0008DA, "Member 'UPyWidget_Nameplate::ShowCaptainIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ShowVoiceIcon) == 0x0008DB, "Member 'UPyWidget_Nameplate::ShowVoiceIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ShowSignalIcon) == 0x0008DC, "Member 'UPyWidget_Nameplate::ShowSignalIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ShowRankIcon) == 0x0008DD, "Member 'UPyWidget_Nameplate::ShowRankIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ShowPlatformIcon) == 0x0008DE, "Member 'UPyWidget_Nameplate::ShowPlatformIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, EnableSelectState) == 0x0008DF, "Member 'UPyWidget_Nameplate::EnableSelectState' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, IsCommonNameplate) == 0x0008E0, "Member 'UPyWidget_Nameplate::IsCommonNameplate' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, IsSelfColor) == 0x0008E1, "Member 'UPyWidget_Nameplate::IsSelfColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ShowLeagueEmblem) == 0x0008E2, "Member 'UPyWidget_Nameplate::ShowLeagueEmblem' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ShowHeroTitle) == 0x0008E3, "Member 'UPyWidget_Nameplate::ShowHeroTitle' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ShowHonorBadge) == 0x0008E4, "Member 'UPyWidget_Nameplate::ShowHonorBadge' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, CreditVXSource) == 0x0008E8, "Member 'UPyWidget_Nameplate::CreditVXSource' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, DynamicCardVxSource) == 0x0008F0, "Member 'UPyWidget_Nameplate::DynamicCardVxSource' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ClanMiniNameColor_Formal) == 0x0008F8, "Member 'UPyWidget_Nameplate::ClanMiniNameColor_Formal' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ClanMiniNameColor_Temporary) == 0x00090C, "Member 'UPyWidget_Nameplate::ClanMiniNameColor_Temporary' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, Img_NameInfo_Bg) == 0x000920, "Member 'UPyWidget_Nameplate::Img_NameInfo_Bg' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, ClanMiniNameVisibility) == 0x000928, "Member 'UPyWidget_Nameplate::ClanMiniNameVisibility' has a wrong offset!");
static_assert(offsetof(UPyWidget_Nameplate, WBP_Voice_NamePlateIcon) == 0x000930, "Member 'UPyWidget_Nameplate::WBP_Voice_NamePlateIcon' has a wrong offset!");

}

