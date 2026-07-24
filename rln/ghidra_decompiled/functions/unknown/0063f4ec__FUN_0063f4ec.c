/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f4ec
 * Function: FUN_0063f4ec
 * Signature: undefined FUN_0063f4ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063f4ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b7158;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0063f5c8 with catch @ 0063f514
                       catch(type#1 @ 00000000) { ... } // from try @ 0063f638 with catch @ 0063f514
                        */
  param_1[1] = PTR_DAT_007e5a78 + 0x10;
  FUN_006221dc(param_1 + 1);
  operator_delete(param_1);
  return;
}


