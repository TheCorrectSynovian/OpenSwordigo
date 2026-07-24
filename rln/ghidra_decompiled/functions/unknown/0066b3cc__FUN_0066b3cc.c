/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b3cc
 * Function: FUN_0066b3cc
 * Signature: undefined FUN_0066b3cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_0066b3cc(long param_1,long param_2)

{
  undefined4 uVar1;
  
  param_1 = param_1 - param_2;
  if (0x7fffffff < param_1) {
    return 0x7fffffff;
  }
  uVar1 = 0x80000000;
  if (-0x80000001 < param_1) {
    uVar1 = (undefined4)param_1;
  }
  return uVar1;
}


