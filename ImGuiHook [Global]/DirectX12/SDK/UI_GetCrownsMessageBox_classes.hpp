#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GetCrownsMessageBox

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GetCrownsMessageBox.UI_GetCrownsMessageBox_C
// 0x0070 (0x0360 - 0x02F0)
class UUI_GetCrownsMessageBox_C final : public UModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        ActionName;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                CrownStoreButton;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CrownStoreButtonBackgroundSvizda;                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           FlameButton_210;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_100;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_203;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        PriceValue;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget;                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   PaidActionName;                                    // 0x0340(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         Price;                                             // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_GetCrownsMessageBox(int32 EntryPoint);
	void BndEvt__UI_GetCrownsMessageBox_FlameButton_210_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_GetCrownsMessageBox_FlameButton_210_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_GetCrownsMessageBox_FlameButton_210_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__CrownStoreButton_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GetCrownsMessageBox_C">();
	}
	static class UUI_GetCrownsMessageBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GetCrownsMessageBox_C>();
	}
};
static_assert(alignof(UUI_GetCrownsMessageBox_C) == 0x000008, "Wrong alignment on UUI_GetCrownsMessageBox_C");
static_assert(sizeof(UUI_GetCrownsMessageBox_C) == 0x000360, "Wrong size on UUI_GetCrownsMessageBox_C");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_GetCrownsMessageBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, ActionName) == 0x0002F8, "Member 'UUI_GetCrownsMessageBox_C::ActionName' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, CrownStoreButton) == 0x000300, "Member 'UUI_GetCrownsMessageBox_C::CrownStoreButton' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, CrownStoreButtonBackgroundSvizda) == 0x000308, "Member 'UUI_GetCrownsMessageBox_C::CrownStoreButtonBackgroundSvizda' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, FlameButton_210) == 0x000310, "Member 'UUI_GetCrownsMessageBox_C::FlameButton_210' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, Image_100) == 0x000318, "Member 'UUI_GetCrownsMessageBox_C::Image_100' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, Image_203) == 0x000320, "Member 'UUI_GetCrownsMessageBox_C::Image_203' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, PriceValue) == 0x000328, "Member 'UUI_GetCrownsMessageBox_C::PriceValue' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, UI_FlameSafezone) == 0x000330, "Member 'UUI_GetCrownsMessageBox_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, UI_GamepadActionWidget) == 0x000338, "Member 'UUI_GetCrownsMessageBox_C::UI_GamepadActionWidget' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, PaidActionName) == 0x000340, "Member 'UUI_GetCrownsMessageBox_C::PaidActionName' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, Price) == 0x000358, "Member 'UUI_GetCrownsMessageBox_C::Price' has a wrong offset!");
static_assert(offsetof(UUI_GetCrownsMessageBox_C, Result) == 0x00035C, "Member 'UUI_GetCrownsMessageBox_C::Result' has a wrong offset!");

}
