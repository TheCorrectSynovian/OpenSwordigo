/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063deb0
 * Function: FUN_0063deb0
 * Signature: undefined FUN_0063deb0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0063deb0(long param_1)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 0063da78 with catch @ 0063deb0
                       catch() { ... } // from try @ 0063db0c with catch @ 0063deb0 */
  iVar1 = fflush(*(FILE **)(param_1 + 0x40));
  return iVar1;
}


