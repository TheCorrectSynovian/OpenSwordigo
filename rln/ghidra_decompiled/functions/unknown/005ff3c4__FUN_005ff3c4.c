/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ff3c4
 * Function: FUN_005ff3c4
 * Signature: undefined FUN_005ff3c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ff3c4(long *param_1,int param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_40 = 0xffffffffffffffff;
  local_50[0] = 5;
  local_48 = 0;
  if (param_2 == 2) {
    FUN_005fe488(param_1,param_3);
    if (*param_3 == 0xc) {
      if (param_3[4] != param_3[5]) {
        if (param_3[2] < (int)(uint)*(byte *)((long)param_1 + 0x4a)) goto LAB_005ff4ec;
        FUN_005fe674(param_1,param_3);
      }
    }
    else {
LAB_005ff4ec:
      FUN_005fe5c0(param_1,param_3);
    }
    uVar5 = 0x14;
LAB_005ff4fc:
    FUN_005ff794(param_1,uVar5,param_3,local_50);
    goto LAB_005ff750;
  }
  if (param_2 != 1) {
    if (param_2 != 0) goto LAB_005ff750;
    if (((*param_3 != 5) || (param_3[4] != -1)) || (param_3[5] != -1)) {
      FUN_005fe488(param_1,param_3);
      if (*param_3 == 0xc) {
        if (param_3[4] != param_3[5]) {
          if (param_3[2] < (int)(uint)*(byte *)((long)param_1 + 0x4a)) goto LAB_005ff46c;
          FUN_005fe674(param_1,param_3);
          uVar5 = 0x12;
          goto LAB_005ff4fc;
        }
      }
      else {
LAB_005ff46c:
        FUN_005fe5c0(param_1,param_3);
      }
    }
    uVar5 = 0x12;
    goto LAB_005ff4fc;
  }
  FUN_005fe488(param_1,param_3);
  switch(*param_3) {
  case 1:
  case 3:
    iVar10 = 2;
    break;
  case 2:
  case 4:
  case 5:
    iVar10 = 3;
    break;
  default:
    goto switchD_005ff4ac_caseD_6;
  case 10:
    puVar1 = (uint *)(*(long *)(*param_1 + 0x18) + (long)param_3[2] * 4);
    if (param_3[2] < 1) {
LAB_005ff570:
      uVar9 = (ulong)*puVar1;
      puVar8 = puVar1;
    }
    else {
      puVar8 = puVar1 + -1;
      uVar9 = (ulong)*puVar8;
      if (-1 < (char)(&DAT_00699dd1)[uVar9 & 0x3f]) goto LAB_005ff570;
    }
    *puVar8 = (uint)uVar9 & 0xffffc000 | (uint)uVar9 & 0x3f | (uint)((uVar9 & 0x3fc0) == 0) << 6;
    goto switchD_005ff4ac_caseD_6;
  case 0xb:
    iVar2 = *(int *)((long)param_1 + 0x3c);
    pbVar6 = (byte *)(*param_1 + 0x73);
    iVar4 = iVar2 + 1;
    iVar10 = iVar4;
    if ((int)(uint)*pbVar6 <= iVar2) {
      if (0xf8 < iVar2) {
        FUN_00600968(param_1[3],"function or expression too complex");
        pbVar6 = (byte *)(*param_1 + 0x73);
        iVar10 = *(int *)((long)param_1 + 0x3c) + 1;
      }
      *pbVar6 = (byte)iVar4;
    }
    *(int *)((long)param_1 + 0x3c) = iVar10;
    FUN_00600404(param_1,param_3,iVar10 + -1);
    if (*param_3 == 0xc) goto switchD_005ff4ac_caseD_c;
    goto LAB_005ff604;
  case 0xc:
switchD_005ff4ac_caseD_c:
                    /* catch() { ... } // from try @ 005ff98c with catch @ 005ff5e8
                       catch() { ... } // from try @ 005ffe54 with catch @ 005ff5e8 */
    if ((((uint)param_3[2] >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_3[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
LAB_005ff604:
    iVar4 = FUN_006001e8(param_1,param_3[2] << 0x17 | 0x13,*(undefined4 *)(param_1[3] + 8));
    iVar10 = 0xb;
    param_3[2] = iVar4;
  }
  *param_3 = iVar10;
switchD_005ff4ac_caseD_6:
  iVar4 = param_3[4];
  iVar10 = param_3[5];
  param_3[4] = iVar10;
  param_3[5] = iVar4;
  if (iVar4 != -1) {
                    /* try { // try from 005ff644 to 006ff66b has its CatchHandler @ 005ffac8 */
    lVar7 = *(long *)(*param_1 + 0x18);
    do {
      puVar1 = (uint *)(lVar7 + (long)iVar4 * 4);
      if (iVar4 < 1) {
LAB_005ff678:
        uVar11 = *puVar1;
        puVar8 = puVar1;
      }
      else {
        uVar11 = puVar1[-1];
        puVar8 = puVar1 + -1;
        if (-1 < (char)(&DAT_00699dd1)[(ulong)uVar11 & 0x3f]) goto LAB_005ff678;
      }
      if ((uVar11 & 0x3f) == 0x1b) {
                    /* try { // try from 005ff68c to 006ff6b3 has its CatchHandler @ 005ffab8 */
        *puVar8 = uVar11 & 0x7fc000 | uVar11 >> 0x11 & 0x7fc0 | 0x1a;
      }
      iVar10 = (*puVar1 >> 0xe) - 0x1ffff;
      iVar2 = iVar4 + iVar10;
      iVar4 = -1;
      if (iVar10 != -1) {
        iVar4 = iVar2 + 1;
      }
    } while (iVar4 != -1);
    iVar10 = param_3[4];
  }
  if (iVar10 != -1) {
                    /* try { // try from 005ff6d4 to 006ff6fb has its CatchHandler @ 005ffaa8 */
    lVar7 = *(long *)(*param_1 + 0x18);
    do {
      puVar1 = (uint *)(lVar7 + (long)iVar10 * 4);
      if (iVar10 < 1) {
LAB_005ff708:
        uVar11 = *puVar1;
        puVar8 = puVar1;
      }
      else {
        uVar11 = puVar1[-1];
        puVar8 = puVar1 + -1;
        if (-1 < (char)(&DAT_00699dd1)[(ulong)uVar11 & 0x3f]) goto LAB_005ff708;
      }
      if ((uVar11 & 0x3f) == 0x1b) {
                    /* try { // try from 005ff71c to 006ff743 has its CatchHandler @ 005ffaa0 */
        *puVar8 = uVar11 & 0x7fc000 | uVar11 >> 0x11 & 0x7fc0 | 0x1a;
      }
      iVar4 = (*puVar1 >> 0xe) - 0x1ffff;
      iVar2 = iVar10 + iVar4;
      iVar10 = -1;
      if (iVar4 != -1) {
        iVar10 = iVar2 + 1;
      }
                    /* try { // try from 005ff748 to 006ff74b has its CatchHandler @ 005ffbb0 */
    } while (iVar10 != -1);
  }
LAB_005ff750:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005ff76c to 006ff793 has its CatchHandler @ 005ffa90 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


