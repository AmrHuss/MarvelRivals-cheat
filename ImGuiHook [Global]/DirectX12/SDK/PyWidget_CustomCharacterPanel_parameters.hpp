#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CustomCharacterPanel

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_CustomCharacterPanel.PyWidget_CustomCharacterPanel.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_CustomCharacterPanel_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_CustomCharacterPanel_MarvelSetVisible) == 0x000001, "Wrong alignment on PyWidget_CustomCharacterPanel_MarvelSetVisible");
static_assert(sizeof(PyWidget_CustomCharacterPanel_MarvelSetVisible) == 0x000001, "Wrong size on PyWidget_CustomCharacterPanel_MarvelSetVisible");
static_assert(offsetof(PyWidget_CustomCharacterPanel_MarvelSetVisible, Visible) == 0x000000, "Member 'PyWidget_CustomCharacterPanel_MarvelSetVisible::Visible' has a wrong offset!");

// PythonFunction PyWidget_CustomCharacterPanel.PyWidget_CustomCharacterPanel.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_CustomCharacterPanel_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_CustomCharacterPanel_OnAnimationFinished) == 0x000008, "Wrong alignment on PyWidget_CustomCharacterPanel_OnAnimationFinished");
static_assert(sizeof(PyWidget_CustomCharacterPanel_OnAnimationFinished) == 0x000008, "Wrong size on PyWidget_CustomCharacterPanel_OnAnimationFinished");
static_assert(offsetof(PyWidget_CustomCharacterPanel_OnAnimationFinished, Animation) == 0x000000, "Member 'PyWidget_CustomCharacterPanel_OnAnimationFinished::Animation' has a wrong offset!");

// PythonFunction PyWidget_CustomCharacterPanel.PyWidget_CustomCharacterPanel.on_try_srcoll_when_next_focusable_child_change
// 0x0018 (0x0018 - 0x0000)
struct PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change final
{
public:
	int32                                         ChildIndex;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FocusedChildDirection;                             // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumItemsLine;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change) == 0x000008, "Wrong alignment on PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change");
static_assert(sizeof(PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change) == 0x000018, "Wrong size on PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change");
static_assert(offsetof(PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change, ChildIndex) == 0x000000, "Member 'PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change::ChildIndex' has a wrong offset!");
static_assert(offsetof(PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change, FocusedChildDirection) == 0x000004, "Member 'PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change::FocusedChildDirection' has a wrong offset!");
static_assert(offsetof(PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change, NumItemsLine) == 0x000008, "Member 'PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change::NumItemsLine' has a wrong offset!");
static_assert(offsetof(PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change, ReturnValue) == 0x000010, "Member 'PyWidget_CustomCharacterPanel_On_try_srcoll_when_next_focusable_child_change::ReturnValue' has a wrong offset!");

// PythonFunction PyWidget_CustomCharacterPanel.PyWidget_CustomCharacterItem.OnHeadPictureLoadCompleted
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_CustomCharacterItem_OnHeadPictureLoadCompleted final
{
public:
	class UTexture2D*                             Picture;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_CustomCharacterItem_OnHeadPictureLoadCompleted) == 0x000008, "Wrong alignment on PyWidget_CustomCharacterItem_OnHeadPictureLoadCompleted");
static_assert(sizeof(PyWidget_CustomCharacterItem_OnHeadPictureLoadCompleted) == 0x000008, "Wrong size on PyWidget_CustomCharacterItem_OnHeadPictureLoadCompleted");
static_assert(offsetof(PyWidget_CustomCharacterItem_OnHeadPictureLoadCompleted, Picture) == 0x000000, "Member 'PyWidget_CustomCharacterItem_OnHeadPictureLoadCompleted::Picture' has a wrong offset!");

}
