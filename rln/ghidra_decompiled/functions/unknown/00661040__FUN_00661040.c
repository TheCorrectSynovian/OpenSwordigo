/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00661040
 * Function: FUN_00661040
 * Signature: undefined FUN_00661040(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00661040(long *param_1,long *param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00660ebc with catch @ 00661040 */
  plVar1 = param_1 + 1;
                    /* try { // try from 00661060 to 00761087 has its CatchHandler @ 00661118 */
  lVar2 = param_2[1];
  *param_1 = lVar2;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(long *)((long)param_1 + lVar2) = param_2[2];
  FUN_006210e8((long)param_1 + lVar2,0);
                    /* try { // try from 00661088 to 007610d7 has its CatchHandler @ 00660dfc */
  lVar2 = *param_2;
                    /* catch() { ... } // from try @ 00660f30 with catch @ 0066108c */
                    /* catch() { ... } // from try @ 00660e70 with catch @ 00661090 */
  *param_1 = lVar2;
                    /* catch() { ... } // from try @ 00660e38 with catch @ 00661098 */
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[3];
  FUN_0065edec(plVar1);
                    /* catch() { ... } // from try @ 00660ff0 with catch @ 006610ac */
  FUN_006210e8((long)param_1 + *(long *)(*param_1 + -0x18),plVar1);
  lVar2 = FUN_0065f8c0(plVar1,*param_3,param_4 | 0x10);
  if (lVar2 != 0) {
                    /* try { // try from 006610d8 to 007610df has its CatchHandler @ 00661118 */
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
                    /* try { // try from 006610e0 to 0076110b has its CatchHandler @ 00660dfc */
                    /* catch() { ... } // from try @ 00660f88 with catch @ 006610e8 */
    return;
  }
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0066110c to 00761113 has its CatchHandler @ 00661118 */
  FUN_00620c14(lVar2,*(uint *)(lVar2 + 0x20) | 4);
                    /* catch() { ... } // from try @ 00661060 with catch @ 00661118
                       catch() { ... } // from try @ 006610d8 with catch @ 00661118
                       catch() { ... } // from try @ 0066110c with catch @ 00661118 */
  return;
}


