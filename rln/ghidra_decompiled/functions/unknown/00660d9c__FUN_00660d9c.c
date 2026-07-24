/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00660d9c
 * Function: FUN_00660d9c
 * Signature: undefined FUN_00660d9c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00660d9c(long *param_1,long *param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1 + 1;
                    /* try { // try from 00660db8 to 00760ddf has its CatchHandler @ 00660de8 */
  lVar2 = param_2[1];
  *param_1 = lVar2;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(long *)((long)param_1 + lVar2) = param_2[2];
                    /* try { // try from 00660de0 to 00760deb has its CatchHandler @ 00660b48 */
  FUN_006210e8((long)param_1 + lVar2,0);
  lVar2 = *param_2;
                    /* catch() { ... } // from try @ 00660db8 with catch @ 00660de8 */
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[3];
                    /* try { // try from 00660dfc to 00760e37 has its CatchHandler @ 00660dfc
                       catch() { ... } // from try @ 00660dfc with catch @ 00660dfc
                       catch() { ... } // from try @ 00660ff4 with catch @ 00660dfc
                       catch() { ... } // from try @ 00661088 with catch @ 00660dfc
                       catch() { ... } // from try @ 006610e0 with catch @ 00660dfc */
  FUN_0065edec(plVar1);
  FUN_006210e8((long)param_1 + *(long *)(*param_1 + -0x18),plVar1);
  lVar2 = FUN_0065f8c0(plVar1,param_3,param_4 | 0x10);
  if (lVar2 != 0) {
                    /* try { // try from 00660e38 to 00760e3b has its CatchHandler @ 00661098 */
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar2,*(uint *)(lVar2 + 0x20) | 4);
                    /* try { // try from 00660e70 to 00760e7b has its CatchHandler @ 00661090 */
  return;
}


