/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620448
 * Function: FUN_00620448
 * Signature: undefined FUN_00620448(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00620448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007d9cd0;
  FUN_0061f9ec();
                    /* try { // try from 00620468 to 0072046f has its CatchHandler @ 00620500 */
  operator_delete(param_1);
  return;
}


