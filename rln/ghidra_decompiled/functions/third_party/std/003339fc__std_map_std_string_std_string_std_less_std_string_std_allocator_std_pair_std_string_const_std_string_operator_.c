/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003339fc
 * Function: std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<std::string, std::string, std::less<std::string >, std::allocator<std::pair<std::string
   const, std::string > > >::operator[](std::string const&) */

map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
* __thiscall
std::
map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
::operator[](map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             *this,string *param_1)

{
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  *pmVar1;
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  *pmVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  *pmVar10;
  ulong uVar11;
  int *piVar12;
  size_t sVar13;
  void *__s2;
  ulong uVar14;
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  *pmVar15;
  undefined1 auVar16 [16];
  undefined *local_88;
  void *local_80;
  long local_78 [2];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pmVar1 = this + 8;
  pmVar10 = pmVar1;
  if (*(map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
        **)(this + 0x10) !=
      (map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar14 = *(ulong *)((long)__s2 + -0x18);
    pmVar15 = *(map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                **)(this + 0x10);
    do {
      while( true ) {
        uVar11 = *(ulong *)((long)*(void **)(pmVar15 + 0x20) + -0x18);
        lVar5 = uVar11 - uVar14;
        sVar13 = uVar14;
        if (uVar11 < uVar14 || lVar5 == 0) {
          sVar13 = uVar11;
        }
        iVar8 = memcmp(*(void **)(pmVar15 + 0x20),__s2,sVar13);
        if (iVar8 != 0) break;
        if (lVar5 < 0x80000000) {
          iVar8 = (int)lVar5;
          if (lVar5 < -0x7fffffff) {
            iVar8 = -0x80000000;
          }
          break;
        }
LAB_00333a98:
        pmVar2 = pmVar15 + 0x10;
        pmVar10 = pmVar15;
        pmVar15 = *(map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                    **)pmVar2;
        if (*(map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              **)pmVar2 ==
            (map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             *)0x0) goto LAB_00333aa8;
      }
      if (-1 < iVar8) goto LAB_00333a98;
      pmVar2 = pmVar15 + 0x18;
      pmVar15 = *(map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                  **)pmVar2;
    } while (*(map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               **)pmVar2 !=
             (map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)0x0);
  }
LAB_00333aa8:
  if (pmVar10 != pmVar1) {
    uVar14 = *(ulong *)((long)*(void **)param_1 + -0x18);
    sVar13 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
    lVar5 = uVar14 - sVar13;
    if (uVar14 < sVar13 || lVar5 == 0) {
      sVar13 = uVar14;
    }
    iVar8 = memcmp(*(void **)param_1,*(void **)(pmVar10 + 0x20),sVar13);
    if (iVar8 == 0) {
      if (0x7fffffff < lVar5) goto LAB_00333bd4;
      iVar8 = (int)lVar5;
      if (lVar5 < -0x7fffffff) {
        iVar8 = -0x80000000;
      }
    }
    if (-1 < iVar8) goto LAB_00333bd4;
  }
  puVar7 = PTR_DAT_007e5de8;
  local_88 = PTR_DAT_007e5de8 + 0x18;
  FUN_0066a528(&local_80,param_1);
  FUN_0066a528(local_78,&local_88);
  auVar16 = _Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)this,pmVar10,&local_80);
  pmVar15 = auVar16._8_8_;
  pmVar10 = auVar16._0_8_;
  if (pmVar15 !=
      (map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
       *)0x0) {
    uVar14 = 1;
    if ((pmVar10 ==
         (map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)0x0) && (pmVar1 != pmVar15)) {
      uVar14 = *(ulong *)((long)local_80 + -0x18);
      sVar13 = *(ulong *)((long)*(void **)(pmVar15 + 0x20) + -0x18);
      lVar5 = uVar14 - sVar13;
      if (uVar14 < sVar13 || lVar5 == 0) {
        sVar13 = uVar14;
      }
      uVar9 = memcmp(local_80,*(void **)(pmVar15 + 0x20),sVar13);
      uVar14 = (ulong)uVar9;
      if ((uVar9 == 0) && (uVar14 = 0, lVar5 < 0x80000000)) {
        uVar9 = (uint)lVar5;
        if (lVar5 < -0x7fffffff) {
          uVar9 = 0x80000000;
        }
        uVar14 = (ulong)uVar9;
      }
      uVar14 = uVar14 >> 0x1f;
    }
    pmVar10 = (map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               *)_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                 ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                                   *)this,(pair *)&local_80);
    FUN_0064c8a0(uVar14,pmVar10,pmVar15,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  if ((undefined *)(local_78[0] + -0x18) != puVar7) {
    piVar12 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  if ((undefined *)((long)local_80 + -0x18) != puVar7) {
    piVar12 = (int *)((long)local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)((long)local_80 + -0x18));
    }
  }
  if (local_88 + -0x18 != puVar7) {
    piVar12 = (int *)(local_88 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_88 + -0x18);
    }
  }
LAB_00333bd4:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return pmVar10 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


