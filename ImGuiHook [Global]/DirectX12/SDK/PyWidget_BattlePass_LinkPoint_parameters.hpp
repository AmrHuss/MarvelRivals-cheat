#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_BattlePass_LinkPoint

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_BattlePass_LinkPoint.PyWidget_BattlePass_LinkPoint.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_BattlePass_LinkPoint_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_BattlePass_LinkPoint_MarvelSetVisible) == 0x000001, "Wrong alignment on PyWidget_BattlePass_LinkPoint_MarvelSetVisible");
static_assert(sizeof(PyWidget_BattlePass_LinkPoint_MarvelSetVisible) == 0x000001, "Wrong size on PyWidget_BattlePass_LinkPoint_MarvelSetVisible");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_MarvelSetVisible, Visible) == 0x000000, "Member 'PyWidget_BattlePass_LinkPoint_MarvelSetVisible::Visible' has a wrong offset!");

// PythonFunction PyWidget_BattlePass_LinkPoint.PyWidget_BattlePass_LinkPoint.OnMouseButtonDown
// 0x0178 (0x0178 - 0x0000)
struct PyWidget_BattlePass_LinkPoint_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0080)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B8(0x00C0)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyWidget_BattlePass_LinkPoint_OnMouseButtonDown) == 0x000008, "Wrong alignment on PyWidget_BattlePass_LinkPoint_OnMouseButtonDown");
static_assert(sizeof(PyWidget_BattlePass_LinkPoint_OnMouseButtonDown) == 0x000178, "Wrong size on PyWidget_BattlePass_LinkPoint_OnMouseButtonDown");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseButtonDown, ReturnValue) == 0x0000B8, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseButtonDown::ReturnValue' has a wrong offset!");

// PythonFunction PyWidget_BattlePass_LinkPoint.PyWidget_BattlePass_LinkPoint.OnMouseButtonUp
// 0x0178 (0x0178 - 0x0000)
struct PyWidget_BattlePass_LinkPoint_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0080)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B8(0x00C0)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyWidget_BattlePass_LinkPoint_OnMouseButtonUp) == 0x000008, "Wrong alignment on PyWidget_BattlePass_LinkPoint_OnMouseButtonUp");
static_assert(sizeof(PyWidget_BattlePass_LinkPoint_OnMouseButtonUp) == 0x000178, "Wrong size on PyWidget_BattlePass_LinkPoint_OnMouseButtonUp");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseButtonUp, MouseEvent) == 0x000038, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseButtonUp, ReturnValue) == 0x0000B8, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseButtonUp::ReturnValue' has a wrong offset!");

// PythonFunction PyWidget_BattlePass_LinkPoint.PyWidget_BattlePass_LinkPoint.OnMouseMove
// 0x0178 (0x0178 - 0x0000)
struct PyWidget_BattlePass_LinkPoint_OnMouseMove final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0080)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B8(0x00C0)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyWidget_BattlePass_LinkPoint_OnMouseMove) == 0x000008, "Wrong alignment on PyWidget_BattlePass_LinkPoint_OnMouseMove");
static_assert(sizeof(PyWidget_BattlePass_LinkPoint_OnMouseMove) == 0x000178, "Wrong size on PyWidget_BattlePass_LinkPoint_OnMouseMove");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseMove, MyGeometry) == 0x000000, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseMove::MyGeometry' has a wrong offset!");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseMove, MouseEvent) == 0x000038, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseMove::MouseEvent' has a wrong offset!");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseMove, ReturnValue) == 0x0000B8, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseMove::ReturnValue' has a wrong offset!");

// PythonFunction PyWidget_BattlePass_LinkPoint.PyWidget_BattlePass_LinkPoint.OnMouseWheel
// 0x0178 (0x0178 - 0x0000)
struct PyWidget_BattlePass_LinkPoint_OnMouseWheel final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0080)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B8(0x00C0)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyWidget_BattlePass_LinkPoint_OnMouseWheel) == 0x000008, "Wrong alignment on PyWidget_BattlePass_LinkPoint_OnMouseWheel");
static_assert(sizeof(PyWidget_BattlePass_LinkPoint_OnMouseWheel) == 0x000178, "Wrong size on PyWidget_BattlePass_LinkPoint_OnMouseWheel");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseWheel, MyGeometry) == 0x000000, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseWheel::MyGeometry' has a wrong offset!");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseWheel, MouseEvent) == 0x000038, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseWheel::MouseEvent' has a wrong offset!");
static_assert(offsetof(PyWidget_BattlePass_LinkPoint_OnMouseWheel, ReturnValue) == 0x0000B8, "Member 'PyWidget_BattlePass_LinkPoint_OnMouseWheel::ReturnValue' has a wrong offset!");

}
