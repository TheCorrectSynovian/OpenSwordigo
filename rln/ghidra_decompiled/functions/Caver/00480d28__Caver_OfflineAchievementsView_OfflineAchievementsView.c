/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00480d28
 * Function: Caver::OfflineAchievementsView::OfflineAchievementsView
 * Signature: undefined __thiscall OfflineAchievementsView(OfflineAchievementsView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile>
   const&) */

void __thiscall
Caver::OfflineAchievementsView::OfflineAchievementsView
          (OfflineAchievementsView *this,shared_ptr *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined *puVar9;
  int iVar10;
  GUIScrollView *this_00;
  GUIFrameView *pGVar11;
  string *psVar12;
  undefined8 *puVar13;
  OfflineAchievementView *this_01;
  undefined *puVar14;
  char *pcVar15;
  ulong uVar16;
  FontLibrary *this_02;
  intrusive_ptr *piVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  int *piVar21;
  shared_ptr *psVar22;
  int iVar23;
  shared_ptr **ppsVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  uint uVar33;
  OfflineAchievementsView *__s;
  GUILabel *pGVar34;
  GUIButton *pGVar35;
  long *plVar36;
  PlayerProfile *this_03;
  uint uVar37;
  uint uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  shared_ptr *psStack_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  void *local_e0;
  long *local_d8;
  shared_ptr *local_d0;
  undefined4 local_c8;
  undefined4 auStack_c4 [3];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0 [2];
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  
                    /* try { // try from 00480d38 to 00580d4b has its CatchHandler @ 004810c8 */
  lVar6 = tpidr_el0;
  lVar18 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00480d5c to 00580d67 has its CatchHandler @ 00481090 */
  GUIView::GUIView((GUIView *)this);
  __s = this + 0xf0;
  *(undefined **)this = PTR_vtable_007e72c8 + 0x10;
                    /* try { // try from 00480d88 to 00580dc3 has its CatchHandler @ 00481034 */
  memset(__s,0,0x78);
  this_00 = operator_new(0x1f0);
  GUIScrollView::GUIScrollView(this_00);
  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>
            ((shared_ptr<Caver::GUIScrollView> *)&local_b8,this_00);
  plVar36 = *(long **)(this + 0x128);
  uVar26 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  local_b8._0_4_ = (undefined4)*(undefined8 *)(this + 0x120);
  local_b8._4_4_ = (undefined4)((ulong)*(undefined8 *)(this + 0x120) >> 0x20);
  *(undefined8 *)(this + 0x120) = uVar26;
  *(ulong *)(this + 0x128) = CONCAT44(uStack_ac,uStack_b0);
                    /* try { // try from 00480dc4 to 005812cf has its CatchHandler @ 00480af8 */
  uStack_b0 = SUB84(plVar36,0);
  uStack_ac = (undefined4)((ulong)plVar36 >> 0x20);
  if ((plVar36 != (long *)0x0) && (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    lVar19 = plVar36[2];
    plVar36[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
  }
  pcVar20 = *(code **)(*(long *)this + 0x60);
  local_b8._0_4_ = (undefined4)*(undefined8 *)(this + 0x120);
  local_b8._4_4_ = (undefined4)((ulong)*(undefined8 *)(this + 0x120) >> 0x20);
  lVar19 = *(long *)(this + 0x128);
  uStack_b0 = (undefined4)lVar19;
  uStack_ac = (undefined4)((ulong)lVar19 >> 0x20);
  if (lVar19 != 0) {
    *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
  }
  (*pcVar20)(this,&local_b8);
  plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
  if ((plVar36 != (long *)0x0) && (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    lVar19 = plVar36[2];
    plVar36[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
  }
  FUN_00666bb8(&local_e0,&DAT_0068fbeb,&local_e8);
  local_c8 = 0xff000000;
  auStack_c4[0] = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_b8,&local_e0,auStack_c4,&local_c8);
  lVar19 = CONCAT44(uStack_ac,uStack_b0);
  if (lVar19 != 0) {
    *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
  }
  plVar36 = *(long **)(this + 0x108);
  *(ulong *)(this + 0x100) = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  *(long *)(this + 0x108) = lVar19;
  if ((plVar36 != (long *)0x0) && (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    lVar19 = plVar36[2];
    plVar36[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
  }
  plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
  if ((plVar36 != (long *)0x0) && (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    lVar19 = plVar36[2];
    plVar36[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
  }
  puVar9 = PTR_DAT_007e5de8;
  if ((undefined *)((long)local_e0 + -0x18) != PTR_DAT_007e5de8) {
    piVar21 = (int *)((long)local_e0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar21;
      *piVar21 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar5) {
          *piVar21 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* catch() { ... } // from try @ 004821b8 with catch @ 00482188 */
    if (iVar10 < 1) {
      operator_delete((undefined *)((long)local_e0 + -0x18));
    }
  }
  plVar36 = *(long **)(this + 0x120);
  pcVar20 = *(code **)(*plVar36 + 0x60);
  local_b8._0_4_ = (undefined4)*(undefined8 *)(this + 0x100);
  local_b8._4_4_ = (undefined4)((ulong)*(undefined8 *)(this + 0x100) >> 0x20);
  lVar19 = *(long *)(this + 0x108);
  uStack_b0 = (undefined4)lVar19;
  uStack_ac = (undefined4)((ulong)lVar19 >> 0x20);
  if (lVar19 != 0) {
    *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
  }
  (*pcVar20)(plVar36,&local_b8);
  plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
  if ((plVar36 != (long *)0x0) && (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    lVar19 = plVar36[2];
    plVar36[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
  }
  pGVar11 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar11);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_b8,pGVar11);
  plVar36 = *(long **)(this + 0x118);
  uVar26 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  local_b8._0_4_ = (undefined4)*(undefined8 *)(this + 0x110);
  local_b8._4_4_ = (undefined4)((ulong)*(undefined8 *)(this + 0x110) >> 0x20);
  *(undefined8 *)(this + 0x110) = uVar26;
  *(ulong *)(this + 0x118) = CONCAT44(uStack_ac,uStack_b0);
  uStack_b0 = SUB84(plVar36,0);
  uStack_ac = (undefined4)((ulong)plVar36 >> 0x20);
                    /* catch() { ... } // from try @ 00480d88 with catch @ 00481034 */
  if ((plVar36 != (long *)0x0) && (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    lVar19 = plVar36[2];
    plVar36[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
  }
  pGVar11 = *(GUIFrameView **)(this + 0x110);
  psVar12 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 00480d5c with catch @ 00481090 */
  FUN_00666bb8(&local_e0,"white",&local_e8);
  TextureLibrary::TextureForName(psVar12,SUB81(&local_e0,0));
  GUIFrameView::SetFrameTexture(pGVar11,(intrusive_ptr *)&local_b8,true);
  plVar36 = (long *)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
                    /* catch() { ... } // from try @ 00480d38 with catch @ 004810c8 */
                    /* catch() { ... } // from try @ 00480cdc with catch @ 004810cc */
  if ((plVar36 != (long *)0x0) &&
     (iVar10 = (int)plVar36[1] + -1, *(int *)(plVar36 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar36 + 8))();
  }
  if ((undefined *)((long)local_e0 + -0x18) != puVar9) {
    piVar21 = (int *)((long)local_e0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar21;
      *piVar21 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar5) {
          *piVar21 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* try { // try from 004821a4 to 005821b7 has its CatchHandler @ 004821dc */
    if (iVar10 < 1) {
      operator_delete((undefined *)((long)local_e0 + -0x18));
    }
  }
  local_b8._0_4_ = 0x7f7f7f7f;
  GUIFrameView::SetFrameColor(*(GUIFrameView **)(this + 0x110),(Color *)&local_b8);
  plVar36 = *(long **)(this + 0x100);
  pcVar20 = *(code **)(*plVar36 + 0x60);
  local_b8._0_4_ = (undefined4)*(undefined8 *)(this + 0x110);
  local_b8._4_4_ = (undefined4)((ulong)*(undefined8 *)(this + 0x110) >> 0x20);
  lVar19 = *(long *)(this + 0x118);
  uStack_b0 = (undefined4)lVar19;
  uStack_ac = (undefined4)((ulong)lVar19 >> 0x20);
  if (lVar19 != 0) {
                    /* catch() { ... } // from try @ 00480cb0 with catch @ 00481128 */
    *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
  }
  (*pcVar20)(plVar36,&local_b8);
  plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
  if ((plVar36 != (long *)0x0) && (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    lVar19 = plVar36[2];
                    /* catch() { ... } // from try @ 00480c8c with catch @ 00481160 */
                    /* catch() { ... } // from try @ 00480c30 with catch @ 00481164 */
    plVar36[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
  }
  puVar13 = (undefined8 *)AchievementsManager::sharedManager();
  fVar8 = _DAT_0068782c;
  uVar37 = 0;
  uVar33 = 0;
  uVar38 = 0;
  ppsVar24 = &local_d0;
  psVar22 = (shared_ptr *)*puVar13;
  while( true ) {
    *ppsVar24 = psVar22;
    lVar19 = AchievementsManager::sharedManager();
    psVar22 = local_d0;
                    /* catch() { ... } // from try @ 00480c04 with catch @ 004811c0 */
    if (local_d0 == *(shared_ptr **)(lVar19 + 8)) break;
    this_01 = operator_new(0x168);
    OfflineAchievementView::OfflineAchievementView(this_01);
    boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>
              ((shared_ptr<Caver::OfflineAchievementView> *)&local_b8,this_01);
    this_03 = *(PlayerProfile **)param_1;
    if (this_03 == (PlayerProfile *)0x0) {
      lVar19 = AchievementsManager::sharedManager();
                    /* catch() { ... } // from try @ 00480b48 with catch @ 00481260 */
      plVar25 = *(long **)psVar22 + 4;
      plVar36 = *(long **)psVar22;
      if (*(long *)(*plVar25 + -0x18) != 0) {
        plVar36 = plVar25;
      }
      FUN_0066a528(&local_e0,plVar36);
      piVar21 = (int *)std::
                       map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                       ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                     *)(lVar19 + 0x1a8),(string *)&local_e0);
      iVar10 = *piVar21;
      puVar14 = (undefined *)((long)local_e0 + -0x18);
      if (puVar14 != puVar9) {
        piVar21 = (int *)((long)local_e0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00481408;
        do {
          iVar23 = *piVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar5) {
            *piVar21 = iVar23 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_00481414;
      }
    }
    else {
      plVar25 = *(long **)psVar22 + 4;
                    /* catch() { ... } // from try @ 00480be0 with catch @ 004811f8 */
                    /* catch() { ... } // from try @ 00480b7c with catch @ 004811fc */
      plVar36 = *(long **)psVar22;
      if (*(long *)(*plVar25 + -0x18) != 0) {
        plVar36 = plVar25;
      }
      FUN_0066a528(&local_e0,plVar36);
      iVar10 = PlayerProfile::ValueForCounter(this_03,(string *)&local_e0);
      puVar14 = (undefined *)((long)local_e0 + -0x18);
      if (puVar14 != puVar9) {
        piVar21 = (int *)((long)local_e0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00481408:
          iVar23 = *piVar21;
          *piVar21 = iVar23 + -1;
        }
        else {
          do {
            iVar23 = *piVar21;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
            if (bVar5) {
              *piVar21 = iVar23 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
LAB_00481414:
        if (iVar23 < 1) {
          operator_delete(puVar14);
        }
      }
    }
    iVar23 = *(int *)(*(long *)psVar22 + 0x28);
    if (iVar23 <= iVar10) {
      uVar33 = uVar33 + 1;
      uVar37 = *(int *)(*(long *)psVar22 + 0x18) + uVar37;
    }
                    /* catch() { ... } // from try @ 00480b28 with catch @ 004812cc */
    OfflineAchievementView::SetAchievement
              ((OfflineAchievementView *)CONCAT44(local_b8._4_4_,(undefined4)local_b8),psVar22,
               iVar23 <= iVar10,((float)iVar10 * fVar8) / (float)iVar23);
    puVar13 = *(undefined8 **)(this + 0x138);
    if (puVar13 == *(undefined8 **)(this + 0x140)) {
      std::
      vector<boost::shared_ptr<Caver::OfflineAchievementView>,std::allocator<boost::shared_ptr<Caver::OfflineAchievementView>>>
      ::_M_insert_aux((vector<boost::shared_ptr<Caver::OfflineAchievementView>,std::allocator<boost::shared_ptr<Caver::OfflineAchievementView>>>
                       *)(this + 0x130),puVar13,&local_b8);
    }
    else {
      *puVar13 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
      lVar19 = CONCAT44(uStack_ac,uStack_b0);
      puVar13[1] = lVar19;
      if (lVar19 != 0) {
        *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
      }
      *(undefined8 **)(this + 0x138) = puVar13 + 2;
    }
    plVar36 = *(long **)(this + 0x120);
    local_e0 = (void *)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
    local_d8 = (long *)CONCAT44(uStack_ac,uStack_b0);
    pcVar20 = *(code **)(*plVar36 + 0x60);
    if (local_d8 != (long *)0x0) {
      local_d8[1] = local_d8[1] + 1;
    }
    (*pcVar20)(plVar36,&local_e0);
    plVar36 = local_d8;
    if ((local_d8 != (long *)0x0) &&
       (lVar19 = local_d8[1], local_d8[1] = lVar19 + -1, lVar19 + -1 == 0)) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      lVar19 = plVar36[2];
      plVar36[2] = lVar19 + -1;
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar36 + 0x18))(plVar36);
      }
    }
    plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
    if ((plVar36 != (long *)0x0) &&
       (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0)) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
      lVar19 = plVar36[2];
      plVar36[2] = lVar19 + -1;
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar36 + 0x18))(plVar36);
      }
    }
    uVar38 = uVar38 + 1;
    ppsVar24 = &psStack_120;
    psVar22 = local_d0;
    local_d0 = local_d0 + 0x10;
  }
  pcVar1 = (char *)((long)&uStack_a8 + 4);
  uVar3 = -uVar33;
  if (-1 < (int)uVar33) {
    uVar3 = uVar33;
  }
  local_100 = puVar9 + 0x18;
  pcVar15 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                      (uVar3,pcVar1);
  puVar14 = puVar9 + 0x18;
  if ((int)uVar33 < 0) {
    pcVar15 = pcVar15 + -1;
    *pcVar15 = '-';
    puVar14 = local_100;
  }
  FUN_00669e1c(&local_100,0,*(undefined8 *)(puVar14 + -0x18),pcVar15,(long)pcVar1 - (long)pcVar15);
  FUN_0066a528(&local_f8,&local_100);
  FUN_006677d4(&local_f8,&DAT_0069091e,4);
  uVar33 = -uVar38;
  if (-1 < (int)uVar38) {
    uVar33 = uVar38;
  }
  local_108 = puVar9 + 0x18;
  pcVar15 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                      (uVar33,pcVar1);
  puVar14 = puVar9 + 0x18;
  if ((int)uVar38 < 0) {
    pcVar15 = pcVar15 + -1;
    *pcVar15 = '-';
    puVar14 = local_108;
  }
  FUN_00669e1c(&local_108,0,*(undefined8 *)(puVar14 + -0x18),pcVar15,(long)pcVar1 - (long)pcVar15);
  FUN_0066a528(&local_f0,&local_f8);
  FUN_00667614(&local_f0,&local_108);
  FUN_0066a528(&local_e8,&local_f0);
  FUN_006677d4(&local_e8," Achievements (",0xf);
  uVar38 = -uVar37;
  if (-1 < (int)uVar37) {
    uVar38 = uVar37;
  }
  local_110 = puVar9 + 0x18;
  pcVar15 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                      (uVar38,pcVar1);
  puVar14 = puVar9 + 0x18;
  if ((int)uVar37 < 0) {
    pcVar15 = pcVar15 + -1;
    *pcVar15 = '-';
    puVar14 = local_110;
  }
  FUN_00669e1c(&local_110,0,*(undefined8 *)(puVar14 + -0x18),pcVar15,(long)pcVar1 - (long)pcVar15);
  FUN_0066a528(&local_d0,&local_e8);
  FUN_00667614(&local_d0,&local_110);
  FUN_0066a528(&local_e0,&local_d0);
  FUN_006677d4(&local_e0,&DAT_00690239,4);
  if (local_d0 + -0x18 != (shared_ptr *)puVar9) {
                    /* try { // try from 004821b8 to 005821df has its CatchHandler @ 00482188 */
    psVar22 = local_d0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *(int *)psVar22;
      *(int *)psVar22 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *(int *)psVar22;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar22,0x10);
        if (bVar5) {
          *(int *)psVar22 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_d0 + -0x18);
    }
  }
  if (local_110 + -0x18 != puVar9) {
                    /* catch() { ... } // from try @ 004821a4 with catch @ 004821dc */
    piVar21 = (int *)(local_110 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar21;
      *piVar21 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar5) {
          *piVar21 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_110 + -0x18);
    }
  }
  if (local_e8 + -3 != (long *)puVar9) {
                    /* try { // try from 00482208 to 0058229b has its CatchHandler @ 00482208
                       catch() { ... } // from try @ 00482208 with catch @ 00482208
                       catch() { ... } // from try @ 0048230c with catch @ 00482208
                       catch() { ... } // from try @ 0048252c with catch @ 00482208 */
    plVar36 = local_e8 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar36;
      *(int *)plVar36 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = (int)*plVar36;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar5) {
          *(int *)plVar36 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_e8 + -3);
    }
  }
  if (local_f0 + -3 != (long *)puVar9) {
    plVar36 = local_f0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar36;
      *(int *)plVar36 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = (int)*plVar36;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar5) {
          *(int *)plVar36 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_f0 + -3);
    }
  }
  if (local_108 + -0x18 != puVar9) {
    piVar21 = (int *)(local_108 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar21;
      *piVar21 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar5) {
          *piVar21 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_108 + -0x18);
    }
  }
  if (local_f8 + -3 != (long *)puVar9) {
    plVar36 = local_f8 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar36;
      *(int *)plVar36 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = (int)*plVar36;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar5) {
          *(int *)plVar36 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* catch() { ... } // from try @ 004822f4 with catch @ 004823d0 */
    if (iVar10 < 1) {
      operator_delete(local_f8 + -3);
    }
  }
  if (local_100 + -0x18 != puVar9) {
    piVar21 = (int *)(local_100 + -8);
                    /* try { // try from 0048229c to 005822af has its CatchHandler @ 00482478 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar21;
      *piVar21 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar5) {
          *piVar21 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_100 + -0x18);
    }
  }
  lVar19 = TextureLibrary::sharedLibrary();
  if (*(char *)(lVar19 + 0x38) != '\0') {
    FUN_006677d4(&local_e0,".",1);
  }
  FUN_006677d4(&local_e0,&DAT_006933db,1);
  pGVar34 = *(GUILabel **)(this + 0x100);
  piVar17 = *(intrusive_ptr **)((long)local_e0 + -0x18);
  if ((piVar17 != *(intrusive_ptr **)((long)*(void **)(pGVar34 + 0x100) + -0x18)) ||
     (iVar10 = memcmp(local_e0,*(void **)(pGVar34 + 0x100),(size_t)piVar17), iVar10 != 0)) {
    FUN_0066a6a8(pGVar34 + 0x100,&local_e0);
    GUILabel::UpdateText(pGVar34);
  }
  local_d0 = (shared_ptr *)0x0;
  local_e8 = (long *)0x0;
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_d0,(intrusive_ptr *)&local_e8,piVar17);
  lVar19 = CONCAT44(uStack_ac,uStack_b0);
  if (lVar19 != 0) {
    *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
  }
  plVar36 = *(long **)(this + 0xf8);
  *(ulong *)(this + 0xf0) = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  *(long *)(this + 0xf8) = lVar19;
  if ((plVar36 != (long *)0x0) && (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    lVar19 = plVar36[2];
    plVar36[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
  }
  plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
  if ((plVar36 != (long *)0x0) && (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    lVar19 = plVar36[2];
    plVar36[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
  }
  if ((local_e8 != (long *)0x0) &&
     (iVar10 = (int)local_e8[1] + -1, *(int *)(local_e8 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_e8 + 8))();
  }
                    /* catch() { ... } // from try @ 00481770 with catch @ 0048175c */
  if ((local_d0 != (shared_ptr *)0x0) &&
     (iVar10 = *(int *)(local_d0 + 8), *(int *)(local_d0 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
                    /* try { // try from 0048176c to 0058176f has its CatchHandler @ 00481780 */
    (**(code **)(*(long *)local_d0 + 8))();
  }
                    /* try { // try from 00481770 to 00581793 has its CatchHandler @ 0048175c */
  pGVar35 = *(GUIButton **)__s;
  psVar12 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 0048176c with catch @ 00481780 */
  FUN_00666bb8(&local_d0,"ui_button_arrow",&local_f0);
  TextureLibrary::TextureForName(psVar12,SUB81(&local_d0,0));
  GUIButton::SetImage(pGVar35,(intrusive_ptr *)&local_b8);
  plVar36 = (long *)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  if ((plVar36 != (long *)0x0) &&
     (iVar10 = (int)plVar36[1] + -1, *(int *)(plVar36 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar36 + 8))();
  }
  if (local_d0 + -0x18 != (shared_ptr *)puVar9) {
    psVar22 = local_d0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *(int *)psVar22;
                    /* catch() { ... } // from try @ 004822e0 with catch @ 00482408 */
      *(int *)psVar22 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *(int *)psVar22;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar22,0x10);
        if (bVar5) {
          *(int *)psVar22 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* catch() { ... } // from try @ 004822b0 with catch @ 0048240c */
    if (iVar10 < 1) {
      operator_delete(local_d0 + -0x18);
    }
  }
  pGVar35 = *(GUIButton **)__s;
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_d0,"ui_button_arrow_pressed",&local_f0);
  piVar17 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar12,SUB81(&local_d0,0));
  GUIButton::SetHighlightedImage(pGVar35,(intrusive_ptr *)&local_b8);
  plVar36 = (long *)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  if ((plVar36 != (long *)0x0) &&
     (iVar10 = (int)plVar36[1] + -1, *(int *)(plVar36 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*plVar36 + 8))();
  }
  if (local_d0 + -0x18 != (shared_ptr *)puVar9) {
                    /* try { // try from 004822e0 to 005822f3 has its CatchHandler @ 00482408 */
    psVar22 = local_d0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *(int *)psVar22;
      *(int *)psVar22 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *(int *)psVar22;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar22,0x10);
        if (bVar5) {
          *(int *)psVar22 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 004822f4 to 0058230b has its CatchHandler @ 004823d0 */
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_d0 + -0x18);
    }
  }
  uVar26 = *(undefined8 *)(*(GUIView **)__s + 0x74);
  uStack_b0 = (undefined4)DAT_00690900;
  uStack_ac = (undefined4)((ulong)DAT_00690900 >> 0x20);
  local_b8._0_4_ = (undefined4)uVar26;
  local_b8._4_4_ = (undefined4)((ulong)uVar26 >> 0x20);
  GUIView::SetFrame(*(GUIView **)__s,(Rectangle *)&local_b8);
  lVar19 = *(long *)__s;
  local_b8._0_4_ = 0xbf800000;
  uStack_a8._4_4_ = 0x3f800000;
  local_90 = 0x3f800000;
  uStack_ac = 0;
  uStack_a8._0_4_ = 0;
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  local_a0[1] = 0;
  local_a0[0] = 0;
  uStack_84 = 0;
  local_8c = 0;
  local_7c = 0x3f800000;
  puVar2 = (undefined4 *)(lVar19 + 0x198);
                    /* catch() { ... } // from try @ 004818e0 with catch @ 004818b0 */
  puVar27 = puVar2;
  if (puVar2 <= (undefined4 *)(lVar19 + 0x15cU)) {
    puVar27 = (undefined4 *)(lVar19 + 0x15cU);
  }
  uVar16 = ((ulong)((long)puVar27 + (-0x159 - lVar19)) >> 2) + 1;
                    /* try { // try from 004818cc to 005818df has its CatchHandler @ 00481904 */
  if (uVar16 < 8) {
    puVar27 = (undefined4 *)(lVar19 + 0x158);
    puVar29 = &local_b8;
                    /* try { // try from 004818e0 to 00581907 has its CatchHandler @ 004818b0 */
  }
  else {
    uVar30 = uVar16 & 0x7ffffffffffffff8;
    puVar29 = (undefined8 *)((long)&local_b8 + uVar30 * 4);
    puVar13 = (undefined8 *)(lVar19 + 0x168);
    puVar27 = (undefined4 *)(lVar19 + uVar30 * 4 + 0x158);
    puVar31 = &uStack_a8;
    uVar32 = uVar30;
    do {
      puVar7 = puVar31 + -1;
                    /* catch() { ... } // from try @ 004818cc with catch @ 00481904 */
      uVar26 = puVar31[-2];
      uVar40 = puVar31[1];
      uVar39 = *puVar31;
      uVar32 = uVar32 - 8;
      puVar31 = puVar31 + 4;
      puVar13[-1] = *puVar7;
      puVar13[-2] = uVar26;
      puVar13[1] = uVar40;
      *puVar13 = uVar39;
      puVar13 = puVar13 + 4;
    } while (uVar32 != 0);
    if (uVar16 == uVar30) goto LAB_00481934;
  }
  do {
    puVar28 = puVar27 + 1;
    *puVar27 = *(undefined4 *)puVar29;
    puVar27 = puVar28;
    puVar29 = (undefined8 *)((long)puVar29 + 4);
  } while (puVar28 < puVar2);
LAB_00481934:
  pcVar20 = *(code **)(*(long *)this + 0x60);
  local_b8._0_4_ = (undefined4)lVar19;
  local_b8._4_4_ = (undefined4)((ulong)lVar19 >> 0x20);
  lVar19 = *(long *)(this + 0xf8);
  uStack_b0 = (undefined4)lVar19;
  uStack_ac = (undefined4)((ulong)lVar19 >> 0x20);
  if (lVar19 != 0) {
    *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
  }
  (*pcVar20)(this,&local_b8);
  plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
  if ((plVar36 != (long *)0x0) && (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0))
  {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    lVar19 = plVar36[2];
    plVar36[2] = lVar19 + -1;
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar36 + 0x18))(plVar36);
    }
  }
  plVar36 = (long *)OnlineController::SharedController();
  uVar16 = (**(code **)(*plVar36 + 0xf0))();
  if ((uVar16 & 1) != 0) {
                    /* catch() { ... } // from try @ 00481adc with catch @ 004819c0
                       catch() { ... } // from try @ 00481cdc with catch @ 004819c0 */
    local_d0 = (shared_ptr *)0x0;
    local_e8 = (long *)0x0;
    GameInterfaceBuilder::PlainButton
              ((GameInterfaceBuilder *)&local_d0,(intrusive_ptr *)&local_e8,piVar17);
    lVar19 = CONCAT44(uStack_ac,uStack_b0);
    if (lVar19 != 0) {
      *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
    }
                    /* try { // try from 004819ec to 005819ff has its CatchHandler @ 00481cb0 */
    plVar36 = *(long **)(this + 0x160);
    *(ulong *)(this + 0x158) = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
    *(long *)(this + 0x160) = lVar19;
                    /* try { // try from 00481a00 to 00581a13 has its CatchHandler @ 00481c40 */
    if ((plVar36 != (long *)0x0) &&
       (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0)) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
      lVar19 = plVar36[2];
      plVar36[2] = lVar19 + -1;
      if (lVar19 + -1 == 0) {
                    /* try { // try from 00481a34 to 00581a3f has its CatchHandler @ 00481cb4 */
        (**(code **)(*plVar36 + 0x18))(plVar36);
      }
    }
    plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
                    /* try { // try from 00481a40 to 00581a47 has its CatchHandler @ 00481c28 */
    if ((plVar36 != (long *)0x0) &&
       (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0)) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
      lVar19 = plVar36[2];
      plVar36[2] = lVar19 + -1;
      if (lVar19 + -1 == 0) {
                    /* try { // try from 00481a78 to 00581a7b has its CatchHandler @ 00481cb4 */
        (**(code **)(*plVar36 + 0x18))(plVar36);
      }
    }
                    /* try { // try from 00481a80 to 00581a93 has its CatchHandler @ 00481c24 */
                    /* try { // try from 00481a94 to 00581a9f has its CatchHandler @ 00481bb8 */
    if ((local_e8 != (long *)0x0) &&
       (iVar10 = (int)local_e8[1] + -1, *(int *)(local_e8 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*local_e8 + 8))();
    }
    if ((local_d0 != (shared_ptr *)0x0) &&
       (iVar10 = *(int *)(local_d0 + 8), *(int *)(local_d0 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*(long *)local_d0 + 8))();
    }
                    /* try { // try from 00481ac8 to 00581adb has its CatchHandler @ 00481cb4 */
    pGVar35 = *(GUIButton **)(this + 0x158);
    psVar12 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 00481adc to 00581cd7 has its CatchHandler @ 004819c0 */
    FUN_00666bb8(&local_d0,"ui_main_button_small",&local_f0);
    TextureLibrary::TextureForName(psVar12,SUB81(&local_d0,0));
    GUIButton::SetFrameTextureForState(pGVar35,0,&local_b8);
    plVar36 = (long *)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
    if ((plVar36 != (long *)0x0) &&
       (iVar10 = (int)plVar36[1] + -1, *(int *)(plVar36 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*plVar36 + 8))();
    }
    if (local_d0 + -0x18 != (shared_ptr *)puVar9) {
      psVar22 = local_d0 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *(int *)psVar22;
                    /* try { // try from 00482560 to 0058256f has its CatchHandler @ 00482574 */
        *(int *)psVar22 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *(int *)psVar22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar22,0x10);
          if (bVar5) {
            *(int *)psVar22 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 00482560 with catch @ 00482574 */
        operator_delete(local_d0 + -0x18);
                    /* catch() { ... } // from try @ 004824a4 with catch @ 00482578
                       catch() { ... } // from try @ 00482524 with catch @ 00482578 */
      }
    }
    pGVar35 = *(GUIButton **)(this + 0x158);
    psVar12 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_d0,"ui_main_button_small_pressed",&local_f0);
    TextureLibrary::TextureForName(psVar12,SUB81(&local_d0,0));
    GUIButton::SetFrameTextureForState(pGVar35,1,&local_b8);
    plVar36 = (long *)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
    if ((plVar36 != (long *)0x0) &&
       (iVar10 = (int)plVar36[1] + -1, *(int *)(plVar36 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*plVar36 + 8))();
    }
    if (local_d0 + -0x18 != (shared_ptr *)puVar9) {
      psVar22 = local_d0 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *(int *)psVar22;
        *(int *)psVar22 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *(int *)psVar22;
                    /* catch() { ... } // from try @ 0048229c with catch @ 00482478 */
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar22,0x10);
          if (bVar5) {
            *(int *)psVar22 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete(local_d0 + -0x18);
      }
    }
                    /* catch() { ... } // from try @ 00481a94 with catch @ 00481bb8 */
    pGVar35 = *(GUIButton **)(this + 0x158);
    FUN_00666bb8(&local_b8,&DAT_00690965,&local_e8);
    GUIButton::SetTitle(pGVar35,(string *)&local_b8);
    puVar14 = (undefined *)(CONCAT44(local_b8._4_4_,(undefined4)local_b8) + -0x18);
    if (puVar14 != puVar9) {
      piVar21 = (int *)(CONCAT44(local_b8._4_4_,(undefined4)local_b8) + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar21;
        *piVar21 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar5) {
            *piVar21 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
                    /* try { // try from 004824a4 to 005824d3 has its CatchHandler @ 00482578 */
        } while (cVar4 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete(puVar14);
      }
    }
    pGVar34 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x158));
    this_02 = (FontLibrary *)FontLibrary::sharedLibrary();
    FontLibrary::SmallDefaultFont(this_02);
    if (CONCAT44(local_b8._4_4_,(undefined4)local_b8) != *(long *)(pGVar34 + 0xf0)) {
      lVar19 = CONCAT44(uStack_ac,uStack_b0);
      if (lVar19 != 0) {
                    /* catch() { ... } // from try @ 00481a80 with catch @ 00481c24 */
        *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
      }
                    /* catch() { ... } // from try @ 00481a40 with catch @ 00481c28 */
      plVar36 = *(long **)(pGVar34 + 0xf8);
      *(long *)(pGVar34 + 0xf0) = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
      *(long *)(pGVar34 + 0xf8) = lVar19;
                    /* catch() { ... } // from try @ 00481a00 with catch @ 00481c40 */
      if ((plVar36 != (long *)0x0) &&
         (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0)) {
        (**(code **)(*plVar36 + 0x10))(plVar36);
        lVar19 = plVar36[2];
        plVar36[2] = lVar19 + -1;
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar36 + 0x18))(plVar36);
        }
      }
      GUILabel::UpdateText(pGVar34);
    }
    plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
    if ((plVar36 != (long *)0x0) &&
       (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0)) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
      lVar19 = plVar36[2];
      plVar36[2] = lVar19 + -1;
                    /* catch() { ... } // from try @ 004819ec with catch @ 00481cb0 */
      if (lVar19 + -1 == 0) {
                    /* catch() { ... } // from try @ 00481a34 with catch @ 00481cb4
                       catch() { ... } // from try @ 00481a78 with catch @ 00481cb4
                       catch() { ... } // from try @ 00481ac8 with catch @ 00481cb4 */
        (**(code **)(*plVar36 + 0x18))(plVar36);
      }
    }
    uVar26 = *(undefined8 *)(*(GUIView **)(this + 0x158) + 0x74);
    uStack_b0 = (undefined4)DAT_00690908;
    uStack_ac = (undefined4)((ulong)DAT_00690908 >> 0x20);
                    /* try { // try from 00481cd8 to 00581cdb has its CatchHandler @ 00481ce4 */
    local_b8._0_4_ = (undefined4)uVar26;
    local_b8._4_4_ = (undefined4)((ulong)uVar26 >> 0x20);
                    /* try { // try from 00481cdc to 00581ce7 has its CatchHandler @ 004819c0 */
    GUIView::SetFrame(*(GUIView **)(this + 0x158),(Rectangle *)&local_b8);
                    /* catch() { ... } // from try @ 00481cd8 with catch @ 00481ce4 */
                    /* catch() { ... } // from try @ 00481cfc with catch @ 00481ce8 */
    local_114 = 0xe5e5e5e5;
                    /* try { // try from 00481cf8 to 00581cfb has its CatchHandler @ 00481d0c */
    GUIButton::SetTintColor(*(GUIButton **)(this + 0x158),&local_114);
                    /* try { // try from 00481cfc to 00581d1f has its CatchHandler @ 00481ce8 */
    pcVar20 = *(code **)(*(long *)this + 0x60);
    local_b8._0_4_ = (undefined4)*(undefined8 *)(this + 0x158);
    local_b8._4_4_ = (undefined4)((ulong)*(undefined8 *)(this + 0x158) >> 0x20);
                    /* catch() { ... } // from try @ 00481cf8 with catch @ 00481d0c */
    lVar19 = *(long *)(this + 0x160);
    uStack_b0 = (undefined4)lVar19;
    uStack_ac = (undefined4)((ulong)lVar19 >> 0x20);
    if (lVar19 != 0) {
      *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
    }
    (*pcVar20)(this,&local_b8);
    plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
    if ((plVar36 != (long *)0x0) &&
       (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0)) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
      lVar19 = plVar36[2];
      plVar36[2] = lVar19 + -1;
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar36 + 0x18))(plVar36);
      }
    }
    psVar12 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_b8,"ui_google_controller",&local_f0);
    TextureLibrary::TextureForName(psVar12,SUB81(&local_b8,0));
    puVar14 = (undefined *)(CONCAT44(local_b8._4_4_,(undefined4)local_b8) + -0x18);
    if (puVar14 != puVar9) {
      piVar21 = (int *)(CONCAT44(local_b8._4_4_,(undefined4)local_b8) + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar21;
        *piVar21 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar5) {
            *piVar21 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete(puVar14);
      }
    }
    psVar12 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_b8,"ui_google_controller",&local_f8);
    piVar17 = (intrusive_ptr *)0x1;
    TextureLibrary::TextureForName(psVar12,SUB81(&local_b8,0));
    puVar14 = (undefined *)(CONCAT44(local_b8._4_4_,(undefined4)local_b8) + -0x18);
    if (puVar14 != puVar9) {
      piVar21 = (int *)(CONCAT44(local_b8._4_4_,(undefined4)local_b8) + -8);
                    /* try { // try from 004824fc to 005824ff has its CatchHandler @ 0048253c */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar21;
        *piVar21 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar5) {
            *piVar21 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete(puVar14);
      }
    }
    local_f8 = (long *)0x0;
    local_f0 = (long *)0x0;
                    /* catch() { ... } // from try @ 00481e2c with catch @ 00481dfc */
    GameInterfaceBuilder::PlainButton
              ((GameInterfaceBuilder *)&local_f0,(intrusive_ptr *)&local_f8,piVar17);
    lVar19 = CONCAT44(uStack_ac,uStack_b0);
    if (lVar19 != 0) {
                    /* try { // try from 00481e18 to 00581e2b has its CatchHandler @ 00481e50 */
      *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
    }
    plVar36 = *(long **)(this + 0x150);
    *(ulong *)(this + 0x148) = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
    *(long *)(this + 0x150) = lVar19;
                    /* try { // try from 00481e2c to 00581e53 has its CatchHandler @ 00481dfc */
    if ((plVar36 != (long *)0x0) &&
       (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0)) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
      lVar19 = plVar36[2];
                    /* catch() { ... } // from try @ 00481e18 with catch @ 00481e50 */
      plVar36[2] = lVar19 + -1;
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar36 + 0x18))(plVar36);
      }
    }
    plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
    if ((plVar36 != (long *)0x0) &&
       (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0)) {
      (**(code **)(*plVar36 + 0x10))(plVar36);
      lVar19 = plVar36[2];
      plVar36[2] = lVar19 + -1;
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar36 + 0x18))(plVar36);
      }
    }
    if ((local_f8 != (long *)0x0) &&
       (iVar10 = (int)local_f8[1] + -1, *(int *)(local_f8 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*local_f8 + 8))();
    }
    if ((local_f0 != (long *)0x0) &&
       (iVar10 = (int)local_f0[1] + -1, *(int *)(local_f0 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*local_f0 + 8))();
    }
    pGVar35 = *(GUIButton **)(this + 0x148);
    psVar12 = (string *)TextureLibrary::sharedLibrary();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00481f74 with catch @ 00481f14
                       catch(type#1 @ 00000000) { ... } // from try @ 00481fc0 with catch @ 00481f14
                        */
    FUN_00666bb8(&local_f0,"ui_main_button_small",&local_100);
    TextureLibrary::TextureForName(psVar12,SUB81(&local_f0,0));
    GUIButton::SetFrameTextureForState(pGVar35,0,&local_b8);
    plVar36 = (long *)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
                    /* try { // try from 00481f4c to 00581f4f has its CatchHandler @ 00481f8c */
    if ((plVar36 != (long *)0x0) &&
       (iVar10 = (int)plVar36[1] + -1, *(int *)(plVar36 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*plVar36 + 8))();
    }
                    /* try { // try from 00481f70 to 00581f73 has its CatchHandler @ 00481f84 */
    if (local_f0 + -3 != (long *)puVar9) {
      plVar36 = local_f0 + -1;
                    /* try { // try from 00482520 to 00582523 has its CatchHandler @ 00482534 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = (int)*plVar36;
        *(int *)plVar36 = iVar10 + -1;
      }
      else {
        do {
                    /* try { // try from 00482524 to 0058252b has its CatchHandler @ 00482578 */
          iVar10 = (int)*plVar36;
                    /* try { // try from 0048252c to 0058255f has its CatchHandler @ 00482208 */
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar5) {
            *(int *)plVar36 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete(local_f0 + -3);
      }
    }
                    /* try { // try from 00481f74 to 00581faf has its CatchHandler @ 00481f14 */
    pGVar35 = *(GUIButton **)(this + 0x148);
    psVar12 = (string *)TextureLibrary::sharedLibrary();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00481f70 with catch @ 00481f84
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00481f4c with catch @ 00481f8c
                        */
    FUN_00666bb8(&local_f0,"ui_main_button_small_pressed",&local_100);
    TextureLibrary::TextureForName(psVar12,SUB81(&local_f0,0));
                    /* try { // try from 00481fb0 to 00581fbf has its CatchHandler @ 00481fc8 */
    GUIButton::SetFrameTextureForState(pGVar35,1,&local_b8);
    plVar36 = (long *)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
                    /* try { // try from 00481fc0 to 00581fcb has its CatchHandler @ 00481f14 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00481fb0 with catch @ 00481fc8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00482088 with catch @ 00481fcc
                        */
    if ((plVar36 != (long *)0x0) &&
       (iVar10 = (int)plVar36[1] + -1, *(int *)(plVar36 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*plVar36 + 8))();
    }
    if (local_f0 + -3 != (long *)puVar9) {
                    /* catch() { ... } // from try @ 004824fc with catch @ 0048253c */
      plVar36 = local_f0 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = (int)*plVar36;
        *(int *)plVar36 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = (int)*plVar36;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar5) {
            *(int *)plVar36 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete(local_f0 + -3);
      }
    }
    GUIButton::SetImage(*(GUIButton **)(this + 0x148),(intrusive_ptr *)&local_d0);
                    /* try { // try from 00482004 to 00582007 has its CatchHandler @ 00482054 */
    uVar26 = *(undefined8 *)(*(GUIView **)(this + 0x148) + 0x74);
    uStack_b0 = 0x42200000;
    uStack_ac = 0x42200000;
    local_b8._0_4_ = (undefined4)uVar26;
    local_b8._4_4_ = (undefined4)((ulong)uVar26 >> 0x20);
    GUIView::SetFrame(*(GUIView **)(this + 0x148),(Rectangle *)&local_b8);
    local_118 = 0xe5e5e5e5;
    GUIButton::SetTintColor(*(GUIButton **)(this + 0x148),&local_118);
                    /* try { // try from 00482028 to 0058202b has its CatchHandler @ 00482044 */
                    /* try { // try from 0048202c to 00582033 has its CatchHandler @ 0048204c */
    pcVar20 = *(code **)(*(long *)this + 0x60);
    local_b8._0_4_ = (undefined4)*(undefined8 *)(this + 0x148);
    local_b8._4_4_ = (undefined4)((ulong)*(undefined8 *)(this + 0x148) >> 0x20);
    lVar19 = *(long *)(this + 0x150);
    uStack_b0 = (undefined4)lVar19;
    uStack_ac = (undefined4)((ulong)lVar19 >> 0x20);
    if (lVar19 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00482028 with catch @ 00482044
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0048202c with catch @ 0048204c
                        */
      *(long *)(lVar19 + 8) = *(long *)(lVar19 + 8) + 1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00482004 with catch @ 00482054
                        */
    (*pcVar20)(this,&local_b8);
    plVar36 = (long *)CONCAT44(uStack_ac,uStack_b0);
    if ((plVar36 != (long *)0x0) &&
       (lVar19 = plVar36[1], plVar36[1] = lVar19 + -1, lVar19 + -1 == 0)) {
                    /* try { // try from 00482078 to 00582087 has its CatchHandler @ 00482098 */
      (**(code **)(*plVar36 + 0x10))(plVar36);
      lVar19 = plVar36[2];
                    /* try { // try from 00482088 to 0058209b has its CatchHandler @ 00481fcc */
      plVar36[2] = lVar19 + -1;
      if (lVar19 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00482078 with catch @ 00482098
                        */
                    /* try { // try from 0048209c to 005820b7 has its CatchHandler @ 0048209c
                       catch() { ... } // from try @ 0048209c with catch @ 0048209c
                       catch() { ... } // from try @ 004820bc with catch @ 0048209c */
        (**(code **)(*plVar36 + 0x18))(plVar36);
      }
    }
                    /* try { // try from 004820b8 to 005820bb has its CatchHandler @ 004820fc */
    if ((local_e8 != (long *)0x0) &&
       (iVar10 = (int)local_e8[1] + -1, *(int *)(local_e8 + 1) = iVar10, iVar10 == 0)) {
                    /* try { // try from 004820bc to 0058210f has its CatchHandler @ 0048209c */
      (**(code **)(*local_e8 + 8))();
    }
    if ((local_d0 != (shared_ptr *)0x0) &&
       (iVar10 = *(int *)(local_d0 + 8), *(int *)(local_d0 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*(long *)local_d0 + 8))();
    }
  }
  if ((undefined *)((long)local_e0 + -0x18) != puVar9) {
    piVar21 = (int *)((long)local_e0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar21;
      *piVar21 = iVar10 + -1;
    }
    else {
      do {
                    /* try { // try from 0048230c to 005824a3 has its CatchHandler @ 00482208 */
        iVar10 = *piVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar5) {
          *piVar21 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)((long)local_e0 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 004820b8 with catch @ 004820fc */
  if (*(long *)(lVar6 + 0x28) != lVar18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


