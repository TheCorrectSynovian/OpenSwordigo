/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00344320
 * Function: std::map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x0034442c) */
/* WARNING: Removing unreachable block (ram,0x00344434) */
/* WARNING: Removing unreachable block (ram,0x0034447c) */
/* WARNING: Removing unreachable block (ram,0x00344578) */
/* WARNING: Removing unreachable block (ram,0x0034457c) */
/* WARNING: Removing unreachable block (ram,0x00344588) */
/* WARNING: Removing unreachable block (ram,0x0034459c) */
/* std::map<std::string, boost::function<Caver::Component* ()>, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::function<Caver::Component* ()> > >
   >::operator[](std::string const&) */

map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
* __thiscall
std::
map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
::operator[](map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
             *this,string *param_1)

{
  map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
  *pmVar1;
  map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
  *pmVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
  *pmVar7;
  int iVar8;
  uint uVar9;
  map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
  *pmVar10;
  ulong uVar11;
  int *piVar12;
  size_t sVar13;
  map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
  *pmVar14;
  void *__s2;
  ulong uVar15;
  undefined1 auVar16 [16];
  void *local_98;
  ulong local_90;
  undefined1 local_88 [32];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pmVar1 = this + 8;
  pmVar10 = pmVar1;
  if (*(map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
        **)(this + 0x10) !=
      (map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar15 = *(ulong *)((long)__s2 + -0x18);
    pmVar14 = pmVar1;
    pmVar7 = *(map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
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
LAB_003443c0:
        pmVar14 = pmVar10;
        pmVar7 = *(map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
                   **)(pmVar10 + 0x10);
        if (*(map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
              **)(pmVar10 + 0x10) ==
            (map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
             *)0x0) goto LAB_003443dc;
      }
      if (-1 < iVar8) goto LAB_003443c0;
      pmVar2 = pmVar10 + 0x18;
      pmVar10 = pmVar14;
      pmVar7 = *(map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
                 **)pmVar2;
    } while (*(map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
               **)pmVar2 !=
             (map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
              *)0x0);
  }
LAB_003443dc:
  if (pmVar10 != pmVar1) {
    uVar15 = *(ulong *)((long)*(void **)param_1 + -0x18);
    sVar13 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
    lVar5 = uVar15 - sVar13;
    if (uVar15 < sVar13 || lVar5 == 0) {
      sVar13 = uVar15;
    }
    iVar8 = memcmp(*(void **)param_1,*(void **)(pmVar10 + 0x20),sVar13);
    if (iVar8 == 0) {
      if (0x7fffffff < lVar5) goto LAB_003445a0;
      iVar8 = (int)lVar5;
      if (lVar5 < -0x7fffffff) {
        iVar8 = -0x80000000;
      }
    }
    if (-1 < iVar8) goto LAB_003445a0;
  }
  FUN_0066a528(&local_98,param_1);
  local_90 = 0;
  auVar16 = _Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
                        *)this,pmVar10,&local_98);
  pmVar14 = auVar16._8_8_;
  pmVar10 = auVar16._0_8_;
  if (pmVar14 !=
      (map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
       *)0x0) {
    uVar15 = 1;
    if ((pmVar10 ==
         (map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
          *)0x0) && (pmVar1 != pmVar14)) {
      uVar15 = *(ulong *)((long)local_98 + -0x18);
      sVar13 = *(ulong *)((long)*(void **)(pmVar14 + 0x20) + -0x18);
      lVar5 = uVar15 - sVar13;
      if (uVar15 < sVar13 || lVar5 == 0) {
        sVar13 = uVar15;
      }
      uVar9 = memcmp(local_98,*(void **)(pmVar14 + 0x20),sVar13);
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
    pmVar10 = (map<std::string,boost::function<Caver::Component*()>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
               *)_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
                 ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
                                   *)this,(pair *)&local_98);
    FUN_0064c8a0(uVar15,pmVar10,pmVar14,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  if (local_90 != 0) {
    if (((local_90 & 1) == 0) && (*(code **)(local_90 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_90 & 0xfffffffffffffffe))(local_88,local_88,2);
    }
    local_90 = 0;
  }
  if ((undefined *)((long)local_98 + -0x18) != PTR_DAT_007e5de8) {
    piVar12 = (int *)((long)local_98 + -8);
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
      operator_delete((undefined *)((long)local_98 + -0x18));
    }
  }
LAB_003445a0:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return pmVar10 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


