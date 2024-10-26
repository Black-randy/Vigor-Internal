#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Additive

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Additive.ABP_Additive_C
// 0x1E50 (0x2110 - 0x02C0)
class UABP_Additive_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x02C8(0x0080)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_4;                  // 0x0348(0x00C0)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_10;                     // 0x0408(0x0018)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_9;                      // 0x0420(0x0018)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;                   // 0x0438(0x00A0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x04D8(0x00A0)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_8;                      // 0x0578(0x0018)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x0590(0x00A0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x0630(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x06D0(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x06F8(0x0158)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x0850(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x09A8(0x0028)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_7;                      // 0x09D0(0x0018)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x09E8(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0B40(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x0B68(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0C30(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0D88(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0DB0(0x0028)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_2;                   // 0x0DD8(0x00B0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0E88(0x0028)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_6;                      // 0x0EB0(0x0018)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0EC8(0x0080)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_3;                  // 0x0F48(0x00C0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x1008(0x00A0)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_5;                      // 0x10A8(0x0018)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x10C0(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x1140(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x11E0(0x0080)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x1260(0x00C0)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_4;                      // 0x1320(0x0018)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1338(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x13B8(0x00A0)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x1458(0x00B0)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_3;                      // 0x1508(0x0018)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization_4;                   // 0x1520(0x0070)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization_3;                   // 0x1590(0x0070)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization_2;                   // 0x1600(0x0070)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1670(0x00A0)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization_1;                   // 0x1710(0x0070)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;                     // 0x1780(0x0070)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x17F0(0x00C8)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x18B8(0x0118)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x19D0(0x0030)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x1A00(0x00C0)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_2;                      // 0x1AC0(0x0018)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1AD8(0x00B0)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_4;                      // 0x1B88(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_3;                      // 0x1C00(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_2;                      // 0x1C78(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_1;                      // 0x1CF0(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer;                        // 0x1D68(0x0078)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose_1;                      // 0x1DE0(0x0018)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1DF8(0x0080)()
	struct FAnimNode_RefPose                      AnimGraphNode_IdentityPose;                        // 0x1E78(0x0018)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1E90(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1F50(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x20A8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x20D0(0x0028)()
	bool                                          IsMoving;                                          // 0x20F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EAnimWeaponType                               AnimWeaponType;                                    // 0x20F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStance                                       CurrentStance;                                     // 0x20FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAiming;                                          // 0x20FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Exhausted;                                         // 0x20FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShowPreview;                                       // 0x20FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IdleAdditive;                                      // 0x20FE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OnLadder;                                          // 0x20FF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsInWater;                                         // 0x2100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasaTool;                                          // 0x2101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DoAdditive;                                        // 0x2102(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2103[0x1];                                     // 0x2103(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AdditiveAlpha;                                     // 0x2104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_Additive(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Additive_C">();
	}
	static class UABP_Additive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Additive_C>();
	}
};
static_assert(alignof(UABP_Additive_C) == 0x000010, "Wrong alignment on UABP_Additive_C");
static_assert(sizeof(UABP_Additive_C) == 0x002110, "Wrong size on UABP_Additive_C");
static_assert(offsetof(UABP_Additive_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_Additive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SequencePlayer_5) == 0x0002C8, "Member 'UABP_Additive_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_LayeredBoneBlend_4) == 0x000348, "Member 'UABP_Additive_C::AnimGraphNode_LayeredBoneBlend_4' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose_10) == 0x000408, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose_10' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose_9) == 0x000420, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose_9' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByBool_7) == 0x000438, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByBool_6) == 0x0004D8, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose_8) == 0x000578, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose_8' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByBool_5) == 0x000590, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByBool_4) == 0x000630, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_UseCachedPose_7) == 0x0006D0, "Member 'UABP_Additive_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SaveCachedPose_4) == 0x0006F8, "Member 'UABP_Additive_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SaveCachedPose_3) == 0x000850, "Member 'UABP_Additive_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_UseCachedPose_6) == 0x0009A8, "Member 'UABP_Additive_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose_7) == 0x0009D0, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose_7' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SaveCachedPose_2) == 0x0009E8, "Member 'UABP_Additive_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_UseCachedPose_5) == 0x000B40, "Member 'UABP_Additive_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_TwoWayBlend) == 0x000B68, "Member 'UABP_Additive_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SaveCachedPose_1) == 0x000C30, "Member 'UABP_Additive_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_UseCachedPose_4) == 0x000D88, "Member 'UABP_Additive_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_UseCachedPose_3) == 0x000DB0, "Member 'UABP_Additive_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByEnum_2) == 0x000DD8, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByEnum_2' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_UseCachedPose_2) == 0x000E88, "Member 'UABP_Additive_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose_6) == 0x000EB0, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose_6' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SequencePlayer_4) == 0x000EC8, "Member 'UABP_Additive_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_LayeredBoneBlend_3) == 0x000F48, "Member 'UABP_Additive_C::AnimGraphNode_LayeredBoneBlend_3' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByBool_3) == 0x001008, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose_5) == 0x0010A8, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SequencePlayer_3) == 0x0010C0, "Member 'UABP_Additive_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByBool_2) == 0x001140, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SequencePlayer_2) == 0x0011E0, "Member 'UABP_Additive_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_LayeredBoneBlend_2) == 0x001260, "Member 'UABP_Additive_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose_4) == 0x001320, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SequencePlayer_1) == 0x001338, "Member 'UABP_Additive_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByBool_1) == 0x0013B8, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByEnum_1) == 0x001458, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose_3) == 0x001508, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_Inertialization_4) == 0x001520, "Member 'UABP_Additive_C::AnimGraphNode_Inertialization_4' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_Inertialization_3) == 0x001590, "Member 'UABP_Additive_C::AnimGraphNode_Inertialization_3' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_Inertialization_2) == 0x001600, "Member 'UABP_Additive_C::AnimGraphNode_Inertialization_2' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByBool) == 0x001670, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_Inertialization_1) == 0x001710, "Member 'UABP_Additive_C::AnimGraphNode_Inertialization_1' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_Inertialization) == 0x001780, "Member 'UABP_Additive_C::AnimGraphNode_Inertialization' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_ApplyAdditive) == 0x0017F0, "Member 'UABP_Additive_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SubInput) == 0x0018B8, "Member 'UABP_Additive_C::AnimGraphNode_SubInput' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_Root) == 0x0019D0, "Member 'UABP_Additive_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_LayeredBoneBlend_1) == 0x001A00, "Member 'UABP_Additive_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose_2) == 0x001AC0, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_BlendListByEnum) == 0x001AD8, "Member 'UABP_Additive_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_RandomPlayer_4) == 0x001B88, "Member 'UABP_Additive_C::AnimGraphNode_RandomPlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_RandomPlayer_3) == 0x001C00, "Member 'UABP_Additive_C::AnimGraphNode_RandomPlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_RandomPlayer_2) == 0x001C78, "Member 'UABP_Additive_C::AnimGraphNode_RandomPlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_RandomPlayer_1) == 0x001CF0, "Member 'UABP_Additive_C::AnimGraphNode_RandomPlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_RandomPlayer) == 0x001D68, "Member 'UABP_Additive_C::AnimGraphNode_RandomPlayer' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose_1) == 0x001DE0, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SequencePlayer) == 0x001DF8, "Member 'UABP_Additive_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_IdentityPose) == 0x001E78, "Member 'UABP_Additive_C::AnimGraphNode_IdentityPose' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_LayeredBoneBlend) == 0x001E90, "Member 'UABP_Additive_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_SaveCachedPose) == 0x001F50, "Member 'UABP_Additive_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_UseCachedPose_1) == 0x0020A8, "Member 'UABP_Additive_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimGraphNode_UseCachedPose) == 0x0020D0, "Member 'UABP_Additive_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, IsMoving) == 0x0020F8, "Member 'UABP_Additive_C::IsMoving' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AnimWeaponType) == 0x0020F9, "Member 'UABP_Additive_C::AnimWeaponType' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, CurrentStance) == 0x0020FA, "Member 'UABP_Additive_C::CurrentStance' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, IsAiming) == 0x0020FB, "Member 'UABP_Additive_C::IsAiming' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, Exhausted) == 0x0020FC, "Member 'UABP_Additive_C::Exhausted' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, ShowPreview) == 0x0020FD, "Member 'UABP_Additive_C::ShowPreview' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, IdleAdditive) == 0x0020FE, "Member 'UABP_Additive_C::IdleAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, OnLadder) == 0x0020FF, "Member 'UABP_Additive_C::OnLadder' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, IsInWater) == 0x002100, "Member 'UABP_Additive_C::IsInWater' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, HasaTool) == 0x002101, "Member 'UABP_Additive_C::HasaTool' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, DoAdditive) == 0x002102, "Member 'UABP_Additive_C::DoAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Additive_C, AdditiveAlpha) == 0x002104, "Member 'UABP_Additive_C::AdditiveAlpha' has a wrong offset!");

}

