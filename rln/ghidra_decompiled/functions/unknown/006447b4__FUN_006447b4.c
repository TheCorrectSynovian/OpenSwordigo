/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006447b4
 * Function: FUN_006447b4
 * Signature: undefined FUN_006447b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_006447b4(long param_1,ulong param_2,int param_3,uint param_4)

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
  bVar4 = (*(uint *)(param_1 + 0x40) & 0x10 & param_4) != 0;
  bVar5 = param_3 == 1;
  bVar6 = (param_4 & 0x10) != 0;
  bVar7 = (param_4 & 8) == 0;
  if (bVar3 || bVar6) {
    lVar9 = *(long *)(param_1 + 0x20);
    if (((lVar9 != 0) || (param_2 == 0)) && ((bVar4 && bVar7 || (!bVar5 && (!bVar3 && bVar4)))))
    goto LAB_00644834;
  }
  else {
    lVar9 = *(long *)(param_1 + 8);
                    /* try { // try from 0064480c to 00744817 has its CatchHandler @ 00644a60 */
    if ((lVar9 != 0) || (param_2 == 0)) {
LAB_00644834:
      uVar8 = *(ulong *)(param_1 + 0x28);
      if ((uVar8 != 0) && (*(ulong *)(param_1 + 0x18) < uVar8)) {
        if (uVar2 == 0) {
          *(ulong *)(param_1 + 8) = uVar8;
          *(ulong *)(param_1 + 0x10) = uVar8;
        }
        *(ulong *)(param_1 + 0x18) = uVar8;
      }
                    /* try { // try from 00644854 to 00744857 has its CatchHandler @ 00644a5c */
      if (param_3 == 1) {
        uVar8 = param_2 + ((long)(uVar8 - lVar9) >> 2);
        param_2 = param_2 + (*(long *)(param_1 + 0x10) - lVar9 >> 2);
      }
      else {
        uVar8 = param_2;
        if (param_3 == 2) {
                    /* try { // try from 00644908 to 0074490f has its CatchHandler @ 00644a64 */
          param_2 = param_2 + (*(long *)(param_1 + 0x18) - lVar9 >> 2);
          uVar8 = param_2;
                    /* try { // try from 00644910 to 00744a83 has its CatchHandler @ 00644214 */
        }
      }
      if ((((long)param_2 < 0) || ((bVar5 || (bVar3 || !bVar4)) && (bVar3 || bVar6))) ||
         (*(long *)(param_1 + 0x18) - lVar9 >> 2 < (long)param_2)) {
        param_2 = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 8) + param_2 * 4;
      }
                    /* try { // try from 00644898 to 0074489f has its CatchHandler @ 00644a6c */
      if (((-1 < (long)uVar8) && (!bVar5 && (!bVar3 && bVar4) || bVar4 && bVar7)) &&
         ((long)uVar8 <= *(long *)(param_1 + 0x18) - lVar9 >> 2)) {
        lVar9 = *(long *)(param_1 + 0x20);
        for (uVar1 = uVar8; 0x7fffffff < (long)uVar1; uVar1 = uVar1 - 0x7fffffff) {
          lVar9 = lVar9 + 0x1fffffffc;
                    /* try { // try from 006448d0 to 007448d7 has its CatchHandler @ 00644a68 */
        }
        *(ulong *)(param_1 + 0x28) = lVar9 + uVar1 * 4;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar8;
        return auVar11;
      }
      goto LAB_00644814;
    }
  }
  param_2 = 0xffffffffffffffff;
LAB_00644814:
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2;
  return auVar10;
}


