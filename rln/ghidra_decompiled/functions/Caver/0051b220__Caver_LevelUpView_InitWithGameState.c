/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051b220
 * Function: Caver::LevelUpView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(LevelUpView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall Caver::LevelUpView::InitWithGameState(LevelUpView *this,shared_ptr *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  long lVar8;
  GUILabel *pGVar9;
  undefined *puVar10;
  int iVar11;
  string *psVar12;
  GUIButton *pGVar13;
  ulong uVar14;
  char *pcVar15;
  ulong *puVar16;
  shared_ptr *psVar17;
  GUIFrameView *pGVar18;
  GUILabel *this_00;
  FontLibrary *this_01;
  size_t __n;
  long lVar19;
  code *pcVar20;
  GUIView *pGVar21;
  long lVar22;
  GUIFrameView *pGVar23;
  ulong __n_00;
  long *plVar24;
  GUIControl *pGVar25;
  ulong uVar26;
  long *plVar27;
  GUIFrameView *local_110;
  undefined8 local_108;
  GUIView *local_100;
  long *plStack_f8;
  GUIFrameView *local_e8;
  long *local_e0;
  undefined1 auStack_d8 [8];
  GUIFrameView *local_d0 [3];
  LevelUpView *local_b8;
  GUIFrameView *local_b0;
  GUIFrameView *local_a0;
  long *plStack_98;
  undefined8 local_90;
  long local_88;
  
  lVar8 = tpidr_el0;
  local_88 = *(long *)(lVar8 + 0x28);
  uVar2 = *(undefined8 *)param_1;
  lVar19 = *(long *)(param_1 + 8);
  if (lVar19 != 0) {
    *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
  }
  plVar24 = *(long **)(this + 0x100);
  *(undefined8 *)(this + 0xf8) = uVar2;
  *(long *)(this + 0x100) = lVar19;
  if ((plVar24 != (long *)0x0) && (lVar19 = plVar24[1], plVar24[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    lVar19 = plVar24[2];
    plVar24[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(local_d0,"ui_close_button",&local_100);
                    /* catch() { ... } // from try @ 0051b34c with catch @ 0051b2e0 */
  TextureLibrary::TextureForName(psVar12,SUB81(local_d0,0));
  puVar10 = PTR_DAT_007e5de8;
  if (local_d0[0] + -0x18 != (GUIFrameView *)PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 0051b6c4 with catch @ 0051b694 */
    pGVar23 = local_d0[0] + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar23;
      *(int *)pGVar23 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar23,0x10);
        if (bVar6) {
          *(int *)pGVar23 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_d0[0] + -0x18);
    }
  }
  pGVar13 = operator_new(0x1d0);
  GUIButton::GUIButton(pGVar13,0);
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>
            ((shared_ptr<Caver::GUIButton> *)local_d0,pGVar13);
  pGVar23 = *(GUIFrameView **)(this + 0x108);
  plVar24 = *(long **)(this + 0x110);
  *(GUIFrameView **)(this + 0x108) = local_d0[0];
  *(GUIFrameView **)(this + 0x110) = local_d0[1];
  local_d0[0] = pGVar23;
  local_d0[1] = (GUIFrameView *)plVar24;
                    /* try { // try from 0051b344 to 0061b34b has its CatchHandler @ 0051b3c8 */
                    /* try { // try from 0051b34c to 0061b3db has its CatchHandler @ 0051b2e0 */
  if ((plVar24 != (long *)0x0) && (lVar19 = plVar24[1], plVar24[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    lVar19 = plVar24[2];
    plVar24[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x108),0,&local_e0);
  local_d0[1] = *(GUIFrameView **)((long)local_e0 + 0x54);
  local_d0[0] = (GUIFrameView *)0x0;
  GUIView::SetFrame(*(GUIView **)(this + 0x108),(Rectangle *)local_d0);
  pGVar25 = *(GUIControl **)(this + 0x108);
  local_d0[0] = (GUIFrameView *)0x0;
                    /* catch() { ... } // from try @ 0051b344 with catch @ 0051b3c8 */
  plStack_98 = (long *)0x0;
  local_a0 = (GUIFrameView *)PTR_ButtonPressed_007e55b0;
  local_90 = this;
  uVar14 = boost::detail::function::has_empty_target(&local_a0);
  if ((uVar14 & 1) == 0) {
    local_b8 = local_90;
    local_d0[2] = (GUIFrameView *)plStack_98;
    local_d0[1] = local_a0;
    local_d0[0] = (GUIFrameView *)PTR_stored_vtable_007e5df8;
  }
  else {
    local_d0[0] = (GUIFrameView *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar25,this,local_d0,1);
  if (((local_d0[0] != (GUIFrameView *)0x0) && (((ulong)local_d0[0] & 1) == 0)) &&
     (*(code **)((ulong)local_d0[0] & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_d0[0] & 0xfffffffffffffffe))(local_d0 + 1,local_d0 + 1,2);
  }
  local_d0[0] = *(GUIFrameView **)(this + 0x108);
  pcVar20 = *(code **)(*(long *)this + 0x60);
  local_d0[1] = *(GUIFrameView **)(this + 0x110);
  if (local_d0[1] != (GUIFrameView *)0x0) {
    *(long *)((long)local_d0[1] + 8) = *(long *)((long)local_d0[1] + 8) + 1;
  }
  (*pcVar20)(this,local_d0);
  pGVar23 = local_d0[1];
  if ((local_d0[1] != (GUIFrameView *)0x0) &&
     (lVar19 = *(long *)((long)local_d0[1] + 8), *(long *)((long)local_d0[1] + 8) = lVar19 + -1,
     lVar19 + -1 == 0)) {
    (**(code **)(*(long *)local_d0[1] + 0x10))(local_d0[1]);
    lVar19 = *(long *)((long)pGVar23 + 0x10);
    *(long *)((long)pGVar23 + 0x10) = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*(long *)pGVar23 + 0x18))(pGVar23);
    }
  }
  lVar19 = *(long *)param_1;
  pGVar23 = (GUIFrameView *)(puVar10 + 0x18);
  *(undefined4 *)(this + 0x118) = 0;
  uVar3 = *(uint *)(lVar19 + 0xb8);
  uVar4 = ~uVar3;
  if (-2 < (int)uVar3) {
    uVar4 = uVar3 + 1;
  }
  local_e8 = pGVar23;
  local_d0[0] = pGVar23;
  local_d0[1] = pGVar23;
  local_d0[2] = pGVar23;
  local_b8 = (LevelUpView *)pGVar23;
  local_b0 = pGVar23;
  pcVar15 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                      (uVar4,(char *)((long)&local_90 + 4));
  if ((int)uVar3 < -1) {
    pcVar15 = pcVar15 + -1;
    *pcVar15 = '-';
    pGVar23 = local_e8;
  }
  FUN_00669e1c(&local_e8,0,*(undefined8 *)(pGVar23 + -0x18),pcVar15,
               ((long)&local_90 + 4) - (long)pcVar15);
  FUN_0035a030(&local_110,"Experience Level ",&local_e8);
  FUN_0066a528(&local_100,&local_110);
  FUN_006677d4(&local_100," Achieved!",10);
  iVar11 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar11 + 1;
  FUN_0066a6a8(local_d0 + iVar11,&local_100);
  if (local_100 + -0x18 != (GUIView *)puVar10) {
                    /* try { // try from 0051b6b0 to 0061b6c3 has its CatchHandler @ 0051b6e8 */
    pGVar21 = local_100 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar21;
      *(int *)pGVar21 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar21;
                    /* try { // try from 0051b6c4 to 0061b6eb has its CatchHandler @ 0051b694 */
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar21,0x10);
        if (bVar6) {
          *(int *)pGVar21 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_100 + -0x18);
    }
  }
  if (local_110 + -0x18 != (GUIFrameView *)puVar10) {
    pGVar23 = local_110 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar23;
      *(int *)pGVar23 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar23;
                    /* catch() { ... } // from try @ 0051b6b0 with catch @ 0051b6e8 */
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar23,0x10);
        if (bVar6) {
          *(int *)pGVar23 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_110 + -0x18);
    }
  }
  if (local_e8 + -0x18 != (GUIFrameView *)puVar10) {
    pGVar23 = local_e8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar23;
                    /* catch() { ... } // from try @ 0051bd4c with catch @ 0051bd1c */
      *(int *)pGVar23 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar23,0x10);
        if (bVar6) {
          *(int *)pGVar23 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_e8 + -0x18);
    }
  }
  iVar11 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar11 + 1;
  FUN_0066918c(local_d0 + iVar11,"Maximum Health Increased",0x18);
  iVar11 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar11 + 1;
  FUN_0066918c(local_d0 + iVar11,"Damage Increased",0x10);
  iVar11 = *(int *)(this + 0x118);
  uVar26 = (ulong)iVar11;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar26;
  __n_00 = uVar26 * 0x10;
  uVar14 = __n_00 + 8;
  if (SUB168(auVar7 * ZEXT816(0x10),8) != 0 || 0xfffffffffffffff7 < __n_00) {
    uVar14 = 0xffffffffffffffff;
  }
  puVar16 = operator_new__(uVar14);
  *puVar16 = uVar26;
  if (iVar11 != 0) {
    memset(puVar16 + 1,0,__n_00);
  }
  psVar17 = *(shared_ptr **)(this + 0x120);
  *(ulong **)(this + 0x120) = puVar16 + 1;
  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(psVar17);
  plVar24 = _UNK_006945c8;
  pGVar9 = _DAT_006945c0;
  pGVar23 = DAT_006937e0;
  uVar2 = DAT_00683728;
  if (0 < *(int *)(this + 0x118)) {
    lVar19 = 0;
    do {
                    /* try { // try from 0051b764 to 0061b76f has its CatchHandler @ 0051b71c */
      pGVar18 = operator_new(0x110);
                    /* catch() { ... } // from try @ 0051b75c with catch @ 0051b76c */
                    /* try { // try from 0051b770 to 0061b7c3 has its CatchHandler @ 0051b770
                       catch() { ... } // from try @ 0051b770 with catch @ 0051b770
                       catch() { ... } // from try @ 0051b7e0 with catch @ 0051b770
                       catch() { ... } // from try @ 0051b814 with catch @ 0051b770
                       catch() { ... } // from try @ 0051b884 with catch @ 0051b770 */
      GUIFrameView::GUIFrameView(pGVar18);
      boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
                ((shared_ptr<Caver::GUIFrameView> *)&local_a0,pGVar18);
      pGVar18 = local_a0;
      psVar12 = (string *)TextureLibrary::sharedLibrary();
      FUN_00666bb8(&local_110,"ui_xp_frame",auStack_d8);
      TextureLibrary::TextureForName(psVar12,SUB81(&local_110,0));
      GUIFrameView::SetFrameTexture(pGVar18,(intrusive_ptr *)&local_100,false);
                    /* try { // try from 0051b7c4 to 0061b7df has its CatchHandler @ 0051b878 */
      if ((local_100 != (GUIView *)0x0) &&
         (iVar11 = *(int *)(local_100 + 8), *(int *)(local_100 + 8) = iVar11 + -1, iVar11 + -1 == 0)
         ) {
                    /* try { // try from 0051b7e0 to 0061b80f has its CatchHandler @ 0051b770 */
        (**(code **)(*(long *)local_100 + 8))();
      }
      if (local_110 + -0x18 != (GUIFrameView *)puVar10) {
                    /* catch() { ... } // from try @ 0051b764 with catch @ 0051b71c */
        pGVar18 = local_110 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar11 = *(int *)pGVar18;
                    /* try { // try from 0051b748 to 0061b74b has its CatchHandler @ 0051b758 */
          *(int *)pGVar18 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *(int *)pGVar18;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pGVar18,0x10);
            if (bVar6) {
              *(int *)pGVar18 = iVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (iVar11 < 1) {
                    /* catch() { ... } // from try @ 0051b748 with catch @ 0051b758 */
          operator_delete(local_110 + -0x18);
                    /* try { // try from 0051b75c to 0061b763 has its CatchHandler @ 0051b76c */
        }
      }
      plStack_f8 = plVar24;
      local_100 = (GUIView *)pGVar9;
      GUIView::SetFrame((GUIView *)local_a0,(Rectangle *)&local_100);
      this_00 = operator_new(0x150);
                    /* try { // try from 0051b810 to 0061b813 has its CatchHandler @ 0051b864 */
                    /* try { // try from 0051b814 to 0061b87b has its CatchHandler @ 0051b770 */
      GUILabel::GUILabel(this_00);
      boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
                ((shared_ptr<Caver::GUILabel> *)&local_100,this_00);
      pGVar21 = local_100;
      this_01 = (FontLibrary *)FontLibrary::sharedLibrary();
      FontLibrary::DefaultFont(this_01);
      if (local_110 != *(GUIFrameView **)(pGVar21 + 0xf0)) {
        if (local_108 != (long *)0x0) {
          local_108[1] = local_108[1] + 1;
        }
        plVar27 = *(long **)(pGVar21 + 0xf8);
        *(GUIFrameView **)(pGVar21 + 0xf0) = local_110;
        *(long **)(pGVar21 + 0xf8) = local_108;
                    /* catch() { ... } // from try @ 0051b810 with catch @ 0051b864 */
        if ((plVar27 != (long *)0x0) &&
           (lVar22 = plVar27[1], plVar27[1] = lVar22 + -1, lVar22 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0051b7c4 with catch @ 0051b878 */
                    /* try { // try from 0051b87c to 0061b883 has its CatchHandler @ 0051b88c */
                    /* try { // try from 0051b884 to 0061b88f has its CatchHandler @ 0051b770 */
          (**(code **)(*plVar27 + 0x10))(plVar27);
          lVar22 = plVar27[2];
                    /* catch() { ... } // from try @ 0051b87c with catch @ 0051b88c */
                    /* catch() { ... } // from try @ 0051b8d8 with catch @ 0051b890
                       catch() { ... } // from try @ 0051b8f4 with catch @ 0051b890 */
          plVar27[2] = lVar22 + -1;
          if (lVar22 + -1 == 0) {
            (**(code **)(*plVar27 + 0x18))(plVar27);
          }
        }
        GUILabel::UpdateText((GUILabel *)pGVar21);
      }
      plVar27 = local_108;
      if ((local_108 != (long *)0x0) &&
         (lVar22 = local_108[1], local_108[1] = lVar22 + -1, lVar22 + -1 == 0)) {
                    /* try { // try from 0051b8d4 to 0061b8d7 has its CatchHandler @ 0051b8e8 */
        (**(code **)(*local_108 + 0x10))(local_108);
                    /* try { // try from 0051b8d8 to 0061b8eb has its CatchHandler @ 0051b890 */
        lVar22 = plVar27[2];
        plVar27[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
                    /* catch() { ... } // from try @ 0051b8d4 with catch @ 0051b8e8 */
                    /* try { // try from 0051b8ec to 0061b8f3 has its CatchHandler @ 0051b8fc */
                    /* try { // try from 0051b8f4 to 0061b8ff has its CatchHandler @ 0051b890 */
          (**(code **)(*plVar27 + 0x18))(plVar27);
        }
      }
      pGVar21 = local_100;
                    /* catch() { ... } // from try @ 0051b8ec with catch @ 0051b8fc */
      if ((((*(GUILabel *)(local_100 + 0x108) != (GUILabel)0xff) ||
           (*(GUILabel *)(local_100 + 0x109) != (GUILabel)0xff)) ||
          (*(GUILabel *)(local_100 + 0x10a) != (GUILabel)0xff)) ||
         (*(GUILabel *)(local_100 + 0x10b) != (GUILabel)0xff)) {
                    /* catch() { ... } // from try @ 0051b998 with catch @ 0051b92c */
        plVar27 = *(long **)(local_100 + 0x118);
        *(undefined4 *)(local_100 + 0x108) = 0xffffffff;
        *(undefined8 *)(local_100 + 0x110) = 0;
        *(undefined8 *)(local_100 + 0x118) = 0;
        if ((plVar27 != (long *)0x0) &&
           (lVar22 = plVar27[1], plVar27[1] = lVar22 + -1, lVar22 + -1 == 0)) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          lVar22 = plVar27[2];
          plVar27[2] = lVar22 + -1;
          if (lVar22 + -1 == 0) {
                    /* try { // try from 0051b970 to 0061b973 has its CatchHandler @ 0051b98c */
                    /* try { // try from 0051b974 to 0061b97b has its CatchHandler @ 0051b9a0 */
            (**(code **)(*plVar27 + 0x18))(plVar27);
          }
        }
        GUILabel::UpdateText((GUILabel *)pGVar21);
      }
                    /* catch() { ... } // from try @ 0051b970 with catch @ 0051b98c */
      *(GUILabel *)(local_100 + 0x140) = (GUILabel)0x1;
                    /* try { // try from 0051b990 to 0061b997 has its CatchHandler @ 0051b99c */
      *(undefined4 *)(local_100 + 0x141) = 0xff000000;
      *(undefined8 *)(local_100 + 0x148) = uVar2;
                    /* try { // try from 0051b998 to 0061b9b3 has its CatchHandler @ 0051b92c */
                    /* catch() { ... } // from try @ 0051b990 with catch @ 0051b99c */
      GUILabel::UpdateText((GUILabel *)local_100);
                    /* catch() { ... } // from try @ 0051b974 with catch @ 0051b9a0 */
      *(undefined4 *)(local_100 + 0x130) = 0;
      GUILabel::UpdateBounds((GUILabel *)local_100);
      pGVar21 = local_100;
      pGVar18 = local_d0[lVar19];
      __n = *(size_t *)(pGVar18 + -0x18);
      if ((__n != *(size_t *)((long)*(void **)(local_100 + 0x100) + -0x18)) ||
         (iVar11 = memcmp(pGVar18,*(void **)(local_100 + 0x100),__n), iVar11 != 0)) {
        FUN_0066a6a8((GUILabel *)(pGVar21 + 0x100),local_d0 + lVar19);
        GUILabel::UpdateText((GUILabel *)pGVar21);
        pGVar21 = local_100;
      }
      local_110 = pGVar23;
      local_108 = (long *)CONCAT44(*(undefined4 *)(local_a0 + 0x90),
                                   *(float *)(local_a0 + 0x8c) + -20.0);
      GUIView::SetFrame(pGVar21,(Rectangle *)&local_110);
                    /* try { // try from 0051ba24 to 0061bad3 has its CatchHandler @ 0051ba24
                       catch() { ... } // from try @ 0051ba24 with catch @ 0051ba24
                       catch() { ... } // from try @ 0051bad8 with catch @ 0051ba24 */
      pcVar20 = *(code **)(*(long *)local_a0 + 0x60);
      local_110 = (GUIFrameView *)local_100;
      local_108 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plStack_f8[1] = plStack_f8[1] + 1;
      }
      (*pcVar20)(local_a0,&local_110);
      plVar27 = local_108;
      if ((local_108 != (long *)0x0) &&
         (lVar22 = local_108[1], local_108[1] = lVar22 + -1, lVar22 + -1 == 0)) {
        (**(code **)(*local_108 + 0x10))(local_108);
        lVar22 = plVar27[2];
        plVar27[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar27 + 0x18))(plVar27);
        }
      }
      puVar1 = (undefined8 *)(*(long *)(this + 0x120) + lVar19 * 0x10);
      if (plStack_98 != (long *)0x0) {
        plStack_98[1] = plStack_98[1] + 1;
      }
      plVar27 = (long *)puVar1[1];
      *puVar1 = local_a0;
      puVar1[1] = plStack_98;
      if ((plVar27 != (long *)0x0) &&
         (lVar22 = plVar27[1], plVar27[1] = lVar22 + -1, lVar22 + -1 == 0)) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
                    /* try { // try from 0051bad4 to 0061bad7 has its CatchHandler @ 0051bbc8 */
        lVar22 = plVar27[2];
                    /* try { // try from 0051bad8 to 0061bbdb has its CatchHandler @ 0051ba24 */
        plVar27[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar27 + 0x18))(plVar27);
        }
      }
      pcVar20 = *(code **)(*(long *)this + 0x60);
      local_110 = local_a0;
      local_108 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plStack_98[1] = plStack_98[1] + 1;
      }
      (*pcVar20)(this,&local_110);
      plVar27 = local_108;
      if ((local_108 != (long *)0x0) &&
         (lVar22 = local_108[1], local_108[1] = lVar22 + -1, lVar22 + -1 == 0)) {
        (**(code **)(*local_108 + 0x10))(local_108);
        lVar22 = plVar27[2];
        plVar27[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar27 + 0x18))(plVar27);
        }
      }
      plVar27 = plStack_f8;
      if ((plStack_f8 != (long *)0x0) &&
         (lVar22 = plStack_f8[1], plStack_f8[1] = lVar22 + -1, lVar22 + -1 == 0)) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        lVar22 = plVar27[2];
        plVar27[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar27 + 0x18))(plVar27);
        }
      }
      plVar27 = plStack_98;
      if ((plStack_98 != (long *)0x0) &&
         (lVar22 = plStack_98[1], plStack_98[1] = lVar22 + -1, lVar22 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0051bad4 with catch @ 0051bbc8 */
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        lVar22 = plVar27[2];
        plVar27[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar27 + 0x18))(plVar27);
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(this + 0x118));
  }
  if (local_b0 + -0x18 != (GUIFrameView *)puVar10) {
                    /* try { // try from 0051bd38 to 0061bd4b has its CatchHandler @ 0051bd70 */
    pGVar23 = local_b0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0051bde8 to 0061bdeb has its CatchHandler @ 0051bdf8 */
      iVar11 = *(int *)pGVar23;
      *(int *)pGVar23 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar23;
                    /* try { // try from 0051bd4c to 0061bd73 has its CatchHandler @ 0051bd1c */
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar23,0x10);
        if (bVar6) {
          *(int *)pGVar23 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
                    /* catch() { ... } // from try @ 0051bde8 with catch @ 0051bdf8 */
    if (iVar11 < 1) {
                    /* try { // try from 0051bdfc to 0061be03 has its CatchHandler @ 0051be0c */
      operator_delete(local_b0 + -0x18);
                    /* try { // try from 0051be04 to 0061be0f has its CatchHandler @ 0051bdb4 */
    }
  }
  if ((GUIFrameView *)(local_b8 + -0x18) != (GUIFrameView *)puVar10) {
    pGVar23 = (GUIFrameView *)(local_b8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar23;
                    /* catch() { ... } // from try @ 0051bdfc with catch @ 0051be0c */
                    /* try { // try from 0051be10 to 0061be63 has its CatchHandler @ 0051be10
                       catch(type#1 @ 00000000) { ... } // from try @ 0051be10 with catch @ 0051be10
                       catch(type#1 @ 00000000) { ... } // from try @ 0051be80 with catch @ 0051be10
                       catch(type#1 @ 00000000) { ... } // from try @ 0051bf0c with catch @ 0051be10
                        */
      *(int *)pGVar23 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar23;
                    /* catch() { ... } // from try @ 0051bd38 with catch @ 0051bd70 */
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar23,0x10);
        if (bVar6) {
          *(int *)pGVar23 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((GUIFrameView *)(local_b8 + -0x18));
    }
  }
  if (local_d0[2] + -0x18 != (GUIFrameView *)puVar10) {
    pGVar23 = local_d0[2] + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar23;
      *(int *)pGVar23 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar23,0x10);
        if (bVar6) {
          *(int *)pGVar23 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_d0[2] + -0x18);
    }
  }
  if (local_d0[1] + -0x18 != (GUIFrameView *)puVar10) {
    pGVar23 = local_d0[1] + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar23;
      *(int *)pGVar23 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar23;
                    /* catch() { ... } // from try @ 0051be04 with catch @ 0051bdb4 */
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar23,0x10);
        if (bVar6) {
          *(int *)pGVar23 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_d0[1] + -0x18);
                    /* try { // try from 0051be64 to 0061be7f has its CatchHandler @ 0051bf00 */
    }
  }
  if (local_d0[0] + -0x18 != (GUIFrameView *)puVar10) {
    pGVar23 = local_d0[0] + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar23;
      *(int *)pGVar23 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar23,0x10);
        if (bVar6) {
          *(int *)pGVar23 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar11 < 1) {
                    /* try { // try from 0051be80 to 0061bf03 has its CatchHandler @ 0051be10 */
      operator_delete(local_d0[0] + -0x18);
    }
  }
  if ((local_e0 != (long *)0x0) &&
     (iVar11 = (int)local_e0[1] + -1, *(int *)(local_e0 + 1) = iVar11, iVar11 == 0)) {
    (**(code **)(*local_e0 + 8))();
  }
  if (*(long *)(lVar8 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


