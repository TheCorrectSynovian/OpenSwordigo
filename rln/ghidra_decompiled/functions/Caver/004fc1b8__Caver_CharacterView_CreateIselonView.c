/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004fc1b8
 * Function: Caver::CharacterView::CreateIselonView
 * Signature: undefined __thiscall CreateIselonView(CharacterView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterView::CreateIselonView() */

void __thiscall Caver::CharacterView::CreateIselonView(CharacterView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  GUIFrameView *pGVar10;
  string *psVar11;
  GUIView *pGVar12;
  MenuItemSlot *pMVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  size_t *psVar20;
  ulong uVar21;
  void *local_f8;
  undefined8 local_f0;
  long *local_e8;
  MenuItemSlot *local_e0;
  long *local_d8;
  GUIFrameView *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  undefined1 auStack_b0 [8];
  GUIView *local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  pGVar10 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar10);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_a8,pGVar10);
  pGVar12 = *(GUIView **)(this + 0x1d8);
  plVar18 = *(long **)(this + 0x1e0);
  *(GUIView **)(this + 0x1d8) = local_a8;
  *(long **)(this + 0x1e0) = local_a0;
  local_a8 = pGVar12;
  local_a0 = plVar18;
  if ((plVar18 != (long *)0x0) && (lVar15 = plVar18[1], plVar18[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    lVar15 = plVar18[2];
    plVar18[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  pGVar10 = *(GUIFrameView **)(this + 0x1d8);
  psVar11 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_d0,"ui_menu_stripe",&local_f0);
  TextureLibrary::TextureForName(psVar11,SUB81(&local_d0,0));
  GUIFrameView::SetFrameTexture(pGVar10,(intrusive_ptr *)&local_a8,true);
  if ((local_a8 != (GUIView *)0x0) &&
     (iVar9 = *(int *)(local_a8 + 8), *(int *)(local_a8 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
    (**(code **)(*(long *)local_a8 + 8))();
  }
  puVar6 = PTR_DAT_007e5de8;
  if (local_d0 + -0x18 != (GUIFrameView *)PTR_DAT_007e5de8) {
    pGVar10 = local_d0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *(int *)pGVar10;
      *(int *)pGVar10 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pGVar10;
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
        if (bVar8) {
          *(int *)pGVar10 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_d0 + -0x18);
    }
  }
  pGVar12 = *(GUIView **)(this + 0x1d8);
  plVar18 = *(long **)(pGVar12 + 0x100);
  if (plVar18 != (long *)0x0) {
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
  }
  local_a8 = *(GUIView **)(pGVar12 + 0x74);
  local_a0 = *(long **)((long)plVar18 + 0x54);
  GUIView::SetFrame(pGVar12,(Rectangle *)&local_a8);
  iVar9 = (int)plVar18[1] + -1;
  *(int *)(plVar18 + 1) = iVar9;
  if (iVar9 == 0) {
    (**(code **)(*plVar18 + 8))(plVar18);
  }
  local_a8 = *(GUIView **)(this + 0x1d8);
  pcVar16 = *(code **)(*(long *)this + 0x60);
  local_a0 = *(long **)(this + 0x1e0);
  if (local_a0 != (long *)0x0) {
    local_a0[1] = local_a0[1] + 1;
  }
  (*pcVar16)(this,&local_a8);
  plVar18 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar15 = local_a0[1], local_a0[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar15 = plVar18[2];
    plVar18[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
  psVar11 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a8,"ui_iselon_slot",&local_e0);
  TextureLibrary::TextureForName(psVar11,SUB81(&local_a8,0));
  if (local_a8 + -0x18 != (GUIView *)puVar6) {
    pGVar12 = local_a8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *(int *)pGVar12;
      *(int *)pGVar12 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pGVar12;
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pGVar12,0x10);
        if (bVar8) {
          *(int *)pGVar12 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_a8 + -0x18);
    }
  }
  psVar11 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a8,"ui_iselon_completed",&local_e0);
  TextureLibrary::TextureForName(psVar11,SUB81(&local_a8,0));
  if (local_a8 + -0x18 != (GUIView *)puVar6) {
    pGVar12 = local_a8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *(int *)pGVar12;
      *(int *)pGVar12 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pGVar12;
                    /* try { // try from 004fc5f0 to 005fc5f3 has its CatchHandler @ 004fc7f4 */
                    /* try { // try from 004fc5f4 to 005fc6df has its CatchHandler @ 004fc4c0 */
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pGVar12,0x10);
        if (bVar8) {
          *(int *)pGVar12 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_a8 + -0x18);
    }
  }
  pGVar10 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar10);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_d0,pGVar10);
  GUIFrameView::SetFrameTexture(local_d0,(intrusive_ptr *)&local_b8,true);
  local_a0 = *(long **)((long)local_b8 + 0x54);
  local_a8 = DAT_00693980;
  GUIView::SetFrame((GUIView *)local_d0,(Rectangle *)&local_a8);
  plVar18 = *(long **)(this + 0x1d8);
  pcVar16 = *(code **)(*plVar18 + 0x60);
  local_a8 = (GUIView *)local_d0;
  local_a0 = local_c8;
  if (local_c8 != (long *)0x0) {
    local_c8[1] = local_c8[1] + 1;
  }
  (*pcVar16)(plVar18,&local_a8);
  plVar18 = local_a0;
                    /* try { // try from 004fc4c0 to 005fc50b has its CatchHandler @ 004fc4c0
                       catch() { ... } // from try @ 004fc4c0 with catch @ 004fc4c0
                       catch() { ... } // from try @ 004fc528 with catch @ 004fc4c0
                       catch() { ... } // from try @ 004fc5f4 with catch @ 004fc4c0
                       catch() { ... } // from try @ 004fc6e4 with catch @ 004fc4c0
                       catch() { ... } // from try @ 004fc78c with catch @ 004fc4c0
                       catch() { ... } // from try @ 004fc814 with catch @ 004fc4c0 */
  if ((local_a0 != (long *)0x0) &&
     (lVar15 = local_a0[1], local_a0[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*local_a0 + 0x10))(local_a0);
    lVar15 = plVar18[2];
    plVar18[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
  }
                    /* try { // try from 004fc50c to 005fc527 has its CatchHandler @ 004fc808 */
  FUN_00666bb8(&local_a8,"iselon_shard_1",&local_e0);
                    /* try { // try from 004fc528 to 005fc5ef has its CatchHandler @ 004fc4c0 */
  FUN_00666bb8(&local_a0,"iselon_shard_2",&local_f0);
  FUN_00666bb8(&local_98,"iselon_shard_3",&local_f8);
  FUN_00666bb8(&local_90,"iselon_shard_4",auStack_b0);
  puVar5 = PTR_pthread_create_007e4e78;
  fVar4 = DAT_00688638;
  uVar21 = 0;
  do {
    pMVar13 = operator_new(0x280);
    MenuItemSlot::MenuItemSlot(pMVar13);
    boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>
              ((shared_ptr<Caver::MenuItemSlot> *)&local_e0,pMVar13);
                    /* try { // try from 004fc6e0 to 005fc6e3 has its CatchHandler @ 004fc7f0 */
                    /* try { // try from 004fc6e4 to 005fc787 has its CatchHandler @ 004fc4c0 */
    MenuItemSlot::Init(local_e0,0.75);
    local_e0[0x120] = (MenuItemSlot)0x0;
    uVar14 = CharacterState::HasItemWithName
                       ((CharacterState *)(*(long *)(this + 0x108) + 0x10),
                        (string *)(&local_a8 + uVar21));
    pMVar13 = local_e0;
    if ((uVar14 & 1) != 0) {
      GameData::ItemForName((string *)**(undefined8 **)(this + 0x108));
      MenuItemSlot::SetItem(pMVar13,(shared_ptr *)&local_f0);
      plVar18 = local_e8;
      if ((local_e8 != (long *)0x0) &&
         (lVar15 = local_e8[1], local_e8[1] = lVar15 + -1, lVar15 + -1 == 0)) {
        (**(code **)(*local_e8 + 0x10))(local_e8);
        lVar15 = plVar18[2];
        plVar18[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
      lVar15 = *(long *)(local_e0 + 0x100);
      plVar18 = *(long **)(local_e0 + 0x108);
      if (plVar18 != (long *)0x0) {
                    /* try { // try from 004fc788 to 005fc78b has its CatchHandler @ 004fc7ec */
        plVar18[1] = plVar18[1] + 1;
      }
                    /* try { // try from 004fc78c to 005fc80b has its CatchHandler @ 004fc4c0 */
      if (lVar15 == 0) {
        bVar8 = false;
      }
      else {
        plVar19 = *(long **)(local_e0 + 0x108);
        if (plVar19 != (long *)0x0) {
          plVar19[1] = plVar19[1] + 1;
        }
        FUN_0066a528(&local_f0,lVar15 + 8);
        FUN_0066a528(&local_f8,*(long *)(this + 0x108) + 0x1a0);
        pvVar7 = local_f8;
        psVar20 = (size_t *)((long)local_f8 + -0x18);
        if (*(size_t *)(local_f0 + -0x18) == *psVar20) {
          iVar9 = memcmp(local_f0,local_f8,*(size_t *)(local_f0 + -0x18));
          bVar8 = iVar9 == 0;
                    /* catch() { ... } // from try @ 004fc788 with catch @ 004fc7ec */
                    /* catch() { ... } // from try @ 004fc6e0 with catch @ 004fc7f0 */
                    /* catch() { ... } // from try @ 004fc5f0 with catch @ 004fc7f4 */
        }
        else {
                    /* catch() { ... } // from try @ 004fc50c with catch @ 004fc808 */
          bVar8 = false;
                    /* try { // try from 004fc80c to 005fc813 has its CatchHandler @ 004fc81c */
        }
        if (psVar20 != (size_t *)puVar6) {
          piVar17 = (int *)((long)pvVar7 + -8);
          if (puVar5 == (undefined *)0x0) {
            iVar9 = *piVar17;
            *piVar17 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = *piVar17;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar2) {
                *piVar17 = iVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(psVar20);
          }
        }
                    /* try { // try from 004fc814 to 005fc81f has its CatchHandler @ 004fc4c0 */
                    /* catch() { ... } // from try @ 004fc80c with catch @ 004fc81c */
        if (local_f0 + -0x18 != (MenuItemSlot *)puVar6) {
          pMVar13 = local_f0 + -8;
          if (puVar5 == (undefined *)0x0) {
            iVar9 = *(int *)pMVar13;
            *(int *)pMVar13 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = *(int *)pMVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pMVar13,0x10);
              if (bVar2) {
                *(int *)pMVar13 = iVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(local_f0 + -0x18);
          }
        }
        if ((plVar19 != (long *)0x0) &&
           (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0)) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          lVar15 = plVar19[2];
          plVar19[2] = lVar15 + -1;
          if (lVar15 + -1 == 0) {
            (**(code **)(*plVar19 + 0x18))(plVar19);
          }
        }
      }
      if ((plVar18 != (long *)0x0) &&
         (lVar15 = plVar18[1], plVar18[1] = lVar15 + -1, lVar15 + -1 == 0)) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        lVar15 = plVar18[2];
        plVar18[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
      if (bVar8) {
        local_e0[0x278] = (MenuItemSlot)0x1;
        lVar15 = *(long *)(this + 0x108);
        FUN_00666bb8(&local_f0,&DAT_0068fbeb,auStack_b0);
        FUN_0066a6a8(lVar15 + 0x1a0,&local_f0);
        if (local_f0 + -0x18 != (MenuItemSlot *)puVar6) {
          pMVar13 = local_f0 + -8;
          if (puVar5 == (undefined *)0x0) {
            iVar9 = *(int *)pMVar13;
            *(int *)pMVar13 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = *(int *)pMVar13;
              cVar1 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pMVar13,0x10);
              if (bVar8) {
                *(int *)pMVar13 = iVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(local_f0 + -0x18);
          }
        }
      }
    }
                    /* catch() { ... } // from try @ 004fc928 with catch @ 004fc8f8 */
    local_e8 = *(long **)(local_e0 + 0x7c);
                    /* try { // try from 004fc914 to 005fc927 has its CatchHandler @ 004fc94c */
                    /* try { // try from 004fc928 to 005fc94f has its CatchHandler @ 004fc8f8 */
    local_f0 = (MenuItemSlot *)
               CONCAT44((int)((*(float *)(*(long *)(this + 0x1d8) + 0x88) +
                              *(float *)(*(long *)(this + 0x1d8) + 0x90) * 0.5) -
                             (*(float *)(local_e0 + 0x78) + *(float *)(local_e0 + 0x80) * 0.5)),
                        (*(float *)(local_e0 + 0x7c) + 5.0) * (float)(int)uVar21 + fVar4);
    GUIView::SetFrame((GUIView *)local_e0,(Rectangle *)&local_f0);
    plVar18 = *(long **)(this + 0x1d8);
                    /* catch() { ... } // from try @ 004fc914 with catch @ 004fc94c */
    pcVar16 = *(code **)(*plVar18 + 0x60);
    local_f0 = local_e0;
    local_e8 = local_d8;
    if (local_d8 != (long *)0x0) {
      local_d8[1] = local_d8[1] + 1;
    }
    (*pcVar16)(plVar18,&local_f0);
    plVar18 = local_e8;
    if ((local_e8 != (long *)0x0) &&
       (lVar15 = local_e8[1], local_e8[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*local_e8 + 0x10))(local_e8);
      lVar15 = plVar18[2];
      plVar18[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    plVar18 = local_d8;
    if ((local_d8 != (long *)0x0) &&
       (lVar15 = local_d8[1], local_d8[1] = lVar15 + -1, lVar15 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004fcbb0 with catch @ 004fc9d4 */
      (**(code **)(*local_d8 + 0x10))(local_d8);
      lVar15 = plVar18[2];
      plVar18[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    bVar8 = uVar21 < 3;
    uVar21 = uVar21 + 1;
  } while (bVar8);
  lVar15 = *(long *)(this + 0x108);
  FUN_00666bb8(&local_e0,"legendsword",&local_f8);
  uVar21 = CharacterState::HasItemWithName((CharacterState *)(lVar15 + 0x10),(string *)&local_e0);
  if (local_e0 + -0x18 != (MenuItemSlot *)puVar6) {
    pMVar13 = local_e0 + -8;
    if (puVar5 == (undefined *)0x0) {
      iVar9 = *(int *)pMVar13;
      *(int *)pMVar13 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pMVar13;
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pMVar13,0x10);
        if (bVar8) {
          *(int *)pMVar13 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_e0 + -0x18);
    }
  }
  if ((uVar21 & 1) != 0) {
    pGVar10 = operator_new(0x110);
                    /* try { // try from 004fca58 to 005fca5b has its CatchHandler @ 004fca74 */
    GUIFrameView::GUIFrameView(pGVar10);
    boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
              ((shared_ptr<Caver::GUIFrameView> *)&local_e0,pGVar10);
                    /* catch() { ... } // from try @ 004fca58 with catch @ 004fca74 */
    GUIFrameView::SetFrameTexture((GUIFrameView *)local_e0,(intrusive_ptr *)&local_c0,true);
    GUIView::SetFrame((GUIView *)local_e0,(Rectangle *)(local_d0 + 0x74));
    plVar18 = *(long **)(this + 0x1d8);
    pcVar16 = *(code **)(*plVar18 + 0x60);
                    /* try { // try from 004fca9c to 005fca9f has its CatchHandler @ 004fcbc4 */
    local_f0 = local_e0;
    local_e8 = local_d8;
    if (local_d8 != (long *)0x0) {
      local_d8[1] = local_d8[1] + 1;
    }
    (*pcVar16)(plVar18,&local_f0);
    plVar18 = local_e8;
    if ((local_e8 != (long *)0x0) &&
       (lVar15 = local_e8[1], local_e8[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*local_e8 + 0x10))(local_e8);
      lVar15 = plVar18[2];
      plVar18[2] = lVar15 + -1;
                    /* try { // try from 004fcaec to 005fcaf3 has its CatchHandler @ 004fcbc0 */
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    *(GUIView *)(local_d0 + 0xe4) = (GUIView)0x1;
    if ((local_d8 != (long *)0x0) &&
       (lVar15 = local_d8[1], local_d8[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
                    /* try { // try from 004fcb30 to 005fcb33 has its CatchHandler @ 004fcbbc */
      lVar15 = local_d8[2];
      local_d8[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*local_d8 + 0x18))(local_d8);
      }
    }
  }
  if ((undefined *)(local_90 + -0x18) != puVar6) {
                    /* try { // try from 004fccdc to 005fccdf has its CatchHandler @ 004fce64 */
    piVar17 = (int *)(local_90 + -8);
                    /* try { // try from 004fcce0 to 005fcd93 has its CatchHandler @ 004fcbcc */
    if (puVar5 == (undefined *)0x0) {
      iVar9 = *piVar17;
      *piVar17 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar17;
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar8) {
          *piVar17 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 004fcd94 to 005fcd97 has its CatchHandler @ 004fce60 */
    if (iVar9 < 1) {
                    /* try { // try from 004fcd98 to 005fce4b has its CatchHandler @ 004fcbcc */
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  if ((undefined *)(local_98 + -0x18) != puVar6) {
    piVar17 = (int *)(local_98 + -8);
    if (puVar5 == (undefined *)0x0) {
      iVar9 = *piVar17;
      *piVar17 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar17;
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar8) {
          *piVar17 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_98 + -0x18));
    }
  }
                    /* try { // try from 004fcb7c to 005fcb83 has its CatchHandler @ 004fcbc8 */
  if (local_a0 + -3 != (long *)puVar6) {
    plVar18 = local_a0 + -1;
    if (puVar5 == (undefined *)0x0) {
      iVar9 = (int)*plVar18;
      *(int *)plVar18 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar18;
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar8) {
          *(int *)plVar18 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_a0 + -3);
    }
  }
  if (local_a8 + -0x18 != (GUIView *)puVar6) {
    pGVar12 = local_a8 + -8;
    if (puVar5 == (undefined *)0x0) {
      iVar9 = *(int *)pGVar12;
      *(int *)pGVar12 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pGVar12;
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pGVar12,0x10);
        if (bVar8) {
          *(int *)pGVar12 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_a8 + -0x18);
    }
  }
  if ((local_c8 != (long *)0x0) &&
     (lVar15 = local_c8[1], local_c8[1] = lVar15 + -1, lVar15 + -1 == 0)) {
                    /* try { // try from 004fcba8 to 005fcbaf has its CatchHandler @ 004fcbb8 */
                    /* try { // try from 004fcbb0 to 005fcbcb has its CatchHandler @ 004fc9d4 */
    (**(code **)(*local_c8 + 0x10))(local_c8);
                    /* catch() { ... } // from try @ 004fcba8 with catch @ 004fcbb8 */
    lVar15 = local_c8[2];
                    /* catch() { ... } // from try @ 004fcb30 with catch @ 004fcbbc */
                    /* catch() { ... } // from try @ 004fcaec with catch @ 004fcbc0 */
    local_c8[2] = lVar15 + -1;
                    /* catch() { ... } // from try @ 004fca9c with catch @ 004fcbc4 */
    if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 004fcb7c with catch @ 004fcbc8 */
                    /* try { // try from 004fcbcc to 005fcc1b has its CatchHandler @ 004fcbcc
                       catch() { ... } // from try @ 004fcbcc with catch @ 004fcbcc
                       catch() { ... } // from try @ 004fcc38 with catch @ 004fcbcc
                       catch() { ... } // from try @ 004fcce0 with catch @ 004fcbcc
                       catch() { ... } // from try @ 004fcd98 with catch @ 004fcbcc
                       catch() { ... } // from try @ 004fce54 with catch @ 004fcbcc */
      (**(code **)(*local_c8 + 0x18))(local_c8);
    }
  }
  if ((local_c0 != (long *)0x0) &&
     (iVar9 = (int)local_c0[1] + -1, *(int *)(local_c0 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_c0 + 8))();
  }
  if ((local_b8 != (long *)0x0) &&
     (iVar9 = (int)local_b8[1] + -1, *(int *)(local_b8 + 1) = iVar9, iVar9 == 0)) {
                    /* try { // try from 004fcc1c to 005fcc37 has its CatchHandler @ 004fce48 */
    (**(code **)(*local_b8 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004fcc38 to 005fccdb has its CatchHandler @ 004fcbcc */
  return;
}


