/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a1684
 * Function: Caver::ProfileSelectionView::LoadProfiles
 * Signature: undefined __thiscall LoadProfiles(ProfileSelectionView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ProfileSelectionView::LoadProfiles() */

void __thiscall Caver::ProfileSelectionView::LoadProfiles(ProfileSelectionView *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined *puVar10;
  GUIScrollView *this_00;
  GUIFrameView *this_01;
  long *plVar11;
  PlayerProfile *pPVar12;
  ulong *puVar13;
  shared_ptr *psVar14;
  ProfilePanelView *pPVar15;
  ProfilesHeaderView *this_02;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  int *piVar19;
  int iVar20;
  long *plVar21;
  GUIControl *pGVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  float fVar27;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ProfileSelectionView *local_d0;
  PlayerProfile *local_c8;
  long *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ProfileSelectionView *local_80;
  long local_78;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a144c with catch @ 004a16a8
                        */
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  if (*(long **)(this + 0x100) != (long *)0x0) {
                    /* try { // try from 004a16c8 to 005a16cf has its CatchHandler @ 004a16d8 */
    (**(code **)(**(long **)(this + 0x100) + 0x78))();
  }
                    /* try { // try from 004a16d0 to 005a16db has its CatchHandler @ 004a1394 */
  this_00 = operator_new(0x1f0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a16c8 with catch @ 004a16d8
                        */
  GUIScrollView::GUIScrollView(this_00);
  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>
            ((shared_ptr<Caver::GUIScrollView> *)&local_e8,this_00);
  uVar2 = *(undefined8 *)(this + 0x100);
  plVar11 = *(long **)(this + 0x108);
  *(undefined **)(this + 0x100) = local_e8;
  *(long **)(this + 0x108) = local_e0;
  if ((plVar11 != (long *)0x0) && (lVar17 = plVar11[1], plVar11[1] = lVar17 + -1, lVar17 + -1 == 0))
  {
    local_e8 = (undefined *)uVar2;
    local_e0 = plVar11;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar17 = plVar11[2];
    plVar11[2] = lVar17 + -1;
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  local_e8 = *(undefined **)(this + 0x100);
  pcVar18 = *(code **)(*(long *)this + 0x60);
  local_e0 = *(long **)(this + 0x108);
  if (local_e0 != (long *)0x0) {
                    /* catch() { ... } // from try @ 004a17c8 with catch @ 004a1760
                       catch() { ... } // from try @ 004a17e4 with catch @ 004a1760 */
    local_e0[1] = local_e0[1] + 1;
  }
  (*pcVar18)(this,&local_e8);
  plVar11 = local_e0;
  if ((local_e0 != (long *)0x0) &&
     (lVar17 = local_e0[1], local_e0[1] = lVar17 + -1, lVar17 + -1 == 0)) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
    lVar17 = plVar11[2];
    plVar11[2] = lVar17 + -1;
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
                    /* try { // try from 004a17c4 to 005a17c7 has its CatchHandler @ 004a17d8 */
  this_01 = operator_new(0x110);
                    /* try { // try from 004a17c8 to 005a17db has its CatchHandler @ 004a1760 */
  GUIFrameView::GUIFrameView(this_01);
                    /* catch() { ... } // from try @ 004a17c4 with catch @ 004a17d8 */
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_a0,this_01);
                    /* try { // try from 004a17dc to 005a17e3 has its CatchHandler @ 004a17ec */
  local_b8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
                    /* try { // try from 004a17e4 to 005a17ef has its CatchHandler @ 004a1760 */
  plVar11 = (long *)ProfileManager::sharedManager();
                    /* catch() { ... } // from try @ 004a17dc with catch @ 004a17ec */
                    /* catch() { ... } // from try @ 004a187c with catch @ 004a17f0 */
  (**(code **)(*plVar11 + 0x18))(plVar11,&local_b8);
  puVar8 = local_b0;
  puVar7 = local_b8;
  if (local_b8 != local_b0) {
    lVar17 = (long)local_b0 - (long)local_b8;
    std::
    __introsort_loop<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
              (local_b8,local_b0,LZCOUNT(lVar17 >> 4) * -2 + 0x7e,PTR_ProfileSortPredicate_007e6c18)
    ;
    if (lVar17 < 0x101) {
                    /* try { // try from 004a187c to 005a1897 has its CatchHandler @ 004a17f0 */
                    /* catch() { ... } // from try @ 004a1874 with catch @ 004a1880 */
                    /* catch() { ... } // from try @ 004a1858 with catch @ 004a1884 */
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
                (puVar7,puVar8,PTR_ProfileSortPredicate_007e6c18);
    }
    else {
      puVar1 = puVar7 + 0x20;
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
                (puVar7,puVar1,PTR_ProfileSortPredicate_007e6c18);
      puVar10 = PTR_ProfileSortPredicate_007e6c18;
      for (; puVar1 != puVar8; puVar1 = puVar1 + 2) {
        std::
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
                  (puVar1,puVar10);
                    /* catch() { ... } // from try @ 004a1854 with catch @ 004a1870 */
      }
    }
  }
  pPVar12 = operator_new(200);
                    /* try { // try from 004a1898 to 005a18b3 has its CatchHandler @ 004a1898
                       catch() { ... } // from try @ 004a1898 with catch @ 004a1898
                       catch() { ... } // from try @ 004a18b8 with catch @ 004a1898 */
  PlayerProfile::PlayerProfile(pPVar12);
  local_c8 = pPVar12;
  boost::detail::shared_count::shared_count<Caver::PlayerProfile>((shared_count *)&local_c0,pPVar12)
  ;
                    /* try { // try from 004a18b4 to 005a18b7 has its CatchHandler @ 004a1910 */
                    /* try { // try from 004a18b8 to 005a1923 has its CatchHandler @ 004a1898 */
  boost::detail::sp_enable_shared_from_this(&local_c8,pPVar12,pPVar12);
  pPVar12 = local_c8;
  UniqueIdentifier();
  PlayerProfile::InitWithIdentifier((string *)pPVar12);
  if ((undefined *)((long)local_e8 + -0x18) != PTR_DAT_007e5de8) {
    piVar19 = (int *)((long)local_e8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar20 = *piVar19;
      *piVar19 = iVar20 + -1;
    }
    else {
      do {
        iVar20 = *piVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar4) {
          *piVar19 = iVar20 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar20 < 1) {
                    /* try { // try from 004a1fd0 to 005a2057 has its CatchHandler @ 004a1fd0
                       catch() { ... } // from try @ 004a1fd0 with catch @ 004a1fd0
                       catch() { ... } // from try @ 004a205c with catch @ 004a1fd0
                       catch() { ... } // from try @ 004a209c with catch @ 004a1fd0
                       catch() { ... } // from try @ 004a20d8 with catch @ 004a1fd0 */
      operator_delete((undefined *)((long)local_e8 + -0x18));
    }
  }
  if (local_b0 == local_a8) {
    std::
    vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>
    ::_M_insert_aux((vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>
                     *)&local_b8,local_b0,&local_c8);
  }
  else {
    *local_b0 = local_c8;
    local_b0[1] = local_c0;
                    /* catch() { ... } // from try @ 004a18b4 with catch @ 004a1910 */
    if (local_c0 != (long *)0x0) {
      local_c0[1] = local_c0[1] + 1;
    }
    local_b0 = local_b0 + 2;
  }
  uVar23 = (long)local_b0 - (long)local_b8;
  uVar25 = (long)uVar23 >> 4;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar25;
  uVar16 = uVar23 + 8;
  if (SUB168(auVar5 * ZEXT816(0x10),8) != 0 || 0xfffffffffffffff7 < uVar23) {
    uVar16 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x110) = (int)uVar25;
  puVar13 = operator_new__(uVar16);
  *puVar13 = uVar25;
  if (uVar23 != 0) {
    memset(puVar13 + 1,0,uVar23 & 0xfffffffffffffff0);
  }
  psVar14 = *(shared_ptr **)(this + 0x118);
  *(ulong **)(this + 0x118) = puVar13 + 1;
  boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>(psVar14);
                    /* catch() { ... } // from try @ 004a19cc with catch @ 004a199c */
  if (0 < *(int *)(this + 0x110)) {
    lVar24 = 0;
    lVar17 = 0;
    do {
      lVar26 = *(long *)(this + 0x118);
                    /* try { // try from 004a19b8 to 005a19cb has its CatchHandler @ 004a19f0 */
      pPVar15 = operator_new(0x270);
      ProfilePanelView::ProfilePanelView(pPVar15);
                    /* try { // try from 004a19cc to 005a19f3 has its CatchHandler @ 004a199c */
      boost::shared_ptr<Caver::ProfilePanelView>::shared_ptr<Caver::ProfilePanelView>
                ((shared_ptr<Caver::ProfilePanelView> *)&local_e8,pPVar15);
      plVar11 = (long *)(lVar26 + lVar24);
      lVar26 = *plVar11;
      *plVar11 = (long)local_e8;
                    /* catch() { ... } // from try @ 004a19b8 with catch @ 004a19f0 */
      plVar21 = (long *)plVar11[1];
      plVar11[1] = (long)local_e0;
      local_e8 = (undefined *)lVar26;
      local_e0 = plVar21;
                    /* catch() { ... } // from try @ 004a1b6c with catch @ 004a1a00
                       catch() { ... } // from try @ 004a1d3c with catch @ 004a1a00 */
      if ((plVar21 != (long *)0x0) &&
         (lVar26 = plVar21[1], plVar21[1] = lVar26 + -1, lVar26 + -1 == 0)) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        lVar26 = plVar21[2];
        plVar21[2] = lVar26 + -1;
        if (lVar26 + -1 == 0) {
          (**(code **)(*plVar21 + 0x18))(plVar21);
        }
      }
      pPVar15 = *(ProfilePanelView **)(*(long *)(this + 0x118) + lVar24);
      *(ProfileSelectionView **)(pPVar15 + 0x160) = this + 0xf0;
      ProfilePanelView::InitWithProfile(pPVar15,(shared_ptr *)((long)local_b8 + lVar24));
      lVar26 = (long)*(int *)(this + 0x110);
      lVar17 = lVar17 + 1;
      lVar24 = lVar24 + 0x10;
    } while (lVar17 < lVar26);
    if (0 < *(int *)(this + 0x110)) {
      lVar17 = lVar26 + 1;
      lVar26 = lVar26 << 4;
      do {
        local_e8 = *(undefined **)(*(long *)(this + 0x118) + lVar26 + -0x10);
        pcVar18 = *(code **)(*local_a0 + 0x60);
        local_e0 = *(long **)(*(long *)(this + 0x118) + lVar26 + -8);
        if (local_e0 != (long *)0x0) {
          local_e0[1] = local_e0[1] + 1;
        }
        (*pcVar18)(local_a0,&local_e8);
        plVar11 = local_e0;
        if ((local_e0 != (long *)0x0) &&
           (lVar24 = local_e0[1], local_e0[1] = lVar24 + -1, lVar24 + -1 == 0)) {
                    /* try { // try from 004a1adc to 005a1af3 has its CatchHandler @ 004a1cd8 */
          (**(code **)(*local_e0 + 0x10))(local_e0);
          lVar24 = plVar11[2];
          plVar11[2] = lVar24 + -1;
          if (lVar24 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
        lVar17 = lVar17 + -1;
                    /* try { // try from 004a1b04 to 005a1b17 has its CatchHandler @ 004a1cd4 */
        lVar26 = lVar26 + -0x10;
      } while (1 < lVar17);
    }
  }
  this_02 = operator_new(0x130);
                    /* try { // try from 004a1b18 to 005a1b2f has its CatchHandler @ 004a1c70 */
  ProfilesHeaderView::ProfilesHeaderView(this_02);
  boost::shared_ptr<Caver::ProfilesHeaderView>::shared_ptr<Caver::ProfilesHeaderView>
            ((shared_ptr<Caver::ProfilesHeaderView> *)&local_e8,this_02);
  uVar2 = *(undefined8 *)(this + 0x120);
  plVar11 = *(long **)(this + 0x128);
                    /* try { // try from 004a1b40 to 005a1b53 has its CatchHandler @ 004a1c6c */
  *(undefined **)(this + 0x120) = local_e8;
  *(long **)(this + 0x128) = local_e0;
  local_e0 = plVar11;
                    /* try { // try from 004a1b54 to 005a1b6b has its CatchHandler @ 004a1c34 */
  if ((plVar11 != (long *)0x0) && (lVar17 = plVar11[1], plVar11[1] = lVar17 + -1, lVar17 + -1 == 0))
  {
    local_e8 = (undefined *)uVar2;
    (**(code **)(*plVar11 + 0x10))(plVar11);
                    /* try { // try from 004a1b6c to 005a1d03 has its CatchHandler @ 004a1a00 */
    lVar17 = plVar11[2];
    plVar11[2] = lVar17 + -1;
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  pGVar22 = *(GUIControl **)(*(long *)(this + 0x120) + 0x120);
  local_e8 = (undefined *)0x0;
  uStack_88 = (long *)0x0;
  local_90 = (long *)PTR_ButtonPressed_007e5648;
  local_80 = this;
  uVar16 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar16 & 1) == 0) {
    local_d0 = local_80;
    uStack_d8 = uStack_88;
    local_e0 = local_90;
    local_e8 = PTR_stored_vtable_007e7ab8;
  }
  else {
    local_e8 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_e8,0x40);
  if (((local_e8 != (undefined *)0x0) && (((ulong)local_e8 & 1) == 0)) &&
     (*(code **)((ulong)local_e8 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_e8 & 0xfffffffffffffffe))(&local_e0,&local_e0,2);
  }
  local_e8 = *(undefined **)(this + 0x120);
  pcVar18 = *(code **)(*local_a0 + 0x60);
                    /* catch() { ... } // from try @ 004a1b54 with catch @ 004a1c34 */
  local_e0 = *(long **)(this + 0x128);
  if (local_e0 != (long *)0x0) {
    local_e0[1] = local_e0[1] + 1;
  }
  (*pcVar18)(local_a0,&local_e8);
  plVar11 = local_e0;
                    /* catch() { ... } // from try @ 004a1b40 with catch @ 004a1c6c */
  if ((local_e0 != (long *)0x0) &&
     (lVar17 = local_e0[1], local_e0[1] = lVar17 + -1, lVar17 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004a1b18 with catch @ 004a1c70 */
    (**(code **)(*local_e0 + 0x10))(local_e0);
    lVar17 = plVar11[2];
    plVar11[2] = lVar17 + -1;
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  uVar2 = DAT_006916a0;
  fVar9 = _DAT_0068782c;
  local_e8 = (undefined *)0x0;
  local_e0 = (long *)0x0;
  iVar20 = *(int *)(this + 0x110);
  if (iVar20 < 1) {
    fVar27 = 20.0;
  }
  else {
    lVar17 = (long)iVar20 + 1;
    lVar24 = (long)iVar20 * 0x10;
    fVar27 = 20.0;
                    /* catch() { ... } // from try @ 004a1b04 with catch @ 004a1cd4 */
    do {
      lVar24 = lVar24 + -0x10;
                    /* catch() { ... } // from try @ 004a1adc with catch @ 004a1cd8 */
      local_90 = (long *)CONCAT44(fVar27,0x42200000);
      uStack_88 = (long *)uVar2;
      GUIView::SetFrame(*(GUIView **)(*(long *)(this + 0x118) + lVar24),(Rectangle *)&local_90);
                    /* try { // try from 004a1d04 to 005a1d3b has its CatchHandler @ 004a1d44 */
      Rectangle::RectangleByOutsetting
                ((Rectangle *)(*(long *)(*(long *)(this + 0x118) + lVar24) + 0x74),10.0);
      Rectangle::ExpandToincludeRectangle((Rectangle *)&local_e8,(Rectangle *)&local_90);
      lVar17 = lVar17 + -1;
      fVar27 = fVar27 + fVar9;
    } while (1 < lVar17);
  }
                    /* try { // try from 004a1d3c to 005a1d47 has its CatchHandler @ 004a1a00 */
                    /* catch() { ... } // from try @ 004a1d04 with catch @ 004a1d44 */
  local_90 = (long *)CONCAT44(fVar27,0x42200000);
  uStack_88 = (long *)CONCAT44(*(undefined4 *)(*(GUIView **)(this + 0x120) + 0x80),0x43aa0000);
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)&local_90);
  Rectangle::RectangleByOutsetting((Rectangle *)(*(long *)(this + 0x120) + 0x74),10.0);
  Rectangle::ExpandToincludeRectangle((Rectangle *)&local_e8,(Rectangle *)&local_90);
  local_e0 = (long *)CONCAT44((local_e8._4_4_ + local_e0._4_4_ + 10.0) - local_e8._4_4_,
                              (undefined4)local_e0);
  (**(code **)(*local_a0 + 0xf8))(local_a0,&local_e8);
  plVar11 = *(long **)(this + 0x100);
  pcVar18 = *(code **)(*plVar11 + 0x60);
  local_90 = local_a0;
  uStack_88 = local_98;
  if (local_98 != (long *)0x0) {
    local_98[1] = local_98[1] + 1;
  }
  (*pcVar18)(plVar11,&local_90);
  plVar11 = uStack_88;
  if ((uStack_88 != (long *)0x0) &&
     (lVar17 = uStack_88[1], uStack_88[1] = lVar17 + -1, lVar17 + -1 == 0)) {
    (**(code **)(*uStack_88 + 0x10))(uStack_88);
    lVar17 = plVar11[2];
    plVar11[2] = lVar17 + -1;
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  (**(code **)(**(long **)(this + 0x100) + 0x130))(*(long **)(this + 0x100),(long)local_a0 + 0x74);
  fVar9 = DAT_00683944;
  *(undefined1 *)(*(long *)(this + 0x100) + 0x1b2) = 1;
  if (fVar9 < *(float *)(this + 0x8c)) {
    (**(code **)(*(long *)this + 0x58))(this);
  }
  puVar7 = local_b8;
  puVar8 = local_b0;
  if ((local_c0 != (long *)0x0) &&
     (lVar17 = local_c0[1], local_c0[1] = lVar17 + -1, lVar17 + -1 == 0)) {
    (**(code **)(*local_c0 + 0x10))(local_c0);
    lVar17 = local_c0[2];
    local_c0[2] = lVar17 + -1;
    puVar7 = local_b8;
    puVar8 = local_b0;
    if (lVar17 + -1 == 0) {
      (**(code **)(*local_c0 + 0x18))(local_c0);
      puVar7 = local_b8;
      puVar8 = local_b0;
    }
  }
  for (; puVar1 = local_b0, puVar7 != local_b0; puVar7 = puVar7 + 2) {
    plVar11 = (long *)puVar7[1];
    local_b0 = puVar8;
    if ((plVar11 != (long *)0x0) &&
       (lVar17 = plVar11[1], plVar11[1] = lVar17 + -1, lVar17 + -1 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar17 = plVar11[2];
      plVar11[2] = lVar17 + -1;
      if (lVar17 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    puVar8 = local_b0;
    local_b0 = puVar1;
  }
  local_b0 = puVar8;
  if (local_b8 != (undefined8 *)0x0) {
    operator_delete(local_b8);
  }
  if ((local_98 != (long *)0x0) &&
     (lVar17 = local_98[1], local_98[1] = lVar17 + -1, lVar17 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar17 = local_98[2];
    local_98[2] = lVar17 + -1;
    if (lVar17 + -1 == 0) {
      (**(code **)(*local_98 + 0x18))(local_98);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


