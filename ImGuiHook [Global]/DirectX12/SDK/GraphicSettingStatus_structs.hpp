#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GraphicSettingStatus

#include "Basic.hpp"

#include "GraphicSettingStatusEntry_structs.hpp"


namespace SDK
{

// UserDefinedStruct GraphicSettingStatus.GraphicSettingStatus
// 0x0020 (0x0020 - 0x0000)
struct FGraphicSettingStatus final
{
public:
	TArray<struct FGraphicSettingStatusEntry>     Status_3_0A2A0FF941052EF4BF7082823C5AF546;         // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	class FString                                 Note_8_DE331B1F40953543AA39EC9A370AB8C8;           // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FGraphicSettingStatus) == 0x000008, "Wrong alignment on FGraphicSettingStatus");
static_assert(sizeof(FGraphicSettingStatus) == 0x000020, "Wrong size on FGraphicSettingStatus");
static_assert(offsetof(FGraphicSettingStatus, Status_3_0A2A0FF941052EF4BF7082823C5AF546) == 0x000000, "Member 'FGraphicSettingStatus::Status_3_0A2A0FF941052EF4BF7082823C5AF546' has a wrong offset!");
static_assert(offsetof(FGraphicSettingStatus, Note_8_DE331B1F40953543AA39EC9A370AB8C8) == 0x000010, "Member 'FGraphicSettingStatus::Note_8_DE331B1F40953543AA39EC9A370AB8C8' has a wrong offset!");

}

