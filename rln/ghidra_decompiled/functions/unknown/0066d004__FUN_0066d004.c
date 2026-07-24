/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d004
 * Function: FUN_0066d004
 * Signature: undefined FUN_0066d004(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined * FUN_0066d004(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_1;
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd318)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_0066c650(param_1,0,0,0);
      puVar1 = (undefined *)*param_1;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
                    /* catch() { ... } // from try @ 0066d07c with catch @ 0066d05c
                       catch() { ... } // from try @ 0066d0e0 with catch @ 0066d05c */
  return puVar1;
}


