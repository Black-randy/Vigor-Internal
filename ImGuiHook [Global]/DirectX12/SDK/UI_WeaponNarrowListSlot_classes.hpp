#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WeaponNarrowListSlot

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_WeaponNarrowListSlot.UI_WeaponNarrowListSlot_C
// 0x0030 (0x0398 - 0x0368)
class UUI_WeaponNarrowListSlot_C final : public UEquipmentSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameButton*                           FlameButton_47;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameMarqueeBlockText_C*            MarqueeCaliber;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameMarqueeBlockText_C*            MarqueeWeaponName;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RowBackground;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemSlotVisual_C*                   UI_ItemSlotVisual_Caliber;                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_WeaponNarrowListSlot(int32 EntryPoint);
	void BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponNarrowListSlot_FlameButton_47_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_WeaponNarrowListSlot_FlameButton_47_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_82_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnItemChanged();
	void BndEvt__InteractButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void UpdateItemCount();
	void SetRowTint(const struct FSlateColor& Tint);
	void UpdateWeaponName();
	void UpdateCaliber();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_WeaponNarrowListSlot_C">();
	}
	static class UUI_WeaponNarrowListSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_WeaponNarrowListSlot_C>();
	}
};
static_assert(alignof(UUI_WeaponNarrowListSlot_C) == 0x000008, "Wrong alignment on UUI_WeaponNarrowListSlot_C");
static_assert(sizeof(UUI_WeaponNarrowListSlot_C) == 0x000398, "Wrong size on UUI_WeaponNarrowListSlot_C");
static_assert(offsetof(UUI_WeaponNarrowListSlot_C, UberGraphFrame) == 0x000368, "Member 'UUI_WeaponNarrowListSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_WeaponNarrowListSlot_C, FlameButton_47) == 0x000370, "Member 'UUI_WeaponNarrowListSlot_C::FlameButton_47' has a wrong offset!");
static_assert(offsetof(UUI_WeaponNarrowListSlot_C, MarqueeCaliber) == 0x000378, "Member 'UUI_WeaponNarrowListSlot_C::MarqueeCaliber' has a wrong offset!");
static_assert(offsetof(UUI_WeaponNarrowListSlot_C, MarqueeWeaponName) == 0x000380, "Member 'UUI_WeaponNarrowListSlot_C::MarqueeWeaponName' has a wrong offset!");
static_assert(offsetof(UUI_WeaponNarrowListSlot_C, RowBackground) == 0x000388, "Member 'UUI_WeaponNarrowListSlot_C::RowBackground' has a wrong offset!");
static_assert(offsetof(UUI_WeaponNarrowListSlot_C, UI_ItemSlotVisual_Caliber) == 0x000390, "Member 'UUI_WeaponNarrowListSlot_C::UI_ItemSlotVisual_Caliber' has a wrong offset!");

}
