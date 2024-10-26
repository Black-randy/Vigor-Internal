#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_TriggerConditionToParticleConfig

#include "Basic.hpp"

#include "E_ParticleTriggerConditions_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "S_ParticleParamArray_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_TriggerConditionToParticleConfig.S_TriggerConditionToParticleConfig
// 0x0090 (0x0090 - 0x0000)
struct FS_TriggerConditionToParticleConfig final
{
public:
	TSoftObjectPtr<class UParticleSystem>         Particlesystemsoftreference_14_8440FA434068AF19D3D7AC9FD6D9377C; // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class USoundBase*                             SoundToTrigger_23_DE6281A94375DD3104310595429A0F12; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<E_ParticleTriggerConditions, struct FS_ParticleParamArray> TriggerConditionToParticleParameters_20_A8BDFFAE47FB36F17EF15D872CAC283D; // 0x0030(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FVector                                BlendInTimeMinusActiveTimeMinusBlendOutTime_30_1A66A62B40810EC1490DCB945B595EAF; // 0x0080(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_TriggerConditionToParticleConfig) == 0x000008, "Wrong alignment on FS_TriggerConditionToParticleConfig");
static_assert(sizeof(FS_TriggerConditionToParticleConfig) == 0x000090, "Wrong size on FS_TriggerConditionToParticleConfig");
static_assert(offsetof(FS_TriggerConditionToParticleConfig, Particlesystemsoftreference_14_8440FA434068AF19D3D7AC9FD6D9377C) == 0x000000, "Member 'FS_TriggerConditionToParticleConfig::Particlesystemsoftreference_14_8440FA434068AF19D3D7AC9FD6D9377C' has a wrong offset!");
static_assert(offsetof(FS_TriggerConditionToParticleConfig, SoundToTrigger_23_DE6281A94375DD3104310595429A0F12) == 0x000028, "Member 'FS_TriggerConditionToParticleConfig::SoundToTrigger_23_DE6281A94375DD3104310595429A0F12' has a wrong offset!");
static_assert(offsetof(FS_TriggerConditionToParticleConfig, TriggerConditionToParticleParameters_20_A8BDFFAE47FB36F17EF15D872CAC283D) == 0x000030, "Member 'FS_TriggerConditionToParticleConfig::TriggerConditionToParticleParameters_20_A8BDFFAE47FB36F17EF15D872CAC283D' has a wrong offset!");
static_assert(offsetof(FS_TriggerConditionToParticleConfig, BlendInTimeMinusActiveTimeMinusBlendOutTime_30_1A66A62B40810EC1490DCB945B595EAF) == 0x000080, "Member 'FS_TriggerConditionToParticleConfig::BlendInTimeMinusActiveTimeMinusBlendOutTime_30_1A66A62B40810EC1490DCB945B595EAF' has a wrong offset!");

}

