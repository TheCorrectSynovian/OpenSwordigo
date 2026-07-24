/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00661440
 * Function: FUN_00661440
 * Signature: undefined FUN_00661440(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00661440(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0065f390(param_1 + 1);
  if (lVar1 != 0) {
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


