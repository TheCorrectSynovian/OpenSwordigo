/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ba578
 * Function: Caver::GuideTarget::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(GuideTarget * this, GuideTarget * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuideTarget::SaveToProtobufMessage(Caver::Proto::GuideTarget*) const */

void __thiscall Caver::GuideTarget::SaveToProtobufMessage(GuideTarget *this,GuideTarget *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  GuideTarget *pGVar9;
  GuideTarget_LevelObject *this_00;
  
  iVar2 = *(int *)this;
  uVar7 = *(uint *)(param_1 + 0x70);
  if (iVar2 - 1U < 4) {
    uVar7 = uVar7 | 1;
    *(uint *)(param_1 + 0x70) = uVar7;
    *(int *)(param_1 + 0xc) = iVar2;
  }
  puVar3 = PTR__default_name__007e4fe0;
  plVar6 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x70) = uVar7 | 2;
  if (plVar6 == (long *)puVar3) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar6;
  }
  FUN_0066a6a8(plVar6,this + 8);
  puVar3 = PTR__default_level_name__007e6788;
  plVar6 = *(long **)(param_1 + 0x18);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 4;
  if (plVar6 == (long *)puVar3) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x18) = plVar6;
  }
  FUN_0066a6a8(plVar6,this + 0x10);
  puVar3 = PTR__default_object_identifier__007e7520;
  plVar6 = *(long **)(param_1 + 0x20);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 8;
  if (plVar6 == (long *)puVar3) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x20) = plVar6;
  }
  FUN_0066a6a8(plVar6,this + 0x18);
  puVar3 = PTR__default_carry_object_identifier__007e49b0;
  if (*(long *)(*(long *)(this + 0x20) + -0x18) != 0) {
    plVar6 = *(long **)(param_1 + 0x28);
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x10;
    if (plVar6 == (long *)puVar3) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x28) = plVar6;
    }
    FUN_0066a6a8(plVar6,this + 0x20);
  }
  if (this[0x28] != (GuideTarget)0x0) {
    param_1[0x30] = (GuideTarget)0x1;
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x20;
  }
  puVar5 = PTR__default_object_identifier__007e7308;
  puVar4 = PTR__default_level_name__007e6158;
  puVar3 = PTR_DAT_007e5de8;
  pGVar9 = *(GuideTarget **)(this + 0x48);
  if (this + 0x38 != pGVar9) {
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      iVar2 = *(int *)(param_1 + 0x40);
      iVar8 = *(int *)(param_1 + 0x44);
      if (iVar2 < iVar8) {
        *(int *)(param_1 + 0x40) = iVar2 + 1;
        this_00 = *(GuideTarget_LevelObject **)(*(long *)(param_1 + 0x38) + (long)iVar2 * 8);
      }
      else {
        if (iVar8 == *(int *)(param_1 + 0x48)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x38),iVar8 + 1);
          iVar8 = *(int *)(param_1 + 0x44);
        }
        *(int *)(param_1 + 0x44) = iVar8 + 1;
        this_00 = operator_new(0x28);
        Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(this_00);
        iVar2 = *(int *)(param_1 + 0x40);
        *(int *)(param_1 + 0x40) = iVar2 + 1;
        *(GuideTarget_LevelObject **)(*(long *)(param_1 + 0x38) + (long)iVar2 * 8) = this_00;
      }
      plVar6 = *(long **)(this_00 + 0x10);
      *(uint *)(this_00 + 0x20) = *(uint *)(this_00 + 0x20) | 1;
      if (plVar6 == (long *)puVar4) {
        plVar6 = operator_new(8);
        *plVar6 = (long)puVar1;
        *(long **)(this_00 + 0x10) = plVar6;
      }
      FUN_0066a6a8(plVar6,pGVar9 + 0x20);
      plVar6 = *(long **)(this_00 + 0x18);
      *(uint *)(this_00 + 0x20) = *(uint *)(this_00 + 0x20) | 2;
      if (plVar6 == (long *)puVar5) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(puVar3 + 0x18);
        *(long **)(this_00 + 0x18) = plVar6;
      }
      FUN_0066a6a8(plVar6,pGVar9 + 0x28);
      pGVar9 = (GuideTarget *)FUN_0064c6a0(pGVar9);
    } while (this + 0x38 != pGVar9);
  }
  return;
}


