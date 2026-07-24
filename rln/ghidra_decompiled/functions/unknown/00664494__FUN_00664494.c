/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00664494
 * Function: FUN_00664494
 * Signature: undefined FUN_00664494(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00664494(long *param_1,long *param_2,undefined8 *param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00664400 with catch @ 006644ac */
  lVar2 = param_2[2];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[3];
  param_1[1] = 0;
                    /* catch() { ... } // from try @ 00664394 with catch @ 006644d8 */
  FUN_006219c8((long)param_1 + *(long *)(lVar2 + -0x18),0);
  lVar2 = param_2[4];
  param_1[2] = lVar2;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(long *)((long)param_1 + lVar2 + 0x10) = param_2[5];
                    /* try { // try from 00664500 to 0076450b has its CatchHandler @ 006642a8 */
  FUN_006219c8((long)param_1 + lVar2 + 0x10,0);
  lVar2 = param_2[1];
                    /* catch() { ... } // from try @ 00664480 with catch @ 00664508 */
  plVar1 = param_1 + 3;
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[6];
  param_1[2] = param_2[7];
  lVar2 = *param_2;
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  FUN_00662010(plVar1);
  FUN_006219c8((long)param_1 + *(long *)(*param_1 + -0x18),plVar1);
  lVar2 = FUN_00663bdc(plVar1,*param_3,param_4);
  if (lVar2 != 0) {
                    /* try { // try from 00664574 to 007645c3 has its CatchHandler @ 00664574
                       catch() { ... } // from try @ 00664574 with catch @ 00664574
                       catch() { ... } // from try @ 006645d0 with catch @ 00664574 */
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar2,*(uint *)(lVar2 + 0x20) | 4);
                    /* try { // try from 006645c4 to 007645cf has its CatchHandler @ 006647d4 */
  return;
}


