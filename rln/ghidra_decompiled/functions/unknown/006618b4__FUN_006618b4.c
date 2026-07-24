/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006618b4
 * Function: FUN_006618b4
 * Signature: undefined FUN_006618b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006618b4(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1 + 0x21;
  FUN_00621e3c(plVar1);
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1e9) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *param_1 = (long)&DAT_007db588;
  param_1[1] = 0;
  param_1[0x21] = (long)&DAT_007db5b0;
  FUN_006210e8(plVar1,0);
  param_1[2] = (long)&DAT_007db538;
  param_1[0x21] = (long)&DAT_007db560;
  FUN_006210e8(plVar1,0);
  plVar2 = param_1 + 3;
  *param_1 = (long)&PTR_FUN_007b7dd8;
  param_1[0x21] = (long)&PTR_FUN_007b7e28;
  param_1[2] = (long)&PTR_FUN_007b7e00;
  FUN_0065edec(plVar2);
  FUN_006210e8(plVar1,plVar2);
  lVar3 = FUN_0065f8c0(plVar2,param_2,param_3);
                    /* try { // try from 00661994 to 0076199b has its CatchHandler @ 00661c5c */
  if (lVar3 != 0) {
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 4);
  return;
}


