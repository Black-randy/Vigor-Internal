#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeatherSensitiveSound

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_WeatherSensitiveSound.BP_WeatherSensitiveSound_C.Initialize
// 0x0030 (0x0030 - 0x0000)
struct BP_WeatherSensitiveSound_C_Initialize final
{
public:
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeatherSensitiveSound_C_Initialize) == 0x000008, "Wrong alignment on BP_WeatherSensitiveSound_C_Initialize");
static_assert(sizeof(BP_WeatherSensitiveSound_C_Initialize) == 0x000030, "Wrong size on BP_WeatherSensitiveSound_C_Initialize");
static_assert(offsetof(BP_WeatherSensitiveSound_C_Initialize, CallFunc_BooleanAND_ReturnValue) == 0x000000, "Member 'BP_WeatherSensitiveSound_C_Initialize::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_Initialize, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'BP_WeatherSensitiveSound_C_Initialize::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_Initialize, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'BP_WeatherSensitiveSound_C_Initialize::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_Initialize, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'BP_WeatherSensitiveSound_C_Initialize::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_Initialize, CallFunc_Not_PreBool_ReturnValue_1) == 0x000029, "Member 'BP_WeatherSensitiveSound_C_Initialize::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_Initialize, CallFunc_BooleanAND_ReturnValue_1) == 0x00002A, "Member 'BP_WeatherSensitiveSound_C_Initialize::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function BP_WeatherSensitiveSound.BP_WeatherSensitiveSound_C.HandleRainChange
// 0x000C (0x000C - 0x0000)
struct BP_WeatherSensitiveSound_C_HandleRainChange final
{
public:
	float                                         RainAmount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WetnessAmount;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRaining;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeatherSensitiveSound_C_HandleRainChange) == 0x000004, "Wrong alignment on BP_WeatherSensitiveSound_C_HandleRainChange");
static_assert(sizeof(BP_WeatherSensitiveSound_C_HandleRainChange) == 0x00000C, "Wrong size on BP_WeatherSensitiveSound_C_HandleRainChange");
static_assert(offsetof(BP_WeatherSensitiveSound_C_HandleRainChange, RainAmount) == 0x000000, "Member 'BP_WeatherSensitiveSound_C_HandleRainChange::RainAmount' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_HandleRainChange, WetnessAmount) == 0x000004, "Member 'BP_WeatherSensitiveSound_C_HandleRainChange::WetnessAmount' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_HandleRainChange, IsRaining) == 0x000008, "Member 'BP_WeatherSensitiveSound_C_HandleRainChange::IsRaining' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_HandleRainChange, CallFunc_BooleanAND_ReturnValue) == 0x000009, "Member 'BP_WeatherSensitiveSound_C_HandleRainChange::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_HandleRainChange, CallFunc_IsPlaying_ReturnValue) == 0x00000A, "Member 'BP_WeatherSensitiveSound_C_HandleRainChange::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");

// Function BP_WeatherSensitiveSound.BP_WeatherSensitiveSound_C.AdjustWindIntensity
// 0x0004 (0x0004 - 0x0000)
struct BP_WeatherSensitiveSound_C_AdjustWindIntensity final
{
public:
	float                                         CurrentWindIntensity;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeatherSensitiveSound_C_AdjustWindIntensity) == 0x000004, "Wrong alignment on BP_WeatherSensitiveSound_C_AdjustWindIntensity");
static_assert(sizeof(BP_WeatherSensitiveSound_C_AdjustWindIntensity) == 0x000004, "Wrong size on BP_WeatherSensitiveSound_C_AdjustWindIntensity");
static_assert(offsetof(BP_WeatherSensitiveSound_C_AdjustWindIntensity, CurrentWindIntensity) == 0x000000, "Member 'BP_WeatherSensitiveSound_C_AdjustWindIntensity::CurrentWindIntensity' has a wrong offset!");

// Function BP_WeatherSensitiveSound.BP_WeatherSensitiveSound_C.AdjustWindDirection
// 0x000C (0x000C - 0x0000)
struct BP_WeatherSensitiveSound_C_AdjustWindDirection final
{
public:
	struct FVector                                CurrentWindDirection;                              // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeatherSensitiveSound_C_AdjustWindDirection) == 0x000004, "Wrong alignment on BP_WeatherSensitiveSound_C_AdjustWindDirection");
static_assert(sizeof(BP_WeatherSensitiveSound_C_AdjustWindDirection) == 0x00000C, "Wrong size on BP_WeatherSensitiveSound_C_AdjustWindDirection");
static_assert(offsetof(BP_WeatherSensitiveSound_C_AdjustWindDirection, CurrentWindDirection) == 0x000000, "Member 'BP_WeatherSensitiveSound_C_AdjustWindDirection::CurrentWindDirection' has a wrong offset!");

// Function BP_WeatherSensitiveSound.BP_WeatherSensitiveSound_C.SetHeavyRain
// 0x0001 (0x0001 - 0x0000)
struct BP_WeatherSensitiveSound_C_SetHeavyRain final
{
public:
	bool                                          HeavyRain;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeatherSensitiveSound_C_SetHeavyRain) == 0x000001, "Wrong alignment on BP_WeatherSensitiveSound_C_SetHeavyRain");
static_assert(sizeof(BP_WeatherSensitiveSound_C_SetHeavyRain) == 0x000001, "Wrong size on BP_WeatherSensitiveSound_C_SetHeavyRain");
static_assert(offsetof(BP_WeatherSensitiveSound_C_SetHeavyRain, HeavyRain) == 0x000000, "Member 'BP_WeatherSensitiveSound_C_SetHeavyRain::HeavyRain' has a wrong offset!");

// Function BP_WeatherSensitiveSound.BP_WeatherSensitiveSound_C.AdjustRainIntensity
// 0x0008 (0x0008 - 0x0000)
struct BP_WeatherSensitiveSound_C_AdjustRainIntensity final
{
public:
	float                                         CurrentRainAmount;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentWetnessAmount;                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeatherSensitiveSound_C_AdjustRainIntensity) == 0x000004, "Wrong alignment on BP_WeatherSensitiveSound_C_AdjustRainIntensity");
static_assert(sizeof(BP_WeatherSensitiveSound_C_AdjustRainIntensity) == 0x000008, "Wrong size on BP_WeatherSensitiveSound_C_AdjustRainIntensity");
static_assert(offsetof(BP_WeatherSensitiveSound_C_AdjustRainIntensity, CurrentRainAmount) == 0x000000, "Member 'BP_WeatherSensitiveSound_C_AdjustRainIntensity::CurrentRainAmount' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_AdjustRainIntensity, CurrentWetnessAmount) == 0x000004, "Member 'BP_WeatherSensitiveSound_C_AdjustRainIntensity::CurrentWetnessAmount' has a wrong offset!");

// Function BP_WeatherSensitiveSound.BP_WeatherSensitiveSound_C.AdjustWeather
// 0x0018 (0x0018 - 0x0000)
struct BP_WeatherSensitiveSound_C_AdjustWeather final
{
public:
	float                                         CurrentRainAmount;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentWindIntensity;                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentWindDirection;                              // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentWetnessAmount;                              // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeatherSensitiveSound_C_AdjustWeather) == 0x000004, "Wrong alignment on BP_WeatherSensitiveSound_C_AdjustWeather");
static_assert(sizeof(BP_WeatherSensitiveSound_C_AdjustWeather) == 0x000018, "Wrong size on BP_WeatherSensitiveSound_C_AdjustWeather");
static_assert(offsetof(BP_WeatherSensitiveSound_C_AdjustWeather, CurrentRainAmount) == 0x000000, "Member 'BP_WeatherSensitiveSound_C_AdjustWeather::CurrentRainAmount' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_AdjustWeather, CurrentWindIntensity) == 0x000004, "Member 'BP_WeatherSensitiveSound_C_AdjustWeather::CurrentWindIntensity' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_AdjustWeather, CurrentWindDirection) == 0x000008, "Member 'BP_WeatherSensitiveSound_C_AdjustWeather::CurrentWindDirection' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_AdjustWeather, CurrentWetnessAmount) == 0x000014, "Member 'BP_WeatherSensitiveSound_C_AdjustWeather::CurrentWetnessAmount' has a wrong offset!");

// Function BP_WeatherSensitiveSound.BP_WeatherSensitiveSound_C.ExecuteUbergraph_BP_WeatherSensitiveSound
// 0x003C (0x003C - 0x0000)
struct BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_CurrentWindIntensity_1;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_CurrentWindDirection_1;               // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_HeavyRain;                            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_CurrentRainAmount_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_CurrentWetnessAmount_1;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_CurrentRainAmount;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_CurrentWindIntensity;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_CurrentWindDirection;                 // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_CurrentWetnessAmount;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound) == 0x000004, "Wrong alignment on BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound");
static_assert(sizeof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound) == 0x00003C, "Wrong size on BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, EntryPoint) == 0x000000, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, K2Node_Event_CurrentWindIntensity_1) == 0x000004, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::K2Node_Event_CurrentWindIntensity_1' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, K2Node_Event_CurrentWindDirection_1) == 0x000008, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::K2Node_Event_CurrentWindDirection_1' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, K2Node_Event_HeavyRain) == 0x000014, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::K2Node_Event_HeavyRain' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, K2Node_Event_CurrentRainAmount_1) == 0x000018, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::K2Node_Event_CurrentRainAmount_1' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, K2Node_Event_CurrentWetnessAmount_1) == 0x00001C, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::K2Node_Event_CurrentWetnessAmount_1' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, K2Node_Event_CurrentRainAmount) == 0x000020, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::K2Node_Event_CurrentRainAmount' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, K2Node_Event_CurrentWindIntensity) == 0x000024, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::K2Node_Event_CurrentWindIntensity' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, K2Node_Event_CurrentWindDirection) == 0x000028, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::K2Node_Event_CurrentWindDirection' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, K2Node_Event_CurrentWetnessAmount) == 0x000034, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::K2Node_Event_CurrentWetnessAmount' has a wrong offset!");
static_assert(offsetof(BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_WeatherSensitiveSound_C_ExecuteUbergraph_BP_WeatherSensitiveSound::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}
