#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Summoned_10475201_BP

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// Function Summoned_10475201_BP.Summoned_10475201_BP_C.ExecuteUbergraph_Summoned_10475201_BP
// 0x0018 (0x0018 - 0x0000)
struct Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETargetActorDestroyReason                     K2Node_Event_SummonedDestroyReason;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGATask_SpawnScope*                     CallFunc_SpawnScopeWithObject_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP) == 0x000008, "Wrong alignment on Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP");
static_assert(sizeof(Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP) == 0x000018, "Wrong size on Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP");
static_assert(offsetof(Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP, EntryPoint) == 0x000000, "Member 'Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP, K2Node_Event_SummonedDestroyReason) == 0x000004, "Member 'Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP::K2Node_Event_SummonedDestroyReason' has a wrong offset!");
static_assert(offsetof(Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP, CallFunc_SpawnScopeWithObject_ReturnValue) == 0x000008, "Member 'Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP::CallFunc_SpawnScopeWithObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'Summoned_10475201_BP_C_ExecuteUbergraph_Summoned_10475201_BP::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Summoned_10475201_BP.Summoned_10475201_BP_C.K2_OnEndAgentTask_GraphAbility
// 0x0001 (0x0001 - 0x0000)
struct Summoned_10475201_BP_C_K2_OnEndAgentTask_GraphAbility final
{
public:
	ETargetActorDestroyReason                     SummonedDestroyReason;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Summoned_10475201_BP_C_K2_OnEndAgentTask_GraphAbility) == 0x000001, "Wrong alignment on Summoned_10475201_BP_C_K2_OnEndAgentTask_GraphAbility");
static_assert(sizeof(Summoned_10475201_BP_C_K2_OnEndAgentTask_GraphAbility) == 0x000001, "Wrong size on Summoned_10475201_BP_C_K2_OnEndAgentTask_GraphAbility");
static_assert(offsetof(Summoned_10475201_BP_C_K2_OnEndAgentTask_GraphAbility, SummonedDestroyReason) == 0x000000, "Member 'Summoned_10475201_BP_C_K2_OnEndAgentTask_GraphAbility::SummonedDestroyReason' has a wrong offset!");

}

