#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_RoomPlayerV3

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_Common_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_RoomPlayerV3.PyWidget_RoomPlayerV4
// 0x09D0 (0x12B0 - 0x08E0)
#pragma pack(push, 0x1)
class alignas(0x10) UPyWidget_RoomPlayerV4 : public UPyWidget_BaseCommonButton
{
public:
	bool                                          IsEmpty;                                           // 0x08D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsInvitating;                                      // 0x08D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsAI;                                              // 0x08DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsAttacker;                                        // 0x08DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLocalPlayer;                                     // 0x08DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsOwner;                                           // 0x08DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsSelfOwner;                                       // 0x08DE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsGame;                                            // 0x08DF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsExchg;                                           // 0x08E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLimitExchg;                                      // 0x08E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsClickExchg;                                      // 0x08E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsWaitExchg;                                       // 0x08E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsExchange;                                        // 0x08E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsOnlyPlayer;                                      // 0x08E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasInviting;                                       // 0x08E6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsAiNeedShow;                                      // 0x08E7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UID;                                               // 0x08E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8EC[0x4];                                      // 0x08EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerName;                                        // 0x08F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Level;                                             // 0x0900(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Score;                                             // 0x0904(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Pos;                                               // 0x0908(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Camp;                                              // 0x090C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HeroID;                                            // 0x0910(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AILevel;                                           // 0x0914(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HeroSerial;                                        // 0x0918(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           AttackerColor;                                     // 0x091C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           DefenderColor;                                     // 0x092C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MouseCamp;                                         // 0x093C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MousePos;                                          // 0x0940(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_944[0x4];                                      // 0x0944(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AddFriendText;                                     // 0x0948(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   ViewCareerText;                                    // 0x0960(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   BlackListText;                                     // 0x0978(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   RemoveFromBlackListText;                           // 0x0990(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   RemovePlayer;                                      // 0x09A8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         ShowScoreType;                                     // 0x09C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ShowScoreNum;                                      // 0x09C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C8[0x8];                                      // 0x09C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           EmptyButton;                                       // 0x09D0(0x0400)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                           UnEmptyButton;                                     // 0x0DD0(0x0400)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            LocalPlayerColor;                                  // 0x11D0(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            OtherPlayerColor;                                  // 0x11E4(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                MenuGuideTipsStyles;                               // 0x11F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                InviteGuideTipsStyles;                             // 0x1208(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                   EditAIText;                                        // 0x1218(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   DeletAIText;                                       // 0x1230(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnAIClicked;                                       // 0x1248(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnAIChange;                                        // 0x1258(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnDeleteClicked;                                   // 0x1268(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnExchangeClicked;                                 // 0x1278(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnCancelExchangeClicked;                           // 0x1288(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnOwnerExchangeClicked;                            // 0x1298(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();
	void ClearPlayerData();
	void SetAIData(int32 HeroID_0, int32 AILevel_0);
	void RefreshBtnVisible();
	void SetIsOwner(bool IsOwner_0);
	void SetIsSelfOwner(bool IsSelfOwner_0);
	void SetIsLocalPlayer(bool IsLocalPlayer_0);
	void SetIsEmpty(bool IsEmpty_0);
	void SetIsInvitating(bool IsInvitating_0);
	void SetIsAI(bool IsAI_0);
	void SetIsAttacker(bool IsAttacker_0);
	void SetIsLeagueAttacker(bool IsAttacker_0);
	void SetIsWaitExchg(bool IsWaitExchg_0);
	void SetIsLimitExchg(bool IsLimitExchg_0);
	void SetIsClickExchg(bool IsClickExchg_0);
	void SetIsGame(bool IsGame_0);
	void SetIsExchg(bool IsExchg_0);
	void UpdateExchgVisible();
	int32 GetHeroSerial(int32 HeroID_0);
	int32 GetHeroID(int32 HeroSerial_0);
	void OnAIClicked__DelegateSignature(class UUserWidget* Btn);
	void OnAIChange__DelegateSignature(int32 UID_0, int32 HeroID_0, int32 AILevel_0);
	void OnDeleteClicked__DelegateSignature(class UUserWidget* Btn);
	void OnExchangeClicked__DelegateSignature(class UUserWidget* Btn);
	void OnCancelExchangeClicked__DelegateSignature(class UUserWidget* Btn);
	void OnOwnerExchangeClicked__DelegateSignature(class UUserWidget* Btn, bool IsClick);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_RoomPlayerV4">();
	}
	static class UPyWidget_RoomPlayerV4* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_RoomPlayerV4>();
	}
};
#pragma pack(pop)
static_assert(alignof(UPyWidget_RoomPlayerV4) == 0x000010, "Wrong alignment on UPyWidget_RoomPlayerV4");
static_assert(sizeof(UPyWidget_RoomPlayerV4) == 0x0012B0, "Wrong size on UPyWidget_RoomPlayerV4");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsEmpty) == 0x0008D8, "Member 'UPyWidget_RoomPlayerV4::IsEmpty' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsInvitating) == 0x0008D9, "Member 'UPyWidget_RoomPlayerV4::IsInvitating' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsAI) == 0x0008DA, "Member 'UPyWidget_RoomPlayerV4::IsAI' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsAttacker) == 0x0008DB, "Member 'UPyWidget_RoomPlayerV4::IsAttacker' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsLocalPlayer) == 0x0008DC, "Member 'UPyWidget_RoomPlayerV4::IsLocalPlayer' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsOwner) == 0x0008DD, "Member 'UPyWidget_RoomPlayerV4::IsOwner' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsSelfOwner) == 0x0008DE, "Member 'UPyWidget_RoomPlayerV4::IsSelfOwner' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsGame) == 0x0008DF, "Member 'UPyWidget_RoomPlayerV4::IsGame' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsExchg) == 0x0008E0, "Member 'UPyWidget_RoomPlayerV4::IsExchg' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsLimitExchg) == 0x0008E1, "Member 'UPyWidget_RoomPlayerV4::IsLimitExchg' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsClickExchg) == 0x0008E2, "Member 'UPyWidget_RoomPlayerV4::IsClickExchg' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsWaitExchg) == 0x0008E3, "Member 'UPyWidget_RoomPlayerV4::IsWaitExchg' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsExchange) == 0x0008E4, "Member 'UPyWidget_RoomPlayerV4::IsExchange' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsOnlyPlayer) == 0x0008E5, "Member 'UPyWidget_RoomPlayerV4::IsOnlyPlayer' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, HasInviting) == 0x0008E6, "Member 'UPyWidget_RoomPlayerV4::HasInviting' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, IsAiNeedShow) == 0x0008E7, "Member 'UPyWidget_RoomPlayerV4::IsAiNeedShow' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, UID) == 0x0008E8, "Member 'UPyWidget_RoomPlayerV4::UID' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, PlayerName) == 0x0008F0, "Member 'UPyWidget_RoomPlayerV4::PlayerName' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, Level) == 0x000900, "Member 'UPyWidget_RoomPlayerV4::Level' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, Score) == 0x000904, "Member 'UPyWidget_RoomPlayerV4::Score' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, Pos) == 0x000908, "Member 'UPyWidget_RoomPlayerV4::Pos' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, Camp) == 0x00090C, "Member 'UPyWidget_RoomPlayerV4::Camp' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, HeroID) == 0x000910, "Member 'UPyWidget_RoomPlayerV4::HeroID' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, AILevel) == 0x000914, "Member 'UPyWidget_RoomPlayerV4::AILevel' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, HeroSerial) == 0x000918, "Member 'UPyWidget_RoomPlayerV4::HeroSerial' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, AttackerColor) == 0x00091C, "Member 'UPyWidget_RoomPlayerV4::AttackerColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, DefenderColor) == 0x00092C, "Member 'UPyWidget_RoomPlayerV4::DefenderColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, MouseCamp) == 0x00093C, "Member 'UPyWidget_RoomPlayerV4::MouseCamp' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, MousePos) == 0x000940, "Member 'UPyWidget_RoomPlayerV4::MousePos' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, AddFriendText) == 0x000948, "Member 'UPyWidget_RoomPlayerV4::AddFriendText' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, ViewCareerText) == 0x000960, "Member 'UPyWidget_RoomPlayerV4::ViewCareerText' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, BlackListText) == 0x000978, "Member 'UPyWidget_RoomPlayerV4::BlackListText' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, RemoveFromBlackListText) == 0x000990, "Member 'UPyWidget_RoomPlayerV4::RemoveFromBlackListText' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, RemovePlayer) == 0x0009A8, "Member 'UPyWidget_RoomPlayerV4::RemovePlayer' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, ShowScoreType) == 0x0009C0, "Member 'UPyWidget_RoomPlayerV4::ShowScoreType' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, ShowScoreNum) == 0x0009C4, "Member 'UPyWidget_RoomPlayerV4::ShowScoreNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, EmptyButton) == 0x0009D0, "Member 'UPyWidget_RoomPlayerV4::EmptyButton' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, UnEmptyButton) == 0x000DD0, "Member 'UPyWidget_RoomPlayerV4::UnEmptyButton' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, LocalPlayerColor) == 0x0011D0, "Member 'UPyWidget_RoomPlayerV4::LocalPlayerColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, OtherPlayerColor) == 0x0011E4, "Member 'UPyWidget_RoomPlayerV4::OtherPlayerColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, MenuGuideTipsStyles) == 0x0011F8, "Member 'UPyWidget_RoomPlayerV4::MenuGuideTipsStyles' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, InviteGuideTipsStyles) == 0x001208, "Member 'UPyWidget_RoomPlayerV4::InviteGuideTipsStyles' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, EditAIText) == 0x001218, "Member 'UPyWidget_RoomPlayerV4::EditAIText' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, DeletAIText) == 0x001230, "Member 'UPyWidget_RoomPlayerV4::DeletAIText' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, OnAIClicked) == 0x001248, "Member 'UPyWidget_RoomPlayerV4::OnAIClicked' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, OnAIChange) == 0x001258, "Member 'UPyWidget_RoomPlayerV4::OnAIChange' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, OnDeleteClicked) == 0x001268, "Member 'UPyWidget_RoomPlayerV4::OnDeleteClicked' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, OnExchangeClicked) == 0x001278, "Member 'UPyWidget_RoomPlayerV4::OnExchangeClicked' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, OnCancelExchangeClicked) == 0x001288, "Member 'UPyWidget_RoomPlayerV4::OnCancelExchangeClicked' has a wrong offset!");
static_assert(offsetof(UPyWidget_RoomPlayerV4, OnOwnerExchangeClicked) == 0x001298, "Member 'UPyWidget_RoomPlayerV4::OnOwnerExchangeClicked' has a wrong offset!");

// PythonClass PyWidget_RoomPlayerV3.PyWidget_RoomSpectatorPlayerV4
// 0x0000 (0x12B0 - 0x12B0)
#pragma pack(push, 0x1)
class alignas(0x10) UPyWidget_RoomSpectatorPlayerV4 : public UPyWidget_RoomPlayerV4
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void SetIsAttacker(bool IsAttacker_0);
	void SetIsOwner(bool IsOwner_0);
	void SetIsSelfOwner(bool IsSelfOwner_0);
	void SetIsEmpty(bool IsEmpty_0);
	void SetIsInvitating(bool IsInvitating_0);
	void SetIsAI(bool IsAI_0);
	void SetIsGame(bool IsGame_0);
	void SetIsLocalPlayer(bool IsLocalPlayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_RoomSpectatorPlayerV4">();
	}
	static class UPyWidget_RoomSpectatorPlayerV4* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_RoomSpectatorPlayerV4>();
	}
};
#pragma pack(pop)
static_assert(alignof(UPyWidget_RoomSpectatorPlayerV4) == 0x000010, "Wrong alignment on UPyWidget_RoomSpectatorPlayerV4");
static_assert(sizeof(UPyWidget_RoomSpectatorPlayerV4) == 0x0012B0, "Wrong size on UPyWidget_RoomSpectatorPlayerV4");

}
