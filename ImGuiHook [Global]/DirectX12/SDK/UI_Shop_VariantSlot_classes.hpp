#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Shop_VariantSlot

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Shop_VariantSlot.UI_Shop_VariantSlot_C
// 0x0040 (0x03A8 - 0x0368)
class UUI_Shop_VariantSlot_C final : public UEquipmentSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_OrangeSquirrels_Dot_C*              UI_OrangeSquirrels_Dot;                            // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_HighlightMarker_C*             UI_Shop_HighlightMarker;                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 VariantItem;                                       // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 BaseItem;                                          // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsVariantUnlocked;                                 // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsTemporaryProduct;                               // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          SpecificWeaponPreview;                             // 0x03A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_UI_Shop_VariantSlot(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnItemChanged();
	void Construct();
	void PlayFadeInAnimationWithDelay(float Time, class UScrollBox* ScrollBoxToMove);
	void DelayedPlayAnim();
	void BndEvt__UI_Shop_VariantSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_Shop_VariantSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_Shop_VariantSlot_InteractButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void Finished_D77A6D094DC8A32D408C5AAABE335DC2();
	void UpdateItemCount();
	void CheckForIconRotation();
	void SetItemTexture(class UClass* TargetVariant, class UClass* TargetBase, class UUI_Shop_VariantSlot_C* VariantSlot, bool UpdateFocus, bool NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Shop_VariantSlot_C">();
	}
	static class UUI_Shop_VariantSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Shop_VariantSlot_C>();
	}
};
static_assert(alignof(UUI_Shop_VariantSlot_C) == 0x000008, "Wrong alignment on UUI_Shop_VariantSlot_C");
static_assert(sizeof(UUI_Shop_VariantSlot_C) == 0x0003A8, "Wrong size on UUI_Shop_VariantSlot_C");
static_assert(offsetof(UUI_Shop_VariantSlot_C, UberGraphFrame) == 0x000368, "Member 'UUI_Shop_VariantSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Shop_VariantSlot_C, FadeIn) == 0x000370, "Member 'UUI_Shop_VariantSlot_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_Shop_VariantSlot_C, Overlay_0) == 0x000378, "Member 'UUI_Shop_VariantSlot_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UUI_Shop_VariantSlot_C, UI_OrangeSquirrels_Dot) == 0x000380, "Member 'UUI_Shop_VariantSlot_C::UI_OrangeSquirrels_Dot' has a wrong offset!");
static_assert(offsetof(UUI_Shop_VariantSlot_C, UI_Shop_HighlightMarker) == 0x000388, "Member 'UUI_Shop_VariantSlot_C::UI_Shop_HighlightMarker' has a wrong offset!");
static_assert(offsetof(UUI_Shop_VariantSlot_C, VariantItem) == 0x000390, "Member 'UUI_Shop_VariantSlot_C::VariantItem' has a wrong offset!");
static_assert(offsetof(UUI_Shop_VariantSlot_C, BaseItem) == 0x000398, "Member 'UUI_Shop_VariantSlot_C::BaseItem' has a wrong offset!");
static_assert(offsetof(UUI_Shop_VariantSlot_C, IsVariantUnlocked) == 0x0003A0, "Member 'UUI_Shop_VariantSlot_C::IsVariantUnlocked' has a wrong offset!");
static_assert(offsetof(UUI_Shop_VariantSlot_C, bIsTemporaryProduct) == 0x0003A1, "Member 'UUI_Shop_VariantSlot_C::bIsTemporaryProduct' has a wrong offset!");
static_assert(offsetof(UUI_Shop_VariantSlot_C, SpecificWeaponPreview) == 0x0003A2, "Member 'UUI_Shop_VariantSlot_C::SpecificWeaponPreview' has a wrong offset!");

}
