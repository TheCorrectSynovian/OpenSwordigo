/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671bc8
 * Function: FUN_00671bc8
 * Signature: undefined FUN_00671bc8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00671bc8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 3;
                    /* try { // try from 00671be0 to 00771c07 has its CatchHandler @ 00671f00 */
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
                    /* try { // try from 00671c28 to 00771c4f has its CatchHandler @ 00672050 */
  param_1[3] = &DAT_007dbf10;
  FUN_006219c8(puVar1,param_2);
  param_1[2] = &DAT_007dbe98;
  param_1[3] = &DAT_007dbec0;
  FUN_006219c8(puVar1,param_2);
  *param_1 = &PTR_FUN_007b82d8;
  param_1[3] = &PTR_FUN_007b8328;
                    /* try { // try from 00671c74 to 00771c7b has its CatchHandler @ 00672040 */
  param_1[2] = &PTR_FUN_007b8300;
  return;
}


