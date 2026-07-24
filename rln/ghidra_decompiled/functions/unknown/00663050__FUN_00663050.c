/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663050
 * Function: FUN_00663050
 * Signature: undefined FUN_00663050(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663050(long *param_1)

{
  *param_1 = (long)&PTR_FUN_007db650;
  FUN_00662f10();
                    /* try { // try from 00663078 to 0076309f has its CatchHandler @ 00663308 */
  FUN_0061f468(param_1 + 0xd);
  *param_1 = (long)(PTR_DAT_007e6338 + 0x10);
  FUN_0063c0c8(param_1 + 7);
  return;
}


