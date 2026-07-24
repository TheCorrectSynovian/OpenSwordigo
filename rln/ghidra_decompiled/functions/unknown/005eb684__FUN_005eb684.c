/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eb684
 * Function: FUN_005eb684
 * Signature: undefined FUN_005eb684(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005eb684(undefined8 param_1,long param_2,long param_3)

{
                    /* try { // try from 005eb688 to 006eb75b has its CatchHandler @ 005eb2f4 */
                    /* catch() { ... } // from try @ 005eb618 with catch @ 005eb68c */
                    /* catch() { ... } // from try @ 005eb3c8 with catch @ 005eb690 */
  if ((&PTR_s_nil_0069a2c8_0xf_007d8858)[*(int *)(param_2 + 8)][2] ==
      (&PTR_s_nil_0069a2c8_0xf_007d8858)[*(int *)(param_3 + 8)][2]) {
    FUN_005eb320(param_1,"attempt to compare two %s values");
  }
  else {
    FUN_005eb320(param_1,"attempt to compare %s with %s");
  }
  return 0;
}


