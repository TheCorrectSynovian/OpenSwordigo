/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d70c
 * Function: FUN_0064d70c
 * Signature: undefined FUN_0064d70c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064d70c(undefined8 *param_1)

{
                    /* catch() { ... } // from try @ 0064d6e4 with catch @ 0064d71c */
  *param_1 = &PTR_FUN_007b7810;
                    /* try { // try from 0064d728 to 0074d72b has its CatchHandler @ 0064d72c */
  FUN_00670744(param_1 + 2);
                    /* catch() { ... } // from try @ 0064d728 with catch @ 0064d72c */
                    /* try { // try from 0064d730 to 0074d733 has its CatchHandler @ 0064d73c */
  FUN_0063b7bc(param_1);
                    /* try { // try from 0064d734 to 0074d73f has its CatchHandler @ 0064d6c4 */
                    /* catch() { ... } // from try @ 0064d730 with catch @ 0064d73c */
  operator_delete(param_1);
  return;
}


