/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00616c98
 * Function: PVRTTransformBack
 * Signature: undefined __cdecl PVRTTransformBack(PVRTVECTOR4f * param_1, PVRTVECTOR4f * param_2, PVRTMATRIXf * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTransformBack(PVRTVECTOR4f*, PVRTVECTOR4f const*, PVRTMATRIXf const*) */

void PVRTTransformBack(PVRTVECTOR4f *param_1,PVRTVECTOR4f *param_2,PVRTMATRIXf *param_3)

{
  long lVar1;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  float *local_58;
  undefined4 *puStack_50;
  undefined4 *local_48;
  undefined4 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  PVRTMatrixTransposeF((PVRTMATRIXf *)&local_e8,param_3);
  local_58 = &local_a8;
  uStack_9c = uStack_e0;
  local_a4 = local_e8;
                    /* try { // try from 00616ce4 to 00716ceb has its CatchHandler @ 00617c6c */
  puStack_50 = &local_94;
  local_48 = &local_80;
  puStack_40 = &local_6c;
  uStack_88 = uStack_d0;
  local_90 = local_d8;
  uStack_74 = uStack_c0;
  local_7c = local_c8;
  uStack_60 = uStack_b0;
  local_68 = local_b8;
  local_a8 = *(float *)param_2;
  local_94 = *(undefined4 *)(param_2 + 4);
  local_80 = *(undefined4 *)(param_2 + 8);
  local_6c = *(undefined4 *)(param_2 + 0xc);
  PVRTMatrixLinearEqSolveF((float *)param_1,&local_58,4);
                    /* try { // try from 00616d3c to 00716d4f has its CatchHandler @ 00617c2c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


