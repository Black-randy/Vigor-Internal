#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AssaultRifle_08

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_AssaultRifle_08.ABP_AssaultRifle_08_C
// 0x0AB0 (0x0D70 - 0x02C0)
class UABP_AssaultRifle_08_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x02F8(0x0020)()
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0320(0x0830)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x0B50(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0B98(0x0020)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0BB8(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x0C68(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0CB0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0CF8(0x0048)()
	float                                         MagInvisible;                                      // 0x0D40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D44[0x4];                                      // 0x0D44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AssaultRifle_08_C*                  BP_AssaultRifle_08;                                // 0x0D48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VarSetupLoop;                                      // 0x0D50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D51[0x7];                                      // 0x0D51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        PlayerBP;                                          // 0x0D58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldUpdateStance;                                // 0x0D60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EStance                                       CurrentCharStance;                                 // 0x0D61(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_AssaultRifle_08(int32 EntryPoint);
	void InitReferences();
	void CheckIfSkinChanged();
	void CheckIfStanceChanged();
	void RefreshPlayer();
	void RefreshStance();
	void CheckIfPlayerRefIsCorrect();
	void SetStance();
	void InitializeReferences();
	void BlueprintInitializeAnimation();
	void SetupPlayerBPvar();
	void CheckSkin();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_ReloadStart();
	void AnimNotify_MagEject();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_AssaultRifle_08_C">();
	}
	static class UABP_AssaultRifle_08_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_AssaultRifle_08_C>();
	}
};
static_assert(alignof(UABP_AssaultRifle_08_C) == 0x000010, "Wrong alignment on UABP_AssaultRifle_08_C");
static_assert(sizeof(UABP_AssaultRifle_08_C) == 0x000D70, "Wrong size on UABP_AssaultRifle_08_C");
static_assert(offsetof(UABP_AssaultRifle_08_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_AssaultRifle_08_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UABP_AssaultRifle_08_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, AnimGraphNode_ComponentToLocalSpace) == 0x0002F8, "Member 'UABP_AssaultRifle_08_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, AnimGraphNode_RigidBody) == 0x000320, "Member 'UABP_AssaultRifle_08_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, AnimGraphNode_Slot_3) == 0x000B50, "Member 'UABP_AssaultRifle_08_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, AnimGraphNode_LocalToComponentSpace) == 0x000B98, "Member 'UABP_AssaultRifle_08_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, AnimGraphNode_BlendListByEnum) == 0x000BB8, "Member 'UABP_AssaultRifle_08_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, AnimGraphNode_Slot_2) == 0x000C68, "Member 'UABP_AssaultRifle_08_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, AnimGraphNode_Slot_1) == 0x000CB0, "Member 'UABP_AssaultRifle_08_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, AnimGraphNode_Slot) == 0x000CF8, "Member 'UABP_AssaultRifle_08_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, MagInvisible) == 0x000D40, "Member 'UABP_AssaultRifle_08_C::MagInvisible' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, BP_AssaultRifle_08) == 0x000D48, "Member 'UABP_AssaultRifle_08_C::BP_AssaultRifle_08' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, VarSetupLoop) == 0x000D50, "Member 'UABP_AssaultRifle_08_C::VarSetupLoop' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, PlayerBP) == 0x000D58, "Member 'UABP_AssaultRifle_08_C::PlayerBP' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, ShouldUpdateStance) == 0x000D60, "Member 'UABP_AssaultRifle_08_C::ShouldUpdateStance' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_08_C, CurrentCharStance) == 0x000D61, "Member 'UABP_AssaultRifle_08_C::CurrentCharStance' has a wrong offset!");

}
