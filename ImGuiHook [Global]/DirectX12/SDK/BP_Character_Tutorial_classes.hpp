#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Tutorial

#include "Basic.hpp"

#include "UI_Tutorial_ResetReason_structs.hpp"
#include "FlameUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EArchetypesGroup_structs.hpp"
#include "BP_Character_Script_classes.hpp"
#include "Flame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Character_Tutorial.BP_Character_Tutorial_C
// 0x01A0 (0x1360 - 0x11C0)
class ABP_Character_Tutorial_C final : public ABP_Character_Script_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Character_Tutorial_C;            // 0x11C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_VoiceLine_C*                        BP_VoiceLine_OutOffAmmo;                           // 0x11C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialHint_10_C*                  BP_TutorialHint_Disinfection;                      // 0x11D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialHint_10_C*                  BP_TutorialHint_ADS;                               // 0x11D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialHint_10_C*                  BP_TutorialHint_Grenade;                           // 0x11E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialHint_10_C*                  BP_TutorialHint_WeaponAim_Shoot;                   // 0x11E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialHint_10_C*                  BP_TutorialHint_WeaponReload;                      // 0x11F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialHint_10_C*                  BP_TutorialHint_WeaponSwitch;                      // 0x11F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialHint_10_C*                  BP_TutorialHint_Firemodes;                         // 0x1200(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RadiationComponent_C*               BP_RadiationComponent;                             // 0x1208(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialHint_10_C*                  BP_TutorialHint_Bnadage;                           // 0x1210(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_VoiceLine_C*                        BP_VoiceLine_Bandage;                              // 0x1218(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_VoiceLine_C*                        BP_VoiceLine_Gun;                                  // 0x1220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_VoiceoverManager_C*                 BP_VoiceoverManager;                               // 0x1228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         StepID;                                            // 0x1230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevTickLocation;                                  // 0x1234(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Situation1_ElapsedTickFor;                         // 0x1240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Situation1_Next;                                   // 0x1244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Situation345_ElapsedTickFor;                       // 0x1248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Situation345_Next;                                 // 0x124C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevLootedAmount;                                  // 0x1250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnalyticsLocationDeltaTime;                        // 0x1254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<float, struct FVector>                   LocationTracked;                                   // 0x1258(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LeavingSuccess;                                    // 0x12A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12A9[0x3];                                     // 0x12A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LocationTIme;                                      // 0x12AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LeavindDead;                                       // 0x12B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12B1[0x7];                                     // 0x12B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameMode_Tutorial_withCharacterChoice_2_C* GameModeTutorial;                                  // 0x12B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Tutorial_AI_Manager_C*              AIManager;                                         // 0x12C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Start;                                             // 0x12C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12C9[0x7];                                     // 0x12C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraComponent*                       Tempcamera;                                        // 0x12D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CameraFollow_C*                     CameraFollow;                                      // 0x12D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDamageType                                   LastDamageType;                                    // 0x12E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PickedUpAGun;                                      // 0x12E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BandageVoiceLinePlayed;                            // 0x12E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12E3[0x5];                                     // 0x12E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CheckIfWeaponDownTimer;                            // 0x12E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_TutorialHint_10_C*>          WidgetHintsQueue;                                  // 0x12F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FName, bool>                       HintTAG_To_ShownBool;                              // 0x1300(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxNumberOfActiveUI_Hints;                         // 0x1350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1354[0x4];                                     // 0x1354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           BandageCheckTimer;                                 // 0x1358(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Character_Tutorial(int32 EntryPoint);
	void PlayerScoredTutorialKill(class ABP_PlayerController_Script_C* Killer, class AHumanCharacter* VictimCharacter, class UClass* Instigating_Item, bool Headshot, bool Teamkill);
	void PursuitSceneCameraFocusEnded();
	void AllAIsDied();
	void BandageHintCooldown();
	void UIHint_Closed();
	void UIHint_Show();
	void UIHintQueue_Add(class UBP_TutorialHint_10_C* Hint_Component);
	void FocusOnActorUsingFollower(class AActor* ActorToFollow, float TimeToFollowItFor, float MaxWalkSpeedChange);
	void CheckIfWeaponDown2();
	void ShowDeathScreen(EUI_Tutorial_ResetReason Reason);
	void OnPursuitSceneStarted(class AHumanAICharacter* HumanCharacterToFollow);
	void RetunFromCameraFollow();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void BeforeDied(float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, TSubclassOf<class AItem> InstigatingItem, const struct FHitResult& HitResult);
	void SavePositionForAnalytics();
	void PeriodicStateCheck();
	void TutorialStep(int32 TriggerID);
	void SendLocationAnalytics(const class FString& Reason);
	void CountAmmo(int32 MagAmmo, int32 Chambered, int32* AmmoCount);
	void TryLoadFromCheckpoint();
	void GetArchetypeGroup(EArchetypesGroup* Group);
	void SetRadiation(class ABP_RadiationWave_C* RadiationWave);
	void GetNextAvailableHintPlacement(struct FVector2D* Placement);
	void SetHintPlacement(class UBP_TutorialHint_10_C* Hint);
	void GetActiveHintWidgetComponents(TArray<class UBP_TutorialHint_10_C*>* ActiveWidgets);
	void ShowHintByTag(class FName HintTag, bool* HintShown);
	float GetSpecialDamageAmountForCharacter(const class AHumanCharacter* EnemyTakingDamage, float CurrentDamageAmount);
	void ReceiveOnFire();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Character_Tutorial_C">();
	}
	static class ABP_Character_Tutorial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Character_Tutorial_C>();
	}
};
static_assert(alignof(ABP_Character_Tutorial_C) == 0x000010, "Wrong alignment on ABP_Character_Tutorial_C");
static_assert(sizeof(ABP_Character_Tutorial_C) == 0x001360, "Wrong size on ABP_Character_Tutorial_C");
static_assert(offsetof(ABP_Character_Tutorial_C, UberGraphFrame_BP_Character_Tutorial_C) == 0x0011C0, "Member 'ABP_Character_Tutorial_C::UberGraphFrame_BP_Character_Tutorial_C' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_VoiceLine_OutOffAmmo) == 0x0011C8, "Member 'ABP_Character_Tutorial_C::BP_VoiceLine_OutOffAmmo' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_TutorialHint_Disinfection) == 0x0011D0, "Member 'ABP_Character_Tutorial_C::BP_TutorialHint_Disinfection' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_TutorialHint_ADS) == 0x0011D8, "Member 'ABP_Character_Tutorial_C::BP_TutorialHint_ADS' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_TutorialHint_Grenade) == 0x0011E0, "Member 'ABP_Character_Tutorial_C::BP_TutorialHint_Grenade' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_TutorialHint_WeaponAim_Shoot) == 0x0011E8, "Member 'ABP_Character_Tutorial_C::BP_TutorialHint_WeaponAim_Shoot' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_TutorialHint_WeaponReload) == 0x0011F0, "Member 'ABP_Character_Tutorial_C::BP_TutorialHint_WeaponReload' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_TutorialHint_WeaponSwitch) == 0x0011F8, "Member 'ABP_Character_Tutorial_C::BP_TutorialHint_WeaponSwitch' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_TutorialHint_Firemodes) == 0x001200, "Member 'ABP_Character_Tutorial_C::BP_TutorialHint_Firemodes' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_RadiationComponent) == 0x001208, "Member 'ABP_Character_Tutorial_C::BP_RadiationComponent' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_TutorialHint_Bnadage) == 0x001210, "Member 'ABP_Character_Tutorial_C::BP_TutorialHint_Bnadage' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_VoiceLine_Bandage) == 0x001218, "Member 'ABP_Character_Tutorial_C::BP_VoiceLine_Bandage' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_VoiceLine_Gun) == 0x001220, "Member 'ABP_Character_Tutorial_C::BP_VoiceLine_Gun' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BP_VoiceoverManager) == 0x001228, "Member 'ABP_Character_Tutorial_C::BP_VoiceoverManager' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, StepID) == 0x001230, "Member 'ABP_Character_Tutorial_C::StepID' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, PrevTickLocation) == 0x001234, "Member 'ABP_Character_Tutorial_C::PrevTickLocation' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, Situation1_ElapsedTickFor) == 0x001240, "Member 'ABP_Character_Tutorial_C::Situation1_ElapsedTickFor' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, Situation1_Next) == 0x001244, "Member 'ABP_Character_Tutorial_C::Situation1_Next' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, Situation345_ElapsedTickFor) == 0x001248, "Member 'ABP_Character_Tutorial_C::Situation345_ElapsedTickFor' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, Situation345_Next) == 0x00124C, "Member 'ABP_Character_Tutorial_C::Situation345_Next' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, PrevLootedAmount) == 0x001250, "Member 'ABP_Character_Tutorial_C::PrevLootedAmount' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, AnalyticsLocationDeltaTime) == 0x001254, "Member 'ABP_Character_Tutorial_C::AnalyticsLocationDeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, LocationTracked) == 0x001258, "Member 'ABP_Character_Tutorial_C::LocationTracked' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, LeavingSuccess) == 0x0012A8, "Member 'ABP_Character_Tutorial_C::LeavingSuccess' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, LocationTIme) == 0x0012AC, "Member 'ABP_Character_Tutorial_C::LocationTIme' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, LeavindDead) == 0x0012B0, "Member 'ABP_Character_Tutorial_C::LeavindDead' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, GameModeTutorial) == 0x0012B8, "Member 'ABP_Character_Tutorial_C::GameModeTutorial' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, AIManager) == 0x0012C0, "Member 'ABP_Character_Tutorial_C::AIManager' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, Start) == 0x0012C8, "Member 'ABP_Character_Tutorial_C::Start' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, Tempcamera) == 0x0012D0, "Member 'ABP_Character_Tutorial_C::Tempcamera' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, CameraFollow) == 0x0012D8, "Member 'ABP_Character_Tutorial_C::CameraFollow' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, LastDamageType) == 0x0012E0, "Member 'ABP_Character_Tutorial_C::LastDamageType' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, PickedUpAGun) == 0x0012E1, "Member 'ABP_Character_Tutorial_C::PickedUpAGun' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BandageVoiceLinePlayed) == 0x0012E2, "Member 'ABP_Character_Tutorial_C::BandageVoiceLinePlayed' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, CheckIfWeaponDownTimer) == 0x0012E8, "Member 'ABP_Character_Tutorial_C::CheckIfWeaponDownTimer' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, WidgetHintsQueue) == 0x0012F0, "Member 'ABP_Character_Tutorial_C::WidgetHintsQueue' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, HintTAG_To_ShownBool) == 0x001300, "Member 'ABP_Character_Tutorial_C::HintTAG_To_ShownBool' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, MaxNumberOfActiveUI_Hints) == 0x001350, "Member 'ABP_Character_Tutorial_C::MaxNumberOfActiveUI_Hints' has a wrong offset!");
static_assert(offsetof(ABP_Character_Tutorial_C, BandageCheckTimer) == 0x001358, "Member 'ABP_Character_Tutorial_C::BandageCheckTimer' has a wrong offset!");

}
