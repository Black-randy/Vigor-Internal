#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LootboxCardItemTexts

#include "Basic.hpp"

#include "UI_LootboxCardItemTexts_classes.hpp"
#include "UI_LootboxCardItemTexts_parameters.hpp"


namespace SDK
{

// Function UI_LootboxCardItemTexts.UI_LootboxCardItemTexts_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootboxCardItemTexts_C::SetItem(class UClass* ItemClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootboxCardItemTexts_C", "SetItem");

	Params::UI_LootboxCardItemTexts_C_SetItem Parms{};

	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);
}

}
