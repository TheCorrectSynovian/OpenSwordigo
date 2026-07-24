/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663b38
 * Function: FUN_00663b38
 * Signature: undefined FUN_00663b38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663b38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b7f88;
  param_1[2] = &PTR_FUN_007b7fb0;
  param_1[0x21] = &PTR_FUN_007b7fd8;
  param_1[3] = &PTR_FUN_007db650;
  FUN_00662f10(param_1 + 3);
  FUN_0061f468(param_1 + 0x10);
                    /* catch() { ... } // from try @ 006639c0 with catch @ 00663b98 */
  param_1[3] = PTR_DAT_007e6338 + 0x10;
  FUN_0063c0c8(param_1 + 10);
                    /* catch() { ... } // from try @ 006639d4 with catch @ 00663ba4
                       catch() { ... } // from try @ 00663a58 with catch @ 00663ba4 */
                    /* catch() { ... } // from try @ 00663920 with catch @ 00663ba8 */
  param_1[0x21] = PTR_DAT_007e7a48 + 0x10;
  FUN_006221dc(param_1 + 0x21);
  return;
}


