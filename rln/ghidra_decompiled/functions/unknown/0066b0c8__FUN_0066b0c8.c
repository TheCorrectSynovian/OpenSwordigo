/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b0c8
 * Function: FUN_0066b0c8
 * Signature: undefined FUN_0066b0c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0066b0c8(undefined8 param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0066b0d4 to 0076b0db has its CatchHandler @ 0066b19c */
  pcVar1 = strerror(param_3);
  FUN_00666bb8(param_1,pcVar1,auStack_8);
  return param_1;
}


