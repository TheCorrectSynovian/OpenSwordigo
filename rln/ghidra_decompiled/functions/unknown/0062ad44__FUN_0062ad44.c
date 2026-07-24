/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ad44
 * Function: FUN_0062ad44
 * Signature: undefined FUN_0062ad44(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0062ad44(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0062ad50 to 0072ad53 has its CatchHandler @ 0062b1d4 */
  FUN_00666bb8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x38),auStack_8);
  return param_1;
}


