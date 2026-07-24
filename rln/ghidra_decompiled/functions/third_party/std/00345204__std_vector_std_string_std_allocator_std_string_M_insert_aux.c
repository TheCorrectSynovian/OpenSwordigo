/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00345204
 * Function: std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<std::string,std::allocator<std::string>> * this, __normal_iterator param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<std::string, std::allocator<std::string >
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string*, std::vector<std::string,
   std::allocator<std::string > > >, std::string const&) */

void __thiscall
std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
          (vector<std::string,std::allocator<std::string>> *this,string *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  string *psVar8;
  string *psVar9;
  undefined *puVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long local_78 [2];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar16 = *(long *)(this + 8);
  if (lVar16 == *(long *)(this + 0x10)) {
    lVar15 = *(long *)this;
    lVar16 = lVar16 - lVar15;
    uVar12 = lVar16 >> 3;
    uVar14 = uVar12;
    if (lVar16 == 0) {
      uVar14 = 1;
    }
    uVar1 = 0x1fffffffffffffff;
    if (!CARRY8(uVar14,uVar12) && uVar14 + uVar12 >> 0x3d == 0) {
      uVar1 = uVar14 + uVar12;
    }
    if (uVar1 == 0) {
      psVar8 = (string *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      psVar8 = operator_new(uVar1 << 3);
    }
    FUN_0066a528(psVar8 + ((long)param_2 - lVar15 >> 3) * 8,param_3);
    psVar9 = __uninitialized_copy<false>::__uninit_copy<std::string*,std::string*>
                       (*(string **)this,param_2,psVar8);
    psVar9 = __uninitialized_copy<false>::__uninit_copy<std::string*,std::string*>
                       (param_2,*(string **)(this + 8),psVar9 + 8);
    puVar7 = PTR_DAT_007e5de8;
    puVar6 = PTR_pthread_create_007e4e78;
    plVar17 = *(long **)this;
    plVar2 = *(long **)(this + 8);
    if (plVar17 != plVar2) {
      do {
        puVar10 = (undefined *)(*plVar17 + -0x18);
        if (puVar10 != puVar7) {
          piVar11 = (int *)(*plVar17 + -8);
          if (puVar6 == (undefined *)0x0) {
            iVar13 = *piVar11;
            *piVar11 = iVar13 + -1;
          }
          else {
            do {
              iVar13 = *piVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar4) {
                *piVar11 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar13 < 1) {
            operator_delete(puVar10);
          }
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar2);
      plVar17 = *(long **)this;
    }
    if (plVar17 != (long *)0x0) {
      operator_delete(plVar17);
    }
    *(string **)this = psVar8;
    *(string **)(this + 8) = psVar9;
    *(string **)(this + 0x10) = psVar8 + uVar1 * 8;
  }
  else {
    FUN_0066a528(lVar16,lVar16 + -8);
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
    FUN_0066a528(local_78,param_3);
    uVar14 = (*(long *)(this + 8) + -0x10) - (long)param_2;
    if (0 < (long)uVar14) {
      lVar16 = (uVar14 >> 3) + 1;
      lVar15 = *(long *)(this + 8) + -0x18;
      do {
        FUN_0066a6a8(lVar15 + 8,lVar15);
        lVar16 = lVar16 + -1;
        lVar15 = lVar15 + -8;
      } while (1 < lVar16);
    }
    FUN_0066a6a8(param_2,local_78);
    if ((undefined *)(local_78[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar11 = (int *)(local_78[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar13 = *piVar11;
        *piVar11 = iVar13 + -1;
      }
      else {
        do {
          iVar13 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar13 < 1) {
        operator_delete((undefined *)(local_78[0] + -0x18));
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


