#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_10493102_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function Ability_10493102_BP.Ability_10493102_BP_C.ExecuteUbergraph_Ability_10493102_BP
// 0x0018 (0x0018 - 0x0000)
struct Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGATask_SpawnScope*                     CallFunc_SpawnScope_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP) == 0x000008, "Wrong alignment on Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP");
static_assert(sizeof(Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP) == 0x000018, "Wrong size on Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP");
static_assert(offsetof(Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP, EntryPoint) == 0x000000, "Member 'Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP, CallFunc_SpawnScope_ReturnValue) == 0x000008, "Member 'Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP::CallFunc_SpawnScope_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'Ability_10493102_BP_C_ExecuteUbergraph_Ability_10493102_BP::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

