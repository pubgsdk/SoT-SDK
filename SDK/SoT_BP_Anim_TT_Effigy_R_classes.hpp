#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Effigy_R_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_Effigy_R.BP_Anim_TT_Effigy_R_C
// 0x0100 (0x05A0 - 0x04A0)
class UBP_Anim_TT_Effigy_R_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_091096D04CCB61B4458142B5262B6F90;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7C4B2B6D41049C4E9306FEA67D9160A1;      // 0x04F0(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_51CFCBC74DCD845E93759DA08C16F3E2;// 0x0550(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_Effigy_R.BP_Anim_TT_Effigy_R_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_TT_Effigy_R(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif