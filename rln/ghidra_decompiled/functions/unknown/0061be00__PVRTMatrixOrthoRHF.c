/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061be00
 * Function: PVRTMatrixOrthoRHF
 * Signature: undefined __cdecl PVRTMatrixOrthoRHF(PVRTMATRIXf * param_1, float param_2, float param_3, float param_4, float param_5, bool param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTMatrixOrthoRHF(PVRTMATRIXf&, float, float, float, float, bool) */

void PVRTMatrixOrthoRHF(PVRTMATRIXf *param_1,float param_2,float param_3,float param_4,float param_5
                       ,bool param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  uVar3 = _UNK_00683808;
  uVar2 = _DAT_00683800;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(float *)param_1 = 2.0 / param_2;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(float *)(param_1 + 0x14) = 2.0 / param_3;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(float *)(param_1 + 0x28) = 1.0 / (param_4 - param_5);
  *(float *)(param_1 + 0x2c) = param_4 / (param_4 - param_5);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  if (param_6) {
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    local_80 = *(undefined8 *)(param_1 + 0x30);
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    local_90 = *(undefined8 *)(param_1 + 0x20);
    uStack_98 = *(undefined8 *)(param_1 + 0x18);
    local_a0 = *(undefined8 *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 0061b430 with catch @ 0061be94 */
                    /* catch() { ... } // from try @ 0061b494 with catch @ 0061be98 */
    uStack_a8 = *(undefined8 *)(param_1 + 8);
    local_b0 = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 0061b570 with catch @ 0061be9c */
    uStack_68 = _UNK_0069c1b8;
    local_70 = _DAT_0069c1b0;
    uStack_58 = _UNK_0069c1c8;
    uStack_60 = _DAT_0069c1c0;
    uStack_48 = _UNK_006837f8;
    local_50 = _DAT_006837f0;
    uStack_38 = uVar3;
    uStack_40 = uVar2;
    PVRTMatrixMultiplyF(param_1,(PVRTMATRIXf *)&local_70,(PVRTMATRIXf *)&local_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


