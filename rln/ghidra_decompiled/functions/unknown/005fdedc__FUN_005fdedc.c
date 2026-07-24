/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fdedc
 * Function: FUN_005fdedc
 * Signature: undefined FUN_005fdedc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fdedc(long *param_1,ulong param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar3 = (uint)param_2;
  while (uVar3 != 0xffffffff) {
    uVar4 = (uint)param_2;
    iVar2 = (*(uint *)(*(long *)(*param_1 + 0x18) + (long)(int)uVar4 * 4) >> 0xe) - 0x1ffff;
    uVar3 = 0xffffffff;
    if (iVar2 != -1) {
      uVar3 = uVar4 + iVar2 + 1;
    }
    iVar2 = FUN_0060037c(param_1,param_2,param_4);
    if (iVar2 == 0) {
      iVar2 = ~uVar4 + param_5;
      lVar5 = *(long *)(*param_1 + 0x18);
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      if (0x1ffff < iVar1) {
                    /* try { // try from 005fdf84 to 006fdf8f has its CatchHandler @ 005fee58 */
        FUN_00600968(param_1[3],"control structure too long");
      }
      *(uint *)(lVar5 + (long)(int)uVar4 * 4) =
           iVar2 * 0x4000 + 0x7fffc000U | *(uint *)(lVar5 + (long)(int)uVar4 * 4) & 0x3fff;
    }
    else {
      FUN_005fdfc8(param_1,param_2 & 0xffffffff,param_3);
                    /* try { // try from 005fdf58 to 006fdf7f has its CatchHandler @ 005fee5c */
    }
    param_2 = (ulong)uVar3;
  }
  return;
}


