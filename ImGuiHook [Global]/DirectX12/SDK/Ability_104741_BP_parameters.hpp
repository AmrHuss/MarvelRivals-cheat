#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_104741_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function Ability_104741_BP.Ability_104741_BP_C.GetTimelineIndexToPlay
// 0x0020 (0x0020 - 0x0000)
struct Ability_104741_BP_C_GetTimelineIndexToPlay final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarvelBaseCharacter*                   CallFunc_GetAbilityOwnerCharacter_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AJeffCharacter*                         K2Node_DynamicCast_AsJeff_Character;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsJeffMovingForward_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ability_104741_BP_C_GetTimelineIndexToPlay) == 0x000008, "Wrong alignment on Ability_104741_BP_C_GetTimelineIndexToPlay");
static_assert(sizeof(Ability_104741_BP_C_GetTimelineIndexToPlay) == 0x000020, "Wrong size on Ability_104741_BP_C_GetTimelineIndexToPlay");
static_assert(offsetof(Ability_104741_BP_C_GetTimelineIndexToPlay, ReturnValue) == 0x000000, "Member 'Ability_104741_BP_C_GetTimelineIndexToPlay::ReturnValue' has a wrong offset!");
static_assert(offsetof(Ability_104741_BP_C_GetTimelineIndexToPlay, CallFunc_GetAbilityOwnerCharacter_ReturnValue) == 0x000008, "Member 'Ability_104741_BP_C_GetTimelineIndexToPlay::CallFunc_GetAbilityOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ability_104741_BP_C_GetTimelineIndexToPlay, K2Node_DynamicCast_AsJeff_Character) == 0x000010, "Member 'Ability_104741_BP_C_GetTimelineIndexToPlay::K2Node_DynamicCast_AsJeff_Character' has a wrong offset!");
static_assert(offsetof(Ability_104741_BP_C_GetTimelineIndexToPlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Ability_104741_BP_C_GetTimelineIndexToPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Ability_104741_BP_C_GetTimelineIndexToPlay, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'Ability_104741_BP_C_GetTimelineIndexToPlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ability_104741_BP_C_GetTimelineIndexToPlay, CallFunc_IsJeffMovingForward_ReturnValue) == 0x00001A, "Member 'Ability_104741_BP_C_GetTimelineIndexToPlay::CallFunc_IsJeffMovingForward_ReturnValue' has a wrong offset!");

}
