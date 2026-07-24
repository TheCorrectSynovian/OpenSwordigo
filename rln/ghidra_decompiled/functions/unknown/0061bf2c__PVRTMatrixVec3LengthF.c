/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061bf2c
 * Function: PVRTMatrixVec3LengthF
 * Signature: undefined __cdecl PVRTMatrixVec3LengthF(PVRTVECTOR3f * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixVec3LengthF(PVRTVECTOR3f const&) */

undefined1  [16] PVRTMatrixVec3LengthF(PVRTVECTOR3f *param_1)

{
  float __x;
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
                    /* catch() { ... } // from try @ 0061b53c with catch @ 0061bf30 */
  __x = *(float *)param_1 * *(float *)param_1 + *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
        *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  fVar2 = SQRT(__x);
  if (NAN(fVar2)) {
    auVar1._0_4_ = sqrtf(__x);
    auVar1._4_4_ = extraout_var;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416((uint)fVar2);
}


