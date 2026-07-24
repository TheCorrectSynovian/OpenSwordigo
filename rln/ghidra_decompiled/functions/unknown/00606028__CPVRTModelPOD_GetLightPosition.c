/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00606028
 * Function: CPVRTModelPOD::GetLightPosition
 * Signature: undefined __thiscall GetLightPosition(CPVRTModelPOD * this, uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetLightPosition(unsigned int) const */

void __thiscall CPVRTModelPOD::GetLightPosition(CPVRTModelPOD *this,uint param_1)

{
  undefined8 *puVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pfVar3 = *(float **)(this + 0x80);
  uVar6 = (ulong)(*(int *)(this + 0x4c) + param_1);
  if (*pfVar3 == 0.0) {
    lVar4 = *(long *)(pfVar3 + 8);
  }
  else {
    if (*pfVar3 != *(float *)(*(long *)(pfVar3 + 4) + uVar6 * 4)) {
                    /* catch() { ... } // from try @ 006059c0 with catch @ 006060e4 */
      GetWorldMatrixNoCache
                (this,(PVRTMATRIXf *)&local_80,(SPODNode *)(*(long *)(this + 0x50) + uVar6 * 0x60));
      puVar5 = *(undefined4 **)(this + 0x80);
      *(undefined4 *)(*(long *)(puVar5 + 4) + uVar6 * 4) = *puVar5;
      puVar1 = (undefined8 *)(*(long *)(puVar5 + 6) + uVar6 * 0x40);
      puVar1[7] = uStack_48;
      puVar1[6] = local_50;
      puVar1[5] = uStack_58;
      puVar1[4] = local_60;
      puVar1[3] = uStack_68;
      puVar1[2] = local_70;
      puVar1[1] = uStack_78;
      *puVar1 = local_80;
      goto LAB_006060a4;
    }
    lVar4 = *(long *)(pfVar3 + 6);
  }
  puVar1 = (undefined8 *)(lVar4 + uVar6 * 0x40);
  uStack_48 = puVar1[7];
  local_50 = puVar1[6];
  uStack_58 = puVar1[5];
  local_60 = puVar1[4];
                    /* catch() { ... } // from try @ 006059ec with catch @ 00606094 */
  uStack_68 = puVar1[3];
  local_70 = puVar1[2];
  uStack_78 = puVar1[1];
  local_80 = *puVar1;
LAB_006060a4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50 & 0xffffffff,local_50._4_4_,(undefined4)uStack_48);
}


