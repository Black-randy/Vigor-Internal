#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeatherManagerWIthLighting

#include "Basic.hpp"

#include "BP_WeatherManagerWIthLighting_classes.hpp"
#include "BP_WeatherManagerWIthLighting_parameters.hpp"


namespace SDK
{

// Function BP_WeatherManagerWIthLighting.BP_WeatherManagerWithLighting_C.DisableWeather
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeatherManagerWithLighting_C::DisableWeather(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherManagerWithLighting_C", "DisableWeather");

	Params::BP_WeatherManagerWithLighting_C_DisableWeather Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeatherManagerWIthLighting.BP_WeatherManagerWithLighting_C.GetPostProcessComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPostProcessComponent*            OutPostProcessComponent                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherManagerWithLighting_C::GetPostProcessComponent(class UPostProcessComponent** OutPostProcessComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherManagerWithLighting_C", "GetPostProcessComponent");

	Params::BP_WeatherManagerWithLighting_C_GetPostProcessComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPostProcessComponent != nullptr)
		*OutPostProcessComponent = Parms.OutPostProcessComponent;
}

}
