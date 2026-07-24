/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037452c
 * Function: std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<std::string, int, std::less<std::string >, std::allocator<std::pair<std::string const,
   int> > >::operator[](std::string const&) */

map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>> *
__thiscall
std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
operator[](map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *this,string *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *pmVar1;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *pmVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *pmVar7;
  int iVar8;
  uint uVar9;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *pmVar10;
  ulong uVar11;
  int *piVar12;
  size_t sVar13;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *pmVar14;
  void *__s2;
  ulong uVar15;
  undefined1 auVar16 [16];
  void *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pmVar1 = this + 8;
  pmVar10 = pmVar1;
  if (*(map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
        **)(this + 0x10) !=
      (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar15 = *(ulong *)((long)__s2 + -0x18);
    pmVar14 = pmVar1;
    pmVar7 = *(map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               **)(this + 0x10);
    do {
      while( true ) {
        pmVar10 = pmVar7;
        uVar11 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
        lVar5 = uVar11 - uVar15;
        sVar13 = uVar15;
        if (uVar11 < uVar15 || lVar5 == 0) {
          sVar13 = uVar11;
        }
        iVar8 = memcmp(*(void **)(pmVar10 + 0x20),__s2,sVar13);
        if (iVar8 != 0) break;
        if (lVar5 < 0x80000000) {
          iVar8 = (int)lVar5;
          if (lVar5 < -0x7fffffff) {
            iVar8 = -0x80000000;
          }
          break;
        }
LAB_003745c8:
        pmVar14 = pmVar10;
        pmVar7 = *(map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                   **)(pmVar10 + 0x10);
        if (*(map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              **)(pmVar10 + 0x10) ==
            (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             *)0x0) goto LAB_003745e4;
      }
      if (-1 < iVar8) goto LAB_003745c8;
      pmVar2 = pmVar10 + 0x18;
      pmVar10 = pmVar14;
      pmVar7 = *(map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                 **)pmVar2;
    } while (*(map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               **)pmVar2 !=
             (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              *)0x0);
  }
LAB_003745e4:
  if (pmVar10 != pmVar1) {
    uVar15 = *(ulong *)((long)*(void **)param_1 + -0x18);
    sVar13 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
    lVar5 = uVar15 - sVar13;
    if (uVar15 < sVar13 || lVar5 == 0) {
      sVar13 = uVar15;
    }
    iVar8 = memcmp(*(void **)param_1,*(void **)(pmVar10 + 0x20),sVar13);
    if (iVar8 == 0) {
      if (0x7fffffff < lVar5) goto LAB_003746dc;
      iVar8 = (int)lVar5;
      if (lVar5 < -0x7fffffff) {
        iVar8 = -0x80000000;
      }
    }
    if (-1 < iVar8) goto LAB_003746dc;
  }
  FUN_0066a528(&local_78,param_1);
  local_70 = 0;
  auVar16 = _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        *)this,pmVar10,&local_78);
  pmVar14 = auVar16._8_8_;
  pmVar10 = auVar16._0_8_;
  if (pmVar14 !=
      (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
       *)0x0) {
    uVar15 = 1;
    if ((pmVar10 ==
         (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)0x0) && (pmVar1 != pmVar14)) {
      uVar15 = *(ulong *)((long)local_78 + -0x18);
      sVar13 = *(ulong *)((long)*(void **)(pmVar14 + 0x20) + -0x18);
      lVar5 = uVar15 - sVar13;
      if (uVar15 < sVar13 || lVar5 == 0) {
        sVar13 = uVar15;
      }
      uVar9 = memcmp(local_78,*(void **)(pmVar14 + 0x20),sVar13);
      uVar15 = (ulong)uVar9;
      if ((uVar9 == 0) && (uVar15 = 0, lVar5 < 0x80000000)) {
        uVar9 = (uint)lVar5;
        if (lVar5 < -0x7fffffff) {
          uVar9 = 0x80000000;
        }
        uVar15 = (ulong)uVar9;
      }
      uVar15 = uVar15 >> 0x1f;
    }
    pmVar10 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                 ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                   *)this,(pair *)&local_78);
    FUN_0064c8a0(uVar15,pmVar10,pmVar14,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  if ((undefined *)((long)local_78 + -0x18) != PTR_DAT_007e5de8) {
    piVar12 = (int *)((long)local_78 + -8);
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
      operator_delete((undefined *)((long)local_78 + -0x18));
    }
  }
LAB_003746dc:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return pmVar10 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


