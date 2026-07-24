/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00660b18
 * Function: FUN_00660b18
 * Signature: undefined FUN_00660b18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00660b18(long *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  
                    /* try { // try from 00660b34 to 00760b3f has its CatchHandler @ 006608a4 */
  lVar1 = FUN_0065f8c0(param_1 + 2,*param_2,param_3 | 8);
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 00660aa4 with catch @ 00660b3c */
                    /* try { // try from 00660b48 to 00760b9b has its CatchHandler @ 00660b48
                       catch() { ... } // from try @ 00660b48 with catch @ 00660b48
                       catch() { ... } // from try @ 00660ba8 with catch @ 00660b48
                       catch() { ... } // from try @ 00660c78 with catch @ 00660b48
                       catch() { ... } // from try @ 00660d74 with catch @ 00660b48
                       catch() { ... } // from try @ 00660de0 with catch @ 00660b48 */
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


