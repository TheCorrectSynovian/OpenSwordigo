/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006612e4
 * Function: FUN_006612e4
 * Signature: undefined FUN_006612e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006612e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[1] = (long)&PTR_FUN_007db410;
  FUN_0065f390(param_1 + 1);
  FUN_0061f468(param_1 + 0xe);
  param_1[1] = (long)(PTR_DAT_007e6a48 + 0x10);
  FUN_0063c0c8(param_1 + 8);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  return;
}


