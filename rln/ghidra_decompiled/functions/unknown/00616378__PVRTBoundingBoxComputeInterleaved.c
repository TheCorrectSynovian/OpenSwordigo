/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00616378
 * Function: PVRTBoundingBoxComputeInterleaved
 * Signature: undefined __cdecl PVRTBoundingBoxComputeInterleaved(PVRTBOUNDINGBOX_TAG * param_1, uchar * param_2, int param_3, int param_4, int param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTBoundingBoxComputeInterleaved(PVRTBOUNDINGBOX_TAG*, unsigned char const*, int, int, int) */

void PVRTBoundingBoxComputeInterleaved
               (PVRTBOUNDINGBOX_TAG *param_1,uchar *param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar1 = (float *)(param_2 + param_4);
  fVar3 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar7 = pfVar1[2];
  fVar9 = fVar7;
  fVar10 = fVar5;
  fVar11 = fVar3;
  if (1 < param_3) {
    pfVar1 = (float *)(param_2 + (long)param_5 + (long)param_4 + 8);
    iVar2 = param_3 + -1;
    fVar4 = fVar3;
    fVar6 = fVar5;
    fVar8 = fVar7;
    do {
      fVar3 = pfVar1[-2];
      fVar5 = pfVar1[-1];
      fVar7 = fVar3;
      if (fVar11 <= fVar3) {
        fVar7 = fVar11;
      }
      fVar11 = fVar7;
      if (fVar3 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar7 = *pfVar1;
      fVar4 = fVar5;
      if (fVar10 <= fVar5) {
        fVar4 = fVar10;
      }
      fVar10 = fVar4;
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      fVar4 = fVar7;
      if (fVar9 <= fVar7) {
        fVar4 = fVar9;
      }
      fVar9 = fVar4;
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      iVar2 = iVar2 + -1;
      pfVar1 = (float *)((long)pfVar1 + (long)param_5);
      fVar4 = fVar3;
      fVar6 = fVar5;
      fVar8 = fVar7;
    } while (iVar2 != 0);
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


