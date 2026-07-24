/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061aaa8
 * Function: FUN_0061aaa8
 * Signature: undefined FUN_0061aaa8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061aaa8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 int param_5,uint param_6,uint param_7,int *param_8)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar8;
  int iVar9;
  undefined8 uVar7;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  lVar1 = tpidr_el0;
  bVar2 = param_5 == 0;
  uVar3 = 7;
  if (bVar2) {
    uVar3 = 3;
  }
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar5 = 8;
  if (bVar2) {
    uVar5 = 4;
  }
  iVar9 = -4;
  iVar6 = (int)*param_1;
  iVar11 = (int)((ulong)*param_1 >> 0x20);
  if (bVar2) {
    iVar9 = -2;
  }
  iVar9 = ((uVar5 & param_6 << 1 | uVar3 & param_6) ^ uVar5) + iVar9;
  iVar6 = ((int)*param_2 - iVar6) * iVar9 + iVar6 * uVar5;
  iVar8 = ((int)((ulong)*param_2 >> 0x20) - iVar11) * iVar9 + iVar11 * uVar5;
  iVar12 = (int)*param_3;
  iVar13 = (int)((ulong)*param_3 >> 0x20);
  iVar11 = ((param_7 & 3 | (param_7 >> 1 & 1) << 2) ^ 4) - 2;
  iVar10 = iVar6 * 4 + ((iVar12 * uVar5 - iVar6) + ((int)*param_4 - iVar12) * iVar9) * iVar11;
  iVar8 = iVar8 * 4 +
          ((iVar13 * uVar5 - iVar8) + ((int)((ulong)*param_4 >> 0x20) - iVar13) * iVar9) * iVar11;
  iVar6 = (int)param_1[1];
  iVar12 = (int)((ulong)param_1[1] >> 0x20);
  iVar6 = ((int)param_2[1] - iVar6) * iVar9 + iVar6 * uVar5;
  iVar12 = ((int)((ulong)param_2[1] >> 0x20) - iVar12) * iVar9 + iVar12 * uVar5;
  iVar13 = (int)param_3[1];
  iVar14 = (int)((ulong)param_3[1] >> 0x20);
                    /* catch() { ... } // from try @ 0061ae18 with catch @ 0061ab90
                       catch() { ... } // from try @ 0061b0e8 with catch @ 0061ab90 */
  iVar6 = iVar6 * 4 + ((iVar13 * uVar5 - iVar6) + ((int)param_4[1] - iVar13) * iVar9) * iVar11;
  iVar9 = iVar12 * 4 +
          ((iVar14 * uVar5 - iVar12) + ((int)((ulong)param_4[1] >> 0x20) - iVar14) * iVar9) * iVar11
  ;
  uVar7 = CONCAT44(iVar9,iVar6);
  *(ulong *)param_8 = CONCAT44(iVar8,iVar10);
  *(undefined8 *)(param_8 + 2) = uVar7;
  if (param_5 == 0) {
    iVar10 = iVar10 >> 1;
    iVar8 = iVar8 >> 1;
    iVar6 = iVar6 >> 1;
    *(ulong *)param_8 = CONCAT44(iVar8,iVar10);
    param_8[2] = iVar6;
  }
  else {
    iVar10 = iVar10 >> 2;
    iVar8 = iVar8 >> 2;
    uVar7 = NEON_sshl(uVar7,CONCAT44(-(int)((ulong)DAT_0069c0e8 >> 0x20),-(int)DAT_0069c0e8),4);
    *(ulong *)param_8 = CONCAT44(iVar8,iVar10);
    *(undefined8 *)(param_8 + 2) = uVar7;
    iVar9 = (int)((ulong)uVar7 >> 0x20);
    iVar6 = (int)uVar7;
                    /* try { // try from 0061abd4 to 0071abd7 has its CatchHandler @ 0061ae2c */
  }
                    /* try { // try from 0061abf8 to 0071ac1f has its CatchHandler @ 0061aee4 */
  *param_8 = iVar10 + (iVar10 >> 5);
  param_8[1] = iVar8 + (iVar8 >> 5);
  param_8[2] = iVar6 + (iVar6 >> 5);
  param_8[3] = iVar9 + (iVar9 >> 4);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


