/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006631cc
 * Function: FUN_006631cc
 * Signature: undefined FUN_006631cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006631cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 0x20;
                    /* try { // try from 006631dc to 007631df has its CatchHandler @ 00663330 */
                    /* try { // try from 006631e8 to 007631eb has its CatchHandler @ 00663320 */
  FUN_00621e3c(puVar1);
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e4) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
                    /* try { // try from 0066320c to 00763233 has its CatchHandler @ 006632f8 */
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *param_1 = &DAT_007db6d8;
  param_1[1] = 0;
  param_1[0x20] = &DAT_007db700;
  FUN_006219c8(puVar1,0);
  *param_1 = &PTR_FUN_007b7e78;
  param_1[0x20] = &PTR_FUN_007b7ea0;
  FUN_00662010(param_1 + 2);
                    /* try { // try from 00663254 to 0076327b has its CatchHandler @ 006632f0 */
  FUN_006219c8(puVar1,param_1 + 2);
  return;
}


