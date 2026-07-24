/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f5ed4
 * Function: FUN_005f5ed4
 * Signature: undefined FUN_005f5ed4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f5ed4(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_0069a368;
                    /* try { // try from 005f5ed8 to 006f5edf has its CatchHandler @ 005f7340 */
                    /* try { // try from 005f5ee0 to 006f5ef3 has its CatchHandler @ 005f733c */
  *param_1 = 0x61754c1b;
  *(undefined8 *)(param_1 + 1) = uVar1;
  return;
}


