/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061b81c
 * Function: PVRTMatrixVec3NormalizeF
 * Signature: undefined __cdecl PVRTMatrixVec3NormalizeF(PVRTVECTOR3f * param_1, PVRTVECTOR3f * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixVec3NormalizeF(PVRTVECTOR3f&, PVRTVECTOR3f const&) */

void PVRTMatrixVec3NormalizeF(PVRTVECTOR3f *param_1,PVRTVECTOR3f *param_2)

{
  float fVar1;
  double dVar2;
  double __x;
  
                    /* try { // try from 0061b81c to 0071b827 has its CatchHandler @ 0061c344 */
                    /* try { // try from 0061b82c to 0071b837 has its CatchHandler @ 0061c334 */
  __x = (double)(*(float *)param_2 * *(float *)param_2 +
                 *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
                *(float *)(param_2 + 8) * *(float *)(param_2 + 8));
  dVar2 = SQRT(__x);
  if (NAN(dVar2)) {
    dVar2 = sqrt(__x);
  }
  fVar1 = (float)(1.0 / dVar2);
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar1,
                (float)*(undefined8 *)param_2 * fVar1);
                    /* try { // try from 0061b880 to 0071b8af has its CatchHandler @ 0061c218 */
  *(float *)(param_1 + 8) = *(float *)(param_2 + 8) * fVar1;
  return;
}


