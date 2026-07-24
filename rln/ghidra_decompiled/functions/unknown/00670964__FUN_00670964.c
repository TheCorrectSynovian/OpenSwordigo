/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670964
 * Function: FUN_00670964
 * Signature: undefined FUN_00670964(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00670964(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_007b8140;
  uVar1 = FUN_0063be10();
                    /* try { // try from 00670990 to 00770993 has its CatchHandler @ 006709d0 */
  param_1[2] = uVar1;
                    /* try { // try from 00670994 to 00770a17 has its CatchHandler @ 0067070c */
  return;
}


