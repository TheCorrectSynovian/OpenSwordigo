/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605b14
 * Function: CPVRTModelPOD::GetCamera
 * Signature: undefined __thiscall GetCamera(CPVRTModelPOD * this, PVRTVECTOR3f * param_1, PVRTVECTOR3f * param_2, PVRTVECTOR3f * param_3, uint param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetCamera(PVRTVECTOR3f&, PVRTVECTOR3f&, PVRTVECTOR3f&, unsigned int) const */

void __thiscall
CPVRTModelPOD::GetCamera
          (CPVRTModelPOD *this,PVRTVECTOR3f *param_1,PVRTVECTOR3f *param_2,PVRTVECTOR3f *param_3,
          uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  SPODNode *pSVar3;
  float *pfVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
                    /* try { // try from 00605b18 to 00705b8f has its CatchHandler @ 006056d0 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pfVar4 = *(float **)(this + 0x80);
  uVar9 = (ulong)(*(int *)(this + 0x4c) + param_4 + *(int *)(this + 0x28));
  pSVar3 = (SPODNode *)(*(long *)(this + 0x50) + uVar9 * 0x60);
  lVar7 = *(long *)(this + 0x20);
  lVar8 = (long)*(int *)pSVar3;
  if (*pfVar4 == 0.0) {
    lVar5 = *(long *)(pfVar4 + 8);
  }
  else {
                    /* try { // try from 00605b90 to 00705bb3 has its CatchHandler @ 00605fb4 */
    if (*pfVar4 != *(float *)(*(long *)(pfVar4 + 4) + uVar9 * 4)) {
                    /* try { // try from 00605c70 to 00705c83 has its CatchHandler @ 00605eb8 */
      GetWorldMatrixNoCache(this,(PVRTMATRIXf *)&local_a0,pSVar3);
      puVar6 = *(undefined4 **)(this + 0x80);
      *(undefined4 *)(*(long *)(puVar6 + 4) + uVar9 * 4) = *puVar6;
                    /* try { // try from 00605c8c to 00705c9f has its CatchHandler @ 00605ed0 */
      puVar1 = (undefined8 *)(*(long *)(puVar6 + 6) + uVar9 * 0x40);
      puVar1[7] = uStack_68;
      puVar1[6] = local_70;
      puVar1[5] = uStack_78;
      puVar1[4] = local_80;
      puVar1[3] = uStack_88;
      puVar1[2] = local_90;
      puVar1[1] = uStack_98;
      *puVar1 = local_a0;
      goto LAB_00605bc0;
    }
    lVar5 = *(long *)(pfVar4 + 6);
  }
  puVar1 = (undefined8 *)(lVar5 + uVar9 * 0x40);
  uStack_68 = puVar1[7];
  local_70 = puVar1[6];
  uStack_78 = puVar1[5];
  local_80 = puVar1[4];
  uStack_88 = puVar1[3];
  local_90 = puVar1[2];
  uStack_98 = puVar1[1];
  local_a0 = *puVar1;
                    /* try { // try from 00605bbc to 00705bcf has its CatchHandler @ 00605f64 */
LAB_00605bc0:
  *(undefined8 *)param_1 = local_70;
  *(float *)(param_1 + 8) = (float)uStack_68;
  *(ulong *)param_2 =
       CONCAT44((float)((ulong)local_70 >> 0x20) - (float)((ulong)local_90 >> 0x20),
                (float)local_70 - (float)local_90);
                    /* try { // try from 00605bf0 to 00705c17 has its CatchHandler @ 00605e88 */
  *(float *)(param_2 + 8) = (float)uStack_68 - (float)uStack_88;
  *(ulong *)param_3 = CONCAT44(-(float)((ulong)local_80 >> 0x20),-(float)local_80);
  *(float *)(param_3 + 8) = -(float)uStack_78;
  lVar5 = *(long *)(lVar7 + lVar8 * 0x18 + 0x10);
  if (lVar5 == 0) {
    fVar10 = *(float *)(lVar7 + lVar8 * 0x18 + 4);
  }
  else {
                    /* try { // try from 00605c18 to 00705c6f has its CatchHandler @ 006056d0 */
    pfVar4 = (float *)(lVar5 + (long)*(int *)(*(long *)(this + 0x80) + 8) * 4);
    fVar10 = *pfVar4;
    fVar10 = fVar10 + *(float *)(*(long *)(this + 0x80) + 4) * (pfVar4[1] - fVar10);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar10);
}


