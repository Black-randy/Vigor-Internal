#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mementos

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mementos.UI_Mementos_C
// 0x0190 (0x0468 - 0x02D8)
class UUI_Mementos_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_InputActionWidget_C*                ActionMoreInfo;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ActionRotateText;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CloudMessage;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        CollectionDescription;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                GamepadActionClose;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                GamepadActionRotate;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         GamepadActionRotateBox;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                GamepadActionSelect;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                GamepadActionZoom;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        HeaderText;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftArrowImage;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        MementoDescription;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MementosCanvas;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_1;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightArrowImage;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ScrollBoxBottomLine;                               // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BackButtonPC_C*                     UI_BackButtonPC;                                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ShelterUI_C*                        Shelter_UI;                                        // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStashComponent*                        Stash_Storage;                                     // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Stash_Loaded;                                      // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x3];                                      // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Loadings_in_Progress;                              // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          All_Assets_Started_Loading;                        // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_MementoCollectionListItem_C*        Selected_Collection;                               // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     Loaded_Icons;                                      // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         Loaded_Preview_Scene_Classes;                      // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                  Loaded_Skeletal_Meshes;                            // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                    Loaded_Static_Meshes;                              // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstance*>              Loaded_Materials;                                  // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USoundBase*>                     Loaded_Sounds;                                     // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioComponent*                        Current_Memento_Preview_Sound;                     // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Scheduled_Memento_Preview_Sound;                   // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Scheduled_Memento_Preview_Sound_Timer;             // 0x0410(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Vinyls;                                            // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Trolls;                                            // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Lighters;                                          // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FocusedClass;                                      // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UListButtonWidget*>              CollectionListButtons;                             // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UListButtonWidget*                      FocusedCollectionListButton;                       // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CurrentFocusedWidget;                              // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MementoListItem_C*                  CurrentMemento;                                    // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPanning;                                         // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_Mementos(int32 EntryPoint);
	void BndEvt__UI_Mementos_UI_BackButtonPC_K2Node_ComponentBoundEvent_4_OnBackButtonClicked__DelegateSignature();
	void OnResetToDefaultState();
	void StopPanning();
	void StartPanning();
	void BndEvt__UI_Mementos_GamepadActionSelect_K2Node_ComponentBoundEvent_3_OnClickedEvent__DelegateSignature();
	void BndEvt__GamepadActionClose_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature();
	void ZoomOut();
	void ZoomIn();
	void ListenForMouseWheel();
	void BndEvt__ActionMoreInfo_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature();
	void Play_Scheduled_Memento_Preview_Sound();
	void Prerequisite_Ready();
	void Load_Assets();
	void BndEvt__UI_GamepadActionWidget_C_0_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Stash_Finished_Loading(class AStash* Sender, class UStashComponent* Inventory);
	void Destruct();
	void Construct();
	void OnLoaded_303A9E7341428F48F05BE78AB425F395(class UObject* Loaded);
	void OnLoaded_303A9E7341428F48F05BE78A0BF59D2F(class UObject* Loaded);
	void OnLoaded_303A9E7341428F48F05BE78A0CD9AD5A(class UObject* Loaded);
	void OnLoaded_303A9E7341428F48F05BE78A767B6141(class UObject* Loaded);
	void OnLoaded_303A9E7341428F48F05BE78ADE56BC56(class UObject* Loaded);
	void OnLoaded_B08996E843B69641864BC48B9A281BDC(TSubclassOf<class UObject> Loaded);
	void OnLoaded_303A9E7341428F48F05BE78A8C63241D(class UObject* Loaded);
	void Is_Collection_Valid(const struct FF_MementoCollectionInfo& F_MementoCollectionInfo, bool* Valid);
	void Fill_Collections_List();
	void Position_Collection_Description();
	void Preview_Collection(class UListButtonWidget* Sender);
	void Select_Collection(class UListButtonWidget* Sender);
	void Return_to_Collections_List();
	void Preview_Memento(class UListButtonWidget* Sender);
	void Get_Mementos_Sorted_by_Rarity(const struct FF_MementoCollectionInfo& Collection_Info, TArray<struct FF_MementoInfo>* Mementos);
	void Handle_Onboarding();
	bool Blocking_Vinyl_Rotation(class UClass* IsVinylClass);
	void Get_Rotation_Setting_for_Vinyls();
	void Update_UI_Elements(bool IsInSubMenu);

	class UWidget* GetWidgetToFocus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mementos_C">();
	}
	static class UUI_Mementos_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mementos_C>();
	}
};
static_assert(alignof(UUI_Mementos_C) == 0x000008, "Wrong alignment on UUI_Mementos_C");
static_assert(sizeof(UUI_Mementos_C) == 0x000468, "Wrong size on UUI_Mementos_C");
static_assert(offsetof(UUI_Mementos_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_Mementos_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, ActionMoreInfo) == 0x0002E0, "Member 'UUI_Mementos_C::ActionMoreInfo' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, ActionRotateText) == 0x0002E8, "Member 'UUI_Mementos_C::ActionRotateText' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, CloudMessage) == 0x0002F0, "Member 'UUI_Mementos_C::CloudMessage' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, CollectionDescription) == 0x0002F8, "Member 'UUI_Mementos_C::CollectionDescription' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, GamepadActionClose) == 0x000300, "Member 'UUI_Mementos_C::GamepadActionClose' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, GamepadActionRotate) == 0x000308, "Member 'UUI_Mementos_C::GamepadActionRotate' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, GamepadActionRotateBox) == 0x000310, "Member 'UUI_Mementos_C::GamepadActionRotateBox' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, GamepadActionSelect) == 0x000318, "Member 'UUI_Mementos_C::GamepadActionSelect' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, GamepadActionZoom) == 0x000320, "Member 'UUI_Mementos_C::GamepadActionZoom' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, HeaderText) == 0x000328, "Member 'UUI_Mementos_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, LeftArrowImage) == 0x000330, "Member 'UUI_Mementos_C::LeftArrowImage' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, MementoDescription) == 0x000338, "Member 'UUI_Mementos_C::MementoDescription' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, MementosCanvas) == 0x000340, "Member 'UUI_Mementos_C::MementosCanvas' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Overlay_1) == 0x000348, "Member 'UUI_Mementos_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, RightArrowImage) == 0x000350, "Member 'UUI_Mementos_C::RightArrowImage' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, ScrollBox) == 0x000358, "Member 'UUI_Mementos_C::ScrollBox' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, ScrollBoxBottomLine) == 0x000360, "Member 'UUI_Mementos_C::ScrollBoxBottomLine' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, UI_BackButtonPC) == 0x000368, "Member 'UUI_Mementos_C::UI_BackButtonPC' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, WidgetSwitcher) == 0x000370, "Member 'UUI_Mementos_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Shelter_UI) == 0x000378, "Member 'UUI_Mementos_C::Shelter_UI' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Stash_Storage) == 0x000380, "Member 'UUI_Mementos_C::Stash_Storage' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Stash_Loaded) == 0x000388, "Member 'UUI_Mementos_C::Stash_Loaded' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Loadings_in_Progress) == 0x00038C, "Member 'UUI_Mementos_C::Loadings_in_Progress' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, All_Assets_Started_Loading) == 0x000390, "Member 'UUI_Mementos_C::All_Assets_Started_Loading' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Selected_Collection) == 0x000398, "Member 'UUI_Mementos_C::Selected_Collection' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Loaded_Icons) == 0x0003A0, "Member 'UUI_Mementos_C::Loaded_Icons' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Loaded_Preview_Scene_Classes) == 0x0003B0, "Member 'UUI_Mementos_C::Loaded_Preview_Scene_Classes' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Loaded_Skeletal_Meshes) == 0x0003C0, "Member 'UUI_Mementos_C::Loaded_Skeletal_Meshes' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Loaded_Static_Meshes) == 0x0003D0, "Member 'UUI_Mementos_C::Loaded_Static_Meshes' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Loaded_Materials) == 0x0003E0, "Member 'UUI_Mementos_C::Loaded_Materials' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Loaded_Sounds) == 0x0003F0, "Member 'UUI_Mementos_C::Loaded_Sounds' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Current_Memento_Preview_Sound) == 0x000400, "Member 'UUI_Mementos_C::Current_Memento_Preview_Sound' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Scheduled_Memento_Preview_Sound) == 0x000408, "Member 'UUI_Mementos_C::Scheduled_Memento_Preview_Sound' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Scheduled_Memento_Preview_Sound_Timer) == 0x000410, "Member 'UUI_Mementos_C::Scheduled_Memento_Preview_Sound_Timer' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Vinyls) == 0x000418, "Member 'UUI_Mementos_C::Vinyls' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Trolls) == 0x000420, "Member 'UUI_Mementos_C::Trolls' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, Lighters) == 0x000428, "Member 'UUI_Mementos_C::Lighters' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, FocusedClass) == 0x000430, "Member 'UUI_Mementos_C::FocusedClass' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, CollectionListButtons) == 0x000438, "Member 'UUI_Mementos_C::CollectionListButtons' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, FocusedCollectionListButton) == 0x000448, "Member 'UUI_Mementos_C::FocusedCollectionListButton' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, CurrentFocusedWidget) == 0x000450, "Member 'UUI_Mementos_C::CurrentFocusedWidget' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, CurrentMemento) == 0x000458, "Member 'UUI_Mementos_C::CurrentMemento' has a wrong offset!");
static_assert(offsetof(UUI_Mementos_C, IsPanning) == 0x000460, "Member 'UUI_Mementos_C::IsPanning' has a wrong offset!");

}
