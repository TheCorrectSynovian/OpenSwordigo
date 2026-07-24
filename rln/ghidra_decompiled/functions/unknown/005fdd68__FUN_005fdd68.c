/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fdd68
 * Function: FUN_005fdd68
 * Signature: undefined FUN_005fdd68(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fdd68(long *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
                    /* try { // try from 005fdd6c to 006fdd73 has its CatchHandler @ 005fde10 */
  if ((int)param_1[6] != param_3) {
                    /* try { // try from 005fde20 to 006fde2b has its CatchHandler @ 005fde2c */
    FUN_005fdedc();
    return;
  }
  *(int *)((long)param_1 + 0x34) = param_3;
  if (param_2 != -1) {
    if (*(uint *)(param_1 + 7) == 0xffffffff) {
      *(int *)(param_1 + 7) = param_2;
      return;
    }
                    /* try { // try from 005fdda0 to 006fddab has its CatchHandler @ 005fddb8 */
    lVar5 = *(long *)(*param_1 + 0x18);
    uVar4 = *(uint *)(param_1 + 7);
    do {
      uVar3 = uVar4;
      uVar2 = *(uint *)(lVar5 + (long)(int)uVar3 * 4);
      iVar1 = (uVar2 >> 0xe) - 0x1ffff;
                    /* catch() { ... } // from try @ 005fdda0 with catch @ 005fddb8 */
      uVar4 = 0xffffffff;
      if (iVar1 != -1) {
        uVar4 = uVar3 + iVar1 + 1;
      }
    } while (uVar4 != 0xffffffff);
    param_2 = ~uVar3 + param_2;
    iVar1 = -param_2;
    if (-1 < param_2) {
      iVar1 = param_2;
    }
                    /* try { // try from 005fdddc to 006fde03 has its CatchHandler @ 005fde0c */
    if (0x1ffff < iVar1) {
      FUN_00600968(param_1[3],"control structure too long");
      uVar2 = *(uint *)(lVar5 + (long)(int)uVar3 * 4);
    }
                    /* try { // try from 005fde04 to 006fde1f has its CatchHandler @ 005fdd54 */
    *(uint *)(lVar5 + (long)(int)uVar3 * 4) = param_2 * 0x4000 + 0x7fffc000U | uVar2 & 0x3fff;
                    /* catch() { ... } // from try @ 005fdddc with catch @ 005fde0c */
                    /* catch() { ... } // from try @ 005fdd6c with catch @ 005fde10 */
  }
  return;
}


