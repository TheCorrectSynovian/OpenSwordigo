/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062afc0
 * Function: FUN_0062afc0
 * Signature: undefined FUN_0062afc0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062afc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b6cd0;
  FUN_0063f0e4();
                    /* try { // try from 0062afe0 to 0072b1cf has its CatchHandler @ 0062b3b8 */
  operator_delete(param_1);
  return;
}


