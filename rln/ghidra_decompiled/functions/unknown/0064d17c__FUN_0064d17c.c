/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d17c
 * Function: FUN_0064d17c
 * Signature: undefined FUN_0064d17c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0064d17c(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
                    /* catch() { ... } // from try @ 0064d168 with catch @ 0064d18c */
  FUN_0066d97c(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x28),auStack_8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064d1dc with catch @ 0064d1a8
                       catch(type#1 @ 00000000) { ... } // from try @ 0064d2f4 with catch @ 0064d1a8
                        */
  return param_1;
}


