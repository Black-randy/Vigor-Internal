#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lootbox_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Lootbox_Base.BP_Lootbox_Base_C
// 0x0068 (0x0400 - 0x0398)
class ABP_Lootbox_Base_C : public AItem
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSingleAnimationPlayData               AnimData;                                          // 0x03A0(0x0018)(Edit, BlueprintVisible, NoDestructor)
	struct FSoftObjectPath                        MeshData;                                          // 0x03B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        SoundData;                                         // 0x03D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        MaterialData;                                      // 0x03E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Lootbox_Base_C">();
	}
	static class ABP_Lootbox_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Lootbox_Base_C>();
	}
};
static_assert(alignof(ABP_Lootbox_Base_C) == 0x000008, "Wrong alignment on ABP_Lootbox_Base_C");
static_assert(sizeof(ABP_Lootbox_Base_C) == 0x000400, "Wrong size on ABP_Lootbox_Base_C");
static_assert(offsetof(ABP_Lootbox_Base_C, DefaultSceneRoot) == 0x000398, "Member 'ABP_Lootbox_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Lootbox_Base_C, AnimData) == 0x0003A0, "Member 'ABP_Lootbox_Base_C::AnimData' has a wrong offset!");
static_assert(offsetof(ABP_Lootbox_Base_C, MeshData) == 0x0003B8, "Member 'ABP_Lootbox_Base_C::MeshData' has a wrong offset!");
static_assert(offsetof(ABP_Lootbox_Base_C, SoundData) == 0x0003D0, "Member 'ABP_Lootbox_Base_C::SoundData' has a wrong offset!");
static_assert(offsetof(ABP_Lootbox_Base_C, MaterialData) == 0x0003E8, "Member 'ABP_Lootbox_Base_C::MaterialData' has a wrong offset!");

}
