#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ocean_Flame

#include "Basic.hpp"

#include "BP_Ocean_Flame_classes.hpp"
#include "BP_Ocean_Flame_parameters.hpp"


namespace SDK
{

// Function BP_Ocean_Flame.BP_Ocean_Flame_C.ExecuteUbergraph_BP_Ocean_Flame
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ocean_Flame_C::ExecuteUbergraph_BP_Ocean_Flame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ocean_Flame_C", "ExecuteUbergraph_BP_Ocean_Flame");

	Params::BP_Ocean_Flame_C_ExecuteUbergraph_BP_Ocean_Flame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ocean_Flame.BP_Ocean_Flame_C.SetNetworkOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ocean_Flame_C::SetNetworkOffset(float Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ocean_Flame_C", "SetNetworkOffset");

	Params::BP_Ocean_Flame_C_SetNetworkOffset Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ocean_Flame.BP_Ocean_Flame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ocean_Flame_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ocean_Flame_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ocean_Flame.BP_Ocean_Flame_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_Flame_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ocean_Flame_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ocean_Flame.BP_Ocean_Flame_C.Create Wave Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_Flame_C::Create_Wave_Set()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ocean_Flame_C", "Create Wave Set");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ocean_Flame.BP_Ocean_Flame_C.Set Display Parameters
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_Flame_C::Set_Display_Parameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ocean_Flame_C", "Set Display Parameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ocean_Flame.BP_Ocean_Flame_C.Set Global Parameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_Flame_C::Set_Global_Parameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ocean_Flame_C", "Set Global Parameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ocean_Flame.BP_Ocean_Flame_C.GetOceanPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WorldLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Output1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ocean_Flame_C::GetOceanPoint(const struct FVector& WorldLocation, struct FVector* Output1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ocean_Flame_C", "GetOceanPoint");

	Params::BP_Ocean_Flame_C_GetOceanPoint Parms{};

	Parms.WorldLocation = std::move(WorldLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (Output1 != nullptr)
		*Output1 = std::move(Parms.Output1);
}


// Function BP_Ocean_Flame.BP_Ocean_Flame_C.Gerstner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          WorldPosition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          WaveDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Wavelength                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   WaveSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   WaveAmplitude                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   WaveSteepness                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumWaves                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   WavePointX                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   WavePointY                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   WavePointZ                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ocean_Flame_C::Gerstner(const struct FVector& WorldPosition, const struct FVector& WaveDirection, float Wavelength, float WaveSpeed, float WaveAmplitude, float WaveSteepness, int32 NumWaves, float* WavePointX, float* WavePointY, float* WavePointZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ocean_Flame_C", "Gerstner");

	Params::BP_Ocean_Flame_C_Gerstner Parms{};

	Parms.WorldPosition = std::move(WorldPosition);
	Parms.WaveDirection = std::move(WaveDirection);
	Parms.Wavelength = Wavelength;
	Parms.WaveSpeed = WaveSpeed;
	Parms.WaveAmplitude = WaveAmplitude;
	Parms.WaveSteepness = WaveSteepness;
	Parms.NumWaves = NumWaves;

	UObject::ProcessEvent(Func, &Parms);

	if (WavePointX != nullptr)
		*WavePointX = Parms.WavePointX;

	if (WavePointY != nullptr)
		*WavePointY = Parms.WavePointY;

	if (WavePointZ != nullptr)
		*WavePointZ = Parms.WavePointZ;
}

}
