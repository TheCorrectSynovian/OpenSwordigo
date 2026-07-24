/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064f514
 * Function: FUN_0064f514
 * Signature: undefined FUN_0064f514(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064f514(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_007b7810;
  local_8 = param_2;
  uVar1 = FUN_0067074c(&local_8);
  param_1[2] = uVar1;
  return;
}


