/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061af7c
 * Function: PVRTMatrixTransposeF
 * Signature: undefined __cdecl PVRTMatrixTransposeF(PVRTMATRIXf * param_1, PVRTMATRIXf * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixTransposeF(PVRTMATRIXf&, PVRTMATRIXf const&) */

void PVRTMatrixTransposeF(PVRTMATRIXf *param_1,PVRTMATRIXf *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar8 = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar9 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar10 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar11 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar12 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar13 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar14 = *(undefined4 *)(param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 0x38);
  uVar15 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  *(undefined4 *)(param_1 + 0x14) = uVar10;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar12;
  *(undefined4 *)(param_1 + 0x1c) = uVar14;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  *(undefined4 *)(param_1 + 0x34) = uVar11;
  *(undefined4 *)(param_1 + 0x38) = uVar13;
  *(undefined4 *)(param_1 + 0x3c) = uVar15;
  return;
}


