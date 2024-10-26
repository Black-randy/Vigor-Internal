#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Cheat_Tab_Map

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_Cheat_Tab_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Cheat_Tab_Map.UI_Cheat_Tab_Map_C
// 0x0050 (0x0340 - 0x02F0)
class UUI_Cheat_Tab_Map_C final : public UUI_Cheat_Tab_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_Cheat_Tab_Map_C;                 // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             CheatMenu_ScrollBox;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      CheatMenu_UniformGridPanel;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrentHeadline;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SquadBorder;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_NextTab;                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_OpenMap;                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_PreviousTab;                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_ToggleSquad;                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Squad_mode;                                        // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_Cheat_Tab_Map(int32 EntryPoint);
	void Matchmake_to_map_cheat_button_pressed(const class FString& MapNameString, const class FString& GameModeString);
	void BndEvt__UI_GamepadActionWidget_OpenMap_1_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_Ammo_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature();
	void Construct();
	void CreateAndAssignButtons();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Cheat_Tab_Map_C">();
	}
	static class UUI_Cheat_Tab_Map_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Cheat_Tab_Map_C>();
	}
};
static_assert(alignof(UUI_Cheat_Tab_Map_C) == 0x000008, "Wrong alignment on UUI_Cheat_Tab_Map_C");
static_assert(sizeof(UUI_Cheat_Tab_Map_C) == 0x000340, "Wrong size on UUI_Cheat_Tab_Map_C");
static_assert(offsetof(UUI_Cheat_Tab_Map_C, UberGraphFrame_UI_Cheat_Tab_Map_C) == 0x0002F0, "Member 'UUI_Cheat_Tab_Map_C::UberGraphFrame_UI_Cheat_Tab_Map_C' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_Map_C, CheatMenu_ScrollBox) == 0x0002F8, "Member 'UUI_Cheat_Tab_Map_C::CheatMenu_ScrollBox' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_Map_C, CheatMenu_UniformGridPanel) == 0x000300, "Member 'UUI_Cheat_Tab_Map_C::CheatMenu_UniformGridPanel' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_Map_C, CurrentHeadline) == 0x000308, "Member 'UUI_Cheat_Tab_Map_C::CurrentHeadline' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_Map_C, SquadBorder) == 0x000310, "Member 'UUI_Cheat_Tab_Map_C::SquadBorder' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_Map_C, UI_GamepadActionWidget_NextTab) == 0x000318, "Member 'UUI_Cheat_Tab_Map_C::UI_GamepadActionWidget_NextTab' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_Map_C, UI_GamepadActionWidget_OpenMap) == 0x000320, "Member 'UUI_Cheat_Tab_Map_C::UI_GamepadActionWidget_OpenMap' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_Map_C, UI_GamepadActionWidget_PreviousTab) == 0x000328, "Member 'UUI_Cheat_Tab_Map_C::UI_GamepadActionWidget_PreviousTab' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_Map_C, UI_GamepadActionWidget_ToggleSquad) == 0x000330, "Member 'UUI_Cheat_Tab_Map_C::UI_GamepadActionWidget_ToggleSquad' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_Map_C, Squad_mode) == 0x000338, "Member 'UUI_Cheat_Tab_Map_C::Squad_mode' has a wrong offset!");

}

