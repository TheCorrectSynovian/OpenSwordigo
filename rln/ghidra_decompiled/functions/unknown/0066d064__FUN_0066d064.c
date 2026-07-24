/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d064
 * Function: FUN_0066d064
 * Signature: undefined FUN_0066d064(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_0066d064(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_2;
                    /* try { // try from 0066d074 to 0076d07b has its CatchHandler @ 0066d0ac */
                    /* try { // try from 0066d07c to 0076d0b3 has its CatchHandler @ 0066d05c */
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd318)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_0066c650(param_2,0,0,0);
                    /* catch() { ... } // from try @ 0066d074 with catch @ 0066d0ac */
      puVar1 = (undefined *)*param_2;
    }
                    /* try { // try from 0066d0b4 to 0076d0bb has its CatchHandler @ 0066d0c8 */
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  *param_1 = puVar1;
                    /* try { // try from 0066d0c4 to 0076d0c7 has its CatchHandler @ 0066d0d8 */
                    /* catch() { ... } // from try @ 0066d0b4 with catch @ 0066d0c8 */
  return param_1;
}


