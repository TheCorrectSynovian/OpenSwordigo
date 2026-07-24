/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a69d0
 * Function: std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<std::string, boost::shared_ptr<Caver::PlayerProfile>, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::shared_ptr<Caver::PlayerProfile> > >
   >::operator[](std::string const&) */

map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
* __thiscall
std::
map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
::operator[](map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
             *this,string *param_1)

{
  map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
  *pmVar1;
  map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
  *pmVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
  *pmVar7;
  int iVar8;
  uint uVar9;
  map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
  *pmVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  size_t sVar14;
  map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
  *pmVar15;
  void *__s2;
  ulong uVar16;
  undefined1 auVar17 [16];
  void *local_88;
  undefined8 local_80;
  long *local_78;
  long local_68;
  
                    /* try { // try from 004a69d4 to 005a69d7 has its CatchHandler @ 004a69e8 */
                    /* try { // try from 004a69d8 to 005a69fb has its CatchHandler @ 004a69c4 */
                    /* catch() { ... } // from try @ 004a69d4 with catch @ 004a69e8 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 004a69fc to 005a6b33 has its CatchHandler @ 004a69fc
                       catch(type#1 @ 00000000) { ... } // from try @ 004a69fc with catch @ 004a69fc
                       catch(type#1 @ 00000000) { ... } // from try @ 004a6b5c with catch @ 004a69fc
                       catch(type#1 @ 00000000) { ... } // from try @ 004a6c20 with catch @ 004a69fc
                        */
  pmVar1 = this + 8;
  pmVar10 = pmVar1;
  if (*(map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
        **)(this + 0x10) !=
      (map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar16 = *(ulong *)((long)__s2 + -0x18);
    pmVar15 = pmVar1;
    pmVar7 = *(map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        pmVar10 = pmVar7;
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
LAB_004a6a70:
        pmVar15 = pmVar10;
        pmVar7 = *(map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                   **)(pmVar10 + 0x10);
        if (*(map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
              **)(pmVar10 + 0x10) ==
            (map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
             *)0x0) goto LAB_004a6a8c;
      }
      if (-1 < iVar8) goto LAB_004a6a70;
      pmVar2 = pmVar10 + 0x18;
      pmVar10 = pmVar15;
      pmVar7 = *(map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                 **)pmVar2;
    } while (*(map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
               **)pmVar2 !=
             (map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
              *)0x0);
  }
LAB_004a6a8c:
  if (pmVar10 != pmVar1) {
    uVar16 = *(ulong *)((long)*(void **)param_1 + -0x18);
    sVar14 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
    lVar12 = uVar16 - sVar14;
    if (uVar16 < sVar14 || lVar12 == 0) {
      sVar14 = uVar16;
    }
    iVar8 = memcmp(*(void **)param_1,*(void **)(pmVar10 + 0x20),sVar14);
    if (iVar8 == 0) {
      if (0x7fffffff < lVar12) goto LAB_004a6bcc;
      iVar8 = (int)lVar12;
      if (lVar12 < -0x7fffffff) {
        iVar8 = -0x80000000;
      }
    }
                    /* try { // try from 004a6c20 to 005a6c2b has its CatchHandler @ 004a69fc */
    if (-1 < iVar8) goto LAB_004a6bcc;
  }
  FUN_0066a528(&local_88,param_1);
  local_80 = 0;
  local_78 = (long *)0x0;
  auVar17 = _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                        *)this,pmVar10,&local_88);
  pmVar15 = auVar17._8_8_;
  pmVar10 = auVar17._0_8_;
  if (pmVar15 !=
      (map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
       *)0x0) {
    uVar16 = 1;
    if ((pmVar10 ==
         (map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
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
                    /* try { // try from 004a6b34 to 005a6b5b has its CatchHandler @ 004a6bd4 */
        uVar9 = (uint)lVar12;
        if (lVar12 < -0x7fffffff) {
          uVar9 = 0x80000000;
        }
        uVar16 = (ulong)uVar9;
      }
      uVar16 = uVar16 >> 0x1f;
    }
    pmVar10 = (map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
               *)_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                 ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                                   *)this,(pair *)&local_88);
                    /* try { // try from 004a6b5c to 005a6bf7 has its CatchHandler @ 004a69fc */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a6bf8 with catch @ 004a6c28
                        */
                    /* try { // try from 004a6c2c to 005a6e0f has its CatchHandler @ 004a6c2c
                       catch(type#1 @ 00000000) { ... } // from try @ 004a6c2c with catch @ 004a6c2c
                       catch(type#1 @ 00000000) { ... } // from try @ 004a6e38 with catch @ 004a6c2c
                       catch(type#1 @ 00000000) { ... } // from try @ 004a6ef8 with catch @ 004a6c2c
                        */
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
LAB_004a6bcc:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a6b34 with catch @ 004a6bd4
                        */
  if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 004a6bf8 to 005a6c1f has its CatchHandler @ 004a6c28 */
    return pmVar10 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


