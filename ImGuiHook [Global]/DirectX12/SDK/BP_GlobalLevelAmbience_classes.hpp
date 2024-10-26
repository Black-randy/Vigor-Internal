#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalLevelAmbience

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GlobalLevelAmbience.BP_GlobalLevelAmbience_C
// 0x0010 (0x0288 - 0x0278)
class ABP_GlobalLevelAmbience_C final : public AGlobalLevelAmbienceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         HeavyRainTreshold;                                 // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentRainAmount;                                 // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GlobalLevelAmbience(int32 EntryPoint);
	void AdjustWeather(float CurrentRainAmount_0, float CurrentWindIntensity, const struct FVector& CurrentWindDirection, float CurrentWetnessAmount);
	void AdjustRainIntensity(float CurrentRainAmount_0, float CurrentWetnessAmount);
	void Play_Thunder_Ambience();
	void Wait_For_Thunder();
	void ReceiveBeginPlay();
	void SetHeavyRain(bool HeavyRain);
	void AdjustWindDirection(const struct FVector& CurrentWindDirection);
	void AdjustWindIntensity(float CurrentWindIntensity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GlobalLevelAmbience_C">();
	}
	static class ABP_GlobalLevelAmbience_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GlobalLevelAmbience_C>();
	}
};
static_assert(alignof(ABP_GlobalLevelAmbience_C) == 0x000008, "Wrong alignment on ABP_GlobalLevelAmbience_C");
static_assert(sizeof(ABP_GlobalLevelAmbience_C) == 0x000288, "Wrong size on ABP_GlobalLevelAmbience_C");
static_assert(offsetof(ABP_GlobalLevelAmbience_C, UberGraphFrame) == 0x000278, "Member 'ABP_GlobalLevelAmbience_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GlobalLevelAmbience_C, HeavyRainTreshold) == 0x000280, "Member 'ABP_GlobalLevelAmbience_C::HeavyRainTreshold' has a wrong offset!");
static_assert(offsetof(ABP_GlobalLevelAmbience_C, CurrentRainAmount) == 0x000284, "Member 'ABP_GlobalLevelAmbience_C::CurrentRainAmount' has a wrong offset!");

}

