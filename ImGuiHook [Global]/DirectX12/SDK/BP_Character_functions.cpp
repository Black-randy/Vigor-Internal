#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character

#include "Basic.hpp"

#include "BP_Character_classes.hpp"
#include "BP_Character_parameters.hpp"


namespace SDK
{

// Function BP_Character.BP_Character_C.OnTakenDamage__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingActor                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           InstigatingItemClass                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResultSimplified             HitOptimised                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

void ABP_Character_C::OnTakenDamage__DelegateSignature(float DamageAmount, EDamageType DamageType, const class AHumanCharacter* InstigatingActor, class UClass* InstigatingItemClass, const struct FHitResultSimplified& HitOptimised)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "OnTakenDamage__DelegateSignature");

	Params::BP_Character_C_OnTakenDamage__DelegateSignature Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingActor = InstigatingActor;
	Parms.InstigatingItemClass = InstigatingItemClass;
	Parms.HitOptimised = std::move(HitOptimised);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.OnDied__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  DyingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           InstigatingItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Character_C::OnDied__DelegateSignature(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "OnDied__DelegateSignature");

	Params::BP_Character_C_OnDied__DelegateSignature Parms{};

	Parms.DyingCharacter = DyingCharacter;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.InstigatingItem = InstigatingItem;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.Character Unpossesed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::Character_Unpossesed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Character Unpossesed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::ExecuteUbergraph_BP_Character(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ExecuteUbergraph_BP_Character");

	Params::BP_Character_C_ExecuteUbergraph_BP_Character Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.AudioDebug
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::AudioDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "AudioDebug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.OnTakeMeleeDamageOnClient
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  PlayerInstigator                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemCategory                           InstigatingItemCategory                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResultSimplified             HitOptimised                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

void ABP_Character_C::OnTakeMeleeDamageOnClient(const class AHumanCharacter* PlayerInstigator, EItemCategory InstigatingItemCategory, const struct FHitResultSimplified& HitOptimised)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "OnTakeMeleeDamageOnClient");

	Params::BP_Character_C_OnTakeMeleeDamageOnClient Parms{};

	Parms.PlayerInstigator = PlayerInstigator;
	Parms.InstigatingItemCategory = InstigatingItemCategory;
	Parms.HitOptimised = std::move(HitOptimised);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.OnShowHitMarkerOfColor
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   CrosshairScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                           Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::OnShowHitMarkerOfColor(float CrosshairScale, const struct FColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "OnShowHitMarkerOfColor");

	Params::BP_Character_C_OnShowHitMarkerOfColor Parms{};

	Parms.CrosshairScale = CrosshairScale;
	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.InitiateTinnitusEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   EffectStrength                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::InitiateTinnitusEffect(float EffectStrength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "InitiateTinnitusEffect");

	Params::BP_Character_C_InitiateTinnitusEffect Parms{};

	Parms.EffectStrength = EffectStrength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.UpdateConcussionEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Strength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::UpdateConcussionEffect(float Strength, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "UpdateConcussionEffect");

	Params::BP_Character_C_UpdateConcussionEffect Parms{};

	Parms.Strength = Strength;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.UpdateFlashbangEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Strength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::UpdateFlashbangEffect(float Strength, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "UpdateFlashbangEffect");

	Params::BP_Character_C_UpdateFlashbangEffect Parms{};

	Parms.Strength = Strength;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.Debug_SOUND_Gender_Gasmask
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::Debug_SOUND_Gender_Gasmask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Debug_SOUND_Gender_Gasmask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.PlayStaggerSound
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsInstigator                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsVictim                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Character_C::PlayStaggerSound(const bool bIsInstigator, const bool bIsVictim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "PlayStaggerSound");

	Params::BP_Character_C_PlayStaggerSound Parms{};

	Parms.bIsInstigator = bIsInstigator;
	Parms.bIsVictim = bIsVictim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.Adrenaline Sound Mix
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Strength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::Adrenaline_Sound_Mix(float Strength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Adrenaline Sound Mix");

	Params::BP_Character_C_Adrenaline_Sound_Mix Parms{};

	Parms.Strength = Strength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.Spawn Adrenaline Breakpoint VO
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::Spawn_Adrenaline_Breakpoint_VO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Spawn Adrenaline Breakpoint VO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.Stop Adrenaline SFX
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::Stop_Adrenaline_SFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Stop Adrenaline SFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.Start Adrenaline SFX
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::Start_Adrenaline_SFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Start Adrenaline SFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.Update Adrenaline SFX Params
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Strength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::Update_Adrenaline_SFX_Params(float Strength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Update Adrenaline SFX Params");

	Params::BP_Character_C_Update_Adrenaline_SFX_Params Parms{};

	Parms.Strength = Strength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.UpdateAdrenalineDeprivationEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Strength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RemainingTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::UpdateAdrenalineDeprivationEffect(float Strength, float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "UpdateAdrenalineDeprivationEffect");

	Params::BP_Character_C_UpdateAdrenalineDeprivationEffect Parms{};

	Parms.Strength = Strength;
	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.ConsoleToggleCharacterImmortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Invincible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Character_C::ConsoleToggleCharacterImmortal(bool Invincible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ConsoleToggleCharacterImmortal");

	Params::BP_Character_C_ConsoleToggleCharacterImmortal Parms{};

	Parms.Invincible = Invincible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.GesturePlayed
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::GesturePlayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "GesturePlayed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.UpdateStaggerEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Strength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RemainingTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::UpdateStaggerEffect(float Strength, float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "UpdateStaggerEffect");

	Params::BP_Character_C_UpdateStaggerEffect Parms{};

	Parms.Strength = Strength;
	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.ApplyTinnitusEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Effect_Strength                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::ApplyTinnitusEffect(float Effect_Strength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ApplyTinnitusEffect");

	Params::BP_Character_C_ApplyTinnitusEffect Parms{};

	Parms.Effect_Strength = Effect_Strength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.Remove audio mix modifier
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::Remove_audio_mix_modifier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Remove audio mix modifier");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.Delayed On Landed
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::Delayed_On_Landed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Delayed On Landed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      OldController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::ReceiveUnpossessed(class AController* OldController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ReceiveUnpossessed");

	Params::BP_Character_C_ReceiveUnpossessed Parms{};

	Parms.OldController = OldController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Character_C::OnLanded(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "OnLanded");

	Params::BP_Character_C_OnLanded Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.ResetTargetHitIndicationColor
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_C::ResetTargetHitIndicationColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ResetTargetHitIndicationColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.Die
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AItem>                InstigatingItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Character_C::Die(float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, TSubclassOf<class AItem> InstigatingItem, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Die");

	Params::BP_Character_C_Die Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingCharacter = InstigatingCharacter;
	Parms.InstigatingItem = InstigatingItem;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Character_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.OnTakeDamage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  InstigatingActor                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AItem>                InstigatingItemClass                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FHitResultSimplified             HitOptimised                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// TArray<TSubclassOf<class AItem>>        AffectedItems                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper)

void ABP_Character_C::OnTakeDamage(float DamageAmount, EDamageType DamageType, const class AHumanCharacter* InstigatingActor, TSubclassOf<class AItem> InstigatingItemClass, const struct FHitResultSimplified& HitOptimised, const TArray<TSubclassOf<class AItem>>& AffectedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "OnTakeDamage");

	Params::BP_Character_C_OnTakeDamage Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatingActor = InstigatingActor;
	Parms.InstigatingItemClass = InstigatingItemClass;
	Parms.HitOptimised = std::move(HitOptimised);
	Parms.AffectedItems = std::move(AffectedItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.OnOtherPlayerHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  Victim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AItem>                InstigatingItemClass                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<TSubclassOf<class AItem>>        AffectedItems                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper)

void ABP_Character_C::OnOtherPlayerHit(float DamageAmount, EDamageType DamageType, class AHumanCharacter* Victim, TSubclassOf<class AItem> InstigatingItemClass, const struct FHitResult& HitResult, const TArray<TSubclassOf<class AItem>>& AffectedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "OnOtherPlayerHit");

	Params::BP_Character_C_OnOtherPlayerHit Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.Victim = Victim;
	Parms.InstigatingItemClass = InstigatingItemClass;
	Parms.HitResult = std::move(HitResult);
	Parms.AffectedItems = std::move(AffectedItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.ShowBloodEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  HitCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitImpactPoint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::ShowBloodEvent(class AHumanCharacter* HitCharacter, class USceneComponent* HitComponent, const struct FVector& HitImpactPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ShowBloodEvent");

	Params::BP_Character_C_ShowBloodEvent Parms{};

	Parms.HitCharacter = HitCharacter;
	Parms.HitComponent = HitComponent;
	Parms.HitImpactPoint = std::move(HitImpactPoint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ReceivePossessed");

	Params::BP_Character_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ReceiveTick");

	Params::BP_Character_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.SetupCameraMatConsts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SetupCameraMatConsts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "SetupCameraMatConsts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.ShowBloodFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Hit_Character                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  Hit_Component                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Hit_Impact_Point                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::ShowBloodFunction(class AHumanCharacter* Hit_Character, class USceneComponent* Hit_Component, const struct FVector& Hit_Impact_Point)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ShowBloodFunction");

	Params::BP_Character_C_ShowBloodFunction Parms{};

	Parms.Hit_Character = Hit_Character;
	Parms.Hit_Component = Hit_Component;
	Parms.Hit_Impact_Point = std::move(Hit_Impact_Point);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.SetStaminaHandlers
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::SetStaminaHandlers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "SetStaminaHandlers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.PlayHitIndicationSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DamageAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHumanCharacter*                  Victim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// EDamageType                             DamageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Instigating_ItemClass                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::PlayHitIndicationSound(float DamageAmount, class AHumanCharacter* Victim, const struct FHitResult& HitResult, EDamageType DamageType, class UClass* Instigating_ItemClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "PlayHitIndicationSound");

	Params::BP_Character_C_PlayHitIndicationSound Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.Victim = Victim;
	Parms.HitResult = std::move(HitResult);
	Parms.DamageType = DamageType;
	Parms.Instigating_ItemClass = Instigating_ItemClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.PlayWeightedCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           X                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Y                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Z                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveVector*                     Weights                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   T                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::PlayWeightedCameraShake(class UClass* X, class UClass* Y, class UClass* Z, class UCurveVector* Weights, float T)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "PlayWeightedCameraShake");

	Params::BP_Character_C_PlayWeightedCameraShake Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.Weights = Weights;
	Parms.T = T;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.Is Damage Absorbed
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>                   Affected_Items                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Damage_Absorbed                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Character_C::Is_Damage_Absorbed(TArray<class UClass*>& Affected_Items, bool* Damage_Absorbed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "Is Damage Absorbed");

	Params::BP_Character_C_Is_Damage_Absorbed Parms{};

	Parms.Affected_Items = std::move(Affected_Items);

	UObject::ProcessEvent(Func, &Parms);

	Affected_Items = std::move(Parms.Affected_Items);

	if (Damage_Absorbed != nullptr)
		*Damage_Absorbed = Parms.Damage_Absorbed;
}


// Function BP_Character.BP_Character_C.AllowPlayDeathHitSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::AllowPlayDeathHitSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "AllowPlayDeathHitSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character.BP_Character_C.GetCrosshairUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Crosshair_C*                  AsUI_Crosshair                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::GetCrosshairUI(class UUI_Crosshair_C** AsUI_Crosshair)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "GetCrosshairUI");

	Params::BP_Character_C_GetCrosshairUI Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsUI_Crosshair != nullptr)
		*AsUI_Crosshair = Parms.AsUI_Crosshair;
}


// Function BP_Character.BP_Character_C.ShowHitMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ModifiedDamage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CrosshairScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_C::ShowHitMarker(bool ModifiedDamage, float CrosshairScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "ShowHitMarker");

	Params::BP_Character_C_ShowHitMarker Parms{};

	Parms.ModifiedDamage = ModifiedDamage;
	Parms.CrosshairScale = CrosshairScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character.BP_Character_C.HideHitMarker
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_C::HideHitMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_C", "HideHitMarker");

	UObject::ProcessEvent(Func, nullptr);
}

}

