/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ab94
 * Function: FUN_0062ab94
 * Signature: undefined FUN_0062ab94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0062ab94(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0062ab94 to 0072aba7 has its CatchHandler @ 0062b058 */
  FUN_00666bb8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x28),auStack_8);
  return param_1;
}


