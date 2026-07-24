/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006445e4
 * Function: FUN_006445e4
 * Signature: undefined FUN_006445e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_006445e4(long param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
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
                    /* try { // try from 00644664 to 0074466f has its CatchHandler @ 00644a44 */
    lVar6 = *(long *)(param_1 + 0x20);
    if (((lVar6 != 0) || (param_2 == 0)) && (bVar3)) goto LAB_00644674;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    if ((lVar6 != 0) || (param_2 == 0)) {
LAB_00644674:
      uVar4 = *(ulong *)(param_1 + 0x28);
      if ((uVar4 != 0) && (*(ulong *)(param_1 + 0x18) < uVar4)) {
        if (uVar1 == 0) {
          *(ulong *)(param_1 + 8) = uVar4;
          *(ulong *)(param_1 + 0x10) = uVar4;
          *(ulong *)(param_1 + 0x18) = uVar4;
        }
        else {
          *(ulong *)(param_1 + 0x18) = uVar4;
        }
      }
                    /* try { // try from 00644694 to 00744697 has its CatchHandler @ 00644a58 */
      if ((-1 < param_2) && (param_2 <= *(long *)(param_1 + 0x18) - lVar6)) {
        if (!bVar2) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8) + param_2;
        }
        if (bVar3) {
          lVar6 = *(long *)(param_1 + 0x20);
          *(long *)(param_1 + 0x28) = lVar6;
          for (lVar5 = param_2; 0x7fffffff < lVar5; lVar5 = lVar5 + -0x7fffffff) {
            lVar6 = lVar6 + 0x7fffffff;
          }
          *(long *)(param_1 + 0x28) = lVar6 + (int)lVar5;
        }
        uVar12 = param_3 & 0xff;
        uVar11 = param_3 >> 8 & 0xff;
        uVar10 = param_3 >> 0x10 & 0xff;
        uVar9 = param_3 >> 0x18 & 0xff;
        uVar8 = param_3 >> 0x20 & 0xff;
        uVar7 = param_3 >> 0x28 & 0xff;
        uVar4 = param_3 >> 0x30 & 0xff;
        param_3 = param_3 >> 0x38;
        goto LAB_00644638;
      }
    }
  }
  param_3 = 0;
  uVar4 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  param_2 = -1;
LAB_00644638:
  auVar13._8_8_ =
       uVar12 | uVar11 << 8 | uVar10 << 0x10 | uVar9 << 0x18 | uVar8 << 0x20 | uVar7 << 0x28 |
       uVar4 << 0x30 | param_3 << 0x38;
  auVar13._0_8_ = param_2;
  return auVar13;
}


