/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006487cc
 * Function: FUN_006487cc
 * Signature: undefined FUN_006487cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006487cc(undefined8 *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_8 [8];
  
  puVar1 = param_1 + 0xc;
                    /* catch() { ... } // from try @ 0064862c with catch @ 006487e0 */
                    /* catch() { ... } // from try @ 006486d8 with catch @ 006487e8 */
                    /* catch() { ... } // from try @ 00648670 with catch @ 006487fc */
  FUN_00621e3c(puVar1);
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((long)param_1 + 0x144) = 0;
                    /* catch() { ... } // from try @ 00648660 with catch @ 00648810
                       catch() { ... } // from try @ 00648684 with catch @ 00648810
                       catch() { ... } // from try @ 006486f0 with catch @ 00648810 */
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = &DAT_007daa78;
                    /* try { // try from 00648834 to 0074885b has its CatchHandler @ 00648864 */
  param_1[1] = 0;
  param_1[0xc] = &DAT_007daaa0;
  FUN_006219c8(puVar1,0);
  *param_1 = &PTR_FUN_007b73d8;
                    /* try { // try from 0064885c to 00748867 has its CatchHandler @ 006485bc */
  param_1[0xc] = &PTR_FUN_007b7400;
                    /* catch() { ... } // from try @ 00648834 with catch @ 00648864 */
  param_1[2] = PTR_DAT_007e6338 + 0x10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_0063db28(param_1 + 9);
  lVar2 = *param_2;
  param_1[2] = &PTR_FUN_007da9f0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_0066df24(param_1 + 0xb,lVar2,*(undefined8 *)(lVar2 + -0x18),auStack_8);
  *(uint *)(param_1 + 10) = param_3 | 8;
  uVar3 = 0;
  if ((param_3 & 3) != 0) {
    uVar3 = *(undefined8 *)(param_1[0xb] + -0x18);
  }
  FUN_00647ea4(param_1 + 2,param_1[0xb],0,uVar3);
  FUN_006219c8(puVar1,param_1 + 2);
  return;
}


