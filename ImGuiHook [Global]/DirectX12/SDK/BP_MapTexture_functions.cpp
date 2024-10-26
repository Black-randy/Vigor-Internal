#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapTexture

#include "Basic.hpp"

#include "BP_MapTexture_classes.hpp"
#include "BP_MapTexture_parameters.hpp"


namespace SDK
{

// Function BP_MapTexture.BP_MapTexture_C.GetMapOverlayTexture
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameModeStringName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                       OverlayTexture                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapTexture_C::GetMapOverlayTexture(const class FString& GameModeStringName, class UTexture2D** OverlayTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapTexture_C", "GetMapOverlayTexture");

	Params::BP_MapTexture_C_GetMapOverlayTexture Parms{};

	Parms.GameModeStringName = std::move(GameModeStringName);

	UObject::ProcessEvent(Func, &Parms);

	if (OverlayTexture != nullptr)
		*OverlayTexture = Parms.OverlayTexture;
}


// Function BP_MapTexture.BP_MapTexture_C.GetCustomZoomLimits
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameModeStringName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                     LowerLimit                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     UpperLimit                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     StartOffset                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapTexture_C::GetCustomZoomLimits(const class FString& GameModeStringName, struct FLinearColor* LowerLimit, struct FLinearColor* UpperLimit, struct FLinearColor* StartOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MapTexture_C", "GetCustomZoomLimits");

	Params::BP_MapTexture_C_GetCustomZoomLimits Parms{};

	Parms.GameModeStringName = std::move(GameModeStringName);

	UObject::ProcessEvent(Func, &Parms);

	if (LowerLimit != nullptr)
		*LowerLimit = std::move(Parms.LowerLimit);

	if (UpperLimit != nullptr)
		*UpperLimit = std::move(Parms.UpperLimit);

	if (StartOffset != nullptr)
		*StartOffset = std::move(Parms.StartOffset);
}

}

