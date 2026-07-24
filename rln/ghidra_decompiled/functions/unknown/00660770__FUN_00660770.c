/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00660770
 * Function: FUN_00660770
 * Signature: undefined FUN_00660770(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00660770(long *param_1,long *param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 0066038c with catch @ 00660788 */
  plVar1 = param_1 + 2;
  lVar2 = param_2[1];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[2];
  param_1[1] = 0;
  FUN_006210e8((long)param_1 + *(long *)(lVar2 + -0x18),0);
                    /* catch() { ... } // from try @ 00660368 with catch @ 006607c0 */
  lVar2 = *param_2;
                    /* catch() { ... } // from try @ 00660304 with catch @ 006607c4 */
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[3];
  FUN_0065edec(plVar1);
  FUN_006210e8((long)param_1 + *(long *)(*param_1 + -0x18),plVar1);
  lVar2 = FUN_0065f8c0(plVar1,*param_3,param_4 | 8);
  if (lVar2 != 0) {
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
                    /* catch() { ... } // from try @ 006602d0 with catch @ 00660828 */
    return;
  }
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar2,*(uint *)(lVar2 + 0x20) | 4);
  return;
}


