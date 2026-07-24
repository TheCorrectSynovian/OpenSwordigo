/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066bb18
 * Function: FUN_0066bb18
 * Signature: undefined FUN_0066bb18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0066bb18(long *param_1,wchar_t param_2,ulong param_3)

{
  wchar_t *pwVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((param_3 < *(ulong *)(lVar2 + -0x18)) &&
     (pwVar1 = wmemchr((wchar_t *)(lVar2 + param_3 * 4),param_2,*(ulong *)(lVar2 + -0x18) - param_3)
     , pwVar1 != (wchar_t *)0x0)) {
    return (long)pwVar1 - lVar2 >> 2;
  }
  return -1;
}


