#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePassTile

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BattlePassTile.UI_BattlePassTile_C
// 0x00E8 (0x03A0 - 0x02B8)
class UUI_BattlePassTile_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Focus;                                             // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DarkOverlay;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                FocusBorder;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_202;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LockImage;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OwnedOverlay;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PhotoFrame;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PhotoFrame2;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PhotoFrame2Shadow;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PhotoFrame3;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PhotoFrameShadow;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PremiumFlare;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           SelectButton;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SlotsHZBox;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemGridSlotBattlePass_C*           UI_ItemGridSlotBattlePass;                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemGridSlotBattlePass_C*           UI_ItemGridSlotBattlePass_160;                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemGridSlotBattlePass_C*           UI_ItemGridSlotBattlePass_329;                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ShelterTile_C*                      UI_ShelterTile;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 StoreItemClass;                                    // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SceneCaptureIndex;                                 // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             SlotInTileClicked;                                 // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsTileLocked;                                      // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTileClaimed;                                     // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38A[0x2];                                      // 0x038A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TileRequiredLevel;                                 // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTileEmpty;                                       // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAnySlotFocused;                                  // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_392[0x6];                                      // 0x0392(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                FocusedWidget;                                     // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SlotInTileClicked__DelegateSignature();
	void ExecuteUbergraph_UI_BattlePassTile(int32 EntryPoint);
	void ScaleWidget(const struct FVector2D& Scale);
	void BndEvt__UI_BattlePassTile_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_BattlePassTile_SelectButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_BattlePassTile_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void EventSlotClicked(class UButton* Button);
	void OnChildFocusLost(class UWidget* InWidget);
	void OnChildFocusReceived(class UWidget* InWidget);
	void Construct();
	void FillTileContent(class UClass* ItemClass);
	void GetTileItemRarity(bool* OutputValid, struct FItemRarity* ItemRarity);
	void GetTileItemName(class FText* ItemName);
	void GetTileItemCategory(class FText* ItemCategory);
	void Add_Slots_to_Tile(const TArray<struct FS_BattlePassLevelRewardFull>& RewardsArray);
	void SetTileFocus(bool* FocusWasSet);
	void SetTileLocked(bool IsLockedIn);
	void SetTileClaimed(bool IsClaimedIn);
	void SetTileRequiredLevel(int32 TileRequiredLevel_0);
	void ShowTileHighlight();
	void HideTileHighlight();
	void SetTileRequiredLevelAchieved(bool IsLevelAchievedIn);

	void GetTileLocked(bool* IsTileLocked_0) const;
	void GetTileClaimed(bool* IsTileClaimed_0) const;
	void GetTileRequiredLevel(int32* TileRequiredLevel_0) const;
	void GetTileEmpty(bool* IsTileEmpty_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BattlePassTile_C">();
	}
	static class UUI_BattlePassTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BattlePassTile_C>();
	}
};
static_assert(alignof(UUI_BattlePassTile_C) == 0x000008, "Wrong alignment on UUI_BattlePassTile_C");
static_assert(sizeof(UUI_BattlePassTile_C) == 0x0003A0, "Wrong size on UUI_BattlePassTile_C");
static_assert(offsetof(UUI_BattlePassTile_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_BattlePassTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, Focus) == 0x0002C0, "Member 'UUI_BattlePassTile_C::Focus' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, CanvasPanel_1) == 0x0002C8, "Member 'UUI_BattlePassTile_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, DarkOverlay) == 0x0002D0, "Member 'UUI_BattlePassTile_C::DarkOverlay' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, FocusBorder) == 0x0002D8, "Member 'UUI_BattlePassTile_C::FocusBorder' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, Image_0) == 0x0002E0, "Member 'UUI_BattlePassTile_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, Image_1) == 0x0002E8, "Member 'UUI_BattlePassTile_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, Image_202) == 0x0002F0, "Member 'UUI_BattlePassTile_C::Image_202' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, LockImage) == 0x0002F8, "Member 'UUI_BattlePassTile_C::LockImage' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, OwnedOverlay) == 0x000300, "Member 'UUI_BattlePassTile_C::OwnedOverlay' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, PhotoFrame) == 0x000308, "Member 'UUI_BattlePassTile_C::PhotoFrame' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, PhotoFrame2) == 0x000310, "Member 'UUI_BattlePassTile_C::PhotoFrame2' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, PhotoFrame2Shadow) == 0x000318, "Member 'UUI_BattlePassTile_C::PhotoFrame2Shadow' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, PhotoFrame3) == 0x000320, "Member 'UUI_BattlePassTile_C::PhotoFrame3' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, PhotoFrameShadow) == 0x000328, "Member 'UUI_BattlePassTile_C::PhotoFrameShadow' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, PremiumFlare) == 0x000330, "Member 'UUI_BattlePassTile_C::PremiumFlare' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, SelectButton) == 0x000338, "Member 'UUI_BattlePassTile_C::SelectButton' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, SlotsHZBox) == 0x000340, "Member 'UUI_BattlePassTile_C::SlotsHZBox' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, UI_ItemGridSlotBattlePass) == 0x000348, "Member 'UUI_BattlePassTile_C::UI_ItemGridSlotBattlePass' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, UI_ItemGridSlotBattlePass_160) == 0x000350, "Member 'UUI_BattlePassTile_C::UI_ItemGridSlotBattlePass_160' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, UI_ItemGridSlotBattlePass_329) == 0x000358, "Member 'UUI_BattlePassTile_C::UI_ItemGridSlotBattlePass_329' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, UI_ShelterTile) == 0x000360, "Member 'UUI_BattlePassTile_C::UI_ShelterTile' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, StoreItemClass) == 0x000368, "Member 'UUI_BattlePassTile_C::StoreItemClass' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, SceneCaptureIndex) == 0x000370, "Member 'UUI_BattlePassTile_C::SceneCaptureIndex' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, SlotInTileClicked) == 0x000378, "Member 'UUI_BattlePassTile_C::SlotInTileClicked' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, IsTileLocked) == 0x000388, "Member 'UUI_BattlePassTile_C::IsTileLocked' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, IsTileClaimed) == 0x000389, "Member 'UUI_BattlePassTile_C::IsTileClaimed' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, TileRequiredLevel) == 0x00038C, "Member 'UUI_BattlePassTile_C::TileRequiredLevel' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, IsTileEmpty) == 0x000390, "Member 'UUI_BattlePassTile_C::IsTileEmpty' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, IsAnySlotFocused) == 0x000391, "Member 'UUI_BattlePassTile_C::IsAnySlotFocused' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassTile_C, FocusedWidget) == 0x000398, "Member 'UUI_BattlePassTile_C::FocusedWidget' has a wrong offset!");

}
