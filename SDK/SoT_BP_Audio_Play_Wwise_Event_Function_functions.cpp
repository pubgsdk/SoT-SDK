// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Audio_Play_Wwise_Event_Function_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Audio_Play_Wwise_Event_Function_C::StopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.StopAudio");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Audio_Play_Wwise_Event_Function_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.PlayAudio");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Audio_Play_Wwise_Event_Function_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
