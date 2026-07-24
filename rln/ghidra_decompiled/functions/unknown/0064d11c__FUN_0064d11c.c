/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d11c
 * Function: FUN_0064d11c
 * Signature: undefined FUN_0064d11c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0064d11c(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0064d128 to 0074d12b has its CatchHandler @ 0064d13c */
                    /* catch() { ... } // from try @ 0064d118 with catch @ 0064d12c */
  FUN_0066d97c(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x40),auStack_8);
                    /* catch() { ... } // from try @ 0064d128 with catch @ 0064d13c */
                    /* try { // try from 0064d140 to 0074d143 has its CatchHandler @ 0064d14c */
                    /* try { // try from 0064d144 to 0074d14f has its CatchHandler @ 0064d0c0 */
  return param_1;
}


