/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d0bc
 * Function: FUN_0064d0bc
 * Signature: undefined FUN_0064d0bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0064d0bc(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
                    /* catch() { ... } // from try @ 0064d0e0 with catch @ 0064d0c0
                       catch() { ... } // from try @ 0064d144 with catch @ 0064d0c0 */
                    /* try { // try from 0064d0d8 to 0074d0df has its CatchHandler @ 0064d110 */
  FUN_0066d97c(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x50),auStack_8);
                    /* try { // try from 0064d0e0 to 0074d117 has its CatchHandler @ 0064d0c0 */
  return param_1;
}


