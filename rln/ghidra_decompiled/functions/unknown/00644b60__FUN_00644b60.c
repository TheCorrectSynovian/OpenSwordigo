/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00644b60
 * Function: FUN_00644b60
 * Signature: undefined FUN_00644b60(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


wchar_t * FUN_00644b60(wchar_t *param_1,long param_2)

{
  wchar_t *__s1;
  size_t *psVar1;
  size_t __n;
  
  __n = param_2 - (long)param_1 >> 2;
  psVar1 = (size_t *)FUN_0066c5b8(__n,0);
  __s1 = (wchar_t *)(psVar1 + 3);
  if (__n == 1) {
    *(wchar_t *)(psVar1 + 3) = *param_1;
  }
  else {
    wmemcpy(__s1,param_1,__n);
  }
  if (psVar1 == (size_t *)PTR_DAT_007e6438) {
    return __s1;
  }
  *(undefined4 *)(psVar1 + 2) = 0;
  *psVar1 = __n;
  *(undefined4 *)((long)psVar1 + (param_2 - (long)param_1) + 0x18) = 0;
  return __s1;
}


