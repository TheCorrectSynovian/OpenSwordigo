/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605ef8
 * Function: CPVRTModelPOD::GetLight
 * Signature: undefined __thiscall GetLight(CPVRTModelPOD * this, PVRTVECTOR3f * param_1, PVRTVECTOR3f * param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetLight(PVRTVECTOR3f&, PVRTVECTOR3f&, unsigned int) const */

void __thiscall
CPVRTModelPOD::GetLight
          (CPVRTModelPOD *this,PVRTVECTOR3f *param_1,PVRTVECTOR3f *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pfVar3 = *(float **)(this + 0x80);
  uVar6 = (ulong)(*(int *)(this + 0x4c) + param_3);
  if (*pfVar3 == 0.0) {
    lVar4 = *(long *)(pfVar3 + 8);
  }
  else {
    if (*pfVar3 != *(float *)(*(long *)(pfVar3 + 4) + uVar6 * 4)) {
      GetWorldMatrixNoCache
                (this,(PVRTMATRIXf *)&local_90,(SPODNode *)(*(long *)(this + 0x50) + uVar6 * 0x60));
      puVar5 = *(undefined4 **)(this + 0x80);
      *(undefined4 *)(*(long *)(puVar5 + 4) + uVar6 * 4) = *puVar5;
                    /* catch() { ... } // from try @ 00605abc with catch @ 00606000 */
      puVar1 = (undefined8 *)(*(long *)(puVar5 + 6) + uVar6 * 0x40);
      puVar1[7] = uStack_58;
      puVar1[6] = local_60;
      puVar1[5] = uStack_68;
      puVar1[4] = local_70;
      puVar1[3] = uStack_78;
      puVar1[2] = local_80;
      puVar1[1] = uStack_88;
      *puVar1 = local_90;
      goto LAB_00605f80;
    }
    lVar4 = *(long *)(pfVar3 + 6);
  }
  puVar1 = (undefined8 *)(lVar4 + uVar6 * 0x40);
  uStack_58 = puVar1[7];
  local_60 = puVar1[6];
                    /* catch() { ... } // from try @ 00605bbc with catch @ 00605f64 */
  uStack_68 = puVar1[5];
  local_70 = puVar1[4];
  uStack_78 = puVar1[3];
  local_80 = puVar1[2];
  uStack_88 = puVar1[1];
  local_90 = *puVar1;
LAB_00605f80:
  *(undefined8 *)param_1 = local_60;
  *(undefined4 *)(param_1 + 8) = (undefined4)uStack_58;
  *(ulong *)param_2 = CONCAT44(-(float)((ulong)local_80 >> 0x20),-(float)local_80);
  *(float *)(param_2 + 8) = -(float)uStack_78;
                    /* catch() { ... } // from try @ 00605b90 with catch @ 00605fb4 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


