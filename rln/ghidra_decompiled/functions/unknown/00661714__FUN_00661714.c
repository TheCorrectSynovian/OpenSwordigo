/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00661714
 * Function: FUN_00661714
 * Signature: undefined FUN_00661714(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00661714(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 00661718 to 00761797 has its CatchHandler @ 00661c70 */
  lVar2 = param_2[2];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[3];
  param_1[1] = 0;
  FUN_006210e8((long)param_1 + *(long *)(lVar2 + -0x18),0);
  lVar2 = param_2[4];
  param_1[2] = lVar2;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(long *)((long)param_1 + lVar2 + 0x10) = param_2[5];
  FUN_006210e8((long)param_1 + lVar2 + 0x10,0);
  lVar2 = param_2[1];
  plVar1 = param_1 + 3;
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[6];
  param_1[2] = param_2[7];
  lVar2 = *param_2;
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
                    /* try { // try from 006617c4 to 007617eb has its CatchHandler @ 00661cd8 */
  FUN_0065edec(plVar1);
  FUN_006210e8((long)param_1 + *(long *)(*param_1 + -0x18),plVar1);
  lVar2 = FUN_0065f8c0(plVar1,param_3,param_4);
  if (lVar2 != 0) {
                    /* try { // try from 006617fc to 00761817 has its CatchHandler @ 00661c44 */
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar2,*(uint *)(lVar2 + 0x20) | 4);
  return;
}


