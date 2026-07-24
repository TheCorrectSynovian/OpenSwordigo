/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00661eec
 * Function: FUN_00661eec
 * Signature: undefined FUN_00661eec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00661eec(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_0065f8c0(param_1 + 3,*param_2);
  if (lVar1 != 0) {
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


