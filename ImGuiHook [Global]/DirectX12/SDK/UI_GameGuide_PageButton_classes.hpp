#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameGuide_PageButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UI_GameGuide_ListItem_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameGuide_PageButton.UI_GameGuide_PageButton_C
// 0x0018 (0x0348 - 0x0330)
class UUI_GameGuide_PageButton_C final : public UUI_GameGuide_ListItem_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_GameGuide_PageButton_C;          // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_FlameMarqueeBlockText_C*            Button_Title;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           Guide_CategoryItemButton;                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_GameGuide_PageButton(int32 EntryPoint);
	void Construct();
	void BndEvt__UI_GameGuide_PageButton_Guide_CategoryItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_GameGuide_PageButton_Guide_CategoryItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_GameGuide_PageButton_Guide_CategoryItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void PreConstruct(bool IsDesignTime);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	class UWidget* GuideListNavigation_Up(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameGuide_PageButton_C">();
	}
	static class UUI_GameGuide_PageButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameGuide_PageButton_C>();
	}
};
static_assert(alignof(UUI_GameGuide_PageButton_C) == 0x000008, "Wrong alignment on UUI_GameGuide_PageButton_C");
static_assert(sizeof(UUI_GameGuide_PageButton_C) == 0x000348, "Wrong size on UUI_GameGuide_PageButton_C");
static_assert(offsetof(UUI_GameGuide_PageButton_C, UberGraphFrame_UI_GameGuide_PageButton_C) == 0x000330, "Member 'UUI_GameGuide_PageButton_C::UberGraphFrame_UI_GameGuide_PageButton_C' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_PageButton_C, Button_Title) == 0x000338, "Member 'UUI_GameGuide_PageButton_C::Button_Title' has a wrong offset!");
static_assert(offsetof(UUI_GameGuide_PageButton_C, Guide_CategoryItemButton) == 0x000340, "Member 'UUI_GameGuide_PageButton_C::Guide_CategoryItemButton' has a wrong offset!");

}

