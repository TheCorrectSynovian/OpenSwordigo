/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063fbe8
 * Function: FUN_0063fbe8
 * Signature: undefined FUN_0063fbe8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063fbe8(undefined8 *param_1)

{
                    /* try { // try from 0063fbf4 to 0073fc1b has its CatchHandler @ 00640770 */
  FUN_00621e3c(param_1 + 1);
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0xe9) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_007b7158;
  param_1[1] = &PTR_FUN_007b7180;
  FUN_006210e8(param_1 + 1,0);
  return;
}


