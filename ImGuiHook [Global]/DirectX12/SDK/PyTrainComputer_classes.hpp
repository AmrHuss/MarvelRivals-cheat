#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyTrainComputer

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "MarvelLevel_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyTrainComputer.PyTrainComputer
// 0x00A8 (0x0570 - 0x04C8)
class APyTrainComputer : public ATrainComputer
{
public:
	ETrainUIModeType                              TrainUIMode;                                       // 0x04C8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C9[0x7];                                      // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTrainLimit>                    LimitConfig;                                       // 0x04D0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FTrainContent>                  TrainingInfo;                                      // 0x04E0(0x0010)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	int32                                         TrainNumber;                                       // 0x04F0(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4F4[0x4];                                      // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AkEvent_Teleport_In;                               // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_Teleport_Out;                              // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Text_ComputerDisplayName;                          // 0x0508(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FAssistContent>                 AssistInfo;                                        // 0x0520(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector                                RelativeLocation;                                  // 0x0530(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ActiveTag;                                         // 0x0548(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TrainHeroID;                                       // 0x0554(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsCooperate;                                      // 0x0558(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_559[0x3];                                      // 0x0559(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IsHidden;                                          // 0x055C(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                   NotifyTagList;                                     // 0x0560(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void ReceiveInit();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnRep_IsHidden();
	void OnRep_TrainNumber();
	void OnRep_HodlerInfo();
	void PyConstructionConfig();
	void ResetAllBroken();
	void NotifySpawnTrainHero();
	void NotifyCreateCooperateHero();
	void NotifyClearCooperateHero();
	void NotifyResetCooperateHero();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyTrainComputer">();
	}
	static class APyTrainComputer* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyTrainComputer>();
	}
};
static_assert(alignof(APyTrainComputer) == 0x000008, "Wrong alignment on APyTrainComputer");
static_assert(sizeof(APyTrainComputer) == 0x000570, "Wrong size on APyTrainComputer");
static_assert(offsetof(APyTrainComputer, TrainUIMode) == 0x0004C8, "Member 'APyTrainComputer::TrainUIMode' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, LimitConfig) == 0x0004D0, "Member 'APyTrainComputer::LimitConfig' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, TrainingInfo) == 0x0004E0, "Member 'APyTrainComputer::TrainingInfo' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, TrainNumber) == 0x0004F0, "Member 'APyTrainComputer::TrainNumber' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, AkEvent_Teleport_In) == 0x0004F8, "Member 'APyTrainComputer::AkEvent_Teleport_In' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, AkEvent_Teleport_Out) == 0x000500, "Member 'APyTrainComputer::AkEvent_Teleport_Out' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, Text_ComputerDisplayName) == 0x000508, "Member 'APyTrainComputer::Text_ComputerDisplayName' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, AssistInfo) == 0x000520, "Member 'APyTrainComputer::AssistInfo' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, RelativeLocation) == 0x000530, "Member 'APyTrainComputer::RelativeLocation' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, ActiveTag) == 0x000548, "Member 'APyTrainComputer::ActiveTag' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, TrainHeroID) == 0x000554, "Member 'APyTrainComputer::TrainHeroID' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, bIsCooperate) == 0x000558, "Member 'APyTrainComputer::bIsCooperate' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, IsHidden) == 0x00055C, "Member 'APyTrainComputer::IsHidden' has a wrong offset!");
static_assert(offsetof(APyTrainComputer, NotifyTagList) == 0x000560, "Member 'APyTrainComputer::NotifyTagList' has a wrong offset!");

}
