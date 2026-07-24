/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063ddfc
 * Function: FUN_0063ddfc
 * Signature: undefined FUN_0063ddfc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063ddfc(long param_1)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 0063da04 with catch @ 0063ddfc */
  iVar1 = getc(*(FILE **)(param_1 + 0x40));
  *(int *)(param_1 + 0x48) = iVar1;
  return;
}


