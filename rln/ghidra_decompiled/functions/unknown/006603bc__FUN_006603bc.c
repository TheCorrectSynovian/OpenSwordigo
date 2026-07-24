/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006603bc
 * Function: FUN_006603bc
 * Signature: undefined FUN_006603bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006603bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 006603c0 to 007603fb has its CatchHandler @ 0066072c */
  puVar1 = param_1 + 0x20;
  FUN_00621e3c(puVar1);
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e1) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *param_1 = &DAT_007db498;
  param_1[1] = 0;
  param_1[0x20] = &DAT_007db4c0;
                    /* try { // try from 0066041c to 0076042f has its CatchHandler @ 00660728 */
  FUN_006210e8(puVar1,0);
  *param_1 = &PTR_FUN_007b7cc8;
  param_1[0x20] = &PTR_FUN_007b7cf0;
                    /* try { // try from 00660440 to 0076044b has its CatchHandler @ 006606f0 */
  FUN_0065edec(param_1 + 2);
  FUN_006210e8(puVar1,param_1 + 2);
  return;
}


