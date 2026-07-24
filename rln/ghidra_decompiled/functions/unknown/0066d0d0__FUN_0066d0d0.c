/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d0d0
 * Function: FUN_0066d0d0
 * Signature: undefined FUN_0066d0d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined * FUN_0066d0d0(undefined8 *param_1)

{
  undefined *puVar1;
  
                    /* catch() { ... } // from try @ 0066d0c4 with catch @ 0066d0d8 */
  puVar1 = (undefined *)*param_1;
                    /* try { // try from 0066d0dc to 0076d0df has its CatchHandler @ 0066d0e8 */
                    /* try { // try from 0066d0e0 to 0076d0eb has its CatchHandler @ 0066d05c */
                    /* catch() { ... } // from try @ 0066d0dc with catch @ 0066d0e8 */
                    /* catch() { ... } // from try @ 0066d10c with catch @ 0066d0f0 */
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd318)) {
    if (*(int *)(puVar1 + -8) != 0) {
                    /* try { // try from 0066d104 to 0076d10b has its CatchHandler @ 0066d128 */
                    /* try { // try from 0066d10c to 0076d13b has its CatchHandler @ 0066d0f0 */
      FUN_0066c650(param_1,0,0,0);
      puVar1 = (undefined *)*param_1;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
                    /* catch() { ... } // from try @ 0066d104 with catch @ 0066d128 */
  return puVar1;
}


