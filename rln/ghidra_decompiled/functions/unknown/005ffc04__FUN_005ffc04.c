/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ffc04
 * Function: FUN_005ffc04
 * Signature: undefined FUN_005ffc04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ffc04(long *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  switch(param_2) {
  case 0:
    uVar5 = 0xc;
    break;
  case 1:
    uVar5 = 0xd;
    break;
  case 2:
    uVar5 = 0xe;
    break;
  case 3:
    uVar5 = 0xf;
    break;
  case 4:
    uVar5 = 0x10;
    break;
  case 5:
    uVar5 = 0x11;
    break;
  case 6:
    iVar4 = param_4[4];
    iVar1 = param_4[5];
    FUN_005fe488(param_1,param_4);
    if (iVar4 != iVar1) {
      if (*param_4 == 0xc) {
        if (param_4[4] != param_4[5]) {
          if (param_4[2] < (int)(uint)*(byte *)((long)param_1 + 0x4a)) goto LAB_005fffb4;
          FUN_005fe674(param_1,param_4);
                    /* try { // try from 006001cc to 007001f3 has its CatchHandler @ 006001fc */
        }
      }
      else {
LAB_005fffb4:
                    /* try { // try from 005fffbc to 006fffe3 has its CatchHandler @ 00600018 */
        FUN_005fe5c0(param_1,param_4);
      }
    }
    if (*param_4 == 0xb) {
      lVar11 = *(long *)(*param_1 + 0x18);
      puVar7 = (uint *)(lVar11 + (long)param_4[2] * 4);
      uVar9 = *puVar7;
      if ((uVar9 & 0x3f) == 0x15) {
        if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
           ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_3[2])) {
          *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
                    /* catch() { ... } // from try @ 005fffbc with catch @ 00600018 */
          puVar7 = (uint *)(lVar11 + (long)param_4[2] * 4);
          uVar9 = *puVar7;
        }
        *puVar7 = uVar9 & 0x7fffff | param_3[2] << 0x17;
        *param_3 = 0xb;
        param_3[2] = param_4[2];
        return;
      }
    }
    FUN_005fe5c0(param_1,param_4);
    uVar5 = 0x15;
    break;
  case 7:
    uVar3 = FUN_005feb5c(param_1,param_3);
    uVar2 = FUN_005feb5c(param_1,param_4);
    if (((*param_4 == 0xc) && (((uint)param_4[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_4[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_3[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    uVar5 = 0x17;
    uVar6 = 0;
    goto LAB_0060014c;
  case 8:
                    /* try { // try from 00600048 to 0070006f has its CatchHandler @ 0060008c */
    uVar3 = FUN_005feb5c(param_1,param_3);
    uVar2 = FUN_005feb5c(param_1,param_4);
                    /* try { // try from 00600070 to 0070008f has its CatchHandler @ 005fff6c */
    if (((*param_4 == 0xc) && (((uint)param_4[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_4[2])) {
                    /* catch() { ... } // from try @ 00600048 with catch @ 0060008c */
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_3[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    uVar5 = 0x17;
    goto LAB_00600140;
  case 9:
    uVar3 = FUN_005feb5c(param_1,param_3);
    uVar2 = FUN_005feb5c(param_1,param_4);
    if (((*param_4 == 0xc) && (((uint)param_4[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_4[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_3[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    uVar5 = 0x18;
    goto LAB_00600140;
  case 10:
    uVar3 = FUN_005feb5c(param_1,param_3);
    uVar2 = FUN_005feb5c(param_1,param_4);
    if (((*param_4 == 0xc) && (((uint)param_4[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_4[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_3[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    uVar5 = 0x19;
LAB_00600140:
    uVar6 = 1;
                    /* catch() { ... } // from try @ 006001f4 with catch @ 00600144 */
LAB_0060014c:
    iVar4 = FUN_006005c8(param_1,uVar5,uVar6,uVar3,uVar2);
    param_3[2] = iVar4;
    *param_3 = 10;
                    /* try { // try from 0060015c to 00700163 has its CatchHandler @ 00600200 */
switchD_005ffc40_default:
    return;
  case 0xb:
    uVar2 = FUN_005feb5c(param_1,param_3);
    uVar3 = FUN_005feb5c(param_1,param_4);
    if (((*param_4 == 0xc) && (((uint)param_4[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_4[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_3[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    uVar5 = 0x18;
    goto LAB_005ffe78;
  case 0xc:
    uVar2 = FUN_005feb5c(param_1,param_3);
    uVar3 = FUN_005feb5c(param_1,param_4);
    if (((*param_4 == 0xc) && (((uint)param_4[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_4[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
                    /* try { // try from 005ffe54 to 006ffe77 has its CatchHandler @ 005ff5e8 */
    if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_3[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
                    /* catch() { ... } // from try @ 005ffaec with catch @ 005ffe74 */
    uVar5 = 0x19;
LAB_005ffe78:
                    /* catch() { ... } // from try @ 005ffe8c with catch @ 005ffe78 */
    uVar6 = 1;
    goto LAB_0060014c;
  case 0xd:
                    /* try { // try from 005ffe88 to 006ffe8b has its CatchHandler @ 005ffe9c */
                    /* try { // try from 005ffe8c to 006ffeaf has its CatchHandler @ 005ffe78 */
    FUN_005fe488(param_1,param_4);
    iVar4 = param_3[5];
                    /* catch() { ... } // from try @ 005ffe88 with catch @ 005ffe9c */
    if (iVar4 != -1) {
      if (param_4[5] == 0xffffffff) {
                    /* try { // try from 00600190 to 0070019b has its CatchHandler @ 006001a8 */
        param_4[5] = iVar4;
      }
      else {
        lVar11 = *(long *)(*param_1 + 0x18);
        uVar9 = param_4[5];
        do {
          uVar10 = uVar9;
          uVar8 = *(uint *)(lVar11 + (long)(int)uVar10 * 4);
          iVar1 = (uVar8 >> 0xe) - 0x1ffff;
          uVar9 = 0xffffffff;
          if (iVar1 != -1) {
            uVar9 = uVar10 + iVar1 + 1;
          }
        } while (uVar9 != 0xffffffff);
LAB_005fff34:
        iVar4 = iVar4 + ~uVar10;
        iVar1 = -iVar4;
        if (-1 < iVar4) {
          iVar1 = iVar4;
        }
        if (0x1ffff < iVar1) {
          FUN_00600968(param_1[3],"control structure too long");
          uVar8 = *(uint *)(lVar11 + (long)(int)uVar10 * 4);
        }
                    /* catch() { ... } // from try @ 00600070 with catch @ 005fff6c */
        *(uint *)(lVar11 + (long)(int)uVar10 * 4) = iVar4 * 0x4000 + 0x7fffc000U | uVar8 & 0x3fff;
      }
    }
    goto LAB_0060019c;
  case 0xe:
    FUN_005fe488(param_1,param_4);
    iVar4 = param_3[4];
    if (iVar4 != -1) {
      if (param_4[4] != 0xffffffff) {
        lVar11 = *(long *)(*param_1 + 0x18);
        uVar9 = param_4[4];
        do {
          uVar10 = uVar9;
          uVar8 = *(uint *)(lVar11 + (long)(int)uVar10 * 4);
          iVar1 = (uVar8 >> 0xe) - 0x1ffff;
          uVar9 = 0xffffffff;
          if (iVar1 != -1) {
            uVar9 = uVar10 + iVar1 + 1;
          }
        } while (uVar9 != 0xffffffff);
        goto LAB_005fff34;
      }
      param_4[4] = iVar4;
    }
LAB_0060019c:
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_4 + 4);
    uVar5 = *(undefined8 *)param_4;
                    /* catch() { ... } // from try @ 00600190 with catch @ 006001a8 */
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar5;
  default:
    goto switchD_005ffc40_default;
  }
  FUN_005ff794(param_1,uVar5,param_3,param_4);
  return;
}


