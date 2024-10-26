#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Combination_Lock_Digit_v2

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Combination_Lock_Digit_v2.UI_Combination_Lock_Digit_v2_C
// 0x0060 (0x0338 - 0x02D8)
class UUI_Combination_Lock_Digit_v2_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameButton*                           Button_ArrowDown;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           Button_ArrowUp;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           Digitbutton;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageNumber;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Lock;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         DesiredNumber;                                     // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentNumber;                                     // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanChange;                                         // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUpDirection;                                     // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_312[0x6];                                      // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_CombinationLock_C*                  Combination_lock_UI;                               // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequiredDigit;                                     // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentDigit;                                      // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DigitMaterialInstance;                             // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFocused;                                         // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_Combination_Lock_Digit_v2(int32 EntryPoint);
	void Destruct();
	void MouseScrollDown();
	void MouseScrollUp();
	void StopListeningForMouseWheel();
	void ListenForMouseWheel();
	void BndEvt__UI_Combination_Lock_Digit_v2_Button_ArrowDown_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_Combination_Lock_Digit_v2_Button_ArrowUp_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_Combination_Lock_Digit_v2_Button_ArrowDown_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_Combination_Lock_Digit_v2_Button_ArrowUp_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void Construct();
	void BndEvt__UI_Combination_Lock_Digit_v2_Button_ArrowDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_Combination_Lock_Digit_v2_Button_ArrowUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__Digitbutton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__Digitbutton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void Init_number_(float CurrentNumber_0);
	void Navigate_Down();
	void Navigate_Up();
	void OnTweenStart_4524A6D44B63967CE7FF879460BA30C2(class UTweenFloat* Tween);
	void OnTweenUpdate_4524A6D44B63967CE7FF879460BA30C2(class UTweenFloat* Tween);
	void OnTweenEnd_4524A6D44B63967CE7FF879460BA30C2(class UTweenFloat* Tween);
	void Compare_current_digit_to_required(bool* Digit_is_correct);
	class UWidget* Navigate(EUINavigation Navigation_0);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Combination_Lock_Digit_v2_C">();
	}
	static class UUI_Combination_Lock_Digit_v2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Combination_Lock_Digit_v2_C>();
	}
};
static_assert(alignof(UUI_Combination_Lock_Digit_v2_C) == 0x000008, "Wrong alignment on UUI_Combination_Lock_Digit_v2_C");
static_assert(sizeof(UUI_Combination_Lock_Digit_v2_C) == 0x000338, "Wrong size on UUI_Combination_Lock_Digit_v2_C");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_Combination_Lock_Digit_v2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, Button_ArrowDown) == 0x0002E0, "Member 'UUI_Combination_Lock_Digit_v2_C::Button_ArrowDown' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, Button_ArrowUp) == 0x0002E8, "Member 'UUI_Combination_Lock_Digit_v2_C::Button_ArrowUp' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, Digitbutton) == 0x0002F0, "Member 'UUI_Combination_Lock_Digit_v2_C::Digitbutton' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, ImageNumber) == 0x0002F8, "Member 'UUI_Combination_Lock_Digit_v2_C::ImageNumber' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, Lock) == 0x000300, "Member 'UUI_Combination_Lock_Digit_v2_C::Lock' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, DesiredNumber) == 0x000308, "Member 'UUI_Combination_Lock_Digit_v2_C::DesiredNumber' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, CurrentNumber) == 0x00030C, "Member 'UUI_Combination_Lock_Digit_v2_C::CurrentNumber' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, CanChange) == 0x000310, "Member 'UUI_Combination_Lock_Digit_v2_C::CanChange' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, IsUpDirection) == 0x000311, "Member 'UUI_Combination_Lock_Digit_v2_C::IsUpDirection' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, Combination_lock_UI) == 0x000318, "Member 'UUI_Combination_Lock_Digit_v2_C::Combination_lock_UI' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, RequiredDigit) == 0x000320, "Member 'UUI_Combination_Lock_Digit_v2_C::RequiredDigit' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, CurrentDigit) == 0x000324, "Member 'UUI_Combination_Lock_Digit_v2_C::CurrentDigit' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, DigitMaterialInstance) == 0x000328, "Member 'UUI_Combination_Lock_Digit_v2_C::DigitMaterialInstance' has a wrong offset!");
static_assert(offsetof(UUI_Combination_Lock_Digit_v2_C, IsFocused) == 0x000330, "Member 'UUI_Combination_Lock_Digit_v2_C::IsFocused' has a wrong offset!");

}

