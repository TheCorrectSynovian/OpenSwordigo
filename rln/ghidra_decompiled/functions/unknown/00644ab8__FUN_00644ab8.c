/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00644ab8
 * Function: FUN_00644ab8
 * Signature: undefined FUN_00644ab8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


size_t * FUN_00644ab8(undefined1 *param_1,long param_2)

{
  size_t *psVar1;
  size_t *__dest;
  size_t __n;
  
  __n = param_2 - (long)param_1;
  psVar1 = (size_t *)FUN_00668c20(__n,0);
  __dest = psVar1 + 3;
  if (__n == 1) {
    *(undefined1 *)(psVar1 + 3) = *param_1;
  }
  else {
    __dest = memcpy(__dest,param_1,__n);
  }
  if (psVar1 == (size_t *)PTR_DAT_007e5de8) {
    return __dest;
  }
  *(undefined4 *)(psVar1 + 2) = 0;
  *psVar1 = __n;
  *(undefined1 *)((long)psVar1 + __n + 0x18) = 0;
  return __dest;
}


