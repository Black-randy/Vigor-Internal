#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MusicPlayer

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MusicPlayer.UI_MusicPlayer_C
// 0x00F0 (0x03C8 - 0x02D8)
class UUI_MusicPlayer_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LoadAnim;                                          // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFlameTextBlock*                        Author_Text;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Content2;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        CurrentTime_Text;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_941;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NoSongDummy_Overlay;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayButton_Image;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayButton_Image_1;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               PlayingSong_Overlay;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SongName_Text;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           SongProgress_ProgressBar;                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           SongProgress_ProgressBar_1;                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TrackImage_Image;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TrackImage_Image_1;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             TrackList;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TrackTime_Text;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_BlacklistButton;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_CloseButton;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_PlayButton;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_ScrollDown;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_ScrollUp;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_ShuffleButton;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_StopButton;                                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUI_MusicPlayer_TrackButton_C*>  MusicButtonList;                                   // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_MusicPlayer_C*                      MusicPlayer;                                       // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                           TrackTimeUpdateTimer;                              // 0x03B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CanAxisScroll;                                     // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C1[0x3];                                      // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AxisScrollCooldown;                                // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_MusicPlayer(int32 EntryPoint);
	void PlayTrack();
	void CloseMusicPlayer();
	void BndEvt__UI_BlacklistButton_K2Node_ComponentBoundEvent_6_OnActionPressedEvent__DelegateSignature();
	void LookUpDown(float AxisValue);
	void Start_Track_Time_Update();
	void Construct();
	void Started_New_Song(class UBP_MusicTrack_C* Previous, class UBP_MusicTrack_C* Current);
	void BndEvt__UI_ShuffleButton_K2Node_ComponentBoundEvent_5_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_StopButton_K2Node_ComponentBoundEvent_4_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_CloseButton_K2Node_ComponentBoundEvent_3_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_ScrollUp_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_ScrollDown_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void Populate_Track_List(TArray<class UBP_MusicTrack_C*>& Tracks, class UBP_MusicTrack_C* PlayedTrack);
	void SelectTrackButton(int32 TrackIndex);
	void SelectNextTrack();
	void SelectPreviousTrack();
	void PlaySelectedButton(bool* Success);
	void GetSelectedTrackButton(class UUI_MusicPlayer_TrackButton_C** SelectedTrackButton, int32* Index_0, bool* IsFound);
	void GetPlayedTrackButton(class UUI_MusicPlayer_TrackButton_C** SelectedTrackButton);
	void GetTrackButton(class UBP_MusicTrack_C* MusicTrack, class UUI_MusicPlayer_TrackButton_C** Button);
	void SetIsShuffle(bool IsShuffle);
	void SetCurrentTrackInfo(class UBP_MusicTrack_C* Track);
	void UpdateTrackTime();
	void Get_Time_Text_From_Float(float Value, class FText* Text);
	void Enable_Axis_Scroll();
	void UpdateBlacklistButton(bool bIsBlacklisted);
	void SelectTrack(int32 TrackIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MusicPlayer_C">();
	}
	static class UUI_MusicPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MusicPlayer_C>();
	}
};
static_assert(alignof(UUI_MusicPlayer_C) == 0x000008, "Wrong alignment on UUI_MusicPlayer_C");
static_assert(sizeof(UUI_MusicPlayer_C) == 0x0003C8, "Wrong size on UUI_MusicPlayer_C");
static_assert(offsetof(UUI_MusicPlayer_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_MusicPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, LoadAnim) == 0x0002E0, "Member 'UUI_MusicPlayer_C::LoadAnim' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, Author_Text) == 0x0002E8, "Member 'UUI_MusicPlayer_C::Author_Text' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, Content2) == 0x0002F0, "Member 'UUI_MusicPlayer_C::Content2' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, CurrentTime_Text) == 0x0002F8, "Member 'UUI_MusicPlayer_C::CurrentTime_Text' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, Image_941) == 0x000300, "Member 'UUI_MusicPlayer_C::Image_941' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, NoSongDummy_Overlay) == 0x000308, "Member 'UUI_MusicPlayer_C::NoSongDummy_Overlay' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, PlayButton_Image) == 0x000310, "Member 'UUI_MusicPlayer_C::PlayButton_Image' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, PlayButton_Image_1) == 0x000318, "Member 'UUI_MusicPlayer_C::PlayButton_Image_1' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, PlayingSong_Overlay) == 0x000320, "Member 'UUI_MusicPlayer_C::PlayingSong_Overlay' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, SongName_Text) == 0x000328, "Member 'UUI_MusicPlayer_C::SongName_Text' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, SongProgress_ProgressBar) == 0x000330, "Member 'UUI_MusicPlayer_C::SongProgress_ProgressBar' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, SongProgress_ProgressBar_1) == 0x000338, "Member 'UUI_MusicPlayer_C::SongProgress_ProgressBar_1' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, TrackImage_Image) == 0x000340, "Member 'UUI_MusicPlayer_C::TrackImage_Image' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, TrackImage_Image_1) == 0x000348, "Member 'UUI_MusicPlayer_C::TrackImage_Image_1' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, TrackList) == 0x000350, "Member 'UUI_MusicPlayer_C::TrackList' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, TrackTime_Text) == 0x000358, "Member 'UUI_MusicPlayer_C::TrackTime_Text' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, UI_BlacklistButton) == 0x000360, "Member 'UUI_MusicPlayer_C::UI_BlacklistButton' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, UI_CloseButton) == 0x000368, "Member 'UUI_MusicPlayer_C::UI_CloseButton' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, UI_FlameSafezone) == 0x000370, "Member 'UUI_MusicPlayer_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, UI_PlayButton) == 0x000378, "Member 'UUI_MusicPlayer_C::UI_PlayButton' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, UI_ScrollDown) == 0x000380, "Member 'UUI_MusicPlayer_C::UI_ScrollDown' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, UI_ScrollUp) == 0x000388, "Member 'UUI_MusicPlayer_C::UI_ScrollUp' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, UI_ShuffleButton) == 0x000390, "Member 'UUI_MusicPlayer_C::UI_ShuffleButton' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, UI_StopButton) == 0x000398, "Member 'UUI_MusicPlayer_C::UI_StopButton' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, MusicButtonList) == 0x0003A0, "Member 'UUI_MusicPlayer_C::MusicButtonList' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, MusicPlayer) == 0x0003B0, "Member 'UUI_MusicPlayer_C::MusicPlayer' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, TrackTimeUpdateTimer) == 0x0003B8, "Member 'UUI_MusicPlayer_C::TrackTimeUpdateTimer' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, CanAxisScroll) == 0x0003C0, "Member 'UUI_MusicPlayer_C::CanAxisScroll' has a wrong offset!");
static_assert(offsetof(UUI_MusicPlayer_C, AxisScrollCooldown) == 0x0003C4, "Member 'UUI_MusicPlayer_C::AxisScrollCooldown' has a wrong offset!");

}
