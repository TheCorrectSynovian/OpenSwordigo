/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064f4c4
 * Function: FUN_0064f4c4
 * Signature: undefined FUN_0064f4c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064f4c4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 0064f4d0 to 0074f4d3 has its CatchHandler @ 0064f810 */
                    /* try { // try from 0064f4d4 to 0074f597 has its CatchHandler @ 0064eeb8 */
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_007b7810;
  uVar1 = FUN_0063be10();
  param_1[2] = uVar1;
  return;
}


