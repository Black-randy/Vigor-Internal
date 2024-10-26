#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Titles

#include "Basic.hpp"

#include "UI_Titles_classes.hpp"
#include "UI_Titles_parameters.hpp"


namespace SDK
{

// Function UI_Titles.UI_Titles_C.ExecuteUbergraph_UI_Titles
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Titles_C::ExecuteUbergraph_UI_Titles(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "ExecuteUbergraph_UI_Titles");

	Params::UI_Titles_C_ExecuteUbergraph_UI_Titles Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Titles.UI_Titles_C.SetFocusBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlameWidget*                     FlameWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Titles_C::SetFocusBack(class UFlameWidget* FlameWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "SetFocusBack");

	Params::UI_Titles_C_SetFocusBack Parms{};

	Parms.FlameWidget = FlameWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Titles.UI_Titles_C.HandleFocusBack
// (BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::HandleFocusBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "HandleFocusBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.OnResetToDefaultState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::OnResetToDefaultState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "OnResetToDefaultState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.StopPanning
// (BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::StopPanning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "StopPanning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.StartPanning
// (BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::StartPanning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "StartPanning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.HandleMouseInput
// (BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::HandleMouseInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "HandleMouseInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.BndEvt__UI_Titles_ActionMoreInfo_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Titles_C::BndEvt__UI_Titles_ActionMoreInfo_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "BndEvt__UI_Titles_ActionMoreInfo_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.BndEvt__UI_Titles_GamepadActionSelect_K2Node_ComponentBoundEvent_3_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Titles_C::BndEvt__UI_Titles_GamepadActionSelect_K2Node_ComponentBoundEvent_3_OnClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "BndEvt__UI_Titles_GamepadActionSelect_K2Node_ComponentBoundEvent_3_OnClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.BndEvt__GamepadActionClose_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Titles_C::BndEvt__GamepadActionClose_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "BndEvt__GamepadActionClose_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.ZoomOut
// (BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::ZoomOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "ZoomOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.ZoomIn
// (BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::ZoomIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "ZoomIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.ListenForMouseWheel
// (BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::ListenForMouseWheel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "ListenForMouseWheel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.BndEvt__GamepadActionZoom_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Titles_C::BndEvt__GamepadActionZoom_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "BndEvt__GamepadActionZoom_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Titles_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Tick");

	Params::UI_Titles_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Titles.UI_Titles_C.Titles Manager Ready
// (BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::Titles_Manager_Ready()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Titles Manager Ready");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Titles_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Titles_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.Prepare Title Data
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::Prepare_Title_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Prepare Title Data");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.Refine Title Info
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Title_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Rank_Index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Owned                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Sleeper                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FF_RefinedTitle>          TargetArray                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Titles_C::Refine_Title_Info(class FName Title_Name, int32 Rank_Index, bool Owned, bool Sleeper, const TArray<struct FF_RefinedTitle>& TargetArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Refine Title Info");

	Params::UI_Titles_C_Refine_Title_Info Parms{};

	Parms.Title_Name = Title_Name;
	Parms.Rank_Index = Rank_Index;
	Parms.Owned = Owned;
	Parms.Sleeper = Sleeper;
	Parms.TargetArray = std::move(TargetArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Titles.UI_Titles_C.Fill Menu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::Fill_Menu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Fill Menu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.Handle Onboarding
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_Titles_C::Handle_Onboarding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Handle Onboarding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Titles.UI_Titles_C.Add Title to List
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Title_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Title_Rank                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_TitleList                     Title_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Title_Owned                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_TitleListItem_C*              AddedItem                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Titles_C::Add_Title_to_List(class FName Title_Name, int32 Title_Rank, const struct FF_TitleList& Title_Info, bool Title_Owned, class UUI_TitleListItem_C** AddedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Add Title to List");

	Params::UI_Titles_C_Add_Title_to_List Parms{};

	Parms.Title_Name = Title_Name;
	Parms.Title_Rank = Title_Rank;
	Parms.Title_Info = std::move(Title_Info);
	Parms.Title_Owned = Title_Owned;

	UObject::ProcessEvent(Func, &Parms);

	if (AddedItem != nullptr)
		*AddedItem = Parms.AddedItem;
}


// Function UI_Titles.UI_Titles_C.Preview Badge
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListButtonWidget*                Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Titles_C::Preview_Badge(class UListButtonWidget* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Preview Badge");

	Params::UI_Titles_C_Preview_Badge Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Titles.UI_Titles_C.Select Title
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListButtonWidget*                Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Titles_C::Select_Title(class UListButtonWidget* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Select Title");

	Params::UI_Titles_C_Select_Title Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Titles.UI_Titles_C.Sort Owned Titles by Rarity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, int32>                Titles                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FName>                     Sorted_Titles                                          (Parm, OutParm)
// TArray<int32>                           Sorted_Title_Ranks                                     (Parm, OutParm)

void UUI_Titles_C::Sort_Owned_Titles_by_Rarity(const TMap<class FName, int32>& Titles, TArray<class FName>* Sorted_Titles, TArray<int32>* Sorted_Title_Ranks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Sort Owned Titles by Rarity");

	Params::UI_Titles_C_Sort_Owned_Titles_by_Rarity Parms{};

	Parms.Titles = std::move(Titles);

	UObject::ProcessEvent(Func, &Parms);

	if (Sorted_Titles != nullptr)
		*Sorted_Titles = std::move(Parms.Sorted_Titles);

	if (Sorted_Title_Ranks != nullptr)
		*Sorted_Title_Ranks = std::move(Parms.Sorted_Title_Ranks);
}


// Function UI_Titles.UI_Titles_C.Sort Unowned Titles by Rarity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     Titles                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                     Sorted_Titles                                          (Parm, OutParm)

void UUI_Titles_C::Sort_Unowned_Titles_by_Rarity(TArray<class FName>& Titles, TArray<class FName>* Sorted_Titles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "Sort Unowned Titles by Rarity");

	Params::UI_Titles_C_Sort_Unowned_Titles_by_Rarity Parms{};

	Parms.Titles = std::move(Titles);

	UObject::ProcessEvent(Func, &Parms);

	Titles = std::move(Parms.Titles);

	if (Sorted_Titles != nullptr)
		*Sorted_Titles = std::move(Parms.Sorted_Titles);
}


// Function UI_Titles.UI_Titles_C.ShowSellingPointButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TitleListItem_C*              ListItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Titles_C::ShowSellingPointButton(class UUI_TitleListItem_C* ListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "ShowSellingPointButton");

	Params::UI_Titles_C_ShowSellingPointButton Parms{};

	Parms.ListItem = ListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Titles.UI_Titles_C.SortTitles
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ObjectA                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          ObjectB                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Titles_C::SortTitles(class UObject* ObjectA, class UObject* ObjectB, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "SortTitles");

	Params::UI_Titles_C_SortTitles Parms{};

	Parms.ObjectA = ObjectA;
	Parms.ObjectB = ObjectB;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function UI_Titles.UI_Titles_C.GetWidgetToFocus
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_Titles_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Titles_C", "GetWidgetToFocus");

	Params::UI_Titles_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

