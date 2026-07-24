/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e00c
 * Function: FUN_0063e00c
 * Signature: undefined FUN_0063e00c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


wint_t FUN_0063e00c(long param_1)

{
  wint_t wVar1;
  
  wVar1 = getwc(*(__FILE **)(param_1 + 0x40));
  wVar1 = ungetwc(wVar1,*(__FILE **)(param_1 + 0x40));
  return wVar1;
}


