#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameUserSettingsCustomDefaultLogic

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction GameUserSettingsCustomDefaultLogic.ExampleDefaultValueGenerator.BP_Gen
// 0x00E8 (0x00E8 - 0x0000)
struct ExampleDefaultValueGenerator_BP_Gen final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FUISettingEntryValueRange              Value_range;                                       // 0x0018(0x00B0)(ConstParm, Parm, OutParm, ReferenceParm)
	class FText                                   Platform_name;                                     // 0x00C8(0x0018)(ConstParm, Parm, OutParm, ReferenceParm)
	int32                                         Level;                                             // 0x00E0(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x00E4(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ExampleDefaultValueGenerator_BP_Gen) == 0x000008, "Wrong alignment on ExampleDefaultValueGenerator_BP_Gen");
static_assert(sizeof(ExampleDefaultValueGenerator_BP_Gen) == 0x0000E8, "Wrong size on ExampleDefaultValueGenerator_BP_Gen");
static_assert(offsetof(ExampleDefaultValueGenerator_BP_Gen, Obj) == 0x000000, "Member 'ExampleDefaultValueGenerator_BP_Gen::Obj' has a wrong offset!");
static_assert(offsetof(ExampleDefaultValueGenerator_BP_Gen, Setting_key) == 0x000008, "Member 'ExampleDefaultValueGenerator_BP_Gen::Setting_key' has a wrong offset!");
static_assert(offsetof(ExampleDefaultValueGenerator_BP_Gen, Value_range) == 0x000018, "Member 'ExampleDefaultValueGenerator_BP_Gen::Value_range' has a wrong offset!");
static_assert(offsetof(ExampleDefaultValueGenerator_BP_Gen, Platform_name) == 0x0000C8, "Member 'ExampleDefaultValueGenerator_BP_Gen::Platform_name' has a wrong offset!");
static_assert(offsetof(ExampleDefaultValueGenerator_BP_Gen, Level) == 0x0000E0, "Member 'ExampleDefaultValueGenerator_BP_Gen::Level' has a wrong offset!");
static_assert(offsetof(ExampleDefaultValueGenerator_BP_Gen, ReturnValue) == 0x0000E4, "Member 'ExampleDefaultValueGenerator_BP_Gen::ReturnValue' has a wrong offset!");

}
