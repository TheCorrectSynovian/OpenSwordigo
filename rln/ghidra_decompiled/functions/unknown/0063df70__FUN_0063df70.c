/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063df70
 * Function: FUN_0063df70
 * Signature: undefined FUN_0063df70(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063df70(long param_1)

{
  wint_t wVar1;
  
  wVar1 = getwc(*(__FILE **)(param_1 + 0x40));
  *(wint_t *)(param_1 + 0x48) = wVar1;
  return;
}


