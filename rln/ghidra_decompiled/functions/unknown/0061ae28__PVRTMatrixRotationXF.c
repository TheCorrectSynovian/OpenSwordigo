/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ae28
 * Function: PVRTMatrixRotationXF
 * Signature: undefined __cdecl PVRTMatrixRotationXF(PVRTMATRIXf * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTMatrixRotationXF(PVRTMATRIXf&, float) */

void PVRTMatrixRotationXF(PVRTMATRIXf *param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
                    /* catch() { ... } // from try @ 0061abd4 with catch @ 0061ae2c */
  dVar3 = cos((double)param_2);
                    /* try { // try from 0061ae50 to 0071b0e7 has its CatchHandler @ 0061b0f0 */
  dVar4 = sin((double)param_2);
  uVar2 = _UNK_00683498;
  uVar1 = _DAT_00683490;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(float *)(param_1 + 0x24) = (float)dVar4;
  *(float *)(param_1 + 0x28) = (float)dVar3;
                    /* catch() { ... } // from try @ 0061adf0 with catch @ 0061ae7c */
  *(float *)(param_1 + 0x14) = (float)dVar3;
  *(float *)(param_1 + 0x18) = -(float)dVar4;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)param_1 = uVar1;
                    /* catch() { ... } // from try @ 0061ada8 with catch @ 0061ae84 */
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
                    /* catch() { ... } // from try @ 0061ad60 with catch @ 0061ae94 */
  return;
}


