/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054bab0
 * Function: std::map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<std::string, boost::shared_ptr<Caver::Model const>, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::shared_ptr<Caver::Model const> > >
   >::operator[](std::string const&) */

map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
* __thiscall
std::
map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
::operator[](map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
             *this,string *param_1)

{
  map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
  *pmVar1;
  map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
  *pmVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
  *pmVar7;
  int iVar8;
  uint uVar9;
  map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
  *pmVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  size_t sVar14;
  map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
  *pmVar15;
  void *__s2;
  ulong uVar16;
  undefined1 auVar17 [16];
  void *local_88;
  undefined8 local_80;
  long *local_78;
  long local_68;
  
                    /* catch() { ... } // from try @ 0054ad08 with catch @ 0054bac0 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pmVar1 = this + 8;
  pmVar10 = pmVar1;
  if (*(map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
        **)(this + 0x10) !=
      (map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar16 = *(ulong *)((long)__s2 + -0x18);
    pmVar15 = pmVar1;
    pmVar7 = *(map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        pmVar10 = pmVar7;
                    /* try { // try from 0054bb0c to 0064bb37 has its CatchHandler @ 0054aae4 */
                    /* catch() { ... } // from try @ 0054acb4 with catch @ 0054bb10 */
                    /* catch() { ... } // from try @ 0054ab5c with catch @ 0054bb14 */
        uVar11 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
        lVar12 = uVar11 - uVar16;
        sVar14 = uVar16;
        if (uVar11 < uVar16 || lVar12 == 0) {
          sVar14 = uVar11;
        }
        iVar8 = memcmp(*(void **)(pmVar10 + 0x20),__s2,sVar14);
        if (iVar8 != 0) break;
        if (lVar12 < 0x80000000) {
          iVar8 = (int)lVar12;
          if (lVar12 < -0x7fffffff) {
            iVar8 = -0x80000000;
          }
          break;
        }
LAB_0054bb50:
        pmVar15 = pmVar10;
        pmVar7 = *(map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                   **)(pmVar10 + 0x10);
        if (*(map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
              **)(pmVar10 + 0x10) ==
            (map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
             *)0x0) goto LAB_0054bb6c;
      }
      if (-1 < iVar8) goto LAB_0054bb50;
      pmVar2 = pmVar10 + 0x18;
      pmVar10 = pmVar15;
      pmVar7 = *(map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                 **)pmVar2;
    } while (*(map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
               **)pmVar2 !=
             (map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
              *)0x0);
  }
LAB_0054bb6c:
  if (pmVar10 != pmVar1) {
    uVar16 = *(ulong *)((long)*(void **)param_1 + -0x18);
    sVar14 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
    lVar12 = uVar16 - sVar14;
    if (uVar16 < sVar14 || lVar12 == 0) {
      sVar14 = uVar16;
    }
    iVar8 = memcmp(*(void **)param_1,*(void **)(pmVar10 + 0x20),sVar14);
    if (iVar8 == 0) {
                    /* try { // try from 0054bcec to 0064bf1b has its CatchHandler @ 0054bc24 */
      if (0x7fffffff < lVar12) goto LAB_0054bcac;
      iVar8 = (int)lVar12;
      if (lVar12 < -0x7fffffff) {
        iVar8 = -0x80000000;
      }
    }
    if (-1 < iVar8) goto LAB_0054bcac;
  }
  FUN_0066a528(&local_88,param_1);
  local_80 = 0;
  local_78 = (long *)0x0;
                    /* try { // try from 0054bbb0 to 0064bc23 has its CatchHandler @ 0054aae4 */
                    /* catch() { ... } // from try @ 0054b5a4 with catch @ 0054bbb4
                       catch() { ... } // from try @ 0054ba94 with catch @ 0054bbb4
                       catch() { ... } // from try @ 0054bb38 with catch @ 0054bbb4 */
                    /* catch() { ... } // from try @ 0054aec8 with catch @ 0054bbb8 */
  auVar17 = _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                        *)this,pmVar10,&local_88);
  pmVar15 = auVar17._8_8_;
  pmVar10 = auVar17._0_8_;
  if (pmVar15 !=
      (map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
       *)0x0) {
    uVar16 = 1;
    if ((pmVar10 ==
         (map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
          *)0x0) && (pmVar1 != pmVar15)) {
      uVar16 = *(ulong *)((long)local_88 + -0x18);
      sVar14 = *(ulong *)((long)*(void **)(pmVar15 + 0x20) + -0x18);
      lVar12 = uVar16 - sVar14;
      if (uVar16 < sVar14 || lVar12 == 0) {
        sVar14 = uVar16;
      }
      uVar9 = memcmp(local_88,*(void **)(pmVar15 + 0x20),sVar14);
      uVar16 = (ulong)uVar9;
      if ((uVar9 == 0) && (uVar16 = 0, lVar12 < 0x80000000)) {
        uVar9 = (uint)lVar12;
        if (lVar12 < -0x7fffffff) {
          uVar9 = 0x80000000;
        }
        uVar16 = (ulong)uVar9;
      }
      uVar16 = uVar16 >> 0x1f;
    }
                    /* try { // try from 0054bc24 to 0064bcdf has its CatchHandler @ 0054bc24
                       catch(type#1 @ 00000000) { ... } // from try @ 0054bc24 with catch @ 0054bc24
                       catch(type#1 @ 00000000) { ... } // from try @ 0054bcec with catch @ 0054bc24
                       catch(type#1 @ 00000000) { ... } // from try @ 0054bf44 with catch @ 0054bc24
                        */
    pmVar10 = (map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
               *)_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                 ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                                   *)this,(pair *)&local_88);
    FUN_0064c8a0(uVar16,pmVar10,pmVar15,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  plVar6 = local_78;
  if ((local_78 != (long *)0x0) &&
     (lVar12 = local_78[1], local_78[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    lVar12 = plVar6[2];
    plVar6[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  if ((undefined *)((long)local_88 + -0x18) != PTR_DAT_007e5de8) {
    piVar13 = (int *)((long)local_88 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar13;
      *piVar13 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)((long)local_88 + -0x18));
    }
  }
LAB_0054bcac:
  if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 0054bce0 to 0064bceb has its CatchHandler @ 0054befc */
    return pmVar10 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


