/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671a3c
 * Function: FUN_00671a3c
 * Signature: undefined FUN_00671a3c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00671a3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 3;
  FUN_00621e3c(puVar1);
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((long)param_1 + 0xf9) = 0;
  param_1[0x20] = 0;
                    /* catch() { ... } // from try @ 006716e4 with catch @ 00671a78 */
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &DAT_007dbe48;
  param_1[1] = 0;
  param_1[3] = &DAT_007dbe70;
  FUN_006210e8(puVar1,0);
  param_1[2] = &DAT_007dbdf8;
  param_1[3] = &DAT_007dbe20;
  FUN_006210e8(puVar1,0);
  *param_1 = &PTR_FUN_007b8218;
                    /* catch() { ... } // from try @ 006716cc with catch @ 00671adc */
  param_1[3] = &PTR_FUN_007b8268;
                    /* catch() { ... } // from try @ 00671e70 with catch @ 00671ae8
                       catch() { ... } // from try @ 00672038 with catch @ 00671ae8
                       catch() { ... } // from try @ 00672278 with catch @ 00671ae8 */
  param_1[2] = &PTR_FUN_007b8240;
  return;
}


