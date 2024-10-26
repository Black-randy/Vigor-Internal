#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Cheat_Tab_GameMode

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "UI_Cheat_Tab_Base_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Cheat_Tab_GameMode.UI_Cheat_Tab_GameMode_C
// 0x0110 (0x0400 - 0x02F0)
class UUI_Cheat_Tab_GameMode_C final : public UUI_Cheat_Tab_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_Cheat_Tab_GameMode_C;            // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameCheckBox*                         ThreeDActorDebugToggle;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           Button_CreateTestingPawns;                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Button_ExitTell;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         CampingDetection_Toggle;                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      CheatMenu_UniformGridPanel;                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrentHeadline;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         DebugCam_Toggle;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           GameModeDebugWidget;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         HideHudToggle;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         InfiniteAmmoToggle;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         InfinitebulletsToggle;                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         InvincibilityToggle;                               // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Show_Player_Count;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         ShowPlayerLocationToggle;                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         ShowPlayersInSessionToggle;                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         ShowTracedActorDisplayName_Button;                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Toggle_3dDebug_ActiveObjectives;                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Toggle_3dDebug_BlockingVolumes;                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Toggle_3dDebug_ObjectiveSpawns;                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Toggle_3dDebug_ObjItemSpawns;                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Toggle_3dDebug_Player;                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Toggle_3dDebug_PlayerStarts;                       // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Toggle_3dDebug_ResourceItems;                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Toggle_3dDebug_SpawnedObjItems;                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         Toggle_ShowBullet_CollisionMaterial;               // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         ToggleConsumableHud;                               // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         ToggleHealthDebug;                                 // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         ToggleHitInfo;                                     // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         ToggleMachineDebug;                                // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         ToggleMachineMode;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameCheckBox*                         ToggleOnboardingUILocks_Button;                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                                HealthDebugWidget;                                 // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CheatMenu_0;                                       // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Cheat_Tab_GameMode(int32 EntryPoint);
	void BndEvt__UI_Cheat_Tab_GameMode_Button_ExitTell_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__DebugCam_Toggle_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ToggleOnboardingUILocks_Button_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ToggleConsumableHud_1_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CampingDetection_Toggle_K2Node_ComponentBoundEvent_29_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Button_CreateTestingPawns_K2Node_ComponentBoundEvent_195_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__Toggle_ShowBullet_CollisionMaterial_K2Node_ComponentBoundEvent_235_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Show_Player_Count_K2Node_ComponentBoundEvent_342_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ShowActorDisplayName_Button_K2Node_ComponentBoundEvent_176_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__InfinitebulletsToggle_K2Node_ComponentBoundEvent_1860_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__3dDebug_BlockingVolumes_Toggle_K2Node_ComponentBoundEvent_2406_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ToggleHitInfo_K2Node_ComponentBoundEvent_392_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Toggle_3dDebug_Player_K2Node_ComponentBoundEvent_3412_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Toggle_3dDebug_PlayerStarts_K2Node_ComponentBoundEvent_3290_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Toggle_3dDebug_LootSpawns_K2Node_ComponentBoundEvent_3170_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Toggle_3dDebug_SpawnedLoot_K2Node_ComponentBoundEvent_3051_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Toggle_3dDebug_ObjectiveSpawns_K2Node_ComponentBoundEvent_2933_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Toggle_3dDebug_ObjectiveItems_K2Node_ComponentBoundEvent_2816_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Toggle_3dDebug_ResourceItems_K2Node_ComponentBoundEvent_2807_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ToggleMachineDebug_K2Node_ComponentBoundEvent_1174_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ToggleConsumableHud_K2Node_ComponentBoundEvent_575_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__3DActorDebugToggle_K2Node_ComponentBoundEvent_547_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__GameModeDebugWidget_K2Node_ComponentBoundEvent_822_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__ShowPlayersInSessionToggle_K2Node_ComponentBoundEvent_680_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ShowPlayerLocationToggle_K2Node_ComponentBoundEvent_8504_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ToggleHealthDebug_K2Node_ComponentBoundEvent_474_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();
	void BndEvt__InfiniteAmmoToggle_K2Node_ComponentBoundEvent_656_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_2372_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__InvlunerabilityToggle_K2Node_ComponentBoundEvent_1159_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Toggle_HUD(bool Is_Checked);

	class UWidget* GetWidgetToFocus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Cheat_Tab_GameMode_C">();
	}
	static class UUI_Cheat_Tab_GameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Cheat_Tab_GameMode_C>();
	}
};
static_assert(alignof(UUI_Cheat_Tab_GameMode_C) == 0x000008, "Wrong alignment on UUI_Cheat_Tab_GameMode_C");
static_assert(sizeof(UUI_Cheat_Tab_GameMode_C) == 0x000400, "Wrong size on UUI_Cheat_Tab_GameMode_C");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, UberGraphFrame_UI_Cheat_Tab_GameMode_C) == 0x0002F0, "Member 'UUI_Cheat_Tab_GameMode_C::UberGraphFrame_UI_Cheat_Tab_GameMode_C' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, ThreeDActorDebugToggle) == 0x0002F8, "Member 'UUI_Cheat_Tab_GameMode_C::ThreeDActorDebugToggle' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Button_CreateTestingPawns) == 0x000300, "Member 'UUI_Cheat_Tab_GameMode_C::Button_CreateTestingPawns' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Button_ExitTell) == 0x000308, "Member 'UUI_Cheat_Tab_GameMode_C::Button_ExitTell' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, CampingDetection_Toggle) == 0x000310, "Member 'UUI_Cheat_Tab_GameMode_C::CampingDetection_Toggle' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, CheatMenu_UniformGridPanel) == 0x000318, "Member 'UUI_Cheat_Tab_GameMode_C::CheatMenu_UniformGridPanel' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, CurrentHeadline) == 0x000320, "Member 'UUI_Cheat_Tab_GameMode_C::CurrentHeadline' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, DebugCam_Toggle) == 0x000328, "Member 'UUI_Cheat_Tab_GameMode_C::DebugCam_Toggle' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, GameModeDebugWidget) == 0x000330, "Member 'UUI_Cheat_Tab_GameMode_C::GameModeDebugWidget' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, HideHudToggle) == 0x000338, "Member 'UUI_Cheat_Tab_GameMode_C::HideHudToggle' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, InfiniteAmmoToggle) == 0x000340, "Member 'UUI_Cheat_Tab_GameMode_C::InfiniteAmmoToggle' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, InfinitebulletsToggle) == 0x000348, "Member 'UUI_Cheat_Tab_GameMode_C::InfinitebulletsToggle' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, InvincibilityToggle) == 0x000350, "Member 'UUI_Cheat_Tab_GameMode_C::InvincibilityToggle' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Show_Player_Count) == 0x000358, "Member 'UUI_Cheat_Tab_GameMode_C::Show_Player_Count' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, ShowPlayerLocationToggle) == 0x000360, "Member 'UUI_Cheat_Tab_GameMode_C::ShowPlayerLocationToggle' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, ShowPlayersInSessionToggle) == 0x000368, "Member 'UUI_Cheat_Tab_GameMode_C::ShowPlayersInSessionToggle' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, ShowTracedActorDisplayName_Button) == 0x000370, "Member 'UUI_Cheat_Tab_GameMode_C::ShowTracedActorDisplayName_Button' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Toggle_3dDebug_ActiveObjectives) == 0x000378, "Member 'UUI_Cheat_Tab_GameMode_C::Toggle_3dDebug_ActiveObjectives' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Toggle_3dDebug_BlockingVolumes) == 0x000380, "Member 'UUI_Cheat_Tab_GameMode_C::Toggle_3dDebug_BlockingVolumes' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Toggle_3dDebug_ObjectiveSpawns) == 0x000388, "Member 'UUI_Cheat_Tab_GameMode_C::Toggle_3dDebug_ObjectiveSpawns' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Toggle_3dDebug_ObjItemSpawns) == 0x000390, "Member 'UUI_Cheat_Tab_GameMode_C::Toggle_3dDebug_ObjItemSpawns' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Toggle_3dDebug_Player) == 0x000398, "Member 'UUI_Cheat_Tab_GameMode_C::Toggle_3dDebug_Player' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Toggle_3dDebug_PlayerStarts) == 0x0003A0, "Member 'UUI_Cheat_Tab_GameMode_C::Toggle_3dDebug_PlayerStarts' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Toggle_3dDebug_ResourceItems) == 0x0003A8, "Member 'UUI_Cheat_Tab_GameMode_C::Toggle_3dDebug_ResourceItems' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Toggle_3dDebug_SpawnedObjItems) == 0x0003B0, "Member 'UUI_Cheat_Tab_GameMode_C::Toggle_3dDebug_SpawnedObjItems' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, Toggle_ShowBullet_CollisionMaterial) == 0x0003B8, "Member 'UUI_Cheat_Tab_GameMode_C::Toggle_ShowBullet_CollisionMaterial' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, ToggleConsumableHud) == 0x0003C0, "Member 'UUI_Cheat_Tab_GameMode_C::ToggleConsumableHud' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, ToggleHealthDebug) == 0x0003C8, "Member 'UUI_Cheat_Tab_GameMode_C::ToggleHealthDebug' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, ToggleHitInfo) == 0x0003D0, "Member 'UUI_Cheat_Tab_GameMode_C::ToggleHitInfo' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, ToggleMachineDebug) == 0x0003D8, "Member 'UUI_Cheat_Tab_GameMode_C::ToggleMachineDebug' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, ToggleMachineMode) == 0x0003E0, "Member 'UUI_Cheat_Tab_GameMode_C::ToggleMachineMode' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, ToggleOnboardingUILocks_Button) == 0x0003E8, "Member 'UUI_Cheat_Tab_GameMode_C::ToggleOnboardingUILocks_Button' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, HealthDebugWidget) == 0x0003F0, "Member 'UUI_Cheat_Tab_GameMode_C::HealthDebugWidget' has a wrong offset!");
static_assert(offsetof(UUI_Cheat_Tab_GameMode_C, CheatMenu_0) == 0x0003F8, "Member 'UUI_Cheat_Tab_GameMode_C::CheatMenu_0' has a wrong offset!");

}

