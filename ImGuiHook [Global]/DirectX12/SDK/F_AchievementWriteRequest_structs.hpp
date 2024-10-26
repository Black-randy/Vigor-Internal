#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_AchievementWriteRequest

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct F_AchievementWriteRequest.F_AchievementWriteRequest
// 0x0018 (0x0018 - 0x0000)
struct FF_AchievementWriteRequest final
{
public:
	class APlayerController*                      PlayerController_6_82EF5CBE4D2119982362CA87693C4ECC; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AchievementName_7_58164BD54ED141A09B670D888D66851C; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ProgressIncrement_15_1285910B46995CF57A1BD2AA03E3889E; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OldProgress_12_63A15EAD46F2A5D8C0547CB4772CD13F;   // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_AchievementWriteRequest) == 0x000008, "Wrong alignment on FF_AchievementWriteRequest");
static_assert(sizeof(FF_AchievementWriteRequest) == 0x000018, "Wrong size on FF_AchievementWriteRequest");
static_assert(offsetof(FF_AchievementWriteRequest, PlayerController_6_82EF5CBE4D2119982362CA87693C4ECC) == 0x000000, "Member 'FF_AchievementWriteRequest::PlayerController_6_82EF5CBE4D2119982362CA87693C4ECC' has a wrong offset!");
static_assert(offsetof(FF_AchievementWriteRequest, AchievementName_7_58164BD54ED141A09B670D888D66851C) == 0x000008, "Member 'FF_AchievementWriteRequest::AchievementName_7_58164BD54ED141A09B670D888D66851C' has a wrong offset!");
static_assert(offsetof(FF_AchievementWriteRequest, ProgressIncrement_15_1285910B46995CF57A1BD2AA03E3889E) == 0x000010, "Member 'FF_AchievementWriteRequest::ProgressIncrement_15_1285910B46995CF57A1BD2AA03E3889E' has a wrong offset!");
static_assert(offsetof(FF_AchievementWriteRequest, OldProgress_12_63A15EAD46F2A5D8C0547CB4772CD13F) == 0x000014, "Member 'FF_AchievementWriteRequest::OldProgress_12_63A15EAD46F2A5D8C0547CB4772CD13F' has a wrong offset!");

}

