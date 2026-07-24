/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665174
 * Function: FUN_00665174
 * Signature: undefined FUN_00665174(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b7f88;
  param_1[2] = &PTR_FUN_007b7fb0;
  param_1[0x21] = &PTR_FUN_007b7fd8;
  param_1[3] = &PTR_FUN_007db650;
  FUN_00662f10(param_1 + 3);
  FUN_0061f468(param_1 + 0x10);
  param_1[3] = PTR_DAT_007e6338 + 0x10;
  FUN_0063c0c8(param_1 + 10);
  param_1[0x21] = PTR_DAT_007e7a48 + 0x10;
  FUN_006221dc(param_1 + 0x21);
                    /* catch() { ... } // from try @ 0066513c with catch @ 006651fc */
  operator_delete(param_1);
  return;
}


