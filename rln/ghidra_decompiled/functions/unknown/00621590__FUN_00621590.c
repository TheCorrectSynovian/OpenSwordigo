/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621590
 * Function: FUN_00621590
 * Signature: undefined FUN_00621590(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00621590(long param_1)

{
                    /* try { // try from 00621590 to 007215a7 has its CatchHandler @ 00622348 */
  if ((*(uint *)(param_1 + 0x20) & 5) != 0) {
    param_1 = 0;
  }
  return param_1;
}


