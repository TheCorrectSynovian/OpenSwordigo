/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061b894
 * Function: PVRTMatrixVec3CrossProductF
 * Signature: undefined __cdecl PVRTMatrixVec3CrossProductF(PVRTVECTOR3f * param_1, PVRTVECTOR3f * param_2, PVRTVECTOR3f * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixVec3CrossProductF(PVRTVECTOR3f&, PVRTVECTOR3f const&, PVRTVECTOR3f const&) */

void PVRTMatrixVec3CrossProductF(PVRTVECTOR3f *param_1,PVRTVECTOR3f *param_2,PVRTVECTOR3f *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_3 + 8);
  fVar4 = *(float *)param_3;
  fVar6 = *(float *)(param_2 + 8);
  *(float *)param_1 = fVar2 * fVar3 - fVar6 * fVar5;
  *(float *)(param_1 + 4) = fVar6 * fVar4 - fVar3 * fVar1;
  *(float *)(param_1 + 8) = fVar5 * fVar1 - fVar2 * fVar4;
                    /* try { // try from 0061b8d0 to 0071b8f7 has its CatchHandler @ 0061c334 */
  return;
}


