/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fde2c
 * Function: FUN_005fde2c
 * Signature: undefined FUN_005fde2c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fde2c(long *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 005fde20 with catch @ 005fde2c */
                    /* try { // try from 005fde30 to 006fde33 has its CatchHandler @ 005fde38 */
  *(int *)((long)param_1 + 0x34) = (int)param_1[6];
                    /* catch() { ... } // from try @ 005fde30 with catch @ 005fde38 */
  if (param_2 != -1) {
                    /* try { // try from 005fde3c to 006fde8b has its CatchHandler @ 005fde3c
                       catch() { ... } // from try @ 005fde3c with catch @ 005fde3c
                       catch() { ... } // from try @ 005fde90 with catch @ 005fde3c
                       catch() { ... } // from try @ 005fe080 with catch @ 005fde3c
                       catch() { ... } // from try @ 005fe0d0 with catch @ 005fde3c
                       catch() { ... } // from try @ 005fe2c0 with catch @ 005fde3c
                       catch() { ... } // from try @ 005fe344 with catch @ 005fde3c
                       catch() { ... } // from try @ 005fe560 with catch @ 005fde3c
                       catch() { ... } // from try @ 005fe5fc with catch @ 005fde3c
                       catch() { ... } // from try @ 005fe82c with catch @ 005fde3c
                       catch() { ... } // from try @ 005fe8a0 with catch @ 005fde3c
                       catch() { ... } // from try @ 005fead8 with catch @ 005fde3c
                       catch() { ... } // from try @ 005feff0 with catch @ 005fde3c
                       catch() { ... } // from try @ 005ff05c with catch @ 005fde3c */
    if (*(uint *)(param_1 + 7) == 0xffffffff) {
      *(int *)(param_1 + 7) = param_2;
      return;
    }
    lVar5 = *(long *)(*param_1 + 0x18);
    uVar4 = *(uint *)(param_1 + 7);
    do {
      uVar3 = uVar4;
      uVar2 = *(uint *)(lVar5 + (long)(int)uVar3 * 4);
      iVar1 = (uVar2 >> 0xe) - 0x1ffff;
      uVar4 = 0xffffffff;
      if (iVar1 != -1) {
        uVar4 = uVar3 + iVar1 + 1;
      }
    } while (uVar4 != 0xffffffff);
                    /* try { // try from 005fde8c to 006fde8f has its CatchHandler @ 005fedf0 */
                    /* try { // try from 005fde90 to 006fdebf has its CatchHandler @ 005fde3c */
    param_2 = ~uVar3 + param_2;
    iVar1 = -param_2;
    if (-1 < param_2) {
      iVar1 = param_2;
    }
    if (0x1ffff < iVar1) {
      FUN_00600968(param_1[3],"control structure too long");
      uVar2 = *(uint *)(lVar5 + (long)(int)uVar3 * 4);
    }
                    /* try { // try from 005fdec0 to 006fdecf has its CatchHandler @ 005fee5c */
    *(uint *)(lVar5 + (long)(int)uVar3 * 4) = param_2 * 0x4000 + 0x7fffc000U | uVar2 & 0x3fff;
  }
  return;
}


