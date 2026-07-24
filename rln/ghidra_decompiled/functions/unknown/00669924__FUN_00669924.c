/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669924
 * Function: FUN_00669924
 * Signature: undefined FUN_00669924(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 * FUN_00669924(undefined8 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  puVar1 = (undefined1 *)*param_1;
  lVar2 = *(long *)(puVar1 + -0x18);
                    /* catch() { ... } // from try @ 00669794 with catch @ 00669944 */
                    /* try { // try from 00669950 to 00769977 has its CatchHandler @ 00669950
                       catch() { ... } // from try @ 00669950 with catch @ 00669950
                       catch() { ... } // from try @ 0066999c with catch @ 00669950 */
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd2f8)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_00668cb8(param_1,0,0,0);
      puVar1 = (undefined1 *)*param_1;
    }
                    /* try { // try from 00669978 to 0076998b has its CatchHandler @ 00669ac0 */
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  return puVar1 + lVar2 + -1;
}


