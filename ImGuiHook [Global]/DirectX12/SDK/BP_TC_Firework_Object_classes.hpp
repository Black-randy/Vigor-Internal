#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_Firework_Object

#include "Basic.hpp"

#include "BP_PlacableTrap_Object_Base_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TC_Firework_Object.BP_TC_Firework_Object_C
// 0x0038 (0x04A0 - 0x0468)
class ABP_TC_Firework_Object_C final : public ABP_PlacableTrap_Object_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_TC_Firework_Object_C;            // 0x0468(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        SpawnPoint;                                        // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               NewVar_0_0;                                        // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BC;                                                // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerOfFireworksSpawn;                             // 0x0490(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         FireworkSpawnedCount;                              // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TC_Firework_Object(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TC_Firework_Object_C">();
	}
	static class ABP_TC_Firework_Object_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TC_Firework_Object_C>();
	}
};
static_assert(alignof(ABP_TC_Firework_Object_C) == 0x000008, "Wrong alignment on ABP_TC_Firework_Object_C");
static_assert(sizeof(ABP_TC_Firework_Object_C) == 0x0004A0, "Wrong size on ABP_TC_Firework_Object_C");
static_assert(offsetof(ABP_TC_Firework_Object_C, UberGraphFrame_BP_TC_Firework_Object_C) == 0x000468, "Member 'ABP_TC_Firework_Object_C::UberGraphFrame_BP_TC_Firework_Object_C' has a wrong offset!");
static_assert(offsetof(ABP_TC_Firework_Object_C, SpawnPoint) == 0x000470, "Member 'ABP_TC_Firework_Object_C::SpawnPoint' has a wrong offset!");
static_assert(offsetof(ABP_TC_Firework_Object_C, NewVar_0_0) == 0x000478, "Member 'ABP_TC_Firework_Object_C::NewVar_0_0' has a wrong offset!");
static_assert(offsetof(ABP_TC_Firework_Object_C, BC) == 0x000480, "Member 'ABP_TC_Firework_Object_C::BC' has a wrong offset!");
static_assert(offsetof(ABP_TC_Firework_Object_C, TimerOfFireworksSpawn) == 0x000490, "Member 'ABP_TC_Firework_Object_C::TimerOfFireworksSpawn' has a wrong offset!");
static_assert(offsetof(ABP_TC_Firework_Object_C, FireworkSpawnedCount) == 0x000498, "Member 'ABP_TC_Firework_Object_C::FireworkSpawnedCount' has a wrong offset!");

}

