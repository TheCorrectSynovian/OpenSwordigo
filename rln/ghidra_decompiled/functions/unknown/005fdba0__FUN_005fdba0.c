/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fdba0
 * Function: FUN_005fdba0
 * Signature: undefined FUN_005fdba0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_005fdba0(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar3 = *(uint *)(param_1 + 7);
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  uVar4 = FUN_006001e8(param_1,0x7fff8016,*(undefined4 *)(param_1[3] + 8));
  uVar6 = uVar4;
  if ((uVar3 != 0xffffffff) && (uVar6 = uVar3, uVar4 != 0xffffffff)) {
    lVar8 = *(long *)(*param_1 + 0x18);
    uVar6 = uVar4;
    do {
      uVar7 = uVar6;
      uVar5 = *(uint *)(lVar8 + (long)(int)uVar7 * 4);
      iVar1 = (uVar5 >> 0xe) - 0x1ffff;
      uVar6 = 0xffffffff;
      if (iVar1 != -1) {
        uVar6 = uVar7 + iVar1 + 1;
      }
    } while (uVar6 != 0xffffffff);
    iVar1 = uVar3 + ~uVar7;
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (0x1ffff < iVar2) {
      FUN_00600968(param_1[3],"control structure too long");
      uVar5 = *(uint *)(lVar8 + (long)(int)uVar7 * 4);
    }
    *(uint *)(lVar8 + (long)(int)uVar7 * 4) = iVar1 * 0x4000 + 0x7fffc000U | uVar5 & 0x3fff;
    uVar6 = uVar4;
  }
                    /* catch() { ... } // from try @ 005fdb48 with catch @ 005fdc68 */
  return uVar6;
}


