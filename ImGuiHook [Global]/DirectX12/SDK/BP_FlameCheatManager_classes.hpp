#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlameCheatManager

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FlameCheatManager.BP_FlameCheatManager_C
// 0x0008 (0x0090 - 0x0088)
class UBP_FlameCheatManager_C final : public UFlameCheatManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0088(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_FlameCheatManager(int32 EntryPoint);
	void PreLoadLootables();
	void ReceiveInitCheatManager();
	void CheatToggleOnboardingUILocks(class ABP_PlayerController_Script_C* CheatingController, bool IsLocked);
	void Cheat_toggle_machine_mode(class ABP_PlayerController_Script_C* Controller, bool Toggle_machine_mode_0);
	void Cheat_projectile_debug(class ABP_PlayerController_Script_C* Controller);
	void Open_All_Exits();
	void Set_Camping_Detection_Active(bool Active);
	void SpawnAllMementos(class ABP_PlayerController_Script_C* Controller);
	void ShowSpawnedMementos(class ABP_PlayerController_Script_C* Controller);
	void ShowMementoSpawnPoints(class ABP_PlayerController_Script_C* Controller);
	void CheatSwitchFogOfWar(class ABP_PlayerController_Script_C* Controller);
	void CheatCameraFreeLook(class ABP_PlayerController_Script_C* Controller);
	void CheatStartSpectating(class ABP_PlayerController_Script_C* Controller);
	void CanCheat_M(class ABP_PlayerController_Script_C* Controller, class UClass* CheatWidget);
	void CheatSkipTutorial(class ABP_PlayerController_Script_C* CheatingPlayer);
	void CheatBigJumps(class ABP_PlayerController_Script_C* Controller, float NewJumpZVelocity);
	void CheatMarkSelfAsTester(class ABP_PlayerController_Script_C* Controller);
	void CheatFastMovement(class ABP_PlayerController_Script_C* Controller, float MaxWalkSpeed);
	void CheatInfiniteSprint(class ABP_PlayerController_Script_C* Controller);
	void CheatSetDevMode(class ABP_PlayerController_Script_C* Controller);
	void CheatSkipLobby(class ABP_PlayerController_Script_C* Controller, int32 TimeToEncounter, int32 TimeToLock);
	void Cheat_Create_Testing_Pawns(class ABP_PlayerController_Script_C* Controller, const TArray<class ABP_Character_Script_C*>& AllCharacters);
	void Client_Toggle_Bullet_Impact_Material(class ABP_PlayerController_Script_C* Controller, bool ShowBulletMaterialImpact);
	void Cheat_Show_Player_Count_Event(class ABP_PlayerController_Script_C* Controller, bool Show_Player_Count_State);
	void Cheat_Equip_Consumable(class ABP_PlayerController_Script_C* Controller, class UClass* Consumable, bool UnEquip);
	void Cheat_Show_Traced_Actor_DisplayName(class ABP_PlayerController_Script_C* Controller, bool Toggle_Show_Traced_Actor_Display_Name);
	void Cheat_Add_Shelter_Resource_Elapsed_Time(class ABP_PlayerController_Script_C* Controller, int32 TimeToElapse, const TArray<class ABP_ShelterImprovementBase_C*>& Shelter_Improvements);
	void Cheat_Infinite_Bullets(class ABP_PlayerController_Script_C* Controller, bool New_Infinite_Bullets_State);
	void Cheat_3D_Debug_Blocking_Volume(class ABP_PlayerController_Script_C* Controller, bool Threed_Debug_Blocking_Volume_State);
	void Cheat_Victory_Add_Lootbox(class ABP_PlayerController_Script_C* Controller, class UClass* Class_0, int32 InInt);
	void Cheat_Retreat_Add_Resources(class ABP_PlayerController_Script_C* Controller, class UClass* Resource, int32 Count);
	void Cheat_Trade_In_Resources(class ABP_PlayerController_Script_C* Controller);
	void CheatToggleHitInfo(class ABP_PlayerController_Script_C* Controller, bool ToggleHitInfo_0, class ABP_BulletManager_C* BulletManager);
	void Cheat_3D_Debug_Player(class ABP_PlayerController_Script_C* Controller, bool ThreedDebugPlayerState);
	void Cheat_3D_Debug_Player_Starts(class ABP_PlayerController_Script_C* Controller, bool ThreedDebugPlayerStartsState);
	void Cheat_3D_Debug_Loot_Spawns(class ABP_PlayerController_Script_C* Controller, bool ThreedDebugSpawnedLootState);
	void Cheat_3D_Debug_Spawned_Loot(class ABP_PlayerController_Script_C* Controller, bool ThreedDebugSpawnedLootState);
	void Cheat_3D_Debug_Objective_Spawns(class ABP_PlayerController_Script_C* Controller, bool ThreedDebugObjectiveSpawnsState);
	void Cheat_3D_Debug_Objective_Items(class ABP_PlayerController_Script_C* Controller, bool ThreedDebugObjectiveItemsState);
	void Cheat_3D_Debug_Resource_Items(class ABP_PlayerController_Script_C* Controller, bool ThreedDebugResourceItemsState);
	void Cheat_Machine_Hud(class ABP_PlayerController_Script_C* Controller, bool MachineHudState);
	void Cheat_Consumable_Hud(class ABP_PlayerController_Script_C* Controller, bool Consumable_Hud_State);
	void Cheat_3D_Debug(class ABP_PlayerController_Script_C* Controller, bool ThreedDebugState);
	void Cheat_Game_Mode_Debug(class ABP_PlayerController_Script_C* Controller, class AGameModeBase* GameMode);
	void Cheat_Teleport_Player_To_Start(class ABP_PlayerController_Script_C* Controller, const TArray<class APlayerStartFlame*>& AllPlayerStarts_, const TArray<class ABP_PlayerController_C*>& AllControllers);
	void Cheat_Show_Players_In_Session(class ABP_PlayerController_Script_C* Controller, bool ShowPlayersInSessionState);
	void Cheat_Show_Player_Location(class ABP_PlayerController_Script_C* Controller, bool Show_Player_Location_State);
	void Cheat_Set_Player_Transform(class ABP_PlayerController_Script_C* Controller, const struct FTransform& Transform);
	void Cheat_Set_FOV(class ABP_PlayerController_Script_C* Controller);
	void Cheat_Definable_Damage(class ABP_PlayerController_Script_C* Controller);
	void Cheat_Health_Debug(class ABP_PlayerController_Script_C* Controller, bool Health_Debug_State);
	void Cheat_Infinite_Ammo(class ABP_PlayerController_Script_C* Controller, bool New_Infinite_Ammo_State);
	void Cheat_Damage_Character(class ABP_PlayerController_Script_C* Controller, float Damage_Amount);
	void Cheat_Heal_Character(class ABP_PlayerController_Script_C* Controller, float Heal_Amount);
	void Cheat_Set_Invincibility(class ABP_PlayerController_Script_C* Controller, bool New_Invincibility_State);
	void Cheat_Set_Max_Health(class ABP_PlayerController_Script_C* Controller, float New_Max_Health);
	void Cheat_Set_Health(class ABP_PlayerController_Script_C* Controller, float New_Health);
	void Cheat_Kill_Character(class ABP_PlayerController_Script_C* Controller);
	void Cheat_Clear_Objective_Items_From_Backpack(class ABP_PlayerController_Script_C* Controller);
	void Cheat_Clear_Backpack(class ABP_PlayerController_Script_C* Controller);
	void Cheat_Add_Item_For_Backpack(class ABP_PlayerController_Script_C* Controller, class UClass* Item_Type, int32 Item_Amount);
	void Cheat_Add_Weapon(class ABP_PlayerController_Script_C* Controller, class UClass* Weapon_Type);
	void Add_Weapon(class ABP_PlayerController_Script_C* Controller, class UClass* Weapon_Type);
	void Add_Item_For_Backpack(class ABP_PlayerController_Script_C* Controller, class UClass* Item_Type, int32 Item_Amount);
	void Clear_Backpack(class ABP_PlayerController_Script_C* Controller);
	void Clear_Objective_Items_From_Backpack(class ABP_PlayerController_Script_C* Controller);
	void Kill_Character(class ABP_PlayerController_Script_C* Controller);
	void Set_Health(class ABP_PlayerController_Script_C* Controller, float New_Health);
	void Set_Max_Health(class ABP_PlayerController_Script_C* Controller, float New_Max_Health);
	void Set_Invincibility(class ABP_PlayerController_Script_C* Controller, bool New_Invincibility_State);
	void Heal_Character(class ABP_PlayerController_Script_C* Controller, float Heal_Amount);
	void Damage_Character(class ABP_PlayerController_Script_C* Controller, float Damage_Amount);
	void Set_Infinite_Ammo(class ABP_PlayerController_Script_C* Controller, bool Infinite_Ammo);
	void Health_Debug(class ABP_PlayerController_Script_C* Controller, bool Health_Debug_0);
	void DefinableDamage(class ABP_PlayerController_Script_C* Controller);
	void Change_FOV(class ABP_PlayerController_Script_C* Controller);
	void Set_Player_Transform(class ABP_PlayerController_Script_C* Controller, const struct FTransform& Transform);
	void ShowPlayerLocation(class ABP_PlayerController_Script_C* Controller, bool Show_Player_Location);
	void Toggle_machine_mode(class ABP_PlayerController_Script_C* Controller, bool Toggle_machine_mode_0);
	void ShowPlayersInSession(class ABP_PlayerController_Script_C* Controller, bool ToggleShowPlayersInSession);
	void TeleportToPlayerStart(class ABP_PlayerController_Script_C* Controller, TArray<class APlayerStartFlame*>& AllPlayerStarts, TArray<class ABP_PlayerController_C*>& AllControllers, int32* TeleportationsCount1);
	void ShowGameModeDebug(class ABP_PlayerController_Script_C* Controller, class UClass* WidgetToDraw);
	void ThreedDebug(class ABP_PlayerController_Script_C* Controller, bool Toggle3dDebug);
	void ConsumableHud(class ABP_PlayerController_Script_C* Controller, bool ToggleConsumableHud);
	void MachineHud(class ABP_PlayerController_Script_C* Controller, bool ToggleMachineHud);
	void ThreedDebug_ResourceItems(class ABP_PlayerController_Script_C* Controller, bool Toggle3dDebugResourceItems);
	void ThreedDebug_ObjectiveItems(class ABP_PlayerController_Script_C* Controller, bool Toggle3dDebugObjectiveItems);
	void ThreedDebug_ObjectiveSpawns(class ABP_PlayerController_Script_C* Controller, bool Toggle3dDebugObjectiveSpawns);
	void ThreedDebug_SpawnedLoot(class ABP_PlayerController_Script_C* Controller, bool Toggle3dDebugSpawnedLoot);
	void ThreedDebug_LootSpawns(class ABP_PlayerController_Script_C* Controller, bool Toggle3dDebugLootSpawns);
	void ThreedDebug_PlayerStarts(class ABP_PlayerController_Script_C* Controller, bool Toggle3dDebugPlayerStarts);
	void ThreedDebug_Player(class ABP_PlayerController_Script_C* Controller, bool Toggle3dDebugPlayer);
	void ToggleHitInfo(class ABP_PlayerController_Script_C* Controller, bool HitInfo, class ABP_BulletManager_C* BulletManager);
	void TradeInResources(class ABP_PlayerController_Script_C* Controller);
	void RetreatAddResources(class ABP_PlayerController_Script_C* Controller, class UClass* Resource, int32 Count);
	void VictoryAddPlayerLootbox(class ABP_PlayerController_Script_C* Controller, class UClass* Class_0, int32 InInt);
	void ThreedDebug_BlockingVolumes(class ABP_PlayerController_Script_C* Controller, bool Toggle_3d_Debug_Blocking_Volumes);
	void Set_Infinite_Bullets(class ABP_PlayerController_Script_C* Controller, bool Infinite_Bullets);
	void AddShelterResourceElapsedTime(int32 TimeToElapse, TArray<class ABP_ShelterImprovementBase_C*>& Shelter_Improvements, class APlayerState* Player_State);
	void ShowTracedActorDisplayName(class ABP_PlayerController_Script_C* Controller, bool ShowTracedActorDisplayName_0);
	void EquipConsumable(class ABP_PlayerController_C* Controller, class UClass* Consumable, bool UnEquip);
	void ShowPlayerCount(class ABP_PlayerController_Script_C* Controller, bool ToggleShowPlayerCount);
	void Toggle_Bullet_Impact_Material(class ABP_PlayerController_Script_C* Controller, bool ToggleBulletMaterialImpact);
	void CreateTestingPawns(class ABP_PlayerController_Script_C* Controller, TArray<class ABP_Character_Script_C*>& AllCharacters);
	void ToggleInfiniteSprint(class ABP_PlayerController_Script_C* Controller, bool NewInfiniteSprintState);
	void SkipLobby(class ABP_PlayerController_Script_C* Controller, int32 TimeToEncounter, int32 TimeToLock);
	void MarkSelfAsTester(class ABP_PlayerController_Script_C* CheatingPC, const struct FLinearColor& MarkerTint);
	void FastMovement(class ABP_PlayerController_Script_C* Controller, float MaxWalkSpeed);
	void SetDevMode(class ABP_PlayerController_Script_C* Controller);
	void BigJumps(class ABP_PlayerController_Script_C* Controller, float NewJumpZVelocity);
	void SkipTutorial(class ABP_PlayerController_Script_C* CheatingPlayer);
	void GetLootData(class AActor* InputPin, class AActor** Actor, TArray<class UClass*>* Weapons, TArray<struct FBackpackItemSlot>* Items);
	void StartSpectating(class ABP_PlayerController_Script_C* Controller);
	void Camera_Free_Look(class ABP_PlayerController_Script_C* Controller);
	void Switch_Fog_of_War(class ABP_PlayerController_Script_C* Controller);
	void Execute_command_line_cheat(const class FString& Command, class ABP_PlayerController_Script_C* Controller);
	void Spawn_All_Loot_Visualization_Nodes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FlameCheatManager_C">();
	}
	static class UBP_FlameCheatManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FlameCheatManager_C>();
	}
};
static_assert(alignof(UBP_FlameCheatManager_C) == 0x000008, "Wrong alignment on UBP_FlameCheatManager_C");
static_assert(sizeof(UBP_FlameCheatManager_C) == 0x000090, "Wrong size on UBP_FlameCheatManager_C");
static_assert(offsetof(UBP_FlameCheatManager_C, UberGraphFrame) == 0x000088, "Member 'UBP_FlameCheatManager_C::UberGraphFrame' has a wrong offset!");

}
