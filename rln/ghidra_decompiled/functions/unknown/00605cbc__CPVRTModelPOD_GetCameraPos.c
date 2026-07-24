/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605cbc
 * Function: CPVRTModelPOD::GetCameraPos
 * Signature: undefined __thiscall GetCameraPos(CPVRTModelPOD * this, PVRTVECTOR3f * param_1, PVRTVECTOR3f * param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetCameraPos(PVRTVECTOR3f&, PVRTVECTOR3f&, unsigned int) const */

void __thiscall
CPVRTModelPOD::GetCameraPos
          (CPVRTModelPOD *this,PVRTVECTOR3f *param_1,PVRTVECTOR3f *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  SPODNode *pSVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
                    /* try { // try from 00605cc0 to 00705ce7 has its CatchHandler @ 00605eb8 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00605ce8 to 00705d9b has its CatchHandler @ 006056d0 */
  pfVar3 = *(float **)(this + 0x80);
  uVar10 = (ulong)(*(int *)(this + 0x4c) + param_3 + *(int *)(this + 0x28));
  pSVar8 = (SPODNode *)(*(long *)(this + 0x50) + uVar10 * 0x60);
  if (*pfVar3 == 0.0) {
    lVar4 = *(long *)(pfVar3 + 8);
LAB_00605d34:
    puVar5 = (undefined8 *)(lVar4 + uVar10 * 0x40);
    uStack_58 = puVar5[7];
    local_60 = puVar5[6];
    uStack_68 = puVar5[5];
    local_70 = puVar5[4];
    uStack_78 = puVar5[3];
    local_80 = puVar5[2];
    uStack_88 = puVar5[1];
    local_90 = *puVar5;
  }
  else {
    if (*pfVar3 == *(float *)(*(long *)(pfVar3 + 4) + uVar10 * 4)) {
      lVar4 = *(long *)(pfVar3 + 6);
      goto LAB_00605d34;
    }
    GetWorldMatrixNoCache(this,(PVRTMATRIXf *)&local_90,pSVar8);
    puVar7 = *(undefined4 **)(this + 0x80);
    *(undefined4 *)(*(long *)(puVar7 + 4) + uVar10 * 4) = *puVar7;
    puVar5 = (undefined8 *)(*(long *)(puVar7 + 6) + uVar10 * 0x40);
    puVar5[7] = uStack_58;
    puVar5[6] = local_60;
                    /* catch() { ... } // from try @ 00605bf0 with catch @ 00605e88 */
    puVar5[5] = uStack_68;
    puVar5[4] = local_70;
    puVar5[3] = uStack_78;
    puVar5[2] = local_80;
                    /* catch() { ... } // from try @ 00605a20 with catch @ 00605e94 */
    puVar5[1] = uStack_88;
    *puVar5 = local_90;
  }
  *(undefined8 *)param_1 = local_60;
  *(undefined4 *)(param_1 + 8) = (undefined4)uStack_58;
  lVar4 = (long)*(int *)pSVar8;
  lVar9 = *(long *)(this + 0x20);
  uVar1 = *(uint *)(lVar9 + lVar4 * 0x18);
  if ((int)uVar1 < 0) goto LAB_00605dec;
  pfVar3 = *(float **)(this + 0x80);
  if (*pfVar3 == 0.0) {
    puVar5 = (undefined8 *)(*(long *)(pfVar3 + 8) + (ulong)uVar1 * 0x40);
                    /* try { // try from 00605d9c to 00705dbf has its CatchHandler @ 00606318 */
LAB_00605dbc:
    uStack_58 = puVar5[7];
    local_60 = puVar5[6];
    uStack_68 = puVar5[5];
    local_70 = puVar5[4];
                    /* try { // try from 00605dc8 to 00705ddb has its CatchHandler @ 006062c4 */
    uStack_78 = puVar5[3];
    local_80 = puVar5[2];
    uStack_88 = puVar5[1];
    local_90 = *puVar5;
  }
  else {
    uVar10 = (ulong)uVar1;
    if (*pfVar3 == *(float *)(*(long *)(pfVar3 + 4) + (ulong)uVar1 * 4)) {
      puVar5 = (undefined8 *)(*(long *)(pfVar3 + 6) + uVar10 * 0x40);
      goto LAB_00605dbc;
    }
                    /* catch() { ... } // from try @ 00605914 with catch @ 00605ea0 */
                    /* catch() { ... } // from try @ 00605814 with catch @ 00605eac */
    GetWorldMatrixNoCache
              (this,(PVRTMATRIXf *)&local_90,
               (SPODNode *)(*(long *)(this + 0x50) + (long)(int)uVar1 * 0x60));
                    /* catch() { ... } // from try @ 00605c70 with catch @ 00605eb8
                       catch() { ... } // from try @ 00605cc0 with catch @ 00605eb8 */
    puVar7 = *(undefined4 **)(this + 0x80);
                    /* catch() { ... } // from try @ 00605aa0 with catch @ 00605ec4
                       catch() { ... } // from try @ 00605af0 with catch @ 00605ec4 */
    *(undefined4 *)(*(long *)(puVar7 + 4) + uVar10 * 4) = *puVar7;
                    /* catch() { ... } // from try @ 00605c8c with catch @ 00605ed0 */
    puVar5 = (undefined8 *)(*(long *)(puVar7 + 6) + uVar10 * 0x40);
    puVar5[7] = uStack_58;
    puVar5[6] = local_60;
    puVar5[5] = uStack_68;
    puVar5[4] = local_70;
    puVar5[3] = uStack_78;
    puVar5[2] = local_80;
    puVar5[1] = uStack_88;
    *puVar5 = local_90;
  }
  *(undefined8 *)param_2 = local_60;
  *(undefined4 *)(param_2 + 8) = (undefined4)uStack_58;
LAB_00605dec:
  lVar6 = *(long *)(lVar9 + lVar4 * 0x18 + 0x10);
  if (lVar6 == 0) {
                    /* try { // try from 00605e24 to 00705ef3 has its CatchHandler @ 006056d0 */
    fVar11 = *(float *)(lVar9 + lVar4 * 0x18 + 4);
  }
  else {
                    /* try { // try from 00605dfc to 00705e23 has its CatchHandler @ 006062b8 */
    pfVar3 = (float *)(lVar6 + (long)*(int *)(*(long *)(this + 0x80) + 8) * 4);
    fVar11 = *pfVar3;
    fVar11 = fVar11 + *(float *)(*(long *)(this + 0x80) + 4) * (pfVar3[1] - fVar11);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00605ef4 to 0070635f has its CatchHandler @ 00606368 */
  __stack_chk_fail(fVar11);
}


