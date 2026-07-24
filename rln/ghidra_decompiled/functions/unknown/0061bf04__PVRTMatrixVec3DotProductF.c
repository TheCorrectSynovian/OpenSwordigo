/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061bf04
 * Function: PVRTMatrixVec3DotProductF
 * Signature: undefined __cdecl PVRTMatrixVec3DotProductF(PVRTVECTOR3f * param_1, PVRTVECTOR3f * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixVec3DotProductF(PVRTVECTOR3f const&, PVRTVECTOR3f const&) */

float PVRTMatrixVec3DotProductF(PVRTVECTOR3f *param_1,PVRTVECTOR3f *param_2)

{
  return *(float *)param_1 * *(float *)param_2 +
         (float)*(undefined8 *)(param_1 + 4) * (float)*(undefined8 *)(param_2 + 4) +
         (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) *
         (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
}


