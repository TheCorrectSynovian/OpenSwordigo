/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00654b9c
 * Function: FUN_00654b9c
 * Signature: undefined FUN_00654b9c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00654b9c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int *param_6,long param_7,long param_8,long param_9,uint *param_10)

{
  wchar_t wVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t wVar7;
  long *plVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  wchar_t *__s;
  ulong uVar14;
  undefined8 local_20;
  undefined8 uStack_18;
  long *local_10;
  int local_8;
  undefined4 uStack_4;
  
  local_8 = (int)param_3;
  uStack_4 = (undefined4)((ulong)param_3 >> 0x20);
  local_20 = param_4;
  uStack_18 = param_5;
  local_10 = param_2;
  plVar8 = (long *)FUN_0064f6ac(param_9 + 0xd0);
  lVar2 = -(param_8 * 4 + 0x1eU & 0xfffffffffffffff0);
  iVar4 = FUN_00654b08(&local_10);
  iVar5 = FUN_00654b08(&local_20);
  if (((iVar4 == -1) != (iVar5 == -1)) && (iVar4 = FUN_00654b08(&local_10), param_8 != 0)) {
    lVar12 = 0;
    uVar11 = 0;
    do {
      while ((iVar5 = **(int **)(param_7 + lVar12 * 8), iVar4 == iVar5 ||
             (iVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,iVar5), iVar4 == iVar5))) {
        *(int *)(&stack0xffffffffffffff60 + uVar11 * 4 + lVar2) = (int)lVar12;
        lVar12 = lVar12 + 1;
        uVar11 = uVar11 + 1;
        if (lVar12 == param_8) goto LAB_00654c94;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != param_8);
LAB_00654c94:
    uVar14 = 0;
joined_r0x00654ca0:
    if (1 < uVar11) {
      uVar13 = 1;
      uVar9 = wcslen(*(wchar_t **)(param_7 + (long)*(int *)(&stack0xffffffffffffff60 + lVar2) * 8));
      do {
        lVar12 = uVar13 * 4;
        uVar13 = uVar13 + 1;
        sVar10 = wcslen(*(wchar_t **)
                         (param_7 + (long)*(int *)(&stack0xffffffffffffff60 + lVar12 + lVar2) * 8));
        if (sVar10 < uVar9) {
          uVar9 = sVar10;
        }
      } while (uVar13 < uVar11);
      if (local_10 != (long *)0x0) {
        if ((ulong)local_10[2] < (ulong)local_10[3]) {
          local_10[2] = local_10[2] + 4;
        }
        else {
          (**(code **)(*local_10 + 0x50))();
        }
        local_8 = -1;
      }
      uVar14 = uVar14 + 1;
      if (uVar9 <= uVar14) goto LAB_00654e3c;
      iVar4 = FUN_00654b08(&local_10);
      iVar5 = FUN_00654b08(&local_20);
      if ((iVar4 == -1) == (iVar5 == -1)) goto LAB_00654e3c;
      uVar13 = 0;
      do {
        while( true ) {
          iVar4 = *(int *)(*(long *)(param_7 +
                                    (long)*(int *)(&stack0xffffffffffffff60 + uVar13 * 4 + lVar2) *
                                    8) + uVar14 * 4);
          if (local_10 == (long *)0x0) {
            iVar5 = -1;
          }
          else {
            iVar5 = local_8;
            if (local_8 == -1) {
              if ((int *)local_10[2] < (int *)local_10[3]) {
                iVar5 = *(int *)local_10[2];
              }
              else {
                iVar5 = (**(code **)(*local_10 + 0x48))(local_10);
              }
              if (iVar5 == -1) {
                local_10 = (long *)0x0;
              }
              else {
                local_8 = iVar5;
              }
            }
          }
          if (iVar4 != iVar5) break;
          uVar13 = uVar13 + 1;
          if (uVar11 <= uVar13) goto joined_r0x00654ca0;
        }
                    /* catch() { ... } // from try @ 00654e2c with catch @ 00654d40
                       catch() { ... } // from try @ 0065514c with catch @ 00654d40 */
        uVar11 = uVar11 - 1;
        *(undefined4 *)(&stack0xffffffffffffff60 + uVar13 * 4 + lVar2) =
             *(undefined4 *)(&stack0xffffffffffffff60 + uVar11 * 4 + lVar2);
      } while (uVar13 < uVar11);
      goto joined_r0x00654ca0;
    }
    if (uVar11 == 1) {
      if (local_10 != (long *)0x0) {
        if ((ulong)local_10[2] < (ulong)local_10[3]) {
          local_10[2] = local_10[2] + 4;
        }
        else {
          FUN_0064d8c4();
        }
        local_8 = -1;
      }
      iVar4 = *(int *)(&stack0xffffffffffffff60 + lVar2);
      __s = *(wchar_t **)(param_7 + (long)iVar4 * 8);
      sVar10 = wcslen(__s);
      while (uVar14 = uVar14 + 1, uVar14 < sVar10) {
                    /* try { // try from 00654dec to 00754e2b has its CatchHandler @ 00655124 */
        iVar5 = FUN_00654b08(&local_10);
        iVar6 = FUN_00654b08(&local_20);
        if (((iVar5 == -1) == (iVar6 == -1)) ||
           (wVar1 = __s[uVar14], wVar7 = FUN_00654b08(&local_10), wVar7 != wVar1)) break;
        if (local_10 != (long *)0x0) {
          if ((ulong)local_10[2] < (ulong)local_10[3]) {
            local_10[2] = local_10[2] + 4;
          }
          else {
            FUN_0064d8c4();
          }
          local_8 = -1;
        }
      }
                    /* try { // try from 00654e2c to 00755143 has its CatchHandler @ 00654d40 */
      if (uVar14 == sVar10) {
        *param_6 = iVar4;
        goto LAB_00654e48;
      }
    }
  }
LAB_00654e3c:
  *param_10 = *param_10 | 4;
LAB_00654e48:
  auVar3._8_4_ = local_8;
  auVar3._0_8_ = local_10;
  auVar3._12_4_ = uStack_4;
  return auVar3;
}


