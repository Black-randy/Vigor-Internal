#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameMode_Shelter

#include "Basic.hpp"

#include "F_OnboardingSequenceWidgetSettings_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_SoundSource_structs.hpp"
#include "BP_GameMode_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameMode_Shelter.BP_GameMode_Shelter_C
// 0x0188 (0x05C8 - 0x0440)
class ABP_GameMode_Shelter_C final : public ABP_GameMode_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GameMode_Shelter_C;              // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InGameNewsSystem_C*                 BP_InGameNewsSystem;                               // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ShelterOnboardingComponent_C*       BP_ShelterOnboardingComponent;                     // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMC_Shelter_Switch_C*               BP_GMC_Shelter_Switch;                             // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ShootingChallenges_GMComponent_C*   BP_ShootingChallenges_GMComponent;                 // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponentExtended*                Music;                                             // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Shelter_SaveGame_C*                 ShelterSaveGame;                                   // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SaveGameLoaded;                                    // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          WasAfterTutorial;                                  // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_489[0x3];                                      // 0x0489(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OnboardingStartupDelay;                            // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        WelcomeVoiceOverComponent;                         // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Onboarding_FirstShelterEntry_C*     FirstEntryOnboarding;                              // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOnboardingSequenceOver;                          // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1[0x7];                                      // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnboardingSequenceFinished;                        // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFlameWidget*                           OpenWidget;                                        // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnboardingSequenceStarted;                         // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             FavoriteLoadoutSaveRefreshed;                      // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_PersistentShelter_SaveGame_C*       PersistentShelterSavegame;                         // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             PersistentShelterLoaded;                           // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   CurrentLegacySeason;                               // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              AnniversaryStart;                                  // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              AnniversaryEnd;                                    // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MusicPlayer_C*                      BP_MusicPlayer;                                    // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CassettePlayer_C*                   BP_CassettePlayer;                                 // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PauseTimeOfPreviousSound;                          // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SoundSource                                 CurrentSoundSource;                                // 0x0524(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_525[0x3];                                      // 0x0525(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             SoundEnded;                                        // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FF_OnboardingSequenceWidgetSettings> Onboarding_Sequence_Widgets;                       // 0x0538(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Current_Onboarding_Widget_Index;                   // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Onboarding_Sequence_Widget_Delay;                  // 0x054C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Shelter_UI_Been_Opened;                        // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551[0x7];                                      // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class FString>            RepotedPlayersTrackingIDAndReason;                 // 0x0558(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             PlayerReportLogged;                                // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PlayerBlockLogged;                                 // 0x05B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SaveGameLoaded__DelegateSignature();
	void OnboardingSequenceFinished__DelegateSignature();
	void OnboardingSequenceStarted__DelegateSignature();
	void FavoriteLoadoutSaveRefreshed__DelegateSignature();
	void PersistentShelterLoaded__DelegateSignature();
	void SoundEnded__DelegateSignature();
	void PlayerReportLogged__DelegateSignature(const class FString& Logged_Player_Tracking_ID);
	void PlayerBlockLogged__DelegateSignature();
	void ExecuteUbergraph_BP_GameMode_Shelter(int32 EntryPoint);
	void DisplayLoginRewards();
	void OnLoginRewardsClosed(bool Suppressed_By_Shelter_UI, bool No_Content_Displayed);
	void ShowDPadHint();
	void StartOnboardingAfterWelcomeWidget(class UFlameWidget* FlameWidget);
	void NewPlayerOnboarding();
	void OnboardingSequenceDisplayWidget();
	void OnboardingSequenceWidgetClosed(bool Suppressed_By_Shelter_UI, bool No_Content_Displayed);
	void OnboardingSequenceContinue(class UFlameWidget* FlameWidget);
	void OnboardingSequenceSuspend();
	void OnboardingSequenceFinish();
	void OnboardingSequenceStart();
	void SetSound_FadeIn(class USoundBase* NewSound, float StartTime);
	void GM_UnbindTheOnAudioFinished();
	void OnAudioFinished();
	void SavePersistentShelter();
	void SaveOnboarding();
	void OnOnboardingSequenceFinished();
	void OnPlayerArrivedToShelter();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void OnOnboardingSequenceStarted();
	void OnSaveSucceed_D3A80E684FFAAE01F3348B87599E547F(const class FString& SlotName, const int32 UserIndex);
	void OnSaveFailed_D3A80E684FFAAE01F3348B87599E547F(const class FString& SlotName, const int32 UserIndex);
	void OnSaveSucceed_57C428134ABB295DBAE0E6892B367BD2(const class FString& SlotName, const int32 UserIndex);
	void OnSaveFailed_57C428134ABB295DBAE0E6892B367BD2(const class FString& SlotName, const int32 UserIndex);
	void OnLoadSucceed_1A6E8EEE45437FF03F1368BB5479E223(class USaveGame* SaveGame);
	void OnLoadFailed_1A6E8EEE45437FF03F1368BB5479E223(class USaveGame* SaveGame);
	void Reset_Onboarding_Save_Object(class UBP_Shelter_SaveGame_C** Save_Game);
	class AActor* ChoosePlayerStart(class AController* Player);
	void InitializeShelterSaveFile();
	void StartFirstTimeOnboardingSequence();
	void ShowFirstEntryWidget();
	void OnFirstEntryWidgetClosed(class UFlameWidget* InFlameWidget);
	void Start_Regular_Onboarding_Sequence();
	void LoadOnboarding(class UBP_Shelter_SaveGame_C** ShelterSaveGame_0, bool* IsValid);
	void OnOpenWidgetClosed(class UFlameWidget* InFlameWidget);
	void OpenNewWidget(class UClass* WidgetClass);
	void GM_ChangeSounds(class USoundBase* NewSound, float StartTime, E_SoundSource SoundChangeSource);
	void Override_Onboarding_Save_Object();
	void GetShelterSaveFile(bool* Valid, class UBP_PersistentShelter_SaveGame_C** SaveFile);
	void Log_Reported_Player(const class FString& Player_Tracking_ID, const class FString& Reson);
	void Is_Player_Reported(const class FString& Player_Tracking_ID, bool* Is_reported, class FString* ReportReason);
	void TEST_STEAM_OVERLAY();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameMode_Shelter_C">();
	}
	static class ABP_GameMode_Shelter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameMode_Shelter_C>();
	}
};
static_assert(alignof(ABP_GameMode_Shelter_C) == 0x000008, "Wrong alignment on ABP_GameMode_Shelter_C");
static_assert(sizeof(ABP_GameMode_Shelter_C) == 0x0005C8, "Wrong size on ABP_GameMode_Shelter_C");
static_assert(offsetof(ABP_GameMode_Shelter_C, UberGraphFrame_BP_GameMode_Shelter_C) == 0x000440, "Member 'ABP_GameMode_Shelter_C::UberGraphFrame_BP_GameMode_Shelter_C' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, BP_InGameNewsSystem) == 0x000448, "Member 'ABP_GameMode_Shelter_C::BP_InGameNewsSystem' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, BP_ShelterOnboardingComponent) == 0x000450, "Member 'ABP_GameMode_Shelter_C::BP_ShelterOnboardingComponent' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, BP_GMC_Shelter_Switch) == 0x000458, "Member 'ABP_GameMode_Shelter_C::BP_GMC_Shelter_Switch' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, BP_ShootingChallenges_GMComponent) == 0x000460, "Member 'ABP_GameMode_Shelter_C::BP_ShootingChallenges_GMComponent' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, Music) == 0x000468, "Member 'ABP_GameMode_Shelter_C::Music' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, ShelterSaveGame) == 0x000470, "Member 'ABP_GameMode_Shelter_C::ShelterSaveGame' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, SaveGameLoaded) == 0x000478, "Member 'ABP_GameMode_Shelter_C::SaveGameLoaded' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, WasAfterTutorial) == 0x000488, "Member 'ABP_GameMode_Shelter_C::WasAfterTutorial' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, OnboardingStartupDelay) == 0x00048C, "Member 'ABP_GameMode_Shelter_C::OnboardingStartupDelay' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, WelcomeVoiceOverComponent) == 0x000490, "Member 'ABP_GameMode_Shelter_C::WelcomeVoiceOverComponent' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, FirstEntryOnboarding) == 0x000498, "Member 'ABP_GameMode_Shelter_C::FirstEntryOnboarding' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, IsOnboardingSequenceOver) == 0x0004A0, "Member 'ABP_GameMode_Shelter_C::IsOnboardingSequenceOver' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, OnboardingSequenceFinished) == 0x0004A8, "Member 'ABP_GameMode_Shelter_C::OnboardingSequenceFinished' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, OpenWidget) == 0x0004B8, "Member 'ABP_GameMode_Shelter_C::OpenWidget' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, OnboardingSequenceStarted) == 0x0004C0, "Member 'ABP_GameMode_Shelter_C::OnboardingSequenceStarted' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, FavoriteLoadoutSaveRefreshed) == 0x0004D0, "Member 'ABP_GameMode_Shelter_C::FavoriteLoadoutSaveRefreshed' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, PersistentShelterSavegame) == 0x0004E0, "Member 'ABP_GameMode_Shelter_C::PersistentShelterSavegame' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, PersistentShelterLoaded) == 0x0004E8, "Member 'ABP_GameMode_Shelter_C::PersistentShelterLoaded' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, CurrentLegacySeason) == 0x0004F8, "Member 'ABP_GameMode_Shelter_C::CurrentLegacySeason' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, AnniversaryStart) == 0x000500, "Member 'ABP_GameMode_Shelter_C::AnniversaryStart' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, AnniversaryEnd) == 0x000508, "Member 'ABP_GameMode_Shelter_C::AnniversaryEnd' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, BP_MusicPlayer) == 0x000510, "Member 'ABP_GameMode_Shelter_C::BP_MusicPlayer' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, BP_CassettePlayer) == 0x000518, "Member 'ABP_GameMode_Shelter_C::BP_CassettePlayer' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, PauseTimeOfPreviousSound) == 0x000520, "Member 'ABP_GameMode_Shelter_C::PauseTimeOfPreviousSound' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, CurrentSoundSource) == 0x000524, "Member 'ABP_GameMode_Shelter_C::CurrentSoundSource' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, SoundEnded) == 0x000528, "Member 'ABP_GameMode_Shelter_C::SoundEnded' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, Onboarding_Sequence_Widgets) == 0x000538, "Member 'ABP_GameMode_Shelter_C::Onboarding_Sequence_Widgets' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, Current_Onboarding_Widget_Index) == 0x000548, "Member 'ABP_GameMode_Shelter_C::Current_Onboarding_Widget_Index' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, Onboarding_Sequence_Widget_Delay) == 0x00054C, "Member 'ABP_GameMode_Shelter_C::Onboarding_Sequence_Widget_Delay' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, Has_Shelter_UI_Been_Opened) == 0x000550, "Member 'ABP_GameMode_Shelter_C::Has_Shelter_UI_Been_Opened' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, RepotedPlayersTrackingIDAndReason) == 0x000558, "Member 'ABP_GameMode_Shelter_C::RepotedPlayersTrackingIDAndReason' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, PlayerReportLogged) == 0x0005A8, "Member 'ABP_GameMode_Shelter_C::PlayerReportLogged' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Shelter_C, PlayerBlockLogged) == 0x0005B8, "Member 'ABP_GameMode_Shelter_C::PlayerBlockLogged' has a wrong offset!");

}

