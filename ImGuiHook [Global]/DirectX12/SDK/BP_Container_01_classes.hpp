#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Container_01

#include "Basic.hpp"

#include "BP_Container_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Container_01.BP_Container_01_C
// 0x0010 (0x0260 - 0x0250)
class ABP_Container_01_C final : public ABP_Container_Base_C
{
public:
	class UChildActorComponent*                   Rain;                                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObstacleComponent*                     Obstacle;                                          // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Container_01_C">();
	}
	static class ABP_Container_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Container_01_C>();
	}
};
static_assert(alignof(ABP_Container_01_C) == 0x000008, "Wrong alignment on ABP_Container_01_C");
static_assert(sizeof(ABP_Container_01_C) == 0x000260, "Wrong size on ABP_Container_01_C");
static_assert(offsetof(ABP_Container_01_C, Rain) == 0x000250, "Member 'ABP_Container_01_C::Rain' has a wrong offset!");
static_assert(offsetof(ABP_Container_01_C, Obstacle) == 0x000258, "Member 'ABP_Container_01_C::Obstacle' has a wrong offset!");

}
