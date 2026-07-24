/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c0f30
 * Function: std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::Polygon,std::allocator<Caver::Polygon>> * this, __normal_iterator param_1, Polygon * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::Polygon, std::allocator<Caver::Polygon>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Polygon*, std::vector<Caver::Polygon,
   std::allocator<Caver::Polygon> > >, Caver::Polygon const&) */

void __thiscall
std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux
          (vector<Caver::Polygon,std::allocator<Caver::Polygon>> *this,Polygon *param_2,
          undefined4 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  Polygon *pPVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined2 *puVar17;
  void *pvVar18;
  Polygon *pPVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined2 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = *(undefined4 **)(this + 8);
  if (puVar1 == *(undefined4 **)(this + 0x10)) {
    lVar16 = (long)puVar1 - *(long *)this;
    uVar11 = (lVar16 >> 3) * -0x3333333333333333;
    uVar9 = uVar11;
    if (lVar16 == 0) {
      uVar9 = 1;
    }
    uVar12 = 0x666666666666666;
    if (!CARRY8(uVar9,uVar11) && uVar9 + uVar11 < 0x666666666666667) {
      uVar12 = uVar9 + uVar11;
    }
    if (0x666666666666666 < uVar12) goto LAB_003c14c8;
    lVar16 = (long)param_2 - *(long *)this >> 3;
    pPVar7 = operator_new(uVar12 * 0x28);
    pPVar19 = pPVar7 + lVar16 * 8;
    *(undefined4 *)pPVar19 = *param_3;
    puVar5 = *(undefined8 **)(param_3 + 2);
    puVar8 = *(undefined8 **)(param_3 + 4);
    *(undefined8 *)(pPVar19 + 8) = 0;
    *(undefined8 *)(pPVar19 + 0x10) = 0;
    *(undefined8 *)(pPVar19 + 0x18) = 0;
    uVar9 = (long)puVar8 - (long)puVar5;
    if (uVar9 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      if ((ulong)((long)uVar9 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      puVar6 = operator_new(uVar9);
      puVar5 = *(undefined8 **)(param_3 + 2);
      puVar8 = *(undefined8 **)(param_3 + 4);
    }
    *(undefined8 **)(pPVar19 + 8) = puVar6;
    *(undefined8 **)(pPVar7 + lVar16 * 8 + 0x10) = puVar6;
    *(undefined8 **)(pPVar7 + lVar16 * 8 + 0x18) = puVar6 + ((long)uVar9 >> 3);
    if ((long)puVar8 - (long)puVar5 != 0) {
      uVar11 = ((long)puVar8 - (long)puVar5) - 8;
      uVar9 = (uVar11 >> 3) + 1;
      puVar10 = puVar6;
      if (uVar9 < 8) {
LAB_003c1340:
        do {
          puVar14 = puVar5 + 1;
          *puVar10 = *puVar5;
          puVar5 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar8 != puVar14);
      }
      else {
        uVar13 = uVar11 & 0xfffffffffffffff8;
        if ((puVar6 < (undefined8 *)((long)puVar5 + uVar13 + 4) &&
             puVar5 < (undefined8 *)((long)puVar6 + uVar13 + 4)) ||
           ((long)puVar6 + 4U < (long)puVar5 + uVar13 + 8 &&
            (long)puVar5 + 4U < (long)puVar6 + uVar13 + 8)) goto LAB_003c1340;
        uVar15 = uVar9 & 0x3ffffffffffffff8;
        puVar10 = puVar5 + 4;
        puVar14 = puVar6 + 4;
        uVar13 = uVar15;
        do {
          uVar20 = puVar10[-4];
          uVar22 = puVar10[-1];
          uVar21 = puVar10[-2];
          uVar24 = puVar10[1];
          uVar23 = *puVar10;
          uVar26 = puVar10[3];
          uVar25 = puVar10[2];
          uVar13 = uVar13 - 8;
          puVar14[-3] = puVar10[-3];
          puVar14[-4] = uVar20;
          puVar14[-1] = uVar22;
          puVar14[-2] = uVar21;
          puVar14[1] = uVar24;
          *puVar14 = uVar23;
          puVar14[3] = uVar26;
          puVar14[2] = uVar25;
          puVar10 = puVar10 + 8;
          puVar14 = puVar14 + 8;
        } while (uVar13 != 0);
        puVar5 = puVar5 + uVar15;
        puVar10 = puVar6 + uVar15;
        if (uVar9 != uVar15) goto LAB_003c1340;
      }
      puVar6 = (undefined8 *)((long)puVar6 + (uVar11 & 0xfffffffffffffff8) + 8);
    }
    *(undefined8 **)(pPVar7 + lVar16 * 8 + 0x10) = puVar6;
    *(undefined2 *)(pPVar7 + lVar16 * 8 + 0x20) = *(undefined2 *)(param_3 + 8);
    pPVar19 = __uninitialized_copy<false>::__uninit_copy<Caver::Polygon*,Caver::Polygon*>
                        (*(Polygon **)this,param_2,pPVar7);
    pPVar19 = __uninitialized_copy<false>::__uninit_copy<Caver::Polygon*,Caver::Polygon*>
                        (param_2,*(Polygon **)(this + 8),pPVar19 + 0x28);
    pvVar18 = *(void **)this;
    pvVar2 = *(void **)(this + 8);
    if (pvVar18 != pvVar2) {
      do {
        if (*(void **)((long)pvVar18 + 8) != (void *)0x0) {
          operator_delete(*(void **)((long)pvVar18 + 8));
        }
        pvVar18 = (void *)((long)pvVar18 + 0x28);
      } while (pvVar2 != pvVar18);
      pvVar18 = *(void **)this;
    }
    if (pvVar18 != (void *)0x0) {
      operator_delete(pvVar18);
    }
    *(Polygon **)this = pPVar7;
    *(Polygon **)(this + 8) = pPVar19;
    *(Polygon **)(this + 0x10) = pPVar7 + uVar12 * 0x28;
    goto LAB_003c13e0;
  }
  puVar8 = *(undefined8 **)(puVar1 + -8);
  puVar6 = *(undefined8 **)(puVar1 + -6);
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  uVar9 = (long)puVar6 - (long)puVar8;
  *puVar1 = puVar1[-10];
  puVar5 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    if ((ulong)((long)uVar9 >> 3) >> 0x3d != 0) goto LAB_003c14c8;
    puVar5 = operator_new(uVar9);
    puVar8 = *(undefined8 **)(puVar1 + -8);
    puVar6 = *(undefined8 **)(puVar1 + -6);
  }
  *(undefined8 **)(puVar1 + 2) = puVar5;
  *(undefined8 **)(puVar1 + 4) = puVar5;
  *(undefined8 **)(puVar1 + 6) = puVar5 + ((long)uVar9 >> 3);
  if ((long)puVar6 - (long)puVar8 != 0) {
    uVar11 = ((long)puVar6 - (long)puVar8) - 8;
    uVar9 = (uVar11 >> 3) + 1;
    puVar10 = puVar5;
    if (uVar9 < 8) {
LAB_003c0fd0:
      do {
        puVar14 = puVar8 + 1;
        *puVar10 = *puVar8;
        puVar8 = puVar14;
        puVar10 = puVar10 + 1;
      } while (puVar6 != puVar14);
    }
    else {
      uVar12 = uVar11 & 0xfffffffffffffff8;
      if ((puVar5 < (undefined8 *)((long)puVar8 + uVar12 + 4) &&
           puVar8 < (undefined8 *)((long)puVar5 + uVar12 + 4)) ||
         ((long)puVar5 + 4U < (long)puVar8 + uVar12 + 8 &&
          (long)puVar8 + 4U < (long)puVar5 + uVar12 + 8)) goto LAB_003c0fd0;
      uVar13 = uVar9 & 0x3ffffffffffffff8;
      puVar10 = puVar8 + 4;
      puVar14 = puVar5 + 4;
      uVar12 = uVar13;
      do {
        uVar20 = puVar10[-4];
        uVar22 = puVar10[-1];
        uVar21 = puVar10[-2];
        uVar24 = puVar10[1];
        uVar23 = *puVar10;
        uVar26 = puVar10[3];
        uVar25 = puVar10[2];
        uVar12 = uVar12 - 8;
        puVar14[-3] = puVar10[-3];
        puVar14[-4] = uVar20;
        puVar14[-1] = uVar22;
        puVar14[-2] = uVar21;
        puVar14[1] = uVar24;
        *puVar14 = uVar23;
        puVar14[3] = uVar26;
        puVar14[2] = uVar25;
        puVar10 = puVar10 + 8;
        puVar14 = puVar14 + 8;
      } while (uVar12 != 0);
      puVar8 = puVar8 + uVar13;
      puVar10 = puVar5 + uVar13;
      if (uVar9 != uVar13) goto LAB_003c0fd0;
    }
    puVar5 = (undefined8 *)((long)puVar5 + (uVar11 & 0xfffffffffffffff8) + 8);
  }
  *(undefined8 **)(puVar1 + 4) = puVar5;
  *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(puVar1 + -2);
  *(long *)(this + 8) = *(long *)(this + 8) + 0x28;
  uVar3 = *param_3;
  puVar5 = *(undefined8 **)(param_3 + 2);
  puVar8 = *(undefined8 **)(param_3 + 4);
  local_88 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  uVar9 = (long)puVar8 - (long)puVar5;
  puVar6 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    if ((ulong)((long)uVar9 >> 3) >> 0x3d != 0) {
LAB_003c14c8:
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar6 = operator_new(uVar9);
    puVar5 = *(undefined8 **)(param_3 + 2);
    puVar8 = *(undefined8 **)(param_3 + 4);
  }
  local_78 = puVar6 + ((long)uVar9 >> 3);
  local_80 = puVar6;
  if ((long)puVar8 - (long)puVar5 != 0) {
    uVar11 = (long)puVar8 + (-8 - (long)puVar5);
    uVar9 = (uVar11 >> 3) + 1;
    puVar10 = puVar6;
    if (uVar9 < 8) {
LAB_003c1064:
      do {
        puVar14 = puVar5 + 1;
        *puVar10 = *puVar5;
        puVar5 = puVar14;
        puVar10 = puVar10 + 1;
      } while (puVar8 != puVar14);
    }
    else {
      uVar12 = ((long)puVar8 - (long)puVar5) - 8U & 0xfffffffffffffff8;
      if ((puVar6 < (undefined8 *)((long)puVar5 + uVar12 + 4) &&
           puVar5 < (undefined8 *)((long)puVar6 + uVar12 + 4)) ||
         ((long)puVar6 + 4U < (long)puVar5 + uVar12 + 8 &&
          (long)puVar5 + 4U < (long)puVar6 + uVar12 + 8)) goto LAB_003c1064;
      uVar13 = uVar9 & 0x3ffffffffffffff8;
      puVar10 = puVar5 + 4;
      puVar14 = puVar6 + 4;
      uVar12 = uVar13;
      do {
        uVar20 = puVar10[-4];
        uVar22 = puVar10[-1];
        uVar21 = puVar10[-2];
        uVar24 = puVar10[1];
        uVar23 = *puVar10;
        uVar26 = puVar10[3];
        uVar25 = puVar10[2];
        uVar12 = uVar12 - 8;
        puVar14[-3] = puVar10[-3];
        puVar14[-4] = uVar20;
        puVar14[-1] = uVar22;
        puVar14[-2] = uVar21;
        puVar14[1] = uVar24;
        *puVar14 = uVar23;
        puVar14[3] = uVar26;
        puVar14[2] = uVar25;
        puVar10 = puVar10 + 8;
        puVar14 = puVar14 + 8;
      } while (uVar12 != 0);
      puVar5 = puVar5 + uVar13;
      puVar10 = puVar6 + uVar13;
      if (uVar9 != uVar13) goto LAB_003c1064;
    }
    local_80 = (undefined8 *)((long)puVar6 + (uVar11 & 0xfffffffffffffff8) + 8);
  }
  local_70 = *(undefined2 *)(param_3 + 8);
  uVar9 = (*(long *)(this + 8) + -0x50) - (long)param_2;
  local_88 = puVar6;
  if (0 < (long)uVar9) {
    lVar16 = uVar9 / 0x28 + 1;
    puVar17 = (undefined2 *)(*(long *)(this + 8) + -0x30);
    do {
      *(undefined4 *)(puVar17 + -0x10) = *(undefined4 *)(puVar17 + -0x24);
      vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=
                ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)(puVar17 + -0xc),
                 (vector *)(puVar17 + -0x20));
      lVar16 = lVar16 + -1;
      *puVar17 = puVar17[-0x14];
      puVar17 = puVar17 + -0x14;
    } while (1 < lVar16);
  }
  *(undefined4 *)param_2 = uVar3;
  vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=
            ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)(param_2 + 8),
             (vector *)&local_88);
  *(undefined2 *)(param_2 + 0x20) = local_70;
  if (local_88 != (undefined8 *)0x0) {
    operator_delete(local_88);
  }
LAB_003c13e0:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


