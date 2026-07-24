/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00374fb4
 * Function: std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_erase
 * Signature: undefined __cdecl _M_erase(_Deque_iterator param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::deque<Caver::HeroEntityComponent::SafePosition,
   std::allocator<Caver::HeroEntityComponent::SafePosition>
   >::_M_erase(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition&, Caver::HeroEntityComponent::SafePosition*>) */

void std::
     deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
     ::_M_erase(long *param_1,long param_2,long *param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  ulong uVar21;
  undefined1 auStack_c8 [32];
  void *local_a8;
  void *pvStack_a0;
  void *local_98;
  undefined8 *puStack_90;
  void *local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 *puStack_70;
  void *local_68;
  void *pvStack_60;
  void *local_58;
  undefined8 *puStack_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  pvVar11 = (void *)*param_3;
  pvVar2 = (void *)param_3[1];
  pvVar1 = (void *)param_3[2];
  puVar3 = (undefined8 *)param_3[3];
  pvVar16 = (void *)((long)pvVar11 + 0x28);
  puVar15 = puVar3;
  pvVar17 = pvVar1;
  pvVar18 = pvVar2;
  if (pvVar16 == pvVar1) {
    puVar15 = puVar3 + 1;
    pvVar16 = (void *)*puVar15;
    pvVar17 = (void *)((long)pvVar16 + 0x1e0);
    pvVar18 = pvVar16;
  }
  pvVar9 = *(void **)(param_2 + 0x10);
  pvVar19 = *(void **)(param_2 + 0x20);
  puVar4 = *(undefined8 **)(param_2 + 0x28);
  pvVar20 = *(void **)(param_2 + 0x30);
  pvVar7 = *(void **)(param_2 + 0x38);
  lVar10 = ((long)pvVar19 - (long)pvVar9 >> 3) * -0x3333333333333333;
  uVar21 = (lVar10 + ((long)pvVar11 - (long)pvVar2 >> 3) * -0x3333333333333333 +
           ((long)puVar3 - (long)puVar4 >> 3) * 0xc) - 0xc;
  if (uVar21 < (lVar10 + ((long)*(undefined8 **)(param_2 + 0x48) - (long)puVar4 >> 3) * 0xc +
               ((long)pvVar20 - (long)pvVar7 >> 3) * -0x3333333333333333) - 0xcU >> 1) {
    if (pvVar11 != pvVar9) {
      pvStack_60 = *(void **)(param_2 + 0x18);
      local_a8 = pvVar16;
      pvStack_a0 = pvVar18;
      local_98 = pvVar17;
      puStack_90 = puVar15;
      local_88 = pvVar11;
      pvStack_80 = pvVar2;
      local_78 = pvVar1;
      puStack_70 = puVar3;
      local_68 = pvVar9;
      local_58 = pvVar19;
      puStack_50 = puVar4;
      copy_backward<Caver::HeroEntityComponent::SafePosition>
                (auStack_c8,&local_68,&local_88,&local_a8);
      pvVar11 = *(void **)(param_2 + 0x10);
      pvVar19 = *(void **)(param_2 + 0x20);
    }
    plVar8 = *(long **)((long)pvVar11 + 0x10);
    if (pvVar11 == (void *)((long)pvVar19 + -0x28)) {
      if ((plVar8 != (long *)0x0) &&
         (iVar5 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar5, iVar5 == 0)) {
        (**(code **)(*plVar8 + 8))();
      }
      operator_delete(*(void **)(param_2 + 0x18));
      lVar10 = *(long *)(param_2 + 0x28);
      *(long *)(param_2 + 0x28) = lVar10 + 8;
      lVar10 = *(long *)(lVar10 + 8);
      *(long *)(param_2 + 0x10) = lVar10;
      *(long *)(param_2 + 0x18) = lVar10;
      *(long *)(param_2 + 0x20) = lVar10 + 0x1e0;
    }
    else {
      if ((plVar8 != (long *)0x0) &&
         (iVar5 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar5, iVar5 == 0)) {
        (**(code **)(*plVar8 + 8))();
        pvVar11 = *(void **)(param_2 + 0x10);
      }
      *(long *)(param_2 + 0x10) = (long)pvVar11 + 0x28;
    }
  }
  else {
    if (pvVar16 == pvVar20) {
      if (pvVar20 == pvVar7) goto LAB_00375170;
LAB_0037510c:
      *(long *)(param_2 + 0x30) = (long)pvVar20 + -0x28;
      plVar8 = *(long **)((long)pvVar20 + -0x18);
    }
    else {
      local_78 = *(void **)(param_2 + 0x40);
      local_a8 = pvVar11;
      pvStack_a0 = pvVar2;
      local_98 = pvVar1;
      puStack_90 = puVar3;
      local_88 = pvVar20;
      pvStack_80 = pvVar7;
      puStack_70 = *(undefined8 **)(param_2 + 0x48);
      local_68 = pvVar16;
      pvStack_60 = pvVar18;
      local_58 = pvVar17;
      puStack_50 = puVar15;
      copy<Caver::HeroEntityComponent::SafePosition>(auStack_c8,&local_68,&local_88,&local_a8);
      pvVar20 = *(void **)(param_2 + 0x30);
      pvVar7 = *(void **)(param_2 + 0x38);
      if (pvVar20 != pvVar7) goto LAB_0037510c;
LAB_00375170:
      operator_delete(pvVar7);
      lVar10 = *(long *)(param_2 + 0x48);
      *(long *)(param_2 + 0x48) = lVar10 + -8;
      lVar10 = *(long *)(lVar10 + -8);
      *(long *)(param_2 + 0x30) = lVar10 + 0x1b8;
      *(long *)(param_2 + 0x38) = lVar10;
      *(long *)(param_2 + 0x40) = lVar10 + 0x1e0;
      plVar8 = *(long **)(lVar10 + 0x1c8);
    }
    if ((plVar8 != (long *)0x0) &&
       (iVar5 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar5, iVar5 == 0)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  lVar10 = *(long *)(param_2 + 0x18);
  plVar8 = *(long **)(param_2 + 0x28);
  uVar12 = uVar21 + (*(long *)(param_2 + 0x10) - lVar10 >> 3) * -0x3333333333333333;
  if ((long)uVar12 < 0) {
    uVar21 = ~uVar12 / 0xc ^ 0xffffffffffffffff;
  }
  else {
    if ((long)uVar12 < 0xc) {
      lVar13 = *(long *)(param_2 + 0x20);
      lVar14 = *(long *)(param_2 + 0x10) + uVar21 * 0x28;
      goto LAB_00375280;
    }
    uVar21 = uVar12 / 0xc;
  }
  plVar8 = plVar8 + uVar21;
  lVar10 = *plVar8;
  lVar13 = lVar10 + 0x1e0;
  lVar14 = lVar10 + (uVar12 + uVar21 * -0xc) * 0x28;
LAB_00375280:
  *param_1 = lVar14;
  param_1[1] = lVar10;
  param_1[2] = lVar13;
  param_1[3] = (long)plVar8;
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


