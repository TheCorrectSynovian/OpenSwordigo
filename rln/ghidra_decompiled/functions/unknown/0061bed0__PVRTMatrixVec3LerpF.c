/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061bed0
 * Function: PVRTMatrixVec3LerpF
 * Signature: undefined __cdecl PVRTMatrixVec3LerpF(PVRTVECTOR3f * param_1, PVRTVECTOR3f * param_2, PVRTVECTOR3f * param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixVec3LerpF(PVRTVECTOR3f&, PVRTVECTOR3f const&, PVRTVECTOR3f const&, float) */

void PVRTMatrixVec3LerpF(PVRTVECTOR3f *param_1,PVRTVECTOR3f *param_2,PVRTVECTOR3f *param_3,
                        float param_4)

{
  float fVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 0061b548 with catch @ 0061bed4 */
  fVar1 = (float)*(undefined8 *)param_2;
  fVar2 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  *(ulong *)param_1 =
       CONCAT44(fVar2 + ((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar2) * param_4,
                fVar1 + ((float)*(undefined8 *)param_3 - fVar1) * param_4);
  *(float *)(param_1 + 8) =
       *(float *)(param_2 + 8) + (*(float *)(param_3 + 8) - *(float *)(param_2 + 8)) * param_4;
  return;
}


