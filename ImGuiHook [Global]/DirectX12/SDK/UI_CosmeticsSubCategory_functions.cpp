#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CosmeticsSubCategory

#include "Basic.hpp"

#include "UI_CosmeticsSubCategory_classes.hpp"
#include "UI_CosmeticsSubCategory_parameters.hpp"


namespace SDK
{

// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.ExecuteUbergraph_UI_CosmeticsSubCategory
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsSubCategory_C::ExecuteUbergraph_UI_CosmeticsSubCategory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "ExecuteUbergraph_UI_CosmeticsSubCategory");

	Params::UI_CosmeticsSubCategory_C_ExecuteUbergraph_UI_CosmeticsSubCategory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.OnToggleClicked
// (BlueprintCallable, BlueprintEvent)

void UUI_CosmeticsSubCategory_C::OnToggleClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "OnToggleClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.SetExpandibleBool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldBeExpanded                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsSubCategory_C::SetExpandibleBool(bool bShouldBeExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "SetExpandibleBool");

	Params::UI_CosmeticsSubCategory_C_SetExpandibleBool Parms{};

	Parms.bShouldBeExpanded = bShouldBeExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsSubCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "PreConstruct");

	Params::UI_CosmeticsSubCategory_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.UpdateScrollBaronWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          WidgetToFocus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsSubCategory_C::UpdateScrollBaronWidget(class UWidget* WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "UpdateScrollBaronWidget");

	Params::UI_CosmeticsSubCategory_C_UpdateScrollBaronWidget Parms{};

	Parms.WidgetToFocus = WidgetToFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.SetCategoryIconHighlightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsSubCategory_C::SetCategoryIconHighlightVisibility(bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "SetCategoryIconHighlightVisibility");

	Params::UI_CosmeticsSubCategory_C_SetCategoryIconHighlightVisibility Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CosmeticsSubCategory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.BndEvt__ExpandableArea_45_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UExpandableArea*                  Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsSubCategory_C::BndEvt__ExpandableArea_45_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "BndEvt__ExpandableArea_45_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature");

	Params::UI_CosmeticsSubCategory_C_BndEvt__ExpandableArea_45_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature Parms{};

	Parms.Area = Area;
	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.CollapseTheExpandible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CosmeticsSubCategory_C::CollapseTheExpandible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "CollapseTheExpandible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.BndEvt__UI_CosmeticsCategoryListButton_K2Node_ComponentBoundEvent_1_OnListButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UListButtonWidget*                Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsSubCategory_C::BndEvt__UI_CosmeticsCategoryListButton_K2Node_ComponentBoundEvent_1_OnListButtonPressedEvent__DelegateSignature(class UListButtonWidget* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "BndEvt__UI_CosmeticsCategoryListButton_K2Node_ComponentBoundEvent_1_OnListButtonPressedEvent__DelegateSignature");

	Params::UI_CosmeticsSubCategory_C_BndEvt__UI_CosmeticsCategoryListButton_K2Node_ComponentBoundEvent_1_OnListButtonPressedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.FillCategoryButtonData
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CosmeticsSubCategory_C::FillCategoryButtonData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "FillCategoryButtonData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.IsWeaponSkinOrCustomizationCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Int                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsSubCategory_C::IsWeaponSkinOrCustomizationCategory(int32* Int)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "IsWeaponSkinOrCustomizationCategory");

	Params::UI_CosmeticsSubCategory_C_IsWeaponSkinOrCustomizationCategory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = Parms.Int;
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.Update Temporary Selling Point Count
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsSubCategory_C::Update_Temporary_Selling_Point_Count(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "Update Temporary Selling Point Count");

	Params::UI_CosmeticsSubCategory_C_Update_Temporary_Selling_Point_Count Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.Count Temporary Selling Points
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TemCategoryCount                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsSubCategory_C::Count_Temporary_Selling_Points(int32* TemCategoryCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "Count Temporary Selling Points");

	Params::UI_CosmeticsSubCategory_C_Count_Temporary_Selling_Points Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TemCategoryCount != nullptr)
		*TemCategoryCount = Parms.TemCategoryCount;
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.GetRefToCosmeticsListButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CosmeticsListButton_C*        ListBTN                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsSubCategory_C::GetRefToCosmeticsListButton(class UUI_CosmeticsListButton_C** ListBTN, bool* bValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "GetRefToCosmeticsListButton");

	Params::UI_CosmeticsSubCategory_C_GetRefToCosmeticsListButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ListBTN != nullptr)
		*ListBTN = Parms.ListBTN;

	if (bValid != nullptr)
		*bValid = Parms.bValid;
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.IsCategoryExpanded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsExpanded                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsSubCategory_C::IsCategoryExpanded(bool* bValid, bool* bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "IsCategoryExpanded");

	Params::UI_CosmeticsSubCategory_C_IsCategoryExpanded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (bIsExpanded != nullptr)
		*bIsExpanded = Parms.bIsExpanded;
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.GetRefToMainCategoryListButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CosmeticsMainCategory_C*      MenuLabel                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsSubCategory_C::GetRefToMainCategoryListButton(class UUI_CosmeticsMainCategory_C** MenuLabel, bool* bValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "GetRefToMainCategoryListButton");

	Params::UI_CosmeticsSubCategory_C_GetRefToMainCategoryListButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MenuLabel != nullptr)
		*MenuLabel = Parms.MenuLabel;

	if (bValid != nullptr)
		*bValid = Parms.bValid;
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.GetRefToSubCategoryListButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_CosmeticsSubCategory_C*       SubCategory                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsSubCategory_C::GetRefToSubCategoryListButton(bool* bValid, class UUI_CosmeticsSubCategory_C** SubCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "GetRefToSubCategoryListButton");

	Params::UI_CosmeticsSubCategory_C_GetRefToSubCategoryListButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (SubCategory != nullptr)
		*SubCategory = Parms.SubCategory;
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.GetLastScrollElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                          LastWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsSubCategory_C::GetLastScrollElement(bool* bValid, class UWidget** LastWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "GetLastScrollElement");

	Params::UI_CosmeticsSubCategory_C_GetLastScrollElement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (LastWidget != nullptr)
		*LastWidget = Parms.LastWidget;
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.GetFirstScrollElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                          FirstElement                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsSubCategory_C::GetFirstScrollElement(bool* bValid, class UWidget** FirstElement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "GetFirstScrollElement");

	Params::UI_CosmeticsSubCategory_C_GetFirstScrollElement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (FirstElement != nullptr)
		*FirstElement = Parms.FirstElement;
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.IsListButtonChildOfSubCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CosmeticsListButton_C*        ListButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsChild                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsSubCategory_C::IsListButtonChildOfSubCategory(class UUI_CosmeticsListButton_C* ListButton, bool* bIsChild)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "IsListButtonChildOfSubCategory");

	Params::UI_CosmeticsSubCategory_C_IsListButtonChildOfSubCategory Parms{};

	Parms.ListButton = ListButton;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsChild != nullptr)
		*bIsChild = Parms.bIsChild;
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.GetItemTypeCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESellingPointType                       SellingPointType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsSubCategory_C::GetItemTypeCategory(bool* Success, ESellingPointType* SellingPointType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "GetItemTypeCategory");

	Params::UI_CosmeticsSubCategory_C_GetItemTypeCategory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SellingPointType != nullptr)
		*SellingPointType = Parms.SellingPointType;
}


// Function UI_CosmeticsSubCategory.UI_CosmeticsSubCategory_C.DestroyComponentByTAG
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ComponentFound                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsSubCategory_C::DestroyComponentByTAG(class FName Tag, bool* Valid, bool* ComponentFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsSubCategory_C", "DestroyComponentByTAG");

	Params::UI_CosmeticsSubCategory_C_DestroyComponentByTAG Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	if (ComponentFound != nullptr)
		*ComponentFound = Parms.ComponentFound;
}

}
