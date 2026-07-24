/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005862ac
 * Function: std::map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<std::string, boost::weak_ptr<Caver::AudioBuffer>, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::weak_ptr<Caver::AudioBuffer> > >
   >::operator[](std::string const&) */

map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
* __thiscall
std::
map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
::operator[](map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
             *this,string *param_1)

{
  map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
  *pmVar1;
  map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
  *pmVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
  *pmVar6;
  int iVar7;
  uint uVar8;
  map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
  *pmVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  size_t sVar13;
  map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
  *pmVar14;
  void *__s2;
  ulong uVar15;
  undefined1 auVar16 [16];
  void *local_88;
  undefined8 local_80;
  long *local_78;
  long local_68;
  
                    /* catch() { ... } // from try @ 00586258 with catch @ 005862b8 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pmVar1 = this + 8;
                    /* try { // try from 005862d8 to 006862ff has its CatchHandler @ 00586308 */
  pmVar9 = pmVar1;
  if (*(map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
        **)(this + 0x10) !=
      (map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar15 = *(ulong *)((long)__s2 + -0x18);
                    /* try { // try from 00586300 to 0068630b has its CatchHandler @ 005861ec */
    pmVar14 = pmVar1;
    pmVar6 = *(map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        pmVar9 = pmVar6;
                    /* catch() { ... } // from try @ 005862d8 with catch @ 00586308 */
        uVar10 = *(ulong *)((long)*(void **)(pmVar9 + 0x20) + -0x18);
        lVar11 = uVar10 - uVar15;
        sVar13 = uVar15;
        if (uVar10 < uVar15 || lVar11 == 0) {
          sVar13 = uVar10;
        }
        iVar7 = memcmp(*(void **)(pmVar9 + 0x20),__s2,sVar13);
        if (iVar7 != 0) break;
        if (lVar11 < 0x80000000) {
          iVar7 = (int)lVar11;
          if (lVar11 < -0x7fffffff) {
            iVar7 = -0x80000000;
          }
          break;
        }
LAB_00586348:
        pmVar14 = pmVar9;
        pmVar6 = *(map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                   **)(pmVar9 + 0x10);
        if (*(map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
              **)(pmVar9 + 0x10) ==
            (map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
             *)0x0) goto LAB_00586364;
      }
      if (-1 < iVar7) goto LAB_00586348;
      pmVar2 = pmVar9 + 0x18;
      pmVar9 = pmVar14;
      pmVar6 = *(map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                 **)pmVar2;
    } while (*(map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
               **)pmVar2 !=
             (map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
              *)0x0);
  }
LAB_00586364:
  if (pmVar9 != pmVar1) {
    uVar15 = *(ulong *)((long)*(void **)param_1 + -0x18);
    sVar13 = *(ulong *)((long)*(void **)(pmVar9 + 0x20) + -0x18);
    lVar11 = uVar15 - sVar13;
    if (uVar15 < sVar13 || lVar11 == 0) {
      sVar13 = uVar15;
    }
    iVar7 = memcmp(*(void **)param_1,*(void **)(pmVar9 + 0x20),sVar13);
    if (iVar7 == 0) {
      if (0x7fffffff < lVar11) goto LAB_00586480;
                    /* try { // try from 005864c8 to 006864d3 has its CatchHandler @ 005873bc */
      iVar7 = (int)lVar11;
      if (lVar11 < -0x7fffffff) {
        iVar7 = -0x80000000;
      }
    }
                    /* try { // try from 005864d4 to 006864db has its CatchHandler @ 0058727c */
    if (-1 < iVar7) goto LAB_00586480;
  }
  FUN_0066a528(&local_88,param_1);
  local_80 = 0;
  local_78 = (long *)0x0;
  auVar16 = _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                        *)this,pmVar9,&local_88);
  pmVar14 = auVar16._8_8_;
  pmVar9 = auVar16._0_8_;
  if (pmVar14 !=
      (map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
       *)0x0) {
    uVar15 = 1;
    if ((pmVar9 == (map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                    *)0x0) && (pmVar1 != pmVar14)) {
      uVar15 = *(ulong *)((long)local_88 + -0x18);
      sVar13 = *(ulong *)((long)*(void **)(pmVar14 + 0x20) + -0x18);
      lVar11 = uVar15 - sVar13;
      if (uVar15 < sVar13 || lVar11 == 0) {
        sVar13 = uVar15;
      }
      uVar8 = memcmp(local_88,*(void **)(pmVar14 + 0x20),sVar13);
      uVar15 = (ulong)uVar8;
      if ((uVar8 == 0) && (uVar15 = 0, lVar11 < 0x80000000)) {
        uVar8 = (uint)lVar11;
        if (lVar11 < -0x7fffffff) {
          uVar8 = 0x80000000;
        }
        uVar15 = (ulong)uVar8;
      }
      uVar15 = uVar15 >> 0x1f;
    }
    pmVar9 = (map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
              *)_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                                  *)this,(pair *)&local_88);
    FUN_0064c8a0(uVar15,pmVar9,pmVar14,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  if ((local_78 != (long *)0x0) &&
     (lVar11 = local_78[2], local_78[2] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_78 + 0x18))();
  }
                    /* try { // try from 00586478 to 006864c7 has its CatchHandler @ 00586478
                       catch() { ... } // from try @ 00586478 with catch @ 00586478
                       catch() { ... } // from try @ 00586df8 with catch @ 00586478
                       catch() { ... } // from try @ 005875c0 with catch @ 00586478 */
  if ((undefined *)((long)local_88 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 005864dc to 00686543 has its CatchHandler @ 005873bc */
    piVar12 = (int *)((long)local_88 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar12;
      *piVar12 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)((long)local_88 + -0x18));
    }
  }
LAB_00586480:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return pmVar9 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


