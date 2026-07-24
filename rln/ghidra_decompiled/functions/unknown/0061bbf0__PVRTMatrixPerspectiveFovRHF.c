/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061bbf0
 * Function: PVRTMatrixPerspectiveFovRHF
 * Signature: undefined __cdecl PVRTMatrixPerspectiveFovRHF(PVRTMATRIXf * param_1, float param_2, float param_3, float param_4, float param_5, bool param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTMatrixPerspectiveFovRHF(PVRTMATRIXf&, float, float, float, float, bool) */

void PVRTMatrixPerspectiveFovRHF
               (PVRTMATRIXf *param_1,float param_2,float param_3,float param_4,float param_5,
               bool param_6)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
                    /* try { // try from 0061bbf8 to 0071c003 has its CatchHandler @ 0061b220 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar5 = 1.0 / param_3;
  if (!param_6) {
    fVar5 = param_3;
  }
  dVar3 = tan((double)(param_2 * 0.5));
  uVar2 = DAT_00688c10;
  fVar4 = 1.0 / (param_4 - param_5);
  *(float *)(param_1 + 0x14) = 1.0 / (float)dVar3;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(float *)param_1 = (1.0 / (float)dVar3) / fVar5;
  *(float *)(param_1 + 0x28) = (param_4 + param_5) * fVar4;
  *(float *)(param_1 + 0x38) = (param_5 + param_5) * param_4 * fVar4;
  *(undefined8 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_6) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    local_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    local_c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_c8 = *(undefined8 *)(param_1 + 0x18);
    local_d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_d8 = *(undefined8 *)(param_1 + 8);
    local_e0 = *(undefined8 *)param_1;
    uStack_98 = _UNK_0069c1b8;
    local_a0 = _DAT_0069c1b0;
    uStack_88 = _UNK_0069c1c8;
    uStack_90 = _DAT_0069c1c0;
    uStack_78 = _UNK_006837f8;
    local_80 = _DAT_006837f0;
    uStack_68 = _UNK_00683808;
    uStack_70 = _DAT_00683800;
    PVRTMatrixMultiplyF(param_1,(PVRTMATRIXf *)&local_e0,(PVRTMATRIXf *)&local_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


