#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DebugHeroAudioInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_DebugHeroAudioInfo.WBP_DebugHeroAudioInfo_C.ExecuteUbergraph_WBP_DebugHeroAudioInfo
// 0x0248 (0x0248 - 0x0000)
struct WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0018)(HasGetValueTypeHash)
	class UAkComponent*                           K2Node_CustomEvent_InAk;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetListnerDisInfo_Out;                    // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class UAkComponent*                           CallFunc_GetWorldPlayerListener_ReturnValue;       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetObstructionOcclusion_OccValue;         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetObstructionOcclusion_ObsValue;         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0070(0x0018)()
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x0088(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00F0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0140(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0150(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0160(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0178(0x0018)()
	class UMarvelAudioData*                       CallFunc_GetGlobalAudioData_ReturnValue;           // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRTPC_ReturnValue;                      // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_2;          // 0x01A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01B8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0208(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0218(0x0018)()
	double                                        CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_DoubleToText_Value_ImplicitCast_1;   // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_DoubleToText_Value_ImplicitCast_2;   // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo) == 0x000008, "Wrong alignment on WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo");
static_assert(sizeof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo) == 0x000248, "Wrong size on WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, EntryPoint) == 0x000000, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, K2Node_CustomEvent_InAk) == 0x000030, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::K2Node_CustomEvent_InAk' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_GetListnerDisInfo_Out) == 0x000038, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_GetListnerDisInfo_Out' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_GetWorldPlayerListener_ReturnValue) == 0x000060, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_GetWorldPlayerListener_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_GetObstructionOcclusion_OccValue) == 0x000068, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_GetObstructionOcclusion_OccValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_GetObstructionOcclusion_ObsValue) == 0x00006C, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_GetObstructionOcclusion_ObsValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000070, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_Conv_DoubleToText_ReturnValue_1) == 0x000088, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_Conv_DoubleToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000F0, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, K2Node_MakeArray_Array) == 0x000140, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, K2Node_MakeArray_Array_1) == 0x000150, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_Format_ReturnValue) == 0x000160, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_Format_ReturnValue_1) == 0x000178, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_GetGlobalAudioData_ReturnValue) == 0x000190, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_GetGlobalAudioData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_GetRTPC_ReturnValue) == 0x000198, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_GetRTPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_Conv_DoubleToText_ReturnValue_2) == 0x0001A0, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_Conv_DoubleToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001B8, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, K2Node_MakeArray_Array_2) == 0x000208, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_Format_ReturnValue_2) == 0x000218, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_Conv_DoubleToText_Value_ImplicitCast) == 0x000230, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_Conv_DoubleToText_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_Conv_DoubleToText_Value_ImplicitCast_1) == 0x000238, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_Conv_DoubleToText_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo, CallFunc_Conv_DoubleToText_Value_ImplicitCast_2) == 0x000240, "Member 'WBP_DebugHeroAudioInfo_C_ExecuteUbergraph_WBP_DebugHeroAudioInfo::CallFunc_Conv_DoubleToText_Value_ImplicitCast_2' has a wrong offset!");

// Function WBP_DebugHeroAudioInfo.WBP_DebugHeroAudioInfo_C.Get_ListenerInfo_Text_0
// 0x0030 (0x0030 - 0x0000)
struct WBP_DebugHeroAudioInfo_C_Get_ListenerInfo_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(WBP_DebugHeroAudioInfo_C_Get_ListenerInfo_Text_0) == 0x000008, "Wrong alignment on WBP_DebugHeroAudioInfo_C_Get_ListenerInfo_Text_0");
static_assert(sizeof(WBP_DebugHeroAudioInfo_C_Get_ListenerInfo_Text_0) == 0x000030, "Wrong size on WBP_DebugHeroAudioInfo_C_Get_ListenerInfo_Text_0");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_Get_ListenerInfo_Text_0, ReturnValue) == 0x000000, "Member 'WBP_DebugHeroAudioInfo_C_Get_ListenerInfo_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_Get_ListenerInfo_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_DebugHeroAudioInfo_C_Get_ListenerInfo_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_DebugHeroAudioInfo.WBP_DebugHeroAudioInfo_C.GetListnerDisInfo
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_DebugHeroAudioInfo_C_GetListnerDisInfo final
{
public:
	class FString                                 Out;                                               // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_GetWorldPlayerListener_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLastWwisePosition_Pos;                 // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLastWwisePosition_ReturnValue;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLastWwisePosition_Pos_1;               // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLastWwisePosition_ReturnValue_1;       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_FFloor64_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0068(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo) == 0x000008, "Wrong alignment on WBP_DebugHeroAudioInfo_C_GetListnerDisInfo");
static_assert(sizeof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo) == 0x0000A0, "Wrong size on WBP_DebugHeroAudioInfo_C_GetListnerDisInfo");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, Out) == 0x000000, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::Out' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_GetWorldPlayerListener_ReturnValue) == 0x000010, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_GetWorldPlayerListener_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_GetLastWwisePosition_Pos) == 0x000018, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_GetLastWwisePosition_Pos' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_GetLastWwisePosition_ReturnValue) == 0x000030, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_GetLastWwisePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_GetLastWwisePosition_Pos_1) == 0x000038, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_GetLastWwisePosition_Pos_1' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_GetLastWwisePosition_ReturnValue_1) == 0x000050, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_GetLastWwisePosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_Vector_Distance_ReturnValue) == 0x000058, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_FFloor64_ReturnValue) == 0x000060, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_FFloor64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000068, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_Conv_TextToString_ReturnValue) == 0x000080, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_GetListnerDisInfo, CallFunc_Concat_StrStr_ReturnValue) == 0x000090, "Member 'WBP_DebugHeroAudioInfo_C_GetListnerDisInfo::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function WBP_DebugHeroAudioInfo.WBP_DebugHeroAudioInfo_C.Initialize
// 0x0008 (0x0008 - 0x0000)
struct WBP_DebugHeroAudioInfo_C_Initialize final
{
public:
	class UAkComponent*                           InAk;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DebugHeroAudioInfo_C_Initialize) == 0x000008, "Wrong alignment on WBP_DebugHeroAudioInfo_C_Initialize");
static_assert(sizeof(WBP_DebugHeroAudioInfo_C_Initialize) == 0x000008, "Wrong size on WBP_DebugHeroAudioInfo_C_Initialize");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_Initialize, InAk) == 0x000000, "Member 'WBP_DebugHeroAudioInfo_C_Initialize::InAk' has a wrong offset!");

// Function WBP_DebugHeroAudioInfo.WBP_DebugHeroAudioInfo_C.TryGetOwnerAk
// 0x0008 (0x0008 - 0x0000)
struct WBP_DebugHeroAudioInfo_C_TryGetOwnerAk final
{
public:
	class UAkComponent*                           OutAk;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DebugHeroAudioInfo_C_TryGetOwnerAk) == 0x000008, "Wrong alignment on WBP_DebugHeroAudioInfo_C_TryGetOwnerAk");
static_assert(sizeof(WBP_DebugHeroAudioInfo_C_TryGetOwnerAk) == 0x000008, "Wrong size on WBP_DebugHeroAudioInfo_C_TryGetOwnerAk");
static_assert(offsetof(WBP_DebugHeroAudioInfo_C_TryGetOwnerAk, OutAk) == 0x000000, "Member 'WBP_DebugHeroAudioInfo_C_TryGetOwnerAk::OutAk' has a wrong offset!");

}

