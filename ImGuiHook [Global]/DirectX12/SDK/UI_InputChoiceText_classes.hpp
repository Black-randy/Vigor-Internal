#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InputChoiceText

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "FlameUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_InputChoiceText.UI_InputChoiceText_C
// 0x0030 (0x0490 - 0x0460)
class UUI_InputChoiceText_C final : public UInputChoiceWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBoxAmounts;                              // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectedAmountIndex;                               // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_474[0x4];                                      // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           Values;                                            // 0x0478(0x0010)(Edit, BlueprintVisible)
	bool                                          UseHoverBlueprint;                                 // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_InputChoiceText(int32 EntryPoint);
	void IconChanged();
	void InputModeChanged(int32 PlayerIndex, EInputMode InputMode);
	void Construct();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Select_index(int32 SelectedAmountIndex_0);
	void OnActionPressed();
	void PreConstruct(bool IsDesignTime);
	void AddValueWidget(const class FText& Value);
	void AddSeparatorWidget();
	void GetSelectedValue(class FText* Value);
	class UFlameTextBlock* CreateTextWidget(const class FText& TextValue);
	void SetWindowsIcon();

	int32 GetSelectedIndex() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_InputChoiceText_C">();
	}
	static class UUI_InputChoiceText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_InputChoiceText_C>();
	}
};
static_assert(alignof(UUI_InputChoiceText_C) == 0x000008, "Wrong alignment on UUI_InputChoiceText_C");
static_assert(sizeof(UUI_InputChoiceText_C) == 0x000490, "Wrong size on UUI_InputChoiceText_C");
static_assert(offsetof(UUI_InputChoiceText_C, UberGraphFrame) == 0x000460, "Member 'UUI_InputChoiceText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_InputChoiceText_C, HorizontalBoxAmounts) == 0x000468, "Member 'UUI_InputChoiceText_C::HorizontalBoxAmounts' has a wrong offset!");
static_assert(offsetof(UUI_InputChoiceText_C, SelectedAmountIndex) == 0x000470, "Member 'UUI_InputChoiceText_C::SelectedAmountIndex' has a wrong offset!");
static_assert(offsetof(UUI_InputChoiceText_C, Values) == 0x000478, "Member 'UUI_InputChoiceText_C::Values' has a wrong offset!");
static_assert(offsetof(UUI_InputChoiceText_C, UseHoverBlueprint) == 0x000488, "Member 'UUI_InputChoiceText_C::UseHoverBlueprint' has a wrong offset!");

}
