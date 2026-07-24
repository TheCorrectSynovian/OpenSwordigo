/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670a6c
 * Function: FUN_00670a6c
 * Signature: undefined FUN_00670a6c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00670a6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_007dbbd0;
  local_8 = param_2;
  uVar1 = FUN_0067074c(&local_8);
  param_1[2] = uVar1;
  return;
}


