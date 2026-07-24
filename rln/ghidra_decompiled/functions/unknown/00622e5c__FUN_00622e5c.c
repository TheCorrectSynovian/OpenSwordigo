/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622e5c
 * Function: FUN_00622e5c
 * Signature: undefined FUN_00622e5c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00622e5c(undefined8 *param_1,undefined8 param_2)

{
  FUN_00621e3c(param_1 + 2);
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf1) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
                    /* try { // try from 00622ea0 to 00722ec7 has its CatchHandler @ 00622f90 */
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_007b6ba8;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_007b6bd0;
  FUN_006210e8(param_1 + 2,param_2);
  return;
}


