/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00647574
 * Function: FUN_00647574
 * Signature: undefined FUN_00647574(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00647574(long *param_1,long *param_2,long *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_8 [8];
  
  lVar1 = param_2[2];
                    /* try { // try from 00647598 to 0074759f has its CatchHandler @ 006476d0 */
  lVar2 = *(long *)(lVar1 + -0x18);
  *param_1 = lVar1;
  *(long *)((long)param_1 + lVar2) = param_2[3];
  param_1[1] = 0;
  FUN_006210e8((long)param_1 + *(long *)(lVar1 + -0x18),0);
  lVar1 = param_2[4];
  param_1[2] = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1 + 0x10) = param_2[5];
                    /* try { // try from 006475e8 to 007475ef has its CatchHandler @ 006476cc */
  FUN_006210e8((long)param_1 + lVar1 + 0x10,0);
  lVar1 = param_2[1];
                    /* try { // try from 006475f0 to 007476eb has its CatchHandler @ 00647498 */
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[6];
  param_1[2] = param_2[7];
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  param_1[3] = (long)(PTR_DAT_007e6a48 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_0063db28(param_1 + 10);
  lVar1 = *param_3;
  param_1[3] = (long)&PTR_FUN_007da7b0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_00666a7c(param_1 + 0xc,lVar1,*(undefined8 *)(lVar1 + -0x18),auStack_8);
  *(uint *)(param_1 + 0xb) = param_4;
  uVar3 = 0;
  if ((param_4 & 3) != 0) {
    uVar3 = *(undefined8 *)(param_1[0xc] + -0x18);
  }
  FUN_00645b8c(param_1 + 3,param_1[0xc],0,uVar3);
  FUN_006210e8((long)param_1 + *(long *)(*param_1 + -0x18),param_1 + 3);
                    /* catch() { ... } // from try @ 00647528 with catch @ 006476c4 */
                    /* catch() { ... } // from try @ 006475e8 with catch @ 006476cc */
                    /* catch() { ... } // from try @ 00647598 with catch @ 006476d0 */
  return;
}


