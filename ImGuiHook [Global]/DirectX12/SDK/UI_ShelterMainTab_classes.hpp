#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ShelterMainTab

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "BP_TabIcon_structs.hpp"
#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "E_BattlePassSystem_State_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ShelterMainTab.UI_ShelterMainTab_C
// 0x0120 (0x0438 - 0x0318)
class UUI_ShelterMainTab_C final : public UShelterMainTabControl
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CurrencyDisplay_C*                  CurrencyDisplay;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                InputActionGameMenu;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             MatchmakingStatusSlot;                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        MenuBlur;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MenuFader;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PlayerListHorizontal_C*             PlayerList;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        PlayerName;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TabName;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BattlePassXPBar_C*                  UI_BattlePassXPBar;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ShelterUI_C*                        ShelterUI;                                         // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EShelterMainTab, struct FBP_TabIcon>     TabIconData;                                       // 0x0378(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<EShelterMainTab>                       DataToCreate;                                      // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ShopTabToUse;                                      // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC[0x4];                                      // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BattlePassSystem_C*                 BattlePassSystem;                                  // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SlaveMaster_C*                      SlaveMaster;                                       // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ShelterOnboardingComponent_C*       OnboardingComponent;                               // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Shelter_UI_Finished_Loading;                       // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsLootboxesClosing;                                // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_409[0x7];                                      // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTabWidget*>                     TabsCreated;                                       // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUserWidget*                            OriginalMatchmakingStatusParent;                   // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MatchmakingStatus_C*                UI_MatchmakingStatus;                              // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              OriginalMatchmakingStatusVisibility;               // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Shelter_UI_Finished_Loading__DelegateSignature();
	void ExecuteUbergraph_UI_ShelterMainTab(int32 EntryPoint);
	void Disable_Tab_Blur();
	void Enable_Tab_Blur();
	void SwitchCrownShop(class UFlameWidget* FlameWidget);
	void SetCrownRedirect(class UUI_GetCrownsMessageBox_C* TargetWidget);
	void BndEvt__UI_ShelterMainTab_InputActionGameMenu_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void EventBattlePassSystemReady();
	void OpenGameMenu();
	void OnSelectionChanged(int32 NewIndex, int32 OldIndex);
	void Close();
	void OnUnlock();
	void OnLock();
	void Destruct();
	void Construct();
	void OnLoaded_303A9E7341428F48F05BE78A7B992C97(class UObject* Loaded);
	void UpdatePlayerName();
	void LockTab(EShelterMainTab Shelter_Tab);
	void UnlockTab(EShelterMainTab Shelter_Tab);
	void CloseShelterMenu();

	TArray<class UTabWidget*> CreateTabs() const;
	void UpdateCurrentTab() const;
	int32 GetTabIndex(EShelterMainTab InTab) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ShelterMainTab_C">();
	}
	static class UUI_ShelterMainTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ShelterMainTab_C>();
	}
};
static_assert(alignof(UUI_ShelterMainTab_C) == 0x000008, "Wrong alignment on UUI_ShelterMainTab_C");
static_assert(sizeof(UUI_ShelterMainTab_C) == 0x000438, "Wrong size on UUI_ShelterMainTab_C");
static_assert(offsetof(UUI_ShelterMainTab_C, UberGraphFrame) == 0x000318, "Member 'UUI_ShelterMainTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, Background) == 0x000320, "Member 'UUI_ShelterMainTab_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, CurrencyDisplay) == 0x000328, "Member 'UUI_ShelterMainTab_C::CurrencyDisplay' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, InputActionGameMenu) == 0x000330, "Member 'UUI_ShelterMainTab_C::InputActionGameMenu' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, MatchmakingStatusSlot) == 0x000338, "Member 'UUI_ShelterMainTab_C::MatchmakingStatusSlot' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, MenuBlur) == 0x000340, "Member 'UUI_ShelterMainTab_C::MenuBlur' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, MenuFader) == 0x000348, "Member 'UUI_ShelterMainTab_C::MenuFader' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, PlayerList) == 0x000350, "Member 'UUI_ShelterMainTab_C::PlayerList' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, PlayerName) == 0x000358, "Member 'UUI_ShelterMainTab_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, TabName) == 0x000360, "Member 'UUI_ShelterMainTab_C::TabName' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, UI_BattlePassXPBar) == 0x000368, "Member 'UUI_ShelterMainTab_C::UI_BattlePassXPBar' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, ShelterUI) == 0x000370, "Member 'UUI_ShelterMainTab_C::ShelterUI' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, TabIconData) == 0x000378, "Member 'UUI_ShelterMainTab_C::TabIconData' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, DataToCreate) == 0x0003C8, "Member 'UUI_ShelterMainTab_C::DataToCreate' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, ShopTabToUse) == 0x0003D8, "Member 'UUI_ShelterMainTab_C::ShopTabToUse' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, BattlePassSystem) == 0x0003E0, "Member 'UUI_ShelterMainTab_C::BattlePassSystem' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, SlaveMaster) == 0x0003E8, "Member 'UUI_ShelterMainTab_C::SlaveMaster' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, OnboardingComponent) == 0x0003F0, "Member 'UUI_ShelterMainTab_C::OnboardingComponent' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, Shelter_UI_Finished_Loading) == 0x0003F8, "Member 'UUI_ShelterMainTab_C::Shelter_UI_Finished_Loading' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, IsLootboxesClosing) == 0x000408, "Member 'UUI_ShelterMainTab_C::IsLootboxesClosing' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, TabsCreated) == 0x000410, "Member 'UUI_ShelterMainTab_C::TabsCreated' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, OriginalMatchmakingStatusParent) == 0x000420, "Member 'UUI_ShelterMainTab_C::OriginalMatchmakingStatusParent' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, UI_MatchmakingStatus) == 0x000428, "Member 'UUI_ShelterMainTab_C::UI_MatchmakingStatus' has a wrong offset!");
static_assert(offsetof(UUI_ShelterMainTab_C, OriginalMatchmakingStatusVisibility) == 0x000430, "Member 'UUI_ShelterMainTab_C::OriginalMatchmakingStatusVisibility' has a wrong offset!");

}

