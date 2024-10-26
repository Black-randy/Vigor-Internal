#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_OptionsElement_LanguagePicker

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_OptionsElement_LanguagePicker.UI_OptionsElement_LanguagePicker_C
// 0x0020 (0x0410 - 0x03F0)
class UUI_OptionsElement_LanguagePicker_C final : public ULanguagePicker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameButton*                           NextOptionButton;                                  // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           PreviousOptionButton;                              // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UpdatedOnConstruct;                                // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_OptionsElement_LanguagePicker(int32 EntryPoint);
	void Unhover();
	void Hover();
	void BndEvt__UI_OptionsElement_LanguagePicker_NextOptionButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_OptionsElement_LanguagePicker_NextOptionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_OptionsElement_LanguagePicker_PreviousOptionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_OptionsElement_LanguagePicker_PreviousOptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void OnUpdateWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_OptionsElement_LanguagePicker_C">();
	}
	static class UUI_OptionsElement_LanguagePicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_OptionsElement_LanguagePicker_C>();
	}
};
static_assert(alignof(UUI_OptionsElement_LanguagePicker_C) == 0x000008, "Wrong alignment on UUI_OptionsElement_LanguagePicker_C");
static_assert(sizeof(UUI_OptionsElement_LanguagePicker_C) == 0x000410, "Wrong size on UUI_OptionsElement_LanguagePicker_C");
static_assert(offsetof(UUI_OptionsElement_LanguagePicker_C, UberGraphFrame) == 0x0003F0, "Member 'UUI_OptionsElement_LanguagePicker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_OptionsElement_LanguagePicker_C, NextOptionButton) == 0x0003F8, "Member 'UUI_OptionsElement_LanguagePicker_C::NextOptionButton' has a wrong offset!");
static_assert(offsetof(UUI_OptionsElement_LanguagePicker_C, PreviousOptionButton) == 0x000400, "Member 'UUI_OptionsElement_LanguagePicker_C::PreviousOptionButton' has a wrong offset!");
static_assert(offsetof(UUI_OptionsElement_LanguagePicker_C, UpdatedOnConstruct) == 0x000408, "Member 'UUI_OptionsElement_LanguagePicker_C::UpdatedOnConstruct' has a wrong offset!");

}

