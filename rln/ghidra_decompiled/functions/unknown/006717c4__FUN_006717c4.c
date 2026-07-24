/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006717c4
 * Function: FUN_006717c4
 * Signature: undefined FUN_006717c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006717c4(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[1] = 0;
  FUN_006210e8((long)param_1 + *(long *)(lVar1 + -0x18),param_3);
  lVar1 = param_2[3];
                    /* catch() { ... } // from try @ 00671340 with catch @ 00671808 */
  param_1[2] = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1 + 0x10) = param_2[4];
  FUN_006210e8((long)param_1 + lVar1 + 0x10,param_3);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
                    /* catch() { ... } // from try @ 0067131c with catch @ 00671840 */
                    /* catch() { ... } // from try @ 006712c0 with catch @ 00671844 */
  param_1[2] = param_2[6];
  return;
}


