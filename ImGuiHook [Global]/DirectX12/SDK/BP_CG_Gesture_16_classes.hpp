#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CG_Gesture_16

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CG_Gesture_16.BP_CG_Gesture_16_C
// 0x0008 (0x0408 - 0x0400)
class ABP_CG_Gesture_16_C final : public ACustomizationGesture
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CG_Gesture_16_C">();
	}
	static class ABP_CG_Gesture_16_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CG_Gesture_16_C>();
	}
};
static_assert(alignof(ABP_CG_Gesture_16_C) == 0x000008, "Wrong alignment on ABP_CG_Gesture_16_C");
static_assert(sizeof(ABP_CG_Gesture_16_C) == 0x000408, "Wrong size on ABP_CG_Gesture_16_C");
static_assert(offsetof(ABP_CG_Gesture_16_C, DefaultSceneRoot) == 0x000400, "Member 'ABP_CG_Gesture_16_C::DefaultSceneRoot' has a wrong offset!");

}

