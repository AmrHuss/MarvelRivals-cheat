#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrainSettingModeBP

#include "Basic.hpp"

#include "MarvelLevel_structs.hpp"


namespace SDK
{

// UserDefinedStruct TrainSettingModeBP.TrainSettingModeBP
// 0x0040 (0x0040 - 0x0000)
struct FTrainSettingModeBP final
{
public:
	ETrainUIModeType                              Id_19_A40A7FD443D62374B08F4596FFD21C16;            // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Key_16_EF7EA3D840D148D6BBCA92B04FEF748D;           // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Title_13_19B2ED0A4CC86C40F5174D9B707590AF;         // 0x0018(0x0018)(Edit, BlueprintVisible)
	TArray<int32>                                 ChildList_12_A96AD28642D28160ED7DD688FCBE3814;     // 0x0030(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FTrainSettingModeBP) == 0x000008, "Wrong alignment on FTrainSettingModeBP");
static_assert(sizeof(FTrainSettingModeBP) == 0x000040, "Wrong size on FTrainSettingModeBP");
static_assert(offsetof(FTrainSettingModeBP, Id_19_A40A7FD443D62374B08F4596FFD21C16) == 0x000000, "Member 'FTrainSettingModeBP::Id_19_A40A7FD443D62374B08F4596FFD21C16' has a wrong offset!");
static_assert(offsetof(FTrainSettingModeBP, Key_16_EF7EA3D840D148D6BBCA92B04FEF748D) == 0x000008, "Member 'FTrainSettingModeBP::Key_16_EF7EA3D840D148D6BBCA92B04FEF748D' has a wrong offset!");
static_assert(offsetof(FTrainSettingModeBP, Title_13_19B2ED0A4CC86C40F5174D9B707590AF) == 0x000018, "Member 'FTrainSettingModeBP::Title_13_19B2ED0A4CC86C40F5174D9B707590AF' has a wrong offset!");
static_assert(offsetof(FTrainSettingModeBP, ChildList_12_A96AD28642D28160ED7DD688FCBE3814) == 0x000030, "Member 'FTrainSettingModeBP::ChildList_12_A96AD28642D28160ED7DD688FCBE3814' has a wrong offset!");

}

