/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fdc94
 * Function: FUN_005fdc94
 * Signature: undefined FUN_005fdc94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fdc94(long *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  if (param_3 != 0xffffffff) {
                    /* catch() { ... } // from try @ 005fdb34 with catch @ 005fdca0 */
                    /* catch() { ... } // from try @ 005fdb14 with catch @ 005fdca4 */
    if (*param_2 == 0xffffffff) {
      *param_2 = param_3;
      return;
    }
    lVar6 = *(long *)(*param_1 + 0x18);
    uVar5 = *param_2;
    do {
      uVar4 = uVar5;
      uVar3 = *(uint *)(lVar6 + (long)(int)uVar4 * 4);
      iVar1 = (uVar3 >> 0xe) - 0x1ffff;
      uVar5 = 0xffffffff;
                    /* catch() { ... } // from try @ 005fdb00 with catch @ 005fdcdc */
      if (iVar1 != -1) {
        uVar5 = uVar4 + iVar1 + 1;
      }
                    /* catch() { ... } // from try @ 005fdad8 with catch @ 005fdce0 */
    } while (uVar5 != 0xffffffff);
    iVar1 = ~uVar4 + param_3;
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (0x1ffff < iVar2) {
      FUN_00600968(param_1[3],"control structure too long");
      uVar3 = *(uint *)(lVar6 + (long)(int)uVar4 * 4);
    }
    *(uint *)(lVar6 + (long)(int)uVar4 * 4) = iVar1 * 0x4000 + 0x7fffc000U | uVar3 & 0x3fff;
  }
  return;
}


