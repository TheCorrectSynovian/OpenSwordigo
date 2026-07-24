/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061af14
 * Function: PVRTMatrixRotationZF
 * Signature: undefined __cdecl PVRTMatrixRotationZF(PVRTMATRIXf * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTMatrixRotationZF(PVRTMATRIXf&, float) */

void PVRTMatrixRotationZF(PVRTMATRIXf *param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = cos((double)param_2);
  dVar4 = sin((double)param_2);
  *(undefined8 *)(param_1 + 0x38) = 0x3f80000000000000;
  *(float *)(param_1 + 0x10) = (float)dVar4;
  *(float *)(param_1 + 0x14) = (float)dVar3;
  uVar2 = _UNK_00683498;
  uVar1 = _DAT_00683490;
  *(undefined8 *)(param_1 + 8) = 0;
  *(float *)param_1 = (float)dVar3;
  *(float *)(param_1 + 4) = -(float)dVar4;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}


