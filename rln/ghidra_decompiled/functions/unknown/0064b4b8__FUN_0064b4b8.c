/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b4b8
 * Function: FUN_0064b4b8
 * Signature: undefined FUN_0064b4b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064b4b8(long param_1,int param_2)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064b54c with catch @ 0064b4c0
                        */
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (long)param_2;
  return;
}


