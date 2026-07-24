/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064edf0
 * Function: FUN_0064edf0
 * Signature: undefined FUN_0064edf0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064edf0(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
                    /* try { // try from 0064ee00 to 0074ee27 has its CatchHandler @ 0064ee2c */
  param_2[1] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48);
  return;
}


