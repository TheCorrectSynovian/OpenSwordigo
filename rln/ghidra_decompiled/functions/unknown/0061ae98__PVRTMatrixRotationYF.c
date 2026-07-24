/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ae98
 * Function: PVRTMatrixRotationYF
 * Signature: undefined __cdecl PVRTMatrixRotationYF(PVRTMATRIXf * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTMatrixRotationYF(PVRTMATRIXf&, float) */

void PVRTMatrixRotationYF(PVRTMATRIXf *param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
                    /* catch() { ... } // from try @ 0061ad18 with catch @ 0061aea4 */
                    /* catch() { ... } // from try @ 0061acd0 with catch @ 0061aeb4 */
  dVar3 = cos((double)param_2);
  dVar4 = sin((double)param_2);
  uVar2 = _UNK_006837f8;
  uVar1 = _DAT_006837f0;
                    /* catch() { ... } // from try @ 0061ac88 with catch @ 0061aec4 */
                    /* catch() { ... } // from try @ 0061ac40 with catch @ 0061aed4 */
  *(float *)param_1 = (float)dVar3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
                    /* catch() { ... } // from try @ 0061abf8 with catch @ 0061aee4 */
  *(float *)(param_1 + 0x28) = (float)dVar3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(float *)(param_1 + 8) = (float)dVar4;
  *(float *)(param_1 + 0x20) = -(float)dVar4;
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}


