/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067186c
 * Function: FUN_0067186c
 * Signature: undefined FUN_0067186c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067186c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 3;
  FUN_00621e3c(puVar1);
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((long)param_1 + 0xf9) = 0;
                    /* catch() { ... } // from try @ 0067128c with catch @ 006718a0 */
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &DAT_007dbe48;
  param_1[1] = 0;
  param_1[3] = &DAT_007dbe70;
  FUN_006210e8(puVar1,param_2);
                    /* catch() { ... } // from try @ 00671268 with catch @ 006718d8 */
                    /* catch() { ... } // from try @ 0067120c with catch @ 006718dc */
  param_1[2] = &DAT_007dbdf8;
  param_1[3] = &DAT_007dbe20;
  FUN_006210e8(puVar1,param_2);
  *param_1 = &PTR_FUN_007b8218;
  param_1[3] = &PTR_FUN_007b8268;
  param_1[2] = &PTR_FUN_007b8240;
  return;
}


