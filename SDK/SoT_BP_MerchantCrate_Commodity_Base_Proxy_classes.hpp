#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_Commodity_Base_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_Commodity_Base_Proxy.BP_MerchantCrate_Commodity_Base_Proxy_C
// 0x0008 (0x0850 - 0x0848)
class ABP_MerchantCrate_Commodity_Base_Proxy_C : public AMerchantCrateItemProxy
{
public:
	class UGlintComponent*                             Glint;                                                    // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_Commodity_Base_Proxy.BP_MerchantCrate_Commodity_Base_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
