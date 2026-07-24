/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b100
 * Function: FUN_0066b100
 * Signature: undefined FUN_0066b100(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0066b100(undefined8 param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0066b104 to 0076b13b has its CatchHandler @ 0066b1b0 */
  pcVar1 = strerror(param_3);
  FUN_00666bb8(param_1,pcVar1,auStack_8);
  return param_1;
}


