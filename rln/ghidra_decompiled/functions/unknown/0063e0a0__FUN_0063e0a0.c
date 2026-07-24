/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e0a0
 * Function: FUN_0063e0a0
 * Signature: undefined FUN_0063e0a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0063e0a0(long param_1,long param_2,long param_3)

{
  wint_t wVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      wVar1 = putwc(*(wchar_t *)(param_2 + lVar2 * 4),*(__FILE **)(param_1 + 0x40));
      if (wVar1 == 0xffffffff) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != lVar2);
  }
  return lVar2;
}


