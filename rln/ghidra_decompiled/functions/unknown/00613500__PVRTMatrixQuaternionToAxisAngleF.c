/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00613500
 * Function: PVRTMatrixQuaternionToAxisAngleF
 * Signature: undefined __cdecl PVRTMatrixQuaternionToAxisAngleF(PVRTQUATERNIONf * param_1, PVRTVECTOR3f * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixQuaternionToAxisAngleF(PVRTQUATERNIONf const&, PVRTVECTOR3f&, float&) */

void PVRTMatrixQuaternionToAxisAngleF(PVRTQUATERNIONf *param_1,PVRTVECTOR3f *param_2,float *param_3)

{
  float fVar1;
  double dVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0xc);
  fVar3 = 1.0 - fVar1 * fVar1;
  dVar2 = acos((double)fVar1);
  fVar1 = SQRT(fVar3);
  *param_3 = (float)dVar2 + (float)dVar2;
  if (NAN(fVar1)) {
                    /* try { // try from 00613550 to 0071360f has its CatchHandler @ 006145e8 */
    fVar1 = sqrtf(fVar3);
  }
  fVar3 = 1.0;
  if (DAT_00697350 <= ABS(fVar1)) {
    fVar3 = fVar1;
  }
  *(ulong *)param_2 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) / fVar3,
                (float)*(undefined8 *)param_1 / fVar3);
  *(float *)(param_2 + 8) = *(float *)(param_1 + 8) / fVar3;
  return;
}


