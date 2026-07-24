/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064445c
 * Function: FUN_0064445c
 * Signature: undefined FUN_0064445c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_0064445c(long param_1,ulong param_2,int param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar2 = *(uint *)(param_1 + 0x40) & 8;
  bVar3 = (param_4 & uVar2) == 0;
                    /* try { // try from 00644478 to 00744483 has its CatchHandler @ 00644a50 */
  bVar4 = (*(uint *)(param_1 + 0x40) & 0x10 & param_4) != 0;
  bVar5 = param_3 == 1;
  bVar6 = (param_4 & 0x10) != 0;
  bVar7 = (param_4 & 8) == 0;
  if (bVar3 || bVar6) {
    lVar9 = *(long *)(param_1 + 0x20);
    if (((lVar9 != 0) || (param_2 == 0)) && ((bVar4 && bVar7 || (!bVar5 && (!bVar3 && bVar4)))))
    goto LAB_006444dc;
  }
  else {
    lVar9 = *(long *)(param_1 + 8);
    if ((lVar9 != 0) || (param_2 == 0)) {
LAB_006444dc:
      uVar8 = *(ulong *)(param_1 + 0x28);
      if ((uVar8 != 0) && (*(ulong *)(param_1 + 0x18) < uVar8)) {
        if (uVar2 == 0) {
          *(ulong *)(param_1 + 8) = uVar8;
          *(ulong *)(param_1 + 0x10) = uVar8;
        }
        *(ulong *)(param_1 + 0x18) = uVar8;
      }
      if (param_3 == 1) {
                    /* try { // try from 006445c0 to 007445cb has its CatchHandler @ 00644a48 */
        uVar8 = param_2 + (uVar8 - lVar9);
        param_2 = param_2 + (*(long *)(param_1 + 0x10) - lVar9);
      }
      else {
        uVar8 = param_2;
        if (param_3 == 2) {
          param_2 = param_2 + (*(long *)(param_1 + 0x18) - lVar9);
          uVar8 = param_2;
        }
      }
                    /* try { // try from 0064451c to 00744527 has its CatchHandler @ 00644a4c */
      if ((((long)param_2 < 0) || ((bVar5 || (bVar3 || !bVar4)) && (bVar3 || bVar6))) ||
         (*(long *)(param_1 + 0x18) - lVar9 < (long)param_2)) {
        param_2 = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 8) + param_2;
      }
      if (((-1 < (long)uVar8) && (!bVar5 && (!bVar3 && bVar4) || bVar4 && bVar7)) &&
         ((long)uVar8 <= *(long *)(param_1 + 0x18) - lVar9)) {
        lVar9 = *(long *)(param_1 + 0x20);
        for (uVar1 = uVar8; 0x7fffffff < (long)uVar1; uVar1 = uVar1 - 0x7fffffff) {
          lVar9 = lVar9 + 0x7fffffff;
        }
        *(long *)(param_1 + 0x28) = lVar9 + (int)uVar1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar8;
        return auVar11;
      }
      goto LAB_006444bc;
    }
  }
  param_2 = 0xffffffffffffffff;
LAB_006444bc:
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2;
  return auVar10;
}


