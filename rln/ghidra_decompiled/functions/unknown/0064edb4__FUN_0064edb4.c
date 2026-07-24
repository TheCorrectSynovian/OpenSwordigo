/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064edb4
 * Function: FUN_0064edb4
 * Signature: undefined FUN_0064edb4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064edb4(long param_1,undefined8 *param_2)

{
                    /* catch() { ... } // from try @ 0064e754 with catch @ 0064edb4 */
  *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
                    /* catch() { ... } // from try @ 0064e7d4 with catch @ 0064edc4 */
                    /* catch() { ... } // from try @ 0064e748 with catch @ 0064edc8
                       catch() { ... } // from try @ 0064e76c with catch @ 0064edc8
                       catch() { ... } // from try @ 0064ed44 with catch @ 0064edc8 */
  param_2[1] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
                    /* catch() { ... } // from try @ 0064ebe8 with catch @ 0064edcc */
  return;
}


