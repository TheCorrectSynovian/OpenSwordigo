/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00643010
 * Function: FUN_00643010
 * Signature: undefined FUN_00643010(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00643010(long *param_1,wchar_t *param_2)

{
  long lVar1;
  size_t sVar2;
  
                    /* catch() { ... } // from try @ 00642b3c with catch @ 00643010 */
  if (param_2 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_2);
    FUN_00642b74(param_1,param_2,sVar2);
    return param_1;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 1);
  return param_1;
}


