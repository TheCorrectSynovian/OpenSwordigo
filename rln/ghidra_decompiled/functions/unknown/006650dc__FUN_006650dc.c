/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006650dc
 * Function: FUN_006650dc
 * Signature: undefined FUN_006650dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006650dc(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00662f10(param_1 + 1);
  if (lVar1 != 0) {
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


