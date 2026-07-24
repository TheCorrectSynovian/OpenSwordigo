/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00654f18
 * Function: FUN_00654f18
 * Signature: undefined FUN_00654f18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00654f18(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            int *param_6,long param_7,ulong param_8,long param_9,uint *param_10)

{
  long lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  long *plVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *local_20;
  undefined8 local_18;
  long *local_10;
  int local_8;
  undefined4 uStack_4;
  
  local_8 = (int)param_3;
  uStack_4 = (undefined4)((ulong)param_3 >> 0x20);
  local_20 = param_4;
  local_18 = param_5;
  local_10 = param_2;
  plVar5 = (long *)FUN_0064f6ac(param_9 + 0xd0);
  lVar1 = -(param_8 * 8 + 0x1e & 0xfffffffffffffff0);
  iVar3 = FUN_00654b08(&local_10);
  iVar4 = FUN_00654b08(&local_20);
  if ((iVar3 == -1) != (iVar4 == -1)) {
    lVar11 = param_8 * 2;
    iVar3 = FUN_00654b08(&local_10);
    if (lVar11 != 0) {
      lVar10 = 0;
      uVar14 = 0;
      do {
        while ((iVar4 = **(int **)(param_7 + lVar10 * 8), iVar3 == iVar4 ||
               (iVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,iVar4), iVar3 == iVar4))) {
          *(int *)(&stack0xffffffffffffff70 + uVar14 * 4 + lVar1) = (int)lVar10;
          lVar10 = lVar10 + 1;
          uVar14 = uVar14 + 1;
          if (lVar10 == lVar11) goto LAB_00655010;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar11);
LAB_00655010:
      if (uVar14 != 0) {
        if (local_10 != (long *)0x0) {
          if ((ulong)local_10[2] < (ulong)local_10[3]) {
            local_10[2] = local_10[2] + 4;
          }
          else {
            FUN_0064d8c4();
          }
          local_8 = -1;
        }
        uVar13 = 0;
        lVar11 = -(uVar14 * 8 + 0x1e & 0xfffffffffffffff0);
        puVar12 = (ulong *)(&stack0xffffffffffffff70 + lVar11 + lVar1);
        do {
          sVar6 = wcslen(*(wchar_t **)
                          (param_7 +
                          (long)*(int *)(&stack0xffffffffffffff70 + uVar13 * 4 + lVar1) * 8));
          *(size_t *)(&stack0xffffffffffffff70 + uVar13 * 8 + lVar11 + lVar1) = sVar6;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar14);
        uVar13 = 1;
        lVar11 = 4;
        goto LAB_00655088;
      }
    }
  }
  uVar13 = 0;
  uVar14 = 0;
  puVar12 = (ulong *)0x0;
  lVar11 = 0;
LAB_00655088:
  if (local_10 == (long *)0x0) goto LAB_0065516c;
LAB_0065508c:
  if (local_8 == -1) {
    if ((int *)local_10[2] < (int *)local_10[3]) {
      iVar3 = *(int *)local_10[2];
    }
    else {
      iVar3 = (**(code **)(*local_10 + 0x48))();
    }
                    /* try { // try from 0065525c to 00755577 has its CatchHandler @ 0065525c
                       catch(type#1 @ 00000000) { ... } // from try @ 0065525c with catch @ 0065525c
                       catch(type#1 @ 00000000) { ... } // from try @ 00655580 with catch @ 0065525c
                       catch(type#1 @ 00000000) { ... } // from try @ 006556cc with catch @ 0065525c
                        */
    if (iVar3 == -1) {
      local_10 = (long *)0x0;
      goto LAB_0065516c;
    }
    local_8 = iVar3;
    if (local_20 == (long *)0x0) goto LAB_006550bc;
  }
  else {
    iVar3 = local_8;
    if (local_20 == (long *)0x0) goto LAB_006550d0;
  }
  iVar4 = 0;
  iVar3 = 0;
  if ((int)local_18 == -1) goto LAB_00655188;
LAB_006550b4:
  if (iVar3 != iVar4) {
LAB_006550bc:
    do {
      if (local_10 == (long *)0x0) {
        iVar3 = -1;
      }
      else {
        iVar3 = local_8;
        if (local_8 == -1) {
          if ((int *)local_10[2] < (int *)local_10[3]) {
            iVar3 = *(int *)local_10[2];
          }
          else {
            iVar3 = (**(code **)(*local_10 + 0x48))();
          }
          if (iVar3 == -1) {
            local_10 = (long *)0x0;
          }
          else {
            local_8 = iVar3;
          }
        }
      }
LAB_006550d0:
      if (uVar14 == 0) goto LAB_006551c4;
      uVar8 = 0;
      uVar9 = 0;
      do {
        while( true ) {
          if (uVar13 < puVar12[uVar8]) break;
          uVar9 = uVar9 + 1;
LAB_006550e8:
          uVar8 = uVar8 + 1;
          if (uVar14 <= uVar8) goto LAB_00655134;
        }
        if (*(int *)(*(long *)(param_7 +
                              (long)*(int *)(&stack0xffffffffffffff70 + uVar8 * 4 + lVar1) * 8) +
                    lVar11) == iVar3) goto LAB_006550e8;
        uVar14 = uVar14 - 1;
                    /* catch() { ... } // from try @ 00654dec with catch @ 00655124 */
        uVar7 = puVar12[uVar14];
        *(undefined4 *)(&stack0xffffffffffffff70 + uVar8 * 4 + lVar1) =
             *(undefined4 *)(&stack0xffffffffffffff70 + uVar14 * 4 + lVar1);
        puVar12[uVar8] = uVar7;
      } while (uVar8 < uVar14);
LAB_00655134:
      if (uVar14 == uVar9) break;
      if (local_10 != (long *)0x0) {
                    /* try { // try from 00655144 to 0075514b has its CatchHandler @ 00655154 */
                    /* try { // try from 0065514c to 00755157 has its CatchHandler @ 00654d40 */
        if ((ulong)local_10[2] < (ulong)local_10[3]) {
                    /* catch() { ... } // from try @ 00655144 with catch @ 00655154 */
          local_10[2] = local_10[2] + 4;
        }
        else {
          (**(code **)(*local_10 + 0x50))();
        }
        local_8 = -1;
      }
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 4;
      if (local_10 != (long *)0x0) goto LAB_0065508c;
LAB_0065516c:
      if (local_20 == (long *)0x0) break;
      iVar4 = 1;
      iVar3 = 0;
      if ((int)local_18 != -1) goto LAB_006550b4;
LAB_00655188:
      if ((int *)local_20[2] < (int *)local_20[3]) {
        iVar3 = *(int *)local_20[2];
      }
      else {
        iVar3 = (**(code **)(*local_20 + 0x48))();
      }
      if (iVar3 == -1) goto LAB_0065527c;
      local_18 = CONCAT44(local_18._4_4_,iVar3);
      if (iVar4 == 0) break;
    } while( true );
  }
  if (uVar14 == 1) {
    uVar14 = *puVar12;
joined_r0x00655318:
    if (uVar14 == uVar13) {
LAB_006552bc:
      iVar4 = *(int *)(&stack0xffffffffffffff70 + lVar1);
      iVar3 = iVar4 - (int)param_8;
      if ((ulong)(long)iVar4 < param_8) {
        iVar3 = iVar4;
      }
      *param_6 = iVar3;
      goto LAB_006551d0;
    }
  }
  else if (uVar14 == 2) {
    if (*puVar12 != uVar13) {
      uVar14 = puVar12[1];
      goto joined_r0x00655318;
    }
    goto LAB_006552bc;
  }
LAB_006551c4:
  *param_10 = *param_10 | 4;
LAB_006551d0:
  auVar2._8_4_ = local_8;
  auVar2._0_8_ = local_10;
  auVar2._12_4_ = uStack_4;
  return auVar2;
LAB_0065527c:
  local_20 = (long *)0x0;
  iVar3 = 1;
  goto LAB_006550b4;
}


