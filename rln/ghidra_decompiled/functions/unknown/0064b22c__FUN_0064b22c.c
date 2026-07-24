/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b22c
 * Function: FUN_0064b22c
 * Signature: undefined FUN_0064b22c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0064b22c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[3] - param_1[2];
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x38))();
  }
  return lVar1;
}


