#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_VariantSlotVisual

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_VariantSlotVisual.UI_VariantSlotVisual_C
// 0x0018 (0x03E0 - 0x03C8)
class UUI_VariantSlotVisual_C final : public USlotVisual
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Lock;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotTick;                                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_VariantSlotVisual(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ShowTick(ESlateVisibility InVisibility);
	void ShowLock(ESlateVisibility InVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_VariantSlotVisual_C">();
	}
	static class UUI_VariantSlotVisual_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_VariantSlotVisual_C>();
	}
};
static_assert(alignof(UUI_VariantSlotVisual_C) == 0x000008, "Wrong alignment on UUI_VariantSlotVisual_C");
static_assert(sizeof(UUI_VariantSlotVisual_C) == 0x0003E0, "Wrong size on UUI_VariantSlotVisual_C");
static_assert(offsetof(UUI_VariantSlotVisual_C, UberGraphFrame) == 0x0003C8, "Member 'UUI_VariantSlotVisual_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_VariantSlotVisual_C, Image_Lock) == 0x0003D0, "Member 'UUI_VariantSlotVisual_C::Image_Lock' has a wrong offset!");
static_assert(offsetof(UUI_VariantSlotVisual_C, SlotTick) == 0x0003D8, "Member 'UUI_VariantSlotVisual_C::SlotTick' has a wrong offset!");

}
