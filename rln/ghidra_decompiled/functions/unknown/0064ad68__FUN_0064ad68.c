/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ad68
 * Function: FUN_0064ad68
 * Signature: undefined FUN_0064ad68(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064ad68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b7790;
  FUN_0063c0c8(param_1 + 7);
                    /* try { // try from 0064ad88 to 0074adff has its CatchHandler @ 0064ae08 */
  operator_delete(param_1);
  return;
}


