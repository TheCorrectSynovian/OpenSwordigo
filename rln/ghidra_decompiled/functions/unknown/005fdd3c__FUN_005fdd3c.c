/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fdd3c
 * Function: FUN_005fdd3c
 * Signature: undefined FUN_005fdd3c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fdd3c(long param_1,int param_2,int param_3)

{
                    /* catch() { ... } // from try @ 005fdac4 with catch @ 005fdd50 */
                    /* catch() { ... } // from try @ 005fde04 with catch @ 005fdd54 */
  FUN_006001e8(param_1,param_3 * 0x800000 + 0x800000U | param_2 << 6 | 0x1e,
               *(undefined4 *)(*(long *)(param_1 + 0x18) + 8));
  return;
}


