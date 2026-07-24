/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ac54
 * Function: FUN_0062ac54
 * Signature: undefined FUN_0062ac54(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0062ac54(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0062ac5c to 0072ac6b has its CatchHandler @ 0062afb4 */
  FUN_00666bb8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x28),auStack_8);
  return param_1;
}


