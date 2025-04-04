#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_BattlePass_PropView

#include "Basic.hpp"

#include "PyWidget_BattlePass_PropView_classes.hpp"
#include "PyWidget_BattlePass_PropView_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PageItem.SetIsHover
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsHover_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattlePass_PageItem::SetIsHover(bool IsHover_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PageItem", "SetIsHover");

	Params::PyWidget_BattlePass_PageItem_SetIsHover Parms{};

	Parms.IsHover_0 = IsHover_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PageItem.SetBtnIsPressed
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsBtnPressed_0                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattlePass_PageItem::SetBtnIsPressed(bool IsBtnPressed_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PageItem", "SetBtnIsPressed");

	Params::PyWidget_BattlePass_PageItem_SetBtnIsPressed Parms{};

	Parms.IsBtnPressed_0 = IsBtnPressed_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_CuttingItem.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattlePass_CuttingItem::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_CuttingItem", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_CuttingItem.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattlePass_CuttingItem::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_CuttingItem", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_CuttingItem.PreConstruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattlePass_CuttingItem::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_CuttingItem", "PreConstruct");

	Params::PyWidget_BattlePass_CuttingItem_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_CuttingItem.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattlePass_CuttingItem::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_CuttingItem", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_CuttingItem.SetIsHover
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsHover_0                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattlePass_CuttingItem::SetIsHover(bool IsHover_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_CuttingItem", "SetIsHover");

	Params::PyWidget_BattlePass_CuttingItem_SetIsHover Parms{};

	Parms.IsHover_0 = IsHover_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_CuttingItem.OnImgMaskLoaded
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          ImgMask                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattlePass_CuttingItem::OnImgMaskLoaded(class UObject* ImgMask)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_CuttingItem", "OnImgMaskLoaded");

	Params::PyWidget_BattlePass_CuttingItem_OnImgMaskLoaded Parms{};

	Parms.ImgMask = ImgMask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_CuttingItem.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattlePass_CuttingItem::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_CuttingItem", "OnAnimationFinished");

	Params::PyWidget_BattlePass_CuttingItem_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_CuttingItemList.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattlePass_CuttingItemList::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_CuttingItemList", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_CuttingItemList.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattlePass_CuttingItemList::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_CuttingItemList", "MarvelSetVisible");

	Params::PyWidget_BattlePass_CuttingItemList_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_CuttingItemList.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattlePass_CuttingItemList::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_CuttingItemList", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_Confirm_Popup.OnConfirmPopupAnimFinish__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                           Anim_name                                              (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyWidget_BattlePass_Confirm_Popup::OnConfirmPopupAnimFinish__DelegateSignature(const class FString& Anim_name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_Confirm_Popup", "OnConfirmPopupAnimFinish__DelegateSignature");

	Params::PyWidget_BattlePass_Confirm_Popup_OnConfirmPopupAnimFinish__DelegateSignature Parms{};

	Parms.Anim_name = std::move(Anim_name);

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_Confirm_Popup.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattlePass_Confirm_Popup::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_Confirm_Popup", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_Confirm_Popup.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattlePass_Confirm_Popup::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_Confirm_Popup", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PropView.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattlePass_PropView::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PropView", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PropView.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattlePass_PropView::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PropView", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PropView.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattlePass_PropView::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PropView", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PropView.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattlePass_PropView::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PropView", "MarvelSetVisible");

	Params::PyWidget_BattlePass_PropView_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PropView.OnNavLeft_Confirm_Popup
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EUINavigation                           Navigation_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_BattlePass_PropView::OnNavLeft_Confirm_Popup(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PropView", "OnNavLeft_Confirm_Popup");

	Params::PyWidget_BattlePass_PropView_OnNavLeft_Confirm_Popup Parms{};

	Parms.Navigation_0 = Navigation_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PropView.OnNavRight_Confirm_Popup
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EUINavigation                           Navigation_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_BattlePass_PropView::OnNavRight_Confirm_Popup(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PropView", "OnNavRight_Confirm_Popup");

	Params::PyWidget_BattlePass_PropView_OnNavRight_Confirm_Popup Parms{};

	Parms.Navigation_0 = Navigation_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PropView.OnNavBtnHome
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EUINavigation                           Navigation_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_BattlePass_PropView::OnNavBtnHome(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PropView", "OnNavBtnHome");

	Params::PyWidget_BattlePass_PropView_OnNavBtnHome Parms{};

	Parms.Navigation_0 = Navigation_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PropView.OnNavBtnPre
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EUINavigation                           Navigation_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_BattlePass_PropView::OnNavBtnPre(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PropView", "OnNavBtnPre");

	Params::PyWidget_BattlePass_PropView_OnNavBtnPre Parms{};

	Parms.Navigation_0 = Navigation_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_BattlePass_PropView.PyWidget_BattlePass_PropView.OnNavBtnNext
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EUINavigation                           Navigation_0                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_BattlePass_PropView::OnNavBtnNext(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattlePass_PropView", "OnNavBtnNext");

	Params::PyWidget_BattlePass_PropView_OnNavBtnNext Parms{};

	Parms.Navigation_0 = Navigation_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

