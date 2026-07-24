/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665e54
 * Function: FUN_00665e54
 * Signature: undefined FUN_00665e54(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665e54(undefined8 *param_1)

{
                    /* try { // try from 00665e60 to 00765e6f has its CatchHandler @ 006662cc */
  *param_1 = &PTR_FUN_007b8030;
                    /* try { // try from 00665e70 to 00765ebf has its CatchHandler @ 00665968 */
  FUN_00649f98();
  operator_delete(param_1);
  return;
}


