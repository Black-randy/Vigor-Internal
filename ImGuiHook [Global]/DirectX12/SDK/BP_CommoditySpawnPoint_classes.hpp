#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CommoditySpawnPoint

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CommoditySpawnPoint.BP_CommoditySpawnPoint_C
// 0x0030 (0x02D0 - 0x02A0)
class UBP_CommoditySpawnPoint_C : public UCommoditySpawnPoint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Loot_Insertion_Enabled;                            // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Group_Backup;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         Group_List_Backup;                                 // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_CommoditySpawnPoint(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Disable_Loot_Insertion();
	void Enable_Loot_Insertion();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CommoditySpawnPoint_C">();
	}
	static class UBP_CommoditySpawnPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CommoditySpawnPoint_C>();
	}
};
static_assert(alignof(UBP_CommoditySpawnPoint_C) == 0x000010, "Wrong alignment on UBP_CommoditySpawnPoint_C");
static_assert(sizeof(UBP_CommoditySpawnPoint_C) == 0x0002D0, "Wrong size on UBP_CommoditySpawnPoint_C");
static_assert(offsetof(UBP_CommoditySpawnPoint_C, UberGraphFrame) == 0x0002A0, "Member 'UBP_CommoditySpawnPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CommoditySpawnPoint_C, Loot_Insertion_Enabled) == 0x0002A8, "Member 'UBP_CommoditySpawnPoint_C::Loot_Insertion_Enabled' has a wrong offset!");
static_assert(offsetof(UBP_CommoditySpawnPoint_C, Group_Backup) == 0x0002B0, "Member 'UBP_CommoditySpawnPoint_C::Group_Backup' has a wrong offset!");
static_assert(offsetof(UBP_CommoditySpawnPoint_C, Group_List_Backup) == 0x0002B8, "Member 'UBP_CommoditySpawnPoint_C::Group_List_Backup' has a wrong offset!");

}
