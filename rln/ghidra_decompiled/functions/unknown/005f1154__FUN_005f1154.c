/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f1154
 * Function: FUN_005f1154
 * Signature: undefined FUN_005f1154(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_005f1154(long param_1,undefined4 *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  long *plVar10;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar1 = *(short *)(*(long *)(param_1 + 0x38) + 0x60) + 1;
  *(ushort *)(*(long *)(param_1 + 0x38) + 0x60) = uVar1;
  if (200 < uVar1) {
    FUN_006007a0(param_1,"chunk has too many syntax levels",0);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 0x107) {
    if (iVar2 == 0x23) {
      uVar5 = 2;
    }
    else {
      if (iVar2 != 0x2d) {
        if (iVar2 != 0x7b) goto switchD_005f11e4_caseD_108;
        FUN_005f14b4(param_1,param_2);
        goto LAB_005f1344;
      }
      uVar5 = 0;
    }
switchD_005f11e4_caseD_10e:
    FUN_00600a74(param_1);
    FUN_005f1154(param_1,param_2,8);
    FUN_005ff3c4(*(undefined8 *)(param_1 + 0x30),uVar5,param_2);
    goto LAB_005f1344;
  }
  uVar5 = 1;
  switch(iVar2) {
  case 0x107:
    uVar5 = 3;
    break;
  default:
switchD_005f11e4_caseD_108:
    FUN_005f1cf4(param_1,param_2);
    goto LAB_005f1344;
  case 0x109:
    FUN_00600a74(param_1);
    FUN_005f17e0(param_1,param_2,0,*(undefined4 *)(param_1 + 4));
    goto LAB_005f1344;
  case 0x10d:
    uVar5 = 1;
    break;
  case 0x10e:
    goto switchD_005f11e4_caseD_10e;
  case 0x113:
    uVar5 = 2;
    break;
  case 0x117:
    plVar10 = *(long **)(param_1 + 0x30);
    pbVar8 = (byte *)(*plVar10 + 0x72);
    bVar3 = *pbVar8;
    if (bVar3 == 0) {
      FUN_00600968(param_1,"cannot use \'...\' outside a vararg function");
      pbVar8 = (byte *)(*plVar10 + 0x72);
      bVar3 = *pbVar8;
    }
    *pbVar8 = bVar3 & 0xfb;
    uVar5 = FUN_005fdb84(plVar10,0x25,0,1,0);
    uVar7 = 0xe;
    goto LAB_005f12e8;
  case 0x11c:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    *param_2 = 5;
    param_2[2] = 0;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x18);
    goto LAB_005f12f4;
  case 0x11e:
    uVar5 = FUN_005fe100(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18));
    uVar7 = 4;
LAB_005f12e8:
    *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
    *param_2 = uVar7;
    param_2[2] = uVar5;
    goto LAB_005f12f4;
  }
  *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
  *param_2 = uVar5;
  param_2[2] = 0;
LAB_005f12f4:
  FUN_00600a74(param_1);
LAB_005f1344:
  uVar9 = 0;
  uVar6 = 0xf;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0x25:
    uVar9 = 4;
    break;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
    goto switchD_005f136c_caseD_26;
  case 0x2a:
    uVar9 = 2;
    break;
  case 0x2b:
    break;
  case 0x2d:
    uVar9 = 1;
    break;
  case 0x2f:
    uVar9 = 3;
    break;
  case 0x3c:
    uVar9 = 9;
    break;
  case 0x3e:
    uVar9 = 0xb;
    break;
  case 0x5e:
    uVar9 = 5;
    break;
  default:
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0x101:
      uVar9 = 0xd;
      break;
    default:
      goto switchD_005f136c_caseD_26;
    case 0x10f:
      uVar9 = 0xe;
      break;
    case 0x116:
      uVar9 = 6;
      break;
    case 0x118:
      uVar9 = 8;
      break;
    case 0x119:
      uVar9 = 0xc;
      break;
    case 0x11a:
      uVar9 = 10;
      break;
    case 0x11b:
      uVar9 = 7;
    }
  }
  do {
    uVar6 = uVar9;
    if ((byte)(&DAT_0069a233)[(ulong)uVar9 * 2] <= param_3) break;
    FUN_00600a74(param_1);
    FUN_005ff9d0(*(undefined8 *)(param_1 + 0x30),uVar9,param_2);
    uVar6 = FUN_005f1154(param_1,auStack_70,(&UNK_0069a234)[(ulong)uVar9 * 2]);
                    /* try { // try from 005f1458 to 006f146b has its CatchHandler @ 005f24d8 */
    FUN_005ffc04(*(undefined8 *)(param_1 + 0x30),uVar9,param_2,auStack_70);
    uVar9 = uVar6;
                    /* try { // try from 005f146c to 006f14a7 has its CatchHandler @ 005f08ec */
  } while (uVar6 != 0xf);
switchD_005f136c_caseD_26:
  *(short *)(*(long *)(param_1 + 0x38) + 0x60) = *(short *)(*(long *)(param_1 + 0x38) + 0x60) + -1;
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 005f14a8 to 006f14bb has its CatchHandler @ 005f2474 */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


