/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e60c
 * Function: FUN_0063e60c
 * Signature: undefined FUN_0063e60c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063e60c(long *param_1,long param_2)

{
  undefined *puVar1;
  
                    /* catch() { ... } // from try @ 0063e540 with catch @ 0063e618 */
                    /* catch() { ... } // from try @ 0063e538 with catch @ 0063e620 */
                    /* try { // try from 0063e628 to 0073e6cf has its CatchHandler @ 0063e6d8 */
  puVar1 = PTR_DAT_007e6a48 + 0x10;
  param_1[1] = 0;
  *param_1 = (long)puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_0063db28(param_1 + 7);
  param_1[8] = param_2;
  *param_1 = (long)&PTR_FUN_007da5a0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  return;
}


