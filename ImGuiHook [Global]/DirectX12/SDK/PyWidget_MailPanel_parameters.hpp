#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_MailPanel

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_MailPanel.PyWidget_MailPanel.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_MailPanel_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_MailPanel_MarvelSetVisible) == 0x000001, "Wrong alignment on PyWidget_MailPanel_MarvelSetVisible");
static_assert(sizeof(PyWidget_MailPanel_MarvelSetVisible) == 0x000001, "Wrong size on PyWidget_MailPanel_MarvelSetVisible");
static_assert(offsetof(PyWidget_MailPanel_MarvelSetVisible, Visible) == 0x000000, "Member 'PyWidget_MailPanel_MarvelSetVisible::Visible' has a wrong offset!");

// PythonFunction PyWidget_MailPanel.PyWidget_MailPanel.OnListviewEntryGenerated
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_MailPanel_OnListviewEntryGenerated final
{
public:
	class UUserWidget*                            EntryWidget;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_MailPanel_OnListviewEntryGenerated) == 0x000008, "Wrong alignment on PyWidget_MailPanel_OnListviewEntryGenerated");
static_assert(sizeof(PyWidget_MailPanel_OnListviewEntryGenerated) == 0x000008, "Wrong size on PyWidget_MailPanel_OnListviewEntryGenerated");
static_assert(offsetof(PyWidget_MailPanel_OnListviewEntryGenerated, EntryWidget) == 0x000000, "Member 'PyWidget_MailPanel_OnListviewEntryGenerated::EntryWidget' has a wrong offset!");

}

