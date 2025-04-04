#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySublevelComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PySublevelComponent.PySublevelComponent.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PySublevelComponent_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySublevelComponent_ReceiveEndPlay) == 0x000001, "Wrong alignment on PySublevelComponent_ReceiveEndPlay");
static_assert(sizeof(PySublevelComponent_ReceiveEndPlay) == 0x000001, "Wrong size on PySublevelComponent_ReceiveEndPlay");
static_assert(offsetof(PySublevelComponent_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'PySublevelComponent_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// PythonFunction PySublevelComponent.PySublevelComponent.GetLevelInstanceActor
// 0x0018 (0x0018 - 0x0000)
struct PySublevelComponent_GetLevelInstanceActor final
{
public:
	class FString                                 Instance_name;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySublevelComponent_GetLevelInstanceActor) == 0x000008, "Wrong alignment on PySublevelComponent_GetLevelInstanceActor");
static_assert(sizeof(PySublevelComponent_GetLevelInstanceActor) == 0x000018, "Wrong size on PySublevelComponent_GetLevelInstanceActor");
static_assert(offsetof(PySublevelComponent_GetLevelInstanceActor, Instance_name) == 0x000000, "Member 'PySublevelComponent_GetLevelInstanceActor::Instance_name' has a wrong offset!");
static_assert(offsetof(PySublevelComponent_GetLevelInstanceActor, ReturnValue) == 0x000010, "Member 'PySublevelComponent_GetLevelInstanceActor::ReturnValue' has a wrong offset!");

}

