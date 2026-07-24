/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d9b4
 * Function: __gxx_personality_v0
 * Signature: undefined __gxx_personality_v0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8
__gxx_personality_v0(int param_1,uint param_2,long param_3,ulong *param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  _func_void *p_Var19;
  undefined8 uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  long *local_70;
  ulong *local_68;
  ulong local_60;
  int local_4c;
  int local_48;
  undefined4 uStack_44;
  long local_40;
  ulong *local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  byte *local_10;
  byte local_8;
  undefined1 local_7;
  
  local_4c = 0;
                    /* catch() { ... } // from try @ 0061d190 with catch @ 0061d9e0 */
  if (param_1 != 1) {
    return 3;
  }
  bVar1 = 1 < param_3 + 0xb8b1aabcbcd4d500U;
                    /* catch() { ... } // from try @ 0061d0f0 with catch @ 0061da30 */
  if ((param_2 == 6) <= bVar1) {
                    /* catch() { ... } // from try @ 0061d398 with catch @ 0061daf0
                       catch() { ... } // from try @ 0061d64c with catch @ 0061daf0 */
    local_60 = FUN_006800f0(param_5);
    if (local_60 == 0) {
      return 8;
    }
                    /* catch() { ... } // from try @ 0061d358 with catch @ 0061db00
                       catch() { ... } // from try @ 0061d670 with catch @ 0061db00 */
                    /* catch() { ... } // from try @ 0061d00c with catch @ 0061db10
                       catch() { ... } // from try @ 0061d04c with catch @ 0061db10 */
    pbVar9 = (byte *)FUN_0061d768(param_5,local_60,&local_30);
    local_20 = FUN_0061d6ec(local_8,param_5);
    lVar12 = FUN_006800d4(param_5,&local_4c);
    uVar22 = lVar12 - (ulong)(local_4c == 0);
    if (pbVar9 < local_10) {
      do {
        uVar4 = local_7;
                    /* catch() { ... } // from try @ 0061d458 with catch @ 0061db70
                       catch() { ... } // from try @ 0061d4fc with catch @ 0061db70 */
        uVar20 = FUN_0061d6ec(local_7,0);
                    /* catch() { ... } // from try @ 0061d3d8 with catch @ 0061db80
                       catch() { ... } // from try @ 0061d3ec with catch @ 0061db80
                       catch() { ... } // from try @ 0061d584 with catch @ 0061db80 */
        uVar20 = FUN_0061d5dc(uVar4,uVar20,pbVar9,&local_48);
        uVar4 = local_7;
        uVar10 = FUN_0061d6ec(local_7,0);
        uVar20 = FUN_0061d5dc(uVar4,uVar10,uVar20,&local_40);
        uVar4 = local_7;
        uVar10 = FUN_0061d6ec(local_7,0);
                    /* catch() { ... } // from try @ 0061d060 with catch @ 0061dbd0
                       catch() { ... } // from try @ 0061d074 with catch @ 0061dbd0
                       catch() { ... } // from try @ 0061d0f8 with catch @ 0061dbd0
                       catch() { ... } // from try @ 0061d260 with catch @ 0061dbd0
                       catch() { ... } // from try @ 0061d274 with catch @ 0061dbd0 */
        pbVar11 = (byte *)FUN_0061d5dc(uVar4,uVar10,uVar20,&local_38);
        uVar16 = 0;
        uVar8 = 0;
        do {
          pbVar9 = pbVar11 + 1;
          bVar5 = *pbVar11;
          uVar17 = uVar8 & 0x3f;
          uVar8 = (ulong)((int)uVar8 + 7);
          uVar16 = uVar16 | ((ulong)bVar5 & 0x7f) << uVar17;
          pbVar11 = pbVar9;
        } while ((char)bVar5 < '\0');
        uVar8 = CONCAT44(uStack_44,local_48) + local_30;
        if (uVar22 < uVar8) break;
        if (uVar22 < uVar8 + local_40) {
          if (local_38 == (ulong *)0x0) {
            return 8;
          }
          uVar22 = (long)local_38 + local_28;
          if (uVar16 == 0) {
            if (uVar22 == 0) {
              return 8;
            }
          }
          else {
            if (uVar22 == 0) {
              return 8;
            }
            pbVar9 = local_10 + (uVar16 - 1);
            if (pbVar9 != (byte *)0x0) {
              if ((param_2 >> 3 & 1) == 0) {
                if (bVar1) {
                  local_68 = (ulong *)0x0;
                  local_70 = (long *)PTR_typeinfo_007e4cf8;
                }
                else {
                  local_68 = param_4 + 4;
                  if ((*param_4 & 1) != 0) {
                    local_68 = (ulong *)param_4[-10];
                  }
                  local_70 = (long *)local_68[-0xe];
                }
              }
              else {
                local_68 = (ulong *)0x0;
                local_70 = (long *)PTR_typeinfo_007e4da8;
              }
              bVar2 = false;
              goto LAB_0061dd0c;
            }
          }
          iVar7 = 2;
          goto LAB_0061dc18;
        }
      } while (pbVar9 < local_10);
    }
    uVar22 = 0;
    iVar7 = 1;
LAB_0061dc18:
    local_68 = (ulong *)0x0;
    pbVar9 = (byte *)0x0;
    iVar18 = 0;
    goto LAB_0061dc24;
  }
                    /* catch() { ... } // from try @ 0061d06c with catch @ 0061da34 */
  local_60 = param_4[-3];
  uVar22 = param_4[-2];
  iVar18 = *(int *)((long)param_4 + -0x24);
  if (uVar22 == 0) {
    if ((param_2 >> 3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
LAB_0061da4c:
                    /* catch() { ... } // from try @ 0061d020 with catch @ 0061da4c */
    FUN_0066fcfc(param_4);
  }
  if ((param_2 >> 3 & 1) == 0) {
LAB_0061dab8:
    if (iVar18 < 0) {
      FUN_0061d768(param_5,local_60,&local_30);
      local_20 = FUN_0061d6ec(local_8,param_5);
                    /* catch() { ... } // from try @ 0061cfc0 with catch @ 0061dadc */
                    /* catch() { ... } // from try @ 0061cfa8 with catch @ 0061dae0 */
      uVar8 = FUN_0061d6ec(local_8,param_5);
      param_4[-2] = uVar8;
    }
    goto LAB_0061da5c;
  }
  goto LAB_0061da58;
LAB_0061dd0c:
  lVar12 = FUN_0061d59c(pbVar9,&local_48);
  FUN_0061d59c(lVar12,&local_40);
  uVar8 = CONCAT44(uStack_44,local_48);
                    /* try { // try from 0061dd2c to 0071dd2f has its CatchHandler @ 0061de14 */
  if (uVar8 == 0) {
    bVar2 = true;
  }
  else if ((long)uVar8 < 1) {
                    /* try { // try from 0061dd50 to 0071ddf3 has its CatchHandler @ 0061de48 */
    if (bVar1 < (local_70 != (long *)0x0 && (param_2 & 8) == 0)) {
      bVar5 = FUN_0061d874(&local_30,local_70,local_68);
      bVar5 = bVar5 ^ 1;
    }
    else {
      uVar17 = 0;
      uVar16 = 0;
      pbVar11 = (byte *)(local_18 + ~uVar8);
      do {
        bVar5 = *pbVar11;
        uVar8 = uVar16 & 0x3f;
        uVar16 = (ulong)((int)uVar16 + 7);
        uVar17 = uVar17 | ((ulong)bVar5 & 0x7f) << uVar8;
        pbVar11 = pbVar11 + 1;
      } while ((char)bVar5 < '\0');
      bVar5 = uVar17 == 0;
    }
    if (bVar5 != 0) {
LAB_0061de70:
      iVar7 = 3;
      iVar18 = local_48;
      goto LAB_0061dc24;
    }
  }
  else {
    if (local_8 == 0xff) {
      lVar15 = 0;
    }
    else {
      switch(local_8 & 7) {
      case 0:
      case 4:
        lVar15 = uVar8 * -8;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      case 2:
        lVar15 = uVar8 * -2;
        break;
      case 3:
        lVar15 = uVar8 * -4;
      }
    }
                    /* try { // try from 0061ddf4 to 0071de37 has its CatchHandler @ 0061cf44 */
    FUN_0061d5dc(local_8,local_20,local_18 + lVar15,&local_38);
    puVar3 = local_38;
    if (local_38 == (ulong *)0x0) goto LAB_0061de70;
    if (local_70 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0061dd2c with catch @ 0061de14 */
      local_38 = local_68;
      cVar6 = (**(code **)(*local_70 + 0x10))(local_70);
      if (cVar6 != '\0') {
                    /* try { // try from 0061de38 to 0071de3f has its CatchHandler @ 0061de44 */
        local_38 = (ulong *)*local_38;
      }
                    /* catch() { ... } // from try @ 0061de38 with catch @ 0061de44 */
                    /* catch() { ... } // from try @ 0061d7e8 with catch @ 0061de48
                       catch() { ... } // from try @ 0061dd50 with catch @ 0061de48 */
                    /* try { // try from 0061de54 to 0071df1f has its CatchHandler @ 0061de54
                       catch() { ... } // from try @ 0061de54 with catch @ 0061de54
                       catch() { ... } // from try @ 0061df48 with catch @ 0061de54
                       catch() { ... } // from try @ 0061e100 with catch @ 0061de54
                       catch() { ... } // from try @ 0061e25c with catch @ 0061de54 */
      cVar6 = (**(code **)(*puVar3 + 0x20))(puVar3,local_70,&local_38,1);
      if (cVar6 != '\0') {
        local_68 = local_38;
        goto LAB_0061de70;
      }
    }
  }
  if (local_40 == 0) goto LAB_0061dec4;
  pbVar9 = (byte *)(lVar12 + local_40);
  goto LAB_0061dd0c;
LAB_0061dec4:
  if (!bVar2) {
    return 8;
  }
  iVar7 = 2;
  iVar18 = 0;
LAB_0061dc24:
  if ((param_2 & 1) != 0) {
    if (iVar7 == 2) {
      return 8;
    }
    if (!bVar1) {
      param_4[-3] = local_60;
      *(int *)((long)param_4 + -0x24) = iVar18;
      param_4[-4] = (ulong)pbVar9;
      param_4[-1] = (ulong)local_68;
      param_4[-2] = uVar22;
      return 6;
    }
    return 6;
  }
  if (((param_2 >> 3 & 1) == 0) && (!bVar1)) {
    if (iVar7 == 1) goto LAB_0061da4c;
    goto LAB_0061dab8;
  }
  if (iVar7 == 1) {
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_0061da58:
  if (iVar18 < 0) {
    lVar12 = std::unexpected();
    __cxa_begin_catch();
    uStack_110 = *(undefined8 *)(lVar12 + -0x10);
    uVar20 = *(undefined8 *)(lVar12 + -0x18);
    iVar18 = *(int *)(lVar12 + -0x24);
    p_Var19 = *(_func_void **)(lVar12 + -0x38);
    __cxxabiv1::__unexpected(*(_func_void **)(lVar12 + -0x40));
    __cxa_begin_catch();
    plVar13 = (long *)__cxa_get_globals_fast();
    puVar14 = (undefined8 *)*plVar13;
    puVar21 = puVar14 + 0xe;
    if ((puVar14[10] & 1) != 0) {
      puVar21 = (undefined8 *)*puVar14;
    }
    FUN_0061d768(0,uVar20,auStack_120);
    cVar6 = FUN_0061d874(auStack_120,puVar21[-0xe],puVar21,(long)iVar18);
    if (cVar6 != '\0') {
      uVar20 = __cxa_rethrow();
      __cxa_end_catch();
      __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
      FUN_006818c4(uVar20);
    }
    cVar6 = FUN_0061d874(auStack_120,PTR_typeinfo_007e7ee0,0,(long)iVar18);
    if (cVar6 != '\0') {
      plVar13 = (long *)__cxa_allocate_exception(8);
      *plVar13 = (long)(PTR_vtable_007e6760 + 0x10);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar13,PTR_typeinfo_007e7ee0,PTR__bad_exception_007e7cc0);
    }
                    /* WARNING: Subroutine does not return */
    __cxxabiv1::__terminate(p_Var19);
  }
LAB_0061da5c:
  FUN_00680074(param_5,0,param_4);
  FUN_00680074(param_5,1,(long)iVar18);
                    /* catch() { ... } // from try @ 0061cff8 with catch @ 0061da7c */
                    /* catch() { ... } // from try @ 0061cff0 with catch @ 0061da80 */
                    /* catch() { ... } // from try @ 0061cfd8 with catch @ 0061da84 */
  FUN_006800e8(param_5,uVar22);
  return 7;
}


