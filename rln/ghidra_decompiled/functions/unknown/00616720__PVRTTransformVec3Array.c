/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00616720
 * Function: PVRTTransformVec3Array
 * Signature: undefined __cdecl PVRTTransformVec3Array(PVRTVECTOR4f * param_1, int param_2, PVRTVECTOR3f * param_3, int param_4, PVRTMATRIXf * param_5, int param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTransformVec3Array(PVRTVECTOR4f*, int, PVRTVECTOR3f const*, int, PVRTMATRIXf const*, int) */

void PVRTTransformVec3Array
               (PVRTVECTOR4f *param_1,int param_2,PVRTVECTOR3f *param_3,int param_4,
               PVRTMATRIXf *param_5,int param_6)

{
  PVRTVECTOR3f *pPVar1;
  PVRTVECTOR4f *pPVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_6) {
    pPVar1 = param_3 + 8;
    pPVar2 = param_1 + 8;
    do {
      fVar3 = *(float *)(pPVar1 + -8);
      fVar4 = *(float *)(pPVar1 + -4);
      fVar5 = *(float *)pPVar1;
      *(float *)(pPVar2 + -8) =
           *(float *)(param_5 + 0x30) +
           *(float *)param_5 * fVar3 + *(float *)(param_5 + 0x10) * fVar4 +
           *(float *)(param_5 + 0x20) * fVar5;
      *(float *)(pPVar2 + -4) =
           *(float *)(param_5 + 0x34) +
           fVar3 * *(float *)(param_5 + 4) + fVar4 * *(float *)(param_5 + 0x14) +
           fVar5 * *(float *)(param_5 + 0x24);
      *(float *)pPVar2 =
           *(float *)(param_5 + 0x38) +
           fVar3 * *(float *)(param_5 + 8) + fVar4 * *(float *)(param_5 + 0x18) +
           fVar5 * *(float *)(param_5 + 0x28);
      param_6 = param_6 + -1;
      pPVar1 = pPVar1 + param_4;
      *(float *)(pPVar2 + 4) =
           *(float *)(param_5 + 0x3c) +
           fVar3 * *(float *)(param_5 + 0xc) + fVar4 * *(float *)(param_5 + 0x1c) +
           fVar5 * *(float *)(param_5 + 0x2c);
      pPVar2 = pPVar2 + param_2;
    } while (param_6 != 0);
  }
  return;
}


