/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064f1f4
 * Function: FUN_0064f1f4
 * Signature: undefined FUN_0064f1f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064f1f4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_007db210;
  uVar1 = FUN_0063be10();
  param_1[2] = uVar1;
  return;
}


