#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineAudioFollower_Generic_01_River

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_SplineAudioFollower_Generic_01_River.BP_SplineAudioFollower_Generic_01_River_C.ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River
// 0x0008 (0x0008 - 0x0000)
struct BP_SplineAudioFollower_Generic_01_River_C_ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SplineAudioFollower_Generic_01_River_C_ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River) == 0x000004, "Wrong alignment on BP_SplineAudioFollower_Generic_01_River_C_ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River");
static_assert(sizeof(BP_SplineAudioFollower_Generic_01_River_C_ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River) == 0x000008, "Wrong size on BP_SplineAudioFollower_Generic_01_River_C_ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River");
static_assert(offsetof(BP_SplineAudioFollower_Generic_01_River_C_ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River, EntryPoint) == 0x000000, "Member 'BP_SplineAudioFollower_Generic_01_River_C_ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SplineAudioFollower_Generic_01_River_C_ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_SplineAudioFollower_Generic_01_River_C_ExecuteUbergraph_BP_SplineAudioFollower_Generic_01_River::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_SplineAudioFollower_Generic_01_River.BP_SplineAudioFollower_Generic_01_River_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SplineAudioFollower_Generic_01_River_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SplineAudioFollower_Generic_01_River_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SplineAudioFollower_Generic_01_River_C_ReceiveTick");
static_assert(sizeof(BP_SplineAudioFollower_Generic_01_River_C_ReceiveTick) == 0x000004, "Wrong size on BP_SplineAudioFollower_Generic_01_River_C_ReceiveTick");
static_assert(offsetof(BP_SplineAudioFollower_Generic_01_River_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SplineAudioFollower_Generic_01_River_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
