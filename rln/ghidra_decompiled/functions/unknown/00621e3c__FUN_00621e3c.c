/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621e3c
 * Function: FUN_00621e3c
 * Signature: undefined FUN_00621e3c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00621e3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007b6b70;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
                    /* catch() { ... } // from try @ 0062187c with catch @ 00621e7c */
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
                    /* try { // try from 00621ea0 to 00722e73 has its CatchHandler @ 00622f84 */
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
                    /* catch() { ... } // from try @ 00621560 with catch @ 00621eac */
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 8;
  param_1[0x19] = param_1 + 8;
  FUN_0063db28(param_1 + 0x1a);
  return;
}


