/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00531f0c
 * Function: std::map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<std::string, boost::shared_ptr<Caver::GUILabel>, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::shared_ptr<Caver::GUILabel> > >
   >::operator[](std::string const&) */

map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
* __thiscall
std::
map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
::operator[](map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
             *this,string *param_1)

{
  map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
  *pmVar1;
  map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
  *pmVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
  *pmVar7;
  int iVar8;
  uint uVar9;
  map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
  *pmVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  size_t sVar14;
  map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
  *pmVar15;
  void *__s2;
  ulong uVar16;
  undefined1 auVar17 [16];
  void *local_88;
  undefined8 local_80;
  long *local_78;
  long local_68;
  
                    /* try { // try from 00531f24 to 00631f27 has its CatchHandler @ 00531f78 */
                    /* try { // try from 00531f28 to 00631f93 has its CatchHandler @ 00531de4 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pmVar1 = this + 8;
  pmVar10 = pmVar1;
  if (*(map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
        **)(this + 0x10) !=
      (map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar16 = *(ulong *)((long)__s2 + -0x18);
    pmVar15 = pmVar1;
    pmVar7 = *(map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        pmVar10 = pmVar7;
        uVar11 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
        lVar12 = uVar11 - uVar16;
        sVar14 = uVar16;
                    /* catch() { ... } // from try @ 00531f24 with catch @ 00531f78 */
        if (uVar11 < uVar16 || lVar12 == 0) {
          sVar14 = uVar11;
        }
                    /* catch() { ... } // from try @ 00531ed0 with catch @ 00531f7c */
        iVar8 = memcmp(*(void **)(pmVar10 + 0x20),__s2,sVar14);
        if (iVar8 != 0) break;
                    /* try { // try from 00531f9c to 00631fa7 has its CatchHandler @ 00531de4 */
        if (lVar12 < 0x80000000) {
                    /* catch() { ... } // from try @ 00531f94 with catch @ 00531fa4 */
          iVar8 = (int)lVar12;
          if (lVar12 < -0x7fffffff) {
            iVar8 = -0x80000000;
          }
          break;
        }
LAB_00531fac:
        pmVar15 = pmVar10;
        pmVar7 = *(map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
                   **)(pmVar10 + 0x10);
        if (*(map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
              **)(pmVar10 + 0x10) ==
            (map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
             *)0x0) goto LAB_00531fc8;
      }
                    /* catch() { ... } // from try @ 00532004 with catch @ 00531fa8
                       catch() { ... } // from try @ 00532020 with catch @ 00531fa8 */
      if (-1 < iVar8) goto LAB_00531fac;
      pmVar2 = pmVar10 + 0x18;
                    /* catch() { ... } // from try @ 00531e48 with catch @ 00531f90 */
      pmVar10 = pmVar15;
      pmVar7 = *(map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
                 **)pmVar2;
    } while (*(map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
               **)pmVar2 !=
             (map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
              *)0x0);
  }
LAB_00531fc8:
  if (pmVar10 != pmVar1) {
    uVar16 = *(ulong *)((long)*(void **)param_1 + -0x18);
    sVar14 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
    lVar12 = uVar16 - sVar14;
                    /* try { // try from 00531fec to 00632003 has its CatchHandler @ 00532014 */
    if (uVar16 < sVar14 || lVar12 == 0) {
      sVar14 = uVar16;
    }
    iVar8 = memcmp(*(void **)param_1,*(void **)(pmVar10 + 0x20),sVar14);
    if (iVar8 == 0) {
      if (0x7fffffff < lVar12) goto LAB_00532108;
      iVar8 = (int)lVar12;
      if (lVar12 < -0x7fffffff) {
        iVar8 = -0x80000000;
      }
    }
    if (-1 < iVar8) goto LAB_00532108;
  }
                    /* try { // try from 00532004 to 00632017 has its CatchHandler @ 00531fa8 */
  FUN_0066a528(&local_88,param_1);
  local_80 = 0;
  local_78 = (long *)0x0;
                    /* catch() { ... } // from try @ 00531fec with catch @ 00532014 */
                    /* try { // try from 00532018 to 0063201f has its CatchHandler @ 00532028 */
  auVar17 = _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
                        *)this,pmVar10,&local_88);
  pmVar15 = auVar17._8_8_;
  pmVar10 = auVar17._0_8_;
                    /* try { // try from 00532020 to 0063202b has its CatchHandler @ 00531fa8 */
  if (pmVar15 !=
      (map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
       *)0x0) {
                    /* catch() { ... } // from try @ 00532018 with catch @ 00532028 */
    uVar16 = 1;
    if ((pmVar10 ==
         (map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
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
    pmVar10 = (map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
               *)_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
                 ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
                                   *)this,(pair *)&local_88);
                    /* catch() { ... } // from try @ 0053210c with catch @ 0053208c */
    FUN_0064c8a0(uVar16,pmVar10,pmVar15,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  plVar6 = local_78;
  if ((local_78 != (long *)0x0) &&
     (lVar12 = local_78[1], local_78[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
                    /* try { // try from 005320d0 to 006320e7 has its CatchHandler @ 00532100 */
    lVar12 = plVar6[2];
    plVar6[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 005320e8 to 006320ef has its CatchHandler @ 00532114 */
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
                    /* catch() { ... } // from try @ 005320d0 with catch @ 00532100 */
                    /* try { // try from 00532104 to 0063210b has its CatchHandler @ 00532110 */
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
LAB_00532108:
                    /* try { // try from 0053210c to 00632127 has its CatchHandler @ 0053208c */
                    /* catch() { ... } // from try @ 00532104 with catch @ 00532110 */
                    /* catch() { ... } // from try @ 005320e8 with catch @ 00532114 */
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return pmVar10 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


