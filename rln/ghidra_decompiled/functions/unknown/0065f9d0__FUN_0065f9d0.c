/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065f9d0
 * Function: FUN_0065f9d0
 * Signature: undefined FUN_0065f9d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0065f9d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b7dd8;
  param_1[2] = &PTR_FUN_007b7e00;
  param_1[0x21] = &PTR_FUN_007b7e28;
  param_1[3] = &PTR_FUN_007db410;
  FUN_0065f390(param_1 + 3);
  FUN_0061f468(param_1 + 0x10);
  param_1[3] = PTR_DAT_007e6a48 + 0x10;
  FUN_0063c0c8(param_1 + 10);
  param_1[0x21] = PTR_DAT_007e5a78 + 0x10;
  FUN_006221dc(param_1 + 0x21);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065fb5c with catch @ 0065fa58
                       catch(type#1 @ 00000000) { ... } // from try @ 0065fd44 with catch @ 0065fa58
                        */
  operator_delete(param_1);
  return;
}


