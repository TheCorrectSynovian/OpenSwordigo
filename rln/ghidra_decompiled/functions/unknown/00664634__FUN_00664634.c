/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00664634
 * Function: FUN_00664634
 * Signature: undefined FUN_00664634(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00664634(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1 + 0x21;
  FUN_00621e3c(plVar1);
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1ec) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *param_1 = (long)&DAT_007db7c8;
  param_1[1] = 0;
  param_1[0x21] = (long)&DAT_007db7f0;
  FUN_006219c8(plVar1,0);
  param_1[2] = (long)&DAT_007db778;
  param_1[0x21] = (long)&DAT_007db7a0;
  FUN_006219c8(plVar1,0);
  plVar2 = param_1 + 3;
  *param_1 = (long)&PTR_FUN_007b7f88;
  param_1[0x21] = (long)&PTR_FUN_007b7fd8;
  param_1[2] = (long)&PTR_FUN_007b7fb0;
  FUN_00662010(plVar2);
  FUN_006219c8(plVar1,plVar2);
  lVar3 = FUN_00663bdc(plVar2,*param_2,param_3);
  if (lVar3 != 0) {
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar3,*(uint *)(lVar3 + 0x20) | 4);
  return;
}


