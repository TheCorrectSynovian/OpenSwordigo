/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006005c8
 * Function: FUN_006005c8
 * Signature: undefined FUN_006005c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_006005c8(long *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
                    /* try { // try from 006005d0 to 00700673 has its CatchHandler @ 006005d0
                       catch() { ... } // from try @ 006005d0 with catch @ 006005d0
                       catch() { ... } // from try @ 006006fc with catch @ 006005d0
                       catch() { ... } // from try @ 006008e4 with catch @ 006005d0 */
  FUN_006001e8(param_1,param_2 | param_3 << 6 | param_4 << 0x17 | param_5 << 0xe,
               *(undefined4 *)(param_1[3] + 8));
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
                    /* try { // try from 00600674 to 00700687 has its CatchHandler @ 00600954 */
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (0x1ffff < iVar2) {
                    /* try { // try from 00600688 to 00700693 has its CatchHandler @ 0060094c */
      FUN_00600968(param_1[3],"control structure too long");
      uVar5 = *(uint *)(lVar8 + (long)(int)uVar7 * 4);
    }
                    /* try { // try from 00600694 to 007006a7 has its CatchHandler @ 006008ec */
    *(uint *)(lVar8 + (long)(int)uVar7 * 4) = iVar1 * 0x4000 + 0x7fffc000U | uVar5 & 0x3fff;
    uVar6 = uVar4;
  }
  return uVar6;
}


