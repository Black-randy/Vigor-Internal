#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Firearms_Anims

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Flame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Firearms_Anims.BPI_Firearms_Anims_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Firearms_Anims_C final : public IInterface
{
public:
	void UpdateCharStance(EStance NewStance);
	void UpdateWeaponControllVariables(bool bShouldFoldBipod, bool bIsCurrentlyEquipped);
	void UpdateIsMagazineEmpty(bool bIsEmpty);
	void SetBasicControlVariables();
	void RotateDrum();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Firearms_Anims_C">();
	}
	static class IBPI_Firearms_Anims_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Firearms_Anims_C>();
	}
};
static_assert(alignof(IBPI_Firearms_Anims_C) == 0x000008, "Wrong alignment on IBPI_Firearms_Anims_C");
static_assert(sizeof(IBPI_Firearms_Anims_C) == 0x000028, "Wrong size on IBPI_Firearms_Anims_C");

}

