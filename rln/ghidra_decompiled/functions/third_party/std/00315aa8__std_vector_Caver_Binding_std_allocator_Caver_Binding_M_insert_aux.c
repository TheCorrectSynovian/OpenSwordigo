/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00315aa8
 * Function: std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::Binding,std::allocator<Caver::Binding>> * this, __normal_iterator param_1, Binding * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::Binding, std::allocator<Caver::Binding>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*, std::vector<Caver::Binding,
   std::allocator<Caver::Binding> > >, Caver::Binding const&) */

void __thiscall
std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux
          (vector<Caver::Binding,std::allocator<Caver::Binding>> *this,Binding *param_2,
          undefined4 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  Binding *pBVar10;
  Binding *pBVar11;
  undefined *puVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  void *pvVar19;
  undefined8 *puVar20;
  long local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  puVar2 = *(undefined4 **)(this + 8);
  if (puVar2 == *(undefined4 **)(this + 0x10)) {
    lVar14 = *(long *)this;
    lVar18 = (long)puVar2 - lVar14;
    uVar17 = lVar18 >> 5;
    uVar16 = uVar17;
    if (lVar18 == 0) {
      uVar16 = 1;
    }
    uVar1 = 0x7ffffffffffffff;
    if (!CARRY8(uVar16,uVar17) && uVar16 + uVar17 >> 0x3b == 0) {
      uVar1 = uVar16 + uVar17;
    }
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    pBVar10 = operator_new(uVar1 << 5);
    pBVar11 = pBVar10 + ((long)param_2 - lVar14 >> 5) * 0x20;
    *(undefined4 *)pBVar11 = *param_3;
    FUN_0066a528(pBVar11 + 8,param_3 + 2);
    *(undefined4 *)(pBVar11 + 0x18) = param_3[6];
    *(undefined8 *)(pBVar11 + 0x10) = *(undefined8 *)(param_3 + 4);
    pBVar11 = __uninitialized_copy<false>::__uninit_copy<Caver::Binding*,Caver::Binding*>
                        (*(Binding **)this,param_2,pBVar10);
    pBVar11 = __uninitialized_copy<false>::__uninit_copy<Caver::Binding*,Caver::Binding*>
                        (param_2,*(Binding **)(this + 8),pBVar11 + 0x20);
    puVar9 = PTR_DAT_007e5de8;
    puVar8 = PTR_pthread_create_007e4e78;
    pvVar19 = *(void **)this;
    pvVar3 = *(void **)(this + 8);
    if (pvVar19 != pvVar3) {
      do {
        puVar12 = (undefined *)(*(long *)((long)pvVar19 + 8) + -0x18);
        if (puVar12 != puVar9) {
          piVar13 = (int *)(*(long *)((long)pvVar19 + 8) + -8);
          if (puVar8 == (undefined *)0x0) {
            iVar15 = *piVar13;
            *piVar13 = iVar15 + -1;
          }
          else {
            do {
              iVar15 = *piVar13;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar6) {
                *piVar13 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (iVar15 < 1) {
            operator_delete(puVar12);
          }
        }
        pvVar19 = (void *)((long)pvVar19 + 0x20);
      } while (pvVar19 != pvVar3);
      pvVar19 = *(void **)this;
    }
    if (pvVar19 != (void *)0x0) {
      operator_delete(pvVar19);
    }
    *(Binding **)this = pBVar10;
    *(Binding **)(this + 8) = pBVar11;
    *(Binding **)(this + 0x10) = pBVar10 + uVar1 * 0x20;
  }
  else {
    *puVar2 = puVar2[-8];
    FUN_0066a528(puVar2 + 2,puVar2 + -6);
    puVar2[6] = puVar2[-2];
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar2 + -4);
    *(long *)(this + 8) = *(long *)(this + 8) + 0x20;
    uVar4 = *param_3;
    FUN_0066a528(&local_80,param_3 + 2);
    local_70 = param_3[6];
    local_78 = *(undefined8 *)(param_3 + 4);
    uVar16 = (*(long *)(this + 8) + -0x40) - (long)param_2;
    if (0 < (long)uVar16) {
      lVar18 = (uVar16 >> 5) + 1;
      puVar20 = (undefined8 *)(*(long *)(this + 8) + -0x30);
      do {
        *(undefined4 *)(puVar20 + -2) = *(undefined4 *)(puVar20 + -6);
        FUN_0066a6a8(puVar20 + -1,puVar20 + -5);
        lVar18 = lVar18 + -1;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar20 + -3);
        *puVar20 = puVar20[-4];
        puVar20 = puVar20 + -4;
      } while (1 < lVar18);
    }
    *(undefined4 *)param_2 = uVar4;
    FUN_0066a6a8(param_2 + 8,&local_80);
    *(undefined4 *)(param_2 + 0x18) = local_70;
    *(undefined8 *)(param_2 + 0x10) = local_78;
    if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
      piVar13 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar15 = *piVar13;
        *piVar13 = iVar15 + -1;
      }
      else {
        do {
          iVar15 = *piVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (iVar15 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
      }
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


