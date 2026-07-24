/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e114
 * Function: FUN_0064e114
 * Signature: undefined FUN_0064e114(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064e114(undefined8 *param_1,long param_2)

{
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_007db130;
  param_1[2] = 0;
  FUN_0063eb8c(param_1,0,0);
  return;
}


