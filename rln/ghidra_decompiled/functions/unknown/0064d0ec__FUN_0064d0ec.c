/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d0ec
 * Function: FUN_0064d0ec
 * Signature: undefined FUN_0064d0ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0064d0ec(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
  FUN_0066d97c(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x30),auStack_8);
                    /* catch() { ... } // from try @ 0064d0d8 with catch @ 0064d110 */
                    /* try { // try from 0064d118 to 0074d11f has its CatchHandler @ 0064d12c */
  return param_1;
}


