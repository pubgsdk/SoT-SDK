#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_gmp_wrld_res_wood1_fruit3special_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gmp_wrld_res_wood1_fruit3special_01_a.gmp_wrld_res_wood1_fruit3special_01_a_C
// 0x0028 (0x04B0 - 0x0488)
class Agmp_wrld_res_wood1_fruit3special_01_a_C : public ACluster
{
public:
	class UStaticMeshComponent*                        Decorator;                                                // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 PlankOfWood;                                              // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 Coconut2;                                                 // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 Coconut;                                                  // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 Pineapple;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass gmp_wrld_res_wood1_fruit3special_01_a.gmp_wrld_res_wood1_fruit3special_01_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
