/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061b1e0
 * Function: PVRTMatrixInverseExF
 * Signature: undefined __cdecl PVRTMatrixInverseExF(PVRTMATRIXf * param_1, PVRTMATRIXf * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixInverseExF(PVRTMATRIXf&, PVRTMATRIXf const&) */

void PVRTMatrixInverseExF(PVRTMATRIXf *param_1,PVRTMATRIXf *param_2)

{
  long lVar1;
  float local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  float *local_a8;
  undefined4 *puStack_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_a8 = &local_108;
  puStack_a0 = &local_f4;
  local_98 = &local_e0;
                    /* try { // try from 0061b220 to 0071b2c3 has its CatchHandler @ 0061b220
                       catch() { ... } // from try @ 0061b220 with catch @ 0061b220
                       catch() { ... } // from try @ 0061b620 with catch @ 0061b220
                       catch() { ... } // from try @ 0061bbf8 with catch @ 0061b220
                       catch() { ... } // from try @ 0061c060 with catch @ 0061b220
                       catch() { ... } // from try @ 0061c494 with catch @ 0061b220 */
  local_90 = &local_cc;
  local_108 = 1.0;
  uStack_fc = *(undefined8 *)(param_2 + 8);
  local_104 = *(undefined8 *)param_2;
  local_f4 = 0;
  uStack_e8 = *(undefined8 *)(param_2 + 0x18);
  local_f0 = *(undefined8 *)(param_2 + 0x10);
  local_e0 = 0;
  uStack_d4 = *(undefined8 *)(param_2 + 0x28);
  local_dc = *(undefined8 *)(param_2 + 0x20);
  local_cc = 0;
  uStack_c0 = *(undefined8 *)(param_2 + 0x38);
  local_c8 = *(undefined8 *)(param_2 + 0x30);
  PVRTMatrixLinearEqSolveF(&local_b8,&local_a8,4);
  local_108 = 0.0;
  local_88 = local_b8;
  local_78 = uStack_b4;
  local_68 = local_b0;
  local_58 = uStack_ac;
  uStack_fc = *(undefined8 *)(param_2 + 8);
  local_104 = *(undefined8 *)param_2;
  local_f4 = 0x3f800000;
  uStack_e8 = *(undefined8 *)(param_2 + 0x18);
  local_f0 = *(undefined8 *)(param_2 + 0x10);
  local_e0 = 0;
  uStack_d4 = *(undefined8 *)(param_2 + 0x28);
  local_dc = *(undefined8 *)(param_2 + 0x20);
  local_cc = 0;
  uStack_c0 = *(undefined8 *)(param_2 + 0x38);
  local_c8 = *(undefined8 *)(param_2 + 0x30);
  PVRTMatrixLinearEqSolveF(&local_b8,&local_a8,4);
                    /* try { // try from 0061b2c4 to 0071b2d7 has its CatchHandler @ 0061c0fc */
  local_108 = 0.0;
  fStack_84 = local_b8;
                    /* try { // try from 0061b2d8 to 0071b2eb has its CatchHandler @ 0061c08c */
  uStack_74 = uStack_b4;
  uStack_64 = local_b0;
  uStack_54 = uStack_ac;
  uStack_fc = *(undefined8 *)(param_2 + 8);
  local_104 = *(undefined8 *)param_2;
  local_f4 = 0;
  uStack_e8 = *(undefined8 *)(param_2 + 0x18);
  local_f0 = *(undefined8 *)(param_2 + 0x10);
  local_e0 = 0x3f800000;
                    /* try { // try from 0061b304 to 0071b30f has its CatchHandler @ 0061c15c */
  uStack_d4 = *(undefined8 *)(param_2 + 0x28);
  local_dc = *(undefined8 *)(param_2 + 0x20);
  local_cc = 0;
                    /* try { // try from 0061b310 to 0071b31b has its CatchHandler @ 0061c074 */
  uStack_c0 = *(undefined8 *)(param_2 + 0x38);
  local_c8 = *(undefined8 *)(param_2 + 0x30);
  PVRTMatrixLinearEqSolveF(&local_b8,&local_a8,4);
                    /* try { // try from 0061b31c to 0071b393 has its CatchHandler @ 0061c15c */
  local_108 = 0.0;
  fStack_80 = local_b8;
  uStack_70 = uStack_b4;
  uStack_60 = local_b0;
  uStack_50 = uStack_ac;
  uStack_fc = *(undefined8 *)(param_2 + 8);
  local_104 = *(undefined8 *)param_2;
  local_f4 = 0;
  uStack_e8 = *(undefined8 *)(param_2 + 0x18);
  local_f0 = *(undefined8 *)(param_2 + 0x10);
  local_e0 = 0;
  uStack_d4 = *(undefined8 *)(param_2 + 0x28);
  local_dc = *(undefined8 *)(param_2 + 0x20);
  local_cc = 0x3f800000;
  uStack_c0 = *(undefined8 *)(param_2 + 0x38);
  local_c8 = *(undefined8 *)(param_2 + 0x30);
  PVRTMatrixLinearEqSolveF(&local_b8,&local_a8,4);
  uStack_4c = uStack_ac;
  fStack_7c = local_b8;
  uStack_6c = uStack_b4;
  uStack_5c = local_b0;
  *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_ac,uStack_50);
  *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
  *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_b4,uStack_70);
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_74,local_78);
  *(ulong *)(param_1 + 8) = CONCAT44(local_b8,fStack_80);
  *(ulong *)param_1 = CONCAT44(fStack_84,local_88);
                    /* try { // try from 0061b3a4 to 0071b3ab has its CatchHandler @ 0061c070 */
  *(ulong *)(param_1 + 0x28) = CONCAT44(local_b0,uStack_60);
  *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_64,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


