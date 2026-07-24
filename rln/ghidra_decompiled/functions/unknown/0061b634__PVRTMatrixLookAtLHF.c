/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061b634
 * Function: PVRTMatrixLookAtLHF
 * Signature: undefined __cdecl PVRTMatrixLookAtLHF(PVRTMATRIXf * param_1, PVRTVECTOR3f * param_2, PVRTVECTOR3f * param_3, PVRTVECTOR3f * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTMatrixLookAtLHF(PVRTMATRIXf&, PVRTVECTOR3f const&, PVRTVECTOR3f const&, PVRTVECTOR3f const&)
    */

void PVRTMatrixLookAtLHF(PVRTMATRIXf *param_1,PVRTVECTOR3f *param_2,PVRTVECTOR3f *param_3,
                        PVRTVECTOR3f *param_4)

{
  long lVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  long local_58;
  
                    /* try { // try from 0061b640 to 0071b643 has its CatchHandler @ 0061c16c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar9 = *(float *)param_2 - *(float *)param_3;
  fVar10 = *(float *)(param_2 + 4) - *(float *)(param_3 + 4);
  fVar11 = *(float *)(param_2 + 8) - *(float *)(param_3 + 8);
  dVar4 = (double)(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
  dVar2 = SQRT(dVar4);
  if (NAN(dVar2)) {
    dVar2 = sqrt(dVar4);
  }
  fVar6 = (float)(1.0 / dVar2);
  fVar9 = fVar9 * fVar6;
  fVar10 = fVar10 * fVar6;
  fVar11 = fVar11 * fVar6;
  dVar4 = (double)(*(float *)param_4 * *(float *)param_4 +
                   *(float *)(param_4 + 4) * *(float *)(param_4 + 4) +
                  *(float *)(param_4 + 8) * *(float *)(param_4 + 8));
  dVar2 = SQRT(dVar4);
  if (NAN(dVar2)) {
    dVar2 = sqrt(dVar4);
  }
  fVar3 = *(float *)param_4;
  fVar5 = *(float *)(param_4 + 4);
  fVar7 = *(float *)(param_4 + 8);
  fVar6 = (float)(1.0 / dVar2);
  *(float *)(param_1 + 0x28) = -fVar11;
  fVar8 = fVar10 * fVar7 * fVar6 - fVar11 * fVar5 * fVar6;
  fVar7 = fVar11 * fVar3 * fVar6 - fVar9 * fVar7 * fVar6;
  fVar6 = fVar9 * fVar5 * fVar6 - fVar10 * fVar3 * fVar6;
  *(float *)(param_1 + 8) = -fVar9;
  uStack_98 = _UNK_00683498;
  local_a0 = _DAT_00683490;
                    /* try { // try from 0061b760 to 0071b76b has its CatchHandler @ 0061c354 */
                    /* try { // try from 0061b76c to 0071b773 has its CatchHandler @ 0061c2c4 */
                    /* try { // try from 0061b774 to 0071b77f has its CatchHandler @ 0061c354 */
  *(float *)(param_1 + 0x18) = -fVar10;
  uStack_88 = _UNK_006837e8;
  uStack_90 = _DAT_006837e0;
                    /* try { // try from 0061b784 to 0071b78b has its CatchHandler @ 0061c2c0 */
                    /* try { // try from 0061b78c to 0071b79b has its CatchHandler @ 0061c2bc */
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
                    /* try { // try from 0061b79c to 0071b7af has its CatchHandler @ 0061c2d4 */
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(float *)param_1 = fVar8;
  *(float *)(param_1 + 4) = fVar11 * fVar7 - fVar10 * fVar6;
  *(float *)(param_1 + 0x10) = fVar7;
  *(float *)(param_1 + 0x14) = fVar9 * fVar6 - fVar11 * fVar8;
  *(float *)(param_1 + 0x20) = fVar6;
  *(float *)(param_1 + 0x24) = fVar10 * fVar8 - fVar9 * fVar7;
                    /* try { // try from 0061b7b0 to 0071b7bf has its CatchHandler @ 0061c28c */
  local_70 = -*(float *)param_2;
  fStack_6c = -*(float *)(param_2 + 4);
  local_68 = -*(float *)(param_2 + 8);
                    /* try { // try from 0061b7e0 to 0071b7e3 has its CatchHandler @ 0061c2d4 */
  uStack_78 = _UNK_006837f8;
  local_80 = _DAT_006837f0;
  local_64 = 0x3f800000;
  PVRTMatrixMultiplyF(param_1,(PVRTMATRIXf *)&local_a0,param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0061b800 to 0071b807 has its CatchHandler @ 0061c288 */
                    /* try { // try from 0061b808 to 0071b813 has its CatchHandler @ 0061c344 */
                    /* try { // try from 0061b814 to 0071b81b has its CatchHandler @ 0061c270 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


