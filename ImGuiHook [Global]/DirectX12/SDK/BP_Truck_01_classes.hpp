#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Truck_01

#include "Basic.hpp"

#include "BP_TruckLootable_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Truck_01.BP_Truck_01_C
// 0x0010 (0x0720 - 0x0710)
class ABP_Truck_01_C final : public ABP_TruckLootable_Base_C
{
public:
	class UObstacleComponent*                     Obstacle;                                          // 0x0710(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Truck_01_C">();
	}
	static class ABP_Truck_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Truck_01_C>();
	}
};
static_assert(alignof(ABP_Truck_01_C) == 0x000010, "Wrong alignment on ABP_Truck_01_C");
static_assert(sizeof(ABP_Truck_01_C) == 0x000720, "Wrong size on ABP_Truck_01_C");
static_assert(offsetof(ABP_Truck_01_C, Obstacle) == 0x000710, "Member 'ABP_Truck_01_C::Obstacle' has a wrong offset!");

}
