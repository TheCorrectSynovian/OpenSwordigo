/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006162cc
 * Function: PVRTBoundingBoxCompute
 * Signature: undefined __cdecl PVRTBoundingBoxCompute(PVRTBOUNDINGBOX_TAG * param_1, PVRTVECTOR3f * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTBoundingBoxCompute(PVRTBOUNDINGBOX_TAG*, PVRTVECTOR3f const*, int) */

void PVRTBoundingBoxCompute(PVRTBOUNDINGBOX_TAG *param_1,PVRTVECTOR3f *param_2,int param_3)

{
  PVRTVECTOR3f *pPVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  fVar7 = *(float *)(param_2 + 8);
  fVar9 = fVar7;
  fVar10 = fVar5;
  fVar11 = fVar3;
  if (1 < param_3) {
    lVar2 = (ulong)(uint)param_3 - 1;
    pPVar1 = param_2 + 0x14;
    fVar4 = fVar3;
    fVar6 = fVar5;
    fVar8 = fVar7;
    do {
      fVar3 = *(float *)(pPVar1 + -8);
      fVar5 = *(float *)(pPVar1 + -4);
      fVar7 = fVar3;
                    /* try { // try from 006162fc to 00716303 has its CatchHandler @ 006165b4 */
      if (fVar11 <= fVar3) {
        fVar7 = fVar11;
      }
      fVar11 = fVar7;
      if (fVar3 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar7 = *(float *)pPVar1;
                    /* try { // try from 0061630c to 00716313 has its CatchHandler @ 0061654c */
      fVar4 = fVar5;
      if (fVar10 <= fVar5) {
        fVar4 = fVar10;
      }
                    /* try { // try from 00616314 to 00716327 has its CatchHandler @ 006164f0 */
      fVar10 = fVar4;
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      fVar4 = fVar7;
      if (fVar9 <= fVar7) {
        fVar4 = fVar9;
      }
      fVar9 = fVar4;
                    /* try { // try from 00616328 to 007165d7 has its CatchHandler @ 00616238 */
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      lVar2 = lVar2 + -1;
      pPVar1 = pPVar1 + 0xc;
      fVar4 = fVar3;
      fVar6 = fVar5;
      fVar8 = fVar7;
    } while (lVar2 != 0);
  }
  *(float *)param_1 = fVar11;
  *(float *)(param_1 + 4) = fVar10;
  *(float *)(param_1 + 8) = fVar9;
  *(float *)(param_1 + 0xc) = fVar11;
  *(float *)(param_1 + 0x10) = fVar10;
  *(float *)(param_1 + 0x14) = fVar7;
  *(float *)(param_1 + 0x18) = fVar11;
  *(float *)(param_1 + 0x1c) = fVar5;
  *(float *)(param_1 + 0x20) = fVar9;
  *(float *)(param_1 + 0x24) = fVar11;
  *(float *)(param_1 + 0x28) = fVar5;
  *(float *)(param_1 + 0x2c) = fVar7;
  *(float *)(param_1 + 0x30) = fVar3;
  *(float *)(param_1 + 0x34) = fVar10;
  *(float *)(param_1 + 0x38) = fVar9;
  *(float *)(param_1 + 0x3c) = fVar3;
  *(float *)(param_1 + 0x40) = fVar10;
  *(float *)(param_1 + 0x44) = fVar7;
  *(float *)(param_1 + 0x48) = fVar3;
  *(float *)(param_1 + 0x4c) = fVar5;
  *(float *)(param_1 + 0x50) = fVar9;
  *(float *)(param_1 + 0x54) = fVar3;
  *(float *)(param_1 + 0x58) = fVar5;
  *(float *)(param_1 + 0x5c) = fVar7;
  return;
}


