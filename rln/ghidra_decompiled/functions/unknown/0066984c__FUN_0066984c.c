/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066984c
 * Function: FUN_0066984c
 * Signature: undefined FUN_0066984c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 * FUN_0066984c(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd2f8)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_00668cb8(param_1,0,0,0);
      puVar1 = (undefined1 *)*param_1;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
                    /* catch() { ... } // from try @ 00669800 with catch @ 006698a0 */
  return puVar1 + *(long *)(puVar1 + -0x18);
}


