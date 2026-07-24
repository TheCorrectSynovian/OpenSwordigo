/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620b84
 * Function: FUN_00620b84
 * Signature: undefined FUN_00620b84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00620b84(undefined8 *param_1)

{
                    /* try { // try from 00620b88 to 00720beb has its CatchHandler @ 00622794 */
  *param_1 = &PTR_FUN_007b6b30;
  FUN_006221dc();
  operator_delete(param_1);
  return;
}


