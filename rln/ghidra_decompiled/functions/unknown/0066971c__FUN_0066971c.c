/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066971c
 * Function: FUN_0066971c
 * Signature: undefined FUN_0066971c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 * FUN_0066971c(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd2f8)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_00668cb8(param_1,0,0,0);
      puVar1 = (undefined1 *)*param_1;
    }
                    /* catch() { ... } // from try @ 006695e4 with catch @ 00669768
                       catch() { ... } // from try @ 006696b0 with catch @ 00669768 */
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
                    /* try { // try from 0066976c to 00769793 has its CatchHandler @ 0066976c
                       catch() { ... } // from try @ 0066976c with catch @ 0066976c
                       catch() { ... } // from try @ 006697b8 with catch @ 0066976c
                       catch() { ... } // from try @ 0066980c with catch @ 0066976c
                       catch() { ... } // from try @ 006698cc with catch @ 0066976c */
  return puVar1;
}


