/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f570
 * Function: FUN_0063f570
 * Signature: undefined FUN_0063f570(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063f570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b71b8;
  param_1[1] = PTR_DAT_007e7a48 + 0x10;
  FUN_006221dc(param_1 + 1);
                    /* try { // try from 0063f5a0 to 0073f5c7 has its CatchHandler @ 0063f5dc */
  operator_delete(param_1);
  return;
}


