/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3a34
 * Function: FUN_005f3a34
 * Signature: undefined FUN_005f3a34(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f3a34(undefined8 param_1,long param_2)

{
  if (*(undefined1 **)(param_2 + 0x20) != &LAB_0069a2a0) {
    FUN_005f3a60();
    return;
  }
                    /* catch() { ... } // from try @ 005f3554 with catch @ 005f3a5c */
  FUN_005f3a60();
  return;
}


