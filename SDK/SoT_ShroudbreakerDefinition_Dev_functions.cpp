// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShroudbreakerDefinition_Dev_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShroudbreakerDefinition_Dev.ShroudbreakerDefinition_Dev_C.GetIslandForActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class AActor>        Actor                          (Parm)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShroudbreakerDefinition_Dev_C::GetIslandForActor(TAssetPtr<class AActor> Actor, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShroudbreakerDefinition_Dev.ShroudbreakerDefinition_Dev_C.GetIslandForActor"));

	struct
	{
		TAssetPtr<class AActor>        Actor;
		struct FName                   Name;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (Name != nullptr)
		*Name = params.Name;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif