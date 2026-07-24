/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ac5c
 * Function: PVRTMatrixIdentityF
 * Signature: undefined __cdecl PVRTMatrixIdentityF(PVRTMATRIXf * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTMatrixIdentityF(PVRTMATRIXf&) */

void PVRTMatrixIdentityF(PVRTMATRIXf *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = _UNK_00683808;
  uVar6 = _DAT_00683800;
  uVar5 = _UNK_006837f8;
  uVar4 = _DAT_006837f0;
  uVar3 = _UNK_006837e8;
  uVar2 = _DAT_006837e0;
  uVar1 = _DAT_00683490;
  *(undefined8 *)(param_1 + 8) = _UNK_00683498;
  *(undefined8 *)param_1 = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  return;
}


