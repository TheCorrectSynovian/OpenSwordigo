/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064230c
 * Function: FUN_0064230c
 * Signature: undefined FUN_0064230c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064230c(undefined8 *param_1)

{
  FUN_00621e3c(param_1 + 1);
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
                    /* try { // try from 00642338 to 0074235f has its CatchHandler @ 006425d4 */
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_007b71b8;
  param_1[1] = &PTR_FUN_007b71e0;
  FUN_006219c8(param_1 + 1,0);
  return;
}


