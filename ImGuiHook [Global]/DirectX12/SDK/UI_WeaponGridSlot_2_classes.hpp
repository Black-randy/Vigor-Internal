#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WeaponGridSlot_2

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_WeaponGridSlot_2.UI_WeaponGridSlot_2_C
// 0x0028 (0x0390 - 0x0368)
class UUI_WeaponGridSlot_2_C final : public UEquipmentSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameButton*                           InteractButtonMinusForcharityboxonlyMustnotbehittablealways; // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESlateVisibility                              ButtonVisibility;                                  // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnPressed__DelegateSignature();
	void ExecuteUbergraph_UI_WeaponGridSlot_2(int32 EntryPoint);
	void Construct();
	void BndEvt__UI_WeaponGridSlot_2_InteractButtonMinusForcharityboxonlyMustnotbehittablealways_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void OnItemChanged();
	void BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void UpdateItemCount();
	void SetCharityButtonVisibility(ESlateVisibility Visibility_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_WeaponGridSlot_2_C">();
	}
	static class UUI_WeaponGridSlot_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_WeaponGridSlot_2_C>();
	}
};
static_assert(alignof(UUI_WeaponGridSlot_2_C) == 0x000008, "Wrong alignment on UUI_WeaponGridSlot_2_C");
static_assert(sizeof(UUI_WeaponGridSlot_2_C) == 0x000390, "Wrong size on UUI_WeaponGridSlot_2_C");
static_assert(offsetof(UUI_WeaponGridSlot_2_C, UberGraphFrame) == 0x000368, "Member 'UUI_WeaponGridSlot_2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_WeaponGridSlot_2_C, InteractButtonMinusForcharityboxonlyMustnotbehittablealways) == 0x000370, "Member 'UUI_WeaponGridSlot_2_C::InteractButtonMinusForcharityboxonlyMustnotbehittablealways' has a wrong offset!");
static_assert(offsetof(UUI_WeaponGridSlot_2_C, OnPressed) == 0x000378, "Member 'UUI_WeaponGridSlot_2_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UUI_WeaponGridSlot_2_C, ButtonVisibility) == 0x000388, "Member 'UUI_WeaponGridSlot_2_C::ButtonVisibility' has a wrong offset!");

}
