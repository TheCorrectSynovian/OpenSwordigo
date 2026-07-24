/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671d98
 * Function: FUN_00671d98
 * Signature: undefined FUN_00671d98(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00671d98(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 3;
                    /* try { // try from 00671db4 to 00771ddb has its CatchHandler @ 006720e0 */
  FUN_00621e3c(puVar1);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &DAT_007dbee8;
  param_1[1] = 0;
  param_1[3] = &DAT_007dbf10;
  FUN_006219c8(puVar1,0);
                    /* try { // try from 00671dfc to 00771e23 has its CatchHandler @ 00672234 */
  param_1[2] = &DAT_007dbe98;
  param_1[3] = &DAT_007dbec0;
  FUN_006219c8(puVar1,0);
  *param_1 = &PTR_FUN_007b82d8;
  param_1[3] = &PTR_FUN_007b8328;
  param_1[2] = &PTR_FUN_007b8300;
  return;
}


