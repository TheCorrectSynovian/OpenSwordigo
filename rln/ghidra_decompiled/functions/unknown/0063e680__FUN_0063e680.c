/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e680
 * Function: FUN_0063e680
 * Signature: undefined FUN_0063e680(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063e680(long *param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007e6338 + 0x10;
  param_1[1] = 0;
  *param_1 = (long)puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_0063db28(param_1 + 7);
                    /* try { // try from 0063e6d0 to 0073e6db has its CatchHandler @ 0063e508 */
  param_1[8] = param_2;
  *param_1 = (long)&PTR_FUN_007da620;
                    /* catch() { ... } // from try @ 0063e628 with catch @ 0063e6d8 */
                    /* catch() { ... } // from try @ 0063e6f0 with catch @ 0063e6dc */
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  return;
}


