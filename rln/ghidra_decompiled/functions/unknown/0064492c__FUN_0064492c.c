/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064492c
 * Function: FUN_0064492c
 * Signature: undefined FUN_0064492c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_0064492c(long param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  uVar1 = *(uint *)(param_1 + 0x40) & 8;
  bVar2 = (param_4 & uVar1) == 0;
  bVar3 = (*(uint *)(param_1 + 0x40) & 0x10 & param_4) != 0;
  if (bVar2) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (((lVar5 != 0) || (param_2 == 0)) && (bVar3)) goto LAB_006449bc;
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    if ((lVar5 != 0) || (param_2 == 0)) {
LAB_006449bc:
      uVar4 = *(ulong *)(param_1 + 0x28);
      if ((uVar4 != 0) && (*(ulong *)(param_1 + 0x18) < uVar4)) {
        if (uVar1 == 0) {
                    /* catch() { ... } // from try @ 0064480c with catch @ 00644a60 */
          *(ulong *)(param_1 + 8) = uVar4;
                    /* catch() { ... } // from try @ 00644908 with catch @ 00644a64 */
          *(ulong *)(param_1 + 0x10) = uVar4;
                    /* catch() { ... } // from try @ 006448d0 with catch @ 00644a68 */
          *(ulong *)(param_1 + 0x18) = uVar4;
                    /* catch() { ... } // from try @ 00644898 with catch @ 00644a6c */
        }
        else {
          *(ulong *)(param_1 + 0x18) = uVar4;
        }
      }
      if ((-1 < param_2) && (param_2 <= *(long *)(param_1 + 0x18) - lVar5 >> 2)) {
        if (!bVar2) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8) + param_2 * 4;
        }
        if (bVar3) {
          lVar7 = *(long *)(param_1 + 0x20);
          *(long *)(param_1 + 0x28) = lVar7;
          for (lVar5 = param_2; 0x7fffffff < lVar5; lVar5 = lVar5 + -0x7fffffff) {
            lVar7 = lVar7 + 0x1fffffffc;
          }
          *(long *)(param_1 + 0x28) = lVar7 + lVar5 * 4;
        }
        uVar12 = param_3 & 0xff;
        uVar11 = param_3 >> 8 & 0xff;
                    /* catch() { ... } // from try @ 00644664 with catch @ 00644a44 */
        uVar10 = param_3 >> 0x10 & 0xff;
                    /* catch() { ... } // from try @ 006445c0 with catch @ 00644a48 */
        uVar9 = param_3 >> 0x18 & 0xff;
                    /* catch() { ... } // from try @ 0064451c with catch @ 00644a4c */
        uVar8 = param_3 >> 0x20 & 0xff;
                    /* catch() { ... } // from try @ 00644478 with catch @ 00644a50 */
        uVar6 = param_3 >> 0x28 & 0xff;
                    /* catch() { ... } // from try @ 006443b0 with catch @ 00644a54 */
        uVar4 = param_3 >> 0x30 & 0xff;
                    /* catch() { ... } // from try @ 00644694 with catch @ 00644a58 */
        param_3 = param_3 >> 0x38;
                    /* catch() { ... } // from try @ 00644854 with catch @ 00644a5c */
        goto LAB_00644980;
      }
    }
  }
  param_3 = 0;
  uVar4 = 0;
  uVar6 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  param_2 = -1;
LAB_00644980:
  auVar13._8_8_ =
       uVar12 | uVar11 << 8 | uVar10 << 0x10 | uVar9 << 0x18 | uVar8 << 0x20 | uVar6 << 0x28 |
       uVar4 << 0x30 | param_3 << 0x38;
  auVar13._0_8_ = param_2;
  return auVar13;
}


