/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006698b0
 * Function: FUN_006698b0
 * Signature: undefined FUN_006698b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_006698b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
                    /* try { // try from 006698c4 to 007698cb has its CatchHandler @ 006698d0 */
                    /* try { // try from 006698cc to 0076994f has its CatchHandler @ 0066976c */
                    /* catch() { ... } // from try @ 006698c4 with catch @ 006698d0 */
                    /* catch() { ... } // from try @ 006697ac with catch @ 006698d4 */
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd2f8)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_00668cb8(param_2,0,0,0);
      puVar1 = (undefined1 *)*param_2;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  *param_1 = puVar1 + *(long *)(puVar1 + -0x18);
  return param_1;
}


