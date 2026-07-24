/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061adcc
 * Function: PVRTMatrixTranslationF
 * Signature: undefined __cdecl PVRTMatrixTranslationF(PVRTMATRIXf * param_1, float param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTMatrixTranslationF(PVRTMATRIXf&, float, float, float) */

void PVRTMatrixTranslationF(PVRTMATRIXf *param_1,float param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(float *)(param_1 + 0x30) = param_2;
  *(float *)(param_1 + 0x34) = param_3;
  uVar4 = _UNK_006837e8;
  uVar3 = _DAT_006837e0;
  uVar2 = _UNK_00683498;
  uVar1 = _DAT_00683490;
  *(float *)(param_1 + 0x38) = param_4;
  uVar6 = _UNK_006837f8;
  uVar5 = _DAT_006837f0;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)param_1 = uVar1;
                    /* try { // try from 0061adf0 to 0071ae17 has its CatchHandler @ 0061ae7c */
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  return;
}


