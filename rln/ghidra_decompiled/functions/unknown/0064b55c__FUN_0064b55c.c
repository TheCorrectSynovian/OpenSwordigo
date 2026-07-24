/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b55c
 * Function: FUN_0064b55c
 * Signature: undefined FUN_0064b55c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064b55c(long param_1,long param_2)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064b53c with catch @ 0064b55c
                        */
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_2;
  return;
}


