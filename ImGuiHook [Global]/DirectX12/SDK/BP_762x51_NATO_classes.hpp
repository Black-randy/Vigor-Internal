#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_762x51_NATO

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_762x51_NATO.BP_762x51_NATO_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_762x51_NATO_C final : public AAmmoItem
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_762x51_NATO_C">();
	}
	static class ABP_762x51_NATO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_762x51_NATO_C>();
	}
};
static_assert(alignof(ABP_762x51_NATO_C) == 0x000008, "Wrong alignment on ABP_762x51_NATO_C");
static_assert(sizeof(ABP_762x51_NATO_C) == 0x0003B8, "Wrong size on ABP_762x51_NATO_C");
static_assert(offsetof(ABP_762x51_NATO_C, DefaultSceneRoot) == 0x0003B0, "Member 'ABP_762x51_NATO_C::DefaultSceneRoot' has a wrong offset!");

}
