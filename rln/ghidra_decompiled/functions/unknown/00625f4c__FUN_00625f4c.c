/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625f4c
 * Function: FUN_00625f4c
 * Signature: undefined FUN_00625f4c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00625f4c(undefined8 *param_1)

{
  FUN_00621e3c(param_1 + 2);
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_007b6c08;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_007b6c30;
  FUN_006219c8(param_1 + 2,0);
                    /* catch() { ... } // from try @ 00626248 with catch @ 00625fb4
                       catch() { ... } // from try @ 00626370 with catch @ 00625fb4 */
  return;
}


