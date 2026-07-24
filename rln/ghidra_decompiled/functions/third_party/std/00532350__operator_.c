/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00532350
 * Function: std::map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0053245c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* std::map<std::string, std::vector<Caver::QuestsView::LabelGroup,
   std::allocator<Caver::QuestsView::LabelGroup> >, std::less<std::string >,
   std::allocator<std::pair<std::string const, std::vector<Caver::QuestsView::LabelGroup,
   std::allocator<Caver::QuestsView::LabelGroup> > > > >::operator[](std::string const&) */

map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
* __thiscall
std::
map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
::operator[](map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
             *this,string *param_1)

{
  map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
  *pmVar1;
  map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
  *pmVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  LabelGroup *this_00;
  LabelGroup *pLVar7;
  LabelGroup *pLVar8;
  map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
  *pmVar9;
  int iVar10;
  uint uVar11;
  map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
  *pmVar12;
  map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
  *pmVar13;
  ulong uVar14;
  int *piVar15;
  size_t sVar16;
  map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
  *pmVar17;
  void *__s2;
  ulong uVar18;
  undefined1 auVar19 [16];
  void *local_90;
  LabelGroup *local_88;
  LabelGroup *local_80;
  undefined8 local_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pmVar1 = this + 8;
  pmVar13 = pmVar1;
  pmVar12 = this;
  if (*(map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
        **)(this + 0x10) !=
      (map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
                    /* try { // try from 00532390 to 00632393 has its CatchHandler @ 0053255c */
                    /* try { // try from 00532394 to 00632467 has its CatchHandler @ 005321b4 */
    uVar18 = *(ulong *)((long)__s2 + -0x18);
    pmVar17 = pmVar1;
    pmVar9 = *(map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        pmVar13 = pmVar9;
        pmVar12 = *(map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                    **)(pmVar13 + 0x20);
        uVar14 = *(ulong *)(pmVar12 + -0x18);
        lVar5 = uVar14 - uVar18;
        sVar16 = uVar18;
        if (uVar14 < uVar18 || lVar5 == 0) {
          sVar16 = uVar14;
        }
        iVar10 = memcmp(pmVar12,__s2,sVar16);
        if (iVar10 != 0) break;
        if (lVar5 < 0x80000000) {
          iVar10 = (int)lVar5;
          if (lVar5 < -0x7fffffff) {
            iVar10 = -0x80000000;
          }
          break;
        }
LAB_005323ec:
        pmVar17 = pmVar13;
        pmVar9 = *(map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                   **)(pmVar13 + 0x10);
        if (*(map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
              **)(pmVar13 + 0x10) ==
            (map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
             *)0x0) goto LAB_00532408;
      }
      if (-1 < iVar10) goto LAB_005323ec;
      pmVar2 = pmVar13 + 0x18;
      pmVar13 = pmVar17;
      pmVar9 = *(map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                 **)pmVar2;
    } while (*(map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
               **)pmVar2 !=
             (map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
              *)0x0);
  }
LAB_00532408:
  if (pmVar13 != pmVar1) {
    pmVar12 = *(map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                **)param_1;
    uVar18 = *(ulong *)(pmVar12 + -0x18);
    sVar16 = *(ulong *)((long)*(void **)(pmVar13 + 0x20) + -0x18);
    lVar5 = uVar18 - sVar16;
    if (uVar18 < sVar16 || lVar5 == 0) {
      sVar16 = uVar18;
    }
    iVar10 = memcmp(pmVar12,*(void **)(pmVar13 + 0x20),sVar16);
    if (iVar10 == 0) {
      if (0x7fffffff < lVar5) goto LAB_0053258c;
      iVar10 = (int)lVar5;
      if (lVar5 < -0x7fffffff) {
        iVar10 = -0x80000000;
      }
    }
    if (-1 < iVar10) goto LAB_0053258c;
  }
  FUN_0066a528(&local_90,param_1);
  local_88 = (LabelGroup *)0x0;
  local_80 = (LabelGroup *)0x0;
  local_78 = 0;
  local_80 = __uninitialized_copy<false>::
             __uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup_const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>
                       (pmVar12,0,0);
                    /* try { // try from 00532468 to 0063246b has its CatchHandler @ 00532560 */
                    /* try { // try from 0053246c to 00632573 has its CatchHandler @ 005321b4 */
  auVar19 = _Rb_tree<std::string,std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                        *)this,pmVar13,&local_90);
  pmVar12 = auVar19._8_8_;
  pmVar13 = auVar19._0_8_;
  this_00 = local_88;
  pLVar7 = local_80;
  if (pmVar12 !=
      (map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
       *)0x0) {
    uVar18 = 1;
    if ((pmVar13 ==
         (map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
          *)0x0) && (pmVar1 != pmVar12)) {
      uVar18 = *(ulong *)((long)local_90 + -0x18);
      sVar16 = *(ulong *)((long)*(void **)(pmVar12 + 0x20) + -0x18);
      lVar5 = uVar18 - sVar16;
      if (uVar18 < sVar16 || lVar5 == 0) {
        sVar16 = uVar18;
      }
      uVar11 = memcmp(local_90,*(void **)(pmVar12 + 0x20),sVar16);
      uVar18 = (ulong)uVar11;
      if ((uVar11 == 0) && (uVar18 = 0, lVar5 < 0x80000000)) {
        uVar11 = (uint)lVar5;
        if (lVar5 < -0x7fffffff) {
          uVar11 = 0x80000000;
        }
        uVar18 = (ulong)uVar11;
      }
      uVar18 = uVar18 >> 0x1f;
    }
    pmVar13 = (map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
               *)_Rb_tree<std::string,std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                 ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                                   *)this,(pair *)&local_90);
    FUN_0064c8a0(uVar18,pmVar13,pmVar12,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    this_00 = local_88;
    pLVar7 = local_80;
  }
  for (; pLVar8 = local_80, this_00 != local_80; this_00 = this_00 + 0x38) {
    local_80 = pLVar7;
    Caver::QuestsView::LabelGroup::~LabelGroup(this_00);
    pLVar7 = local_80;
    local_80 = pLVar8;
  }
  local_80 = pLVar7;
  if (local_88 != (LabelGroup *)0x0) {
    operator_delete(local_88);
  }
  if ((undefined *)((long)local_90 + -0x18) != PTR_DAT_007e5de8) {
    piVar15 = (int *)((long)local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar15;
      *piVar15 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar15;
                    /* catch() { ... } // from try @ 00532390 with catch @ 0053255c */
                    /* catch() { ... } // from try @ 00532468 with catch @ 00532560 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)((long)local_90 + -0x18));
    }
  }
LAB_0053258c:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return pmVar13 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


