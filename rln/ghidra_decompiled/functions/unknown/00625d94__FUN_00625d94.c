/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625d94
 * Function: FUN_00625d94
 * Signature: undefined FUN_00625d94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00625d94(undefined8 *param_1,undefined8 param_2)

{
                    /* catch() { ... } // from try @ 00625c24 with catch @ 00625da4 */
                    /* catch() { ... } // from try @ 00625ba8 with catch @ 00625db4 */
  FUN_00621e3c(param_1 + 2);
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
                    /* try { // try from 00625dd4 to 00725e93 has its CatchHandler @ 00625e9c */
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_007b6c08;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_007b6c30;
  FUN_006219c8(param_1 + 2,param_2);
  return;
}


