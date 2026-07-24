/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00648378
 * Function: FUN_00648378
 * Signature: undefined FUN_00648378(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00648378(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *param_1 = lVar1;
                    /* try { // try from 006483b8 to 007483df has its CatchHandler @ 00648420 */
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[1] = 0;
  FUN_006219c8((long)param_1 + *(long *)(lVar1 + -0x18),0);
  lVar1 = *param_2;
                    /* try { // try from 006483e0 to 0074847b has its CatchHandler @ 006482a4 */
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[2] = (long)(PTR_DAT_007e6338 + 0x10);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_0063db28(param_1 + 9);
                    /* catch() { ... } // from try @ 0064833c with catch @ 00648420
                       catch() { ... } // from try @ 006483b8 with catch @ 00648420 */
  param_1[2] = (long)&PTR_FUN_007da9f0;
                    /* catch() { ... } // from try @ 00648344 with catch @ 00648428 */
  *(uint *)(param_1 + 10) = param_3 | 8;
  lVar1 = *(long *)(*param_1 + -0x18);
  param_1[0xb] = (long)(PTR_DAT_007e6438 + 0x18);
  FUN_006219c8((long)param_1 + lVar1,param_1 + 2);
  return;
}


