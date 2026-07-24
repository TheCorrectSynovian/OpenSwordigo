/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f2c18
 * Function: FUN_005f2c18
 * Signature: undefined FUN_005f2c18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f2c18(long param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  param_2 = param_2 - param_3;
                    /* try { // try from 005f2c38 to 006f2c43 has its CatchHandler @ 005f3320 */
  if (*param_4 - 0xdU < 2) {
    uVar1 = param_2 + 1U & ((int)(param_2 + 1U) >> 0x1f ^ 0xffffffffU);
    FUN_005fe340(lVar3,param_4,uVar1);
    if (1 < (int)uVar1) {
                    /* try { // try from 005f2c60 to 006f2c6b has its CatchHandler @ 005f3150 */
                    /* try { // try from 005f2c6c to 006f2c77 has its CatchHandler @ 005f3118 */
      FUN_005fe088(lVar3,uVar1 - 1);
      return;
    }
  }
  else {
                    /* try { // try from 005f2c78 to 006f2c8b has its CatchHandler @ 005f30bc */
    if (*param_4 != 0) {
      FUN_005fe5c0(lVar3,param_4);
    }
                    /* try { // try from 005f2c8c to 006f2c97 has its CatchHandler @ 005f3084 */
    if (0 < param_2) {
      uVar2 = *(undefined4 *)(lVar3 + 0x3c);
      FUN_005fe088(lVar3,param_2);
      FUN_005fdaec(lVar3,uVar2,param_2);
      return;
    }
  }
  return;
}


