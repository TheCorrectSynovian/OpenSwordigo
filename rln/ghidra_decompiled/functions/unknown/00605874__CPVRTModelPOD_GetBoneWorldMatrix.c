/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605874
 * Function: CPVRTModelPOD::GetBoneWorldMatrix
 * Signature: undefined __thiscall GetBoneWorldMatrix(CPVRTModelPOD * this, PVRTMATRIXf * param_1, SPODNode * param_2, SPODNode * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetBoneWorldMatrix(PVRTMATRIXf&, SPODNode const&, SPODNode const&) */

void __thiscall
CPVRTModelPOD::GetBoneWorldMatrix
          (CPVRTModelPOD *this,PVRTMATRIXf *param_1,SPODNode *param_2,SPODNode *param_3)

{
  long lVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pfVar2 = *(float **)(this + 0x80);
                    /* try { // try from 006058b4 to 007058d7 has its CatchHandler @ 00606180 */
  fVar8 = *pfVar2;
  pfVar2[0] = 0.0;
  pfVar2[1] = 0.0;
  pfVar2[2] = 0.0;
  puVar3 = (undefined8 *)
           (*(long *)(pfVar2 + 8) +
           (ulong)(uint)((int)((ulong)((long)param_2 - *(long *)(this + 0x50)) >> 5) * -0x55555555)
           * 0x40);
  uVar7 = puVar3[6];
                    /* try { // try from 006058e0 to 007058f3 has its CatchHandler @ 00606130 */
  *(undefined8 *)(param_1 + 0x38) = puVar3[7];
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  uVar7 = puVar3[4];
  *(undefined8 *)(param_1 + 0x28) = puVar3[5];
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  uVar7 = puVar3[2];
  *(undefined8 *)(param_1 + 0x18) = puVar3[3];
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  uVar7 = *puVar3;
  *(undefined8 *)(param_1 + 8) = puVar3[1];
  *(undefined8 *)param_1 = uVar7;
  pfVar2 = *(float **)(this + 0x80);
                    /* try { // try from 00605914 to 0070593b has its CatchHandler @ 00605ea0 */
  uVar5 = ((long)param_3 - *(long *)(this + 0x50) >> 5) * -0x5555555555555555;
  if (*pfVar2 == 0.0) {
    puVar3 = (undefined8 *)(*(long *)(pfVar2 + 8) + (uVar5 & 0xffffffff) * 0x40);
LAB_0060594c:
    uStack_58 = puVar3[7];
    local_60 = puVar3[6];
    uStack_68 = puVar3[5];
    local_70 = puVar3[4];
    uStack_78 = puVar3[3];
    local_80 = puVar3[2];
    uStack_88 = puVar3[1];
    local_90 = *puVar3;
  }
  else {
    uVar6 = uVar5 & 0xffffffff;
                    /* try { // try from 0060593c to 007059bf has its CatchHandler @ 006056d0 */
    if (*pfVar2 == *(float *)(*(long *)(pfVar2 + 4) + (uVar5 & 0xffffffff) * 4)) {
      puVar3 = (undefined8 *)(*(long *)(pfVar2 + 6) + uVar6 * 0x40);
      goto LAB_0060594c;
    }
    GetWorldMatrixNoCache(this,(PVRTMATRIXf *)&local_90,param_3);
    puVar4 = *(undefined4 **)(this + 0x80);
    *(undefined4 *)(*(long *)(puVar4 + 4) + uVar6 * 4) = *puVar4;
    puVar3 = (undefined8 *)(*(long *)(puVar4 + 6) + uVar6 * 0x40);
    puVar3[7] = uStack_58;
    puVar3[6] = local_60;
    puVar3[5] = uStack_68;
    puVar3[4] = local_70;
    puVar3[3] = uStack_78;
    puVar3[2] = local_80;
                    /* try { // try from 00605aa0 to 00705ab3 has its CatchHandler @ 00605ec4 */
    puVar3[1] = uStack_88;
    *puVar3 = local_90;
  }
  PVRTMatrixInverseF((PVRTMATRIXf *)&local_90,(PVRTMATRIXf *)&local_90);
  PVRTMatrixMultiplyF(param_1,param_1,(PVRTMATRIXf *)&local_90);
  if (*(int *)(this + 0x78) == 0) {
    pfVar2 = *(float **)(this + 0x80);
    pfVar2[1] = 0.0;
    pfVar2[2] = 0.0;
  }
  else {
    pfVar2 = *(float **)(this + 0x80);
    pfVar2[2] = (float)(int)fVar8;
    pfVar2[1] = fVar8 - (float)(int)fVar8;
  }
  *pfVar2 = fVar8;
                    /* try { // try from 006059c0 to 007059e3 has its CatchHandler @ 006060e4 */
  uVar5 = ((long)param_3 - *(long *)(this + 0x50) >> 5) * -0x5555555555555555;
  if (fVar8 == 0.0) {
    puVar3 = (undefined8 *)(*(long *)(pfVar2 + 8) + (uVar5 & 0xffffffff) * 0x40);
  }
  else {
                    /* try { // try from 006059ec to 007059ff has its CatchHandler @ 00606094 */
    uVar6 = uVar5 & 0xffffffff;
    if (fVar8 != *(float *)(*(long *)(pfVar2 + 4) + (uVar5 & 0xffffffff) * 4)) {
      GetWorldMatrixNoCache(this,(PVRTMATRIXf *)&local_90,param_3);
                    /* try { // try from 00605abc to 00705acf has its CatchHandler @ 00606000 */
      puVar4 = *(undefined4 **)(this + 0x80);
      *(undefined4 *)(*(long *)(puVar4 + 4) + uVar6 * 4) = *puVar4;
      puVar3 = (undefined8 *)(*(long *)(puVar4 + 6) + uVar6 * 0x40);
      puVar3[7] = uStack_58;
      puVar3[6] = local_60;
      puVar3[5] = uStack_68;
      puVar3[4] = local_70;
      puVar3[3] = uStack_78;
      puVar3[2] = local_80;
                    /* try { // try from 00605af0 to 00705b17 has its CatchHandler @ 00605ec4 */
      puVar3[1] = uStack_88;
      *puVar3 = local_90;
      goto LAB_00605a24;
    }
    puVar3 = (undefined8 *)(*(long *)(pfVar2 + 6) + uVar6 * 0x40);
  }
  uStack_58 = puVar3[7];
  local_60 = puVar3[6];
  uStack_68 = puVar3[5];
  local_70 = puVar3[4];
  uStack_78 = puVar3[3];
  local_80 = puVar3[2];
  uStack_88 = puVar3[1];
  local_90 = *puVar3;
                    /* try { // try from 00605a20 to 00705a47 has its CatchHandler @ 00605e94 */
LAB_00605a24:
  PVRTMatrixMultiplyF(param_1,param_1,(PVRTMATRIXf *)&local_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00605a48 to 00705a9f has its CatchHandler @ 006056d0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


