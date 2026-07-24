/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d14c
 * Function: FUN_0064d14c
 * Signature: undefined FUN_0064d14c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0064d14c(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
                    /* catch() { ... } // from try @ 0064d140 with catch @ 0064d14c */
                    /* catch() { ... } // from try @ 0064d170 with catch @ 0064d154 */
                    /* try { // try from 0064d168 to 0074d16f has its CatchHandler @ 0064d18c */
  FUN_0066d97c(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x50),auStack_8);
                    /* try { // try from 0064d170 to 0074d19f has its CatchHandler @ 0064d154 */
  return param_1;
}


