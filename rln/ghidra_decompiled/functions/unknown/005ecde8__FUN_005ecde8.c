/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ecde8
 * Function: FUN_005ecde8
 * Signature: undefined FUN_005ecde8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ecde8(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_60;
  long local_58;
  
  puVar4 = &local_60;
                    /* catch() { ... } // from try @ 005eca3c with catch @ 005ece00 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x40);
  if (((lVar8 == param_2) || (lVar8 == 0)) || (*(int *)(param_3 + 3) != 0)) {
    local_60 = 0;
    iVar2 = *(int *)((long)param_3 + 0x1c);
    if (iVar2 == 0) {
      uVar9 = *param_3;
      pcVar7 = (code *)param_3[1];
      uVar5 = param_3[2];
      lVar8 = 8;
LAB_005ece98:
      iVar2 = (*pcVar7)(uVar9,puVar4,lVar8,uVar5);
      *(int *)((long)param_3 + 0x1c) = iVar2;
    }
  }
  else {
    local_60 = *(long *)(lVar8 + 0x10) + 1;
    iVar2 = *(int *)((long)param_3 + 0x1c);
    if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 005ec7c4 with catch @ 005ece50 */
                    /* catch() { ... } // from try @ 005ec774 with catch @ 005ece54 */
      iVar2 = (*(code *)param_3[1])(*param_3,&local_60,8,param_3[2]);
      *(int *)((long)param_3 + 0x1c) = iVar2;
      if (iVar2 == 0) {
        uVar9 = *param_3;
        pcVar7 = (code *)param_3[1];
        uVar5 = param_3[2];
        puVar4 = (undefined8 *)(lVar8 + 0x18);
        lVar8 = local_60;
        goto LAB_005ece98;
      }
    }
  }
                    /* catch() { ... } // from try @ 005ec65c with catch @ 005ecea4 */
                    /* catch() { ... } // from try @ 005ec5d8 with catch @ 005ecea8 */
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 005ec578 with catch @ 005eceac */
    local_60._0_4_ = *(undefined4 *)(param_1 + 0x60);
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 100));
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  if (iVar2 == 0) {
    local_60._0_1_ = *(undefined1 *)(param_1 + 0x70);
                    /* catch() { ... } // from try @ 005ec4e0 with catch @ 005ecefc */
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  local_60._0_1_ = *(undefined1 *)(param_1 + 0x71);
                    /* catch() { ... } // from try @ 005ec480 with catch @ 005ecf14 */
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  local_60._0_1_ = *(undefined1 *)(param_1 + 0x72);
  if (iVar2 == 0) {
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)(param_1 + 0x73));
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 005ec450 with catch @ 005ecf64 */
                    /* catch() { ... } // from try @ 005ec3f8 with catch @ 005ecf68 */
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  iVar6 = *(int *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  if (iVar2 == 0) {
    local_60._0_4_ = iVar6;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if (iVar2 != 0) goto LAB_005ecfa4;
    iVar2 = (*(code *)param_3[1])(*param_3,uVar9,(long)iVar6 << 2,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    uVar10 = *(uint *)(param_1 + 0x4c);
    local_60 = CONCAT44(local_60._4_4_,uVar10);
    if (iVar2 == 0) {
      iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
      *(int *)((long)param_3 + 0x1c) = iVar2;
    }
  }
  else {
LAB_005ecfa4:
    uVar10 = *(uint *)(param_1 + 0x4c);
    local_60 = CONCAT44(local_60._4_4_,uVar10);
  }
  if (0 < (int)uVar10) {
    lVar8 = 0;
    uVar11 = (ulong)uVar10;
    do {
      lVar12 = *(long *)(param_1 + 0x10);
      iVar6 = *(int *)(lVar12 + lVar8 + 8);
                    /* catch() { ... } // from try @ 005ec3e4 with catch @ 005ecfc8 */
      local_60 = CONCAT71(local_60._1_7_,(char)iVar6);
                    /* catch() { ... } // from try @ 005ec2b8 with catch @ 005ecfcc */
      if (iVar2 == 0) {
        iVar2 = (*(code *)param_3[1])(*param_3,&local_60,1,param_3[2]);
        *(int *)((long)param_3 + 0x1c) = iVar2;
        iVar6 = *(int *)(lVar12 + lVar8 + 8);
        if (iVar6 == 4) goto LAB_005ed02c;
LAB_005ecfd8:
        if (iVar6 == 3) {
          local_60 = *(long *)(lVar12 + lVar8);
          if (iVar2 == 0) {
LAB_005ed08c:
            uVar9 = *param_3;
            pcVar7 = (code *)param_3[1];
            uVar5 = param_3[2];
            puVar4 = &local_60;
            lVar12 = 8;
LAB_005ed09c:
                    /* catch() { ... } // from try @ 005ec264 with catch @ 005ed09c */
            iVar2 = (*pcVar7)(uVar9,puVar4,lVar12,uVar5);
                    /* catch() { ... } // from try @ 005ec208 with catch @ 005ed0a0 */
            *(int *)((long)param_3 + 0x1c) = iVar2;
          }
        }
        else if (iVar6 == 1) {
          local_60 = CONCAT71(local_60._1_7_,(char)*(undefined4 *)(lVar12 + lVar8));
          if (iVar2 == 0) {
            uVar9 = *param_3;
            pcVar7 = (code *)param_3[1];
            uVar5 = param_3[2];
            puVar4 = &local_60;
            lVar12 = 1;
            goto LAB_005ed09c;
          }
        }
      }
      else {
        if (iVar6 != 4) goto LAB_005ecfd8;
LAB_005ed02c:
        lVar12 = *(long *)(lVar12 + lVar8);
        if (lVar12 == 0) {
          local_60 = 0;
          if (iVar2 != 0) goto LAB_005ed0a4;
          goto LAB_005ed08c;
        }
                    /* catch() { ... } // from try @ 005ec2a4 with catch @ 005ed038 */
        local_60 = *(long *)(lVar12 + 0x10) + 1;
                    /* catch() { ... } // from try @ 005ec278 with catch @ 005ed03c */
        if (iVar2 == 0) {
          iVar2 = (*(code *)param_3[1])(*param_3,&local_60,8,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar2;
          if (iVar2 != 0) goto LAB_005ed0a4;
          uVar9 = *param_3;
          pcVar7 = (code *)param_3[1];
          uVar5 = param_3[2];
          puVar4 = (undefined8 *)(lVar12 + 0x18);
          lVar12 = local_60;
          goto LAB_005ed09c;
        }
      }
LAB_005ed0a4:
      uVar11 = uVar11 - 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar11 != 0);
  }
  uVar10 = *(uint *)(param_1 + 0x58);
  local_60 = CONCAT44(local_60._4_4_,uVar10);
  if (iVar2 == 0) {
    uVar3 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(undefined4 *)((long)param_3 + 0x1c) = uVar3;
  }
  if (0 < (int)uVar10) {
    uVar11 = 0;
    do {
                    /* catch() { ... } // from try @ 005ec194 with catch @ 005ed0f0 */
      FUN_005ecde8(*(undefined8 *)(*(long *)(param_1 + 0x20) + uVar11 * 8),
                   *(undefined8 *)(param_1 + 0x40),param_3);
      uVar11 = uVar11 + 1;
    } while (uVar10 != uVar11);
  }
  if (*(int *)(param_3 + 3) == 0) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x54);
  }
  else {
    uVar11 = 0;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  iVar2 = *(int *)((long)param_3 + 0x1c);
                    /* catch() { ... } // from try @ 005ec16c with catch @ 005ed120 */
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 005ec164 with catch @ 005ed124 */
                    /* catch() { ... } // from try @ 005ec0f0 with catch @ 005ed128 */
    local_60._0_4_ = (int)uVar11;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
    if (iVar2 == 0) {
      iVar2 = (*(code *)param_3[1])
                        (*param_3,uVar9,-(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2,
                         param_3[2]);
      *(int *)((long)param_3 + 0x1c) = iVar2;
      iVar6 = *(int *)(param_3 + 3);
      goto joined_r0x005ed144;
    }
  }
                    /* catch() { ... } // from try @ 005ec29c with catch @ 005ed140
                       catch() { ... } // from try @ 005ecaac with catch @ 005ed140 */
  iVar6 = *(int *)(param_3 + 3);
joined_r0x005ed144:
  if (iVar6 == 0) {
    uVar10 = *(uint *)(param_1 + 0x5c);
  }
  else {
    uVar10 = 0;
                    /* catch() { ... } // from try @ 005ec25c with catch @ 005ed150
                       catch() { ... } // from try @ 005ecad0 with catch @ 005ed150 */
  }
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 005ec180 with catch @ 005ed154
                       catch() { ... } // from try @ 005ec1c4 with catch @ 005ed154 */
    local_60._0_4_ = uVar10;
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  if (0 < (int)uVar10) {
    lVar8 = 0;
    uVar11 = (ulong)uVar10;
    do {
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + lVar8);
      if (lVar12 == 0) {
        local_60 = 0;
        if (iVar2 == 0) {
          uVar9 = *param_3;
          pcVar7 = (code *)param_3[1];
          uVar5 = param_3[2];
          lVar12 = 8;
          puVar4 = &local_60;
LAB_005ed1e0:
          iVar2 = (*pcVar7)(uVar9,puVar4,lVar12,uVar5);
          *(int *)((long)param_3 + 0x1c) = iVar2;
        }
      }
      else {
        local_60 = *(long *)(lVar12 + 0x10) + 1;
        if (iVar2 == 0) {
          iVar2 = (*(code *)param_3[1])(*param_3,&local_60,8,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar2;
          if (iVar2 == 0) {
            uVar9 = *param_3;
            pcVar7 = (code *)param_3[1];
            uVar5 = param_3[2];
            puVar4 = (undefined8 *)(lVar12 + 0x18);
            lVar12 = local_60;
                    /* catch() { ... } // from try @ 005ec7e4 with catch @ 005ed1c4
                       catch() { ... } // from try @ 005ec878 with catch @ 005ed1c4 */
            goto LAB_005ed1e0;
          }
        }
      }
      lVar12 = *(long *)(param_1 + 0x30);
      if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 005ec67c with catch @ 005ed1fc
                       catch() { ... } // from try @ 005ec710 with catch @ 005ed1fc */
        local_60._0_4_ = *(undefined4 *)(lVar12 + lVar8 + 8);
        iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
        *(int *)((long)param_3 + 0x1c) = iVar2;
        lVar12 = *(long *)(param_1 + 0x30);
      }
      local_60._0_4_ = *(undefined4 *)(lVar12 + lVar8 + 0xc);
      if (iVar2 == 0) {
        iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
        *(int *)((long)param_3 + 0x1c) = iVar2;
      }
      uVar11 = uVar11 - 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar11 != 0);
  }
  if (*(int *)(param_3 + 3) == 0) {
    uVar10 = *(uint *)(param_1 + 0x48);
    local_60 = CONCAT44(local_60._4_4_,uVar10);
  }
  else {
    uVar10 = 0;
    local_60 = (ulong)local_60._4_4_ << 0x20;
  }
  if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 005ec2e0 with catch @ 005ed264
                       catch() { ... } // from try @ 005ec370 with catch @ 005ed264 */
    iVar2 = (*(code *)param_3[1])(*param_3,&local_60,4,param_3[2]);
    *(int *)((long)param_3 + 0x1c) = iVar2;
  }
  if (0 < (int)uVar10) {
    uVar11 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x38) + uVar11 * 8);
      if (lVar8 == 0) {
                    /* catch() { ... } // from try @ 005ec418 with catch @ 005ed2d4
                       catch() { ... } // from try @ 005ec4d4 with catch @ 005ed2d4
                       catch() { ... } // from try @ 005ec4e8 with catch @ 005ed2d4
                       catch() { ... } // from try @ 005ec5cc with catch @ 005ed2d4
                       catch() { ... } // from try @ 005ec5e0 with catch @ 005ed2d4
                       catch() { ... } // from try @ 005ec9e4 with catch @ 005ed2d4 */
        local_60 = 0;
        if (iVar2 == 0) {
          uVar9 = *param_3;
          pcVar7 = (code *)param_3[1];
          uVar5 = param_3[2];
          lVar8 = 8;
          puVar4 = &local_60;
LAB_005ed2ec:
          iVar2 = (*pcVar7)(uVar9,puVar4,lVar8,uVar5);
          *(int *)((long)param_3 + 0x1c) = iVar2;
        }
      }
      else {
        local_60 = *(long *)(lVar8 + 0x10) + 1;
        if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 005ec8b4 with catch @ 005ed2b4
                       catch() { ... } // from try @ 005ec958 with catch @ 005ed2b4 */
          iVar2 = (*(code *)param_3[1])(*param_3,&local_60,8,param_3[2]);
          *(int *)((long)param_3 + 0x1c) = iVar2;
          if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 005ec0e4 with catch @ 005ed2c4
                       catch() { ... } // from try @ 005ec0f8 with catch @ 005ed2c4 */
            uVar9 = *param_3;
            pcVar7 = (code *)param_3[1];
            uVar5 = param_3[2];
            puVar4 = (undefined8 *)(lVar8 + 0x18);
            lVar8 = local_60;
            goto LAB_005ed2ec;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar10 != uVar11);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


