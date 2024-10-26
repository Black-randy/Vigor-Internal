#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MusicPlayer_TrackButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C
// 0x0080 (0x02E0 - 0x0260)
class UUI_MusicPlayer_TrackButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PlayingError;                                      // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             AuthorName_Text;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BlacklistIcon;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonBackground;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Error;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GreyOverlay;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayingIcon;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           TrackButton;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TrackImage_Image;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TrackNameText;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TrackTime_Text;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MusicPlayer_C*                      MusicPlayerUI;                                     // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TrackIndex;                                        // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MusicTrack_C*                       Track;                                             // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_MusicPlayer_TrackButton(int32 EntryPoint);
	void BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void Initialize(class UUI_MusicPlayer_C* MusicPlayerUI_0, class UBP_MusicTrack_C* Track_0, int32 TrackIndex_0);
	void SelectButton(bool IsSelected);
	void PlayingThisButtonTrack(bool IsPlaying);
	void SetTrackInfo(const struct FMusicTrackRow& TrackInfo);
	void UpdateTrackOverlay(bool IsUnlocked, bool IsBlacklisted);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MusicPlayer_TrackButton_C">();
	}
	static class UUI_MusicPlayer_TrackButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MusicPlayer_TrackButton_C>();
	}
};
static_assert(alignof(UUI_MusicPlayer_TrackButton_C) == 0x000008, "Wrong alignment on UUI_MusicPlayer_TrackButton_C");
static_assert(sizeof(UUI_MusicPlayer_TrackButton_C) == 0x0002E0, "Wrong size on UUI_MusicPlayer_TrackButton_C");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, UberGraphFrame) == 0x000260, "Member 'UUI_MusicPlayer_TrackButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, PlayingError) == 0x000268, "Member 'UUI_MusicPlayer_TrackButton_C::PlayingError' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, AuthorName_Text) == 0x000270, "Member 'UUI_MusicPlayer_TrackButton_C::AuthorName_Text' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, BlacklistIcon) == 0x000278, "Member 'UUI_MusicPlayer_TrackButton_C::BlacklistIcon' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, ButtonBackground) == 0x000280, "Member 'UUI_MusicPlayer_TrackButton_C::ButtonBackground' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, Error) == 0x000288, "Member 'UUI_MusicPlayer_TrackButton_C::Error' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, GreyOverlay) == 0x000290, "Member 'UUI_MusicPlayer_TrackButton_C::GreyOverlay' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, Image) == 0x000298, "Member 'UUI_MusicPlayer_TrackButton_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, PlayingIcon) == 0x0002A0, "Member 'UUI_MusicPlayer_TrackButton_C::PlayingIcon' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, TrackButton) == 0x0002A8, "Member 'UUI_MusicPlayer_TrackButton_C::TrackButton' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, TrackImage_Image) == 0x0002B0, "Member 'UUI_MusicPlayer_TrackButton_C::TrackImage_Image' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, TrackNameText) == 0x0002B8, "Member 'UUI_MusicPlayer_TrackButton_C::TrackNameText' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, TrackTime_Text) == 0x0002C0, "Member 'UUI_MusicPlayer_TrackButton_C::TrackTime_Text' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, MusicPlayerUI) == 0x0002C8, "Member 'UUI_MusicPlayer_TrackButton_C::MusicPlayerUI' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, TrackIndex) == 0x0002D0, "Member 'UUI_MusicPlayer_TrackButton_C::TrackIndex' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_TrackButton_C, Track) == 0x0002D8, "Member 'UUI_MusicPlayer_TrackButton_C::Track' has a wrong offset!");

}

