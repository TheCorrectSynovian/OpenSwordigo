/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006697e0
 * Function: FUN_006697e0
 * Signature: undefined FUN_006697e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_006697e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
                    /* try { // try from 00669800 to 0076980b has its CatchHandler @ 006698a0 */
                    /* try { // try from 0066980c to 007698c3 has its CatchHandler @ 0066976c */
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd2f8)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_00668cb8(param_2,0,0,0);
      puVar1 = (undefined1 *)*param_2;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  *param_1 = puVar1;
  return param_1;
}


