/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b5d8
 * Function: FUN_0064b5d8
 * Signature: undefined FUN_0064b5d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0064b5d8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  FUN_0063b7dc(param_1,param_2 + 7);
  (**(code **)(*param_2 + 0x10))(param_2,param_3);
  FUN_0063c028(param_2 + 7,param_3);
                    /* try { // try from 0064b634 to 0074b637 has its CatchHandler @ 0064ba9c */
  return param_1;
}


