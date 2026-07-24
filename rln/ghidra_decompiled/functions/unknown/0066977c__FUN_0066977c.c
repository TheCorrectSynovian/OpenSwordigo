/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066977c
 * Function: FUN_0066977c
 * Signature: undefined FUN_0066977c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 * FUN_0066977c(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
                    /* try { // try from 00669794 to 007697a7 has its CatchHandler @ 00669944 */
                    /* try { // try from 006697ac to 007697b7 has its CatchHandler @ 006698d4 */
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd2f8)) {
    if (*(int *)(puVar1 + -8) != 0) {
                    /* try { // try from 006697b8 to 007697ff has its CatchHandler @ 0066976c */
      FUN_00668cb8(param_1,0,0,0);
      puVar1 = (undefined1 *)*param_1;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  return puVar1 + param_2;
}


