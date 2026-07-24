/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064862c
 * Function: FUN_0064862c
 * Signature: undefined FUN_0064862c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064862c(long *param_1,long *param_2,long *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0064862c to 00748653 has its CatchHandler @ 006487e0 */
  lVar1 = param_2[1];
  lVar2 = *(long *)(lVar1 + -0x18);
                    /* try { // try from 00648660 to 0074866f has its CatchHandler @ 00648810 */
  *param_1 = lVar1;
                    /* try { // try from 00648670 to 00748677 has its CatchHandler @ 006487fc */
  *(long *)((long)param_1 + lVar2) = param_2[2];
                    /* try { // try from 00648684 to 007486d7 has its CatchHandler @ 00648810 */
  param_1[1] = 0;
  FUN_006219c8((long)param_1 + *(long *)(lVar1 + -0x18),0);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[2] = (long)(PTR_DAT_007e6338 + 0x10);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_0063db28(param_1 + 9);
                    /* try { // try from 006486d8 to 007486df has its CatchHandler @ 006487e8 */
  lVar1 = *param_3;
  param_1[2] = (long)&PTR_FUN_007da9f0;
                    /* try { // try from 006486f0 to 007487ab has its CatchHandler @ 00648810 */
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_0066df24(param_1 + 0xb,lVar1,*(undefined8 *)(lVar1 + -0x18),auStack_8);
  *(uint *)(param_1 + 10) = param_4 | 8;
  uVar3 = 0;
  if ((param_4 & 3) != 0) {
    uVar3 = *(undefined8 *)(param_1[0xb] + -0x18);
  }
  FUN_00647ea4(param_1 + 2,param_1[0xb],0,uVar3);
  FUN_006219c8((long)param_1 + *(long *)(*param_1 + -0x18),param_1 + 2);
  return;
}


