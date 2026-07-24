/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067199c
 * Function: FUN_0067199c
 * Signature: undefined FUN_0067199c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067199c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[1] = 0;
  FUN_006210e8((long)param_1 + *(long *)(lVar1 + -0x18),0);
                    /* catch() { ... } // from try @ 00671124 with catch @ 006719d8 */
  lVar1 = param_2[3];
  param_1[2] = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1 + 0x10) = param_2[4];
  FUN_006210e8((long)param_1 + lVar1 + 0x10,0);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  param_1[2] = param_2[6];
                    /* catch() { ... } // from try @ 00671104 with catch @ 00671a18 */
                    /* catch() { ... } // from try @ 00671710 with catch @ 00671a1c */
  return;
}


