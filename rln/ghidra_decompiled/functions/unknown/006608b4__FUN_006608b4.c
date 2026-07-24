/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006608b4
 * Function: FUN_006608b4
 * Signature: undefined FUN_006608b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006608b4(long *param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1 + 0x20;
  FUN_00621e3c(plVar1);
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e1) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *param_1 = (long)&DAT_007db498;
  param_1[1] = 0;
  param_1[0x20] = (long)&DAT_007db4c0;
  FUN_006210e8(plVar1,0);
                    /* try { // try from 00660928 to 00760933 has its CatchHandler @ 00660a84 */
  plVar2 = param_1 + 2;
  *param_1 = (long)&PTR_FUN_007b7cc8;
  param_1[0x20] = (long)&PTR_FUN_007b7cf0;
  FUN_0065edec(plVar2);
  FUN_006210e8(plVar1,plVar2);
  lVar3 = FUN_0065f8c0(plVar2,*param_2,param_3 | 8);
  if (lVar3 != 0) {
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 4);
                    /* try { // try from 006609ac to 007609b7 has its CatchHandler @ 00660aa0 */
                    /* try { // try from 006609b8 to 007609bf has its CatchHandler @ 00660a90 */
  return;
}


