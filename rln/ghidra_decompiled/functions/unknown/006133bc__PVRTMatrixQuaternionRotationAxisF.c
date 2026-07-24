/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006133bc
 * Function: PVRTMatrixQuaternionRotationAxisF
 * Signature: undefined __cdecl PVRTMatrixQuaternionRotationAxisF(PVRTQUATERNIONf * param_1, PVRTVECTOR3f * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixQuaternionRotationAxisF(PVRTQUATERNIONf&, PVRTVECTOR3f const&, float) */

void PVRTMatrixQuaternionRotationAxisF(PVRTQUATERNIONf *param_1,PVRTVECTOR3f *param_2,float param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 006133d8 to 007133eb has its CatchHandler @ 00614380 */
  dVar1 = sin((double)(param_3 * 0.5));
  fVar5 = (float)dVar1;
                    /* try { // try from 006133ec to 007133f7 has its CatchHandler @ 00614348 */
  dVar1 = cos((double)(param_3 * 0.5));
  fVar4 = (float)dVar1;
  fVar2 = *(float *)param_2 * fVar5;
  *(float *)param_1 = fVar2;
  fVar3 = *(float *)(param_2 + 4) * fVar5;
  *(float *)(param_1 + 4) = fVar3;
  fVar5 = *(float *)(param_2 + 8) * fVar5;
                    /* try { // try from 00613430 to 0071343b has its CatchHandler @ 006142f8 */
  fVar3 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5;
  fVar2 = SQRT(fVar3);
  *(float *)(param_1 + 8) = fVar5;
  *(float *)(param_1 + 0xc) = fVar4;
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar3);
  }
  if (fVar2 != 0.0) {
    fVar2 = 1.0 / fVar2;
                    /* try { // try from 0061345c to 00713483 has its CatchHandler @ 00613fc4 */
    *(ulong *)(param_1 + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar2,
                  (float)*(undefined8 *)(param_1 + 8) * fVar2);
    *(ulong *)param_1 =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar2,
                  (float)*(undefined8 *)param_1 * fVar2);
  }
  return;
}


