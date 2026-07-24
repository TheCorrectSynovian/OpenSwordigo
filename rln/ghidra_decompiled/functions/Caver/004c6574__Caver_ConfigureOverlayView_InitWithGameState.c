/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c6574
 * Function: Caver::ConfigureOverlayView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(ConfigureOverlayView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall
Caver::ConfigureOverlayView::InitWithGameState(ConfigureOverlayView *this,shared_ptr *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  undefined *puVar10;
  int iVar11;
  GameOverlayView *pGVar12;
  DraggableOverlayItem *this_00;
  GUILabel *pGVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  code *pcVar18;
  int iVar19;
  ConsumableItemView *this_01;
  string *psVar20;
  GUILabel *local_d0;
  long *local_c8;
  undefined *local_c0;
  undefined4 local_b8 [2];
  undefined4 local_b0 [2];
  long local_a8;
  long *plStack_a0;
  GUILabel *local_98;
  long *local_90;
  GUILabel *local_88;
  long *local_80;
  long local_78;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004c6544 with catch @ 004c6574
                        */
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  pGVar12 = operator_new(0x298);
  GameOverlayView::GameOverlayView(pGVar12);
  boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>
            ((shared_ptr<Caver::GameOverlayView> *)&local_88,pGVar12);
  pGVar13 = *(GUILabel **)(this + 0x128);
  plVar15 = *(long **)(this + 0x130);
  *(GUILabel **)(this + 0x128) = local_88;
  *(long **)(this + 0x130) = local_80;
  local_88 = pGVar13;
  local_80 = plVar15;
  if ((plVar15 != (long *)0x0) && (lVar14 = plVar15[1], plVar15[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar14 = plVar15[2];
    plVar15[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pGVar12 = *(GameOverlayView **)(this + 0x128);
  if (*(int *)(pGVar12 + 0x70) != 0x12) {
    plVar15 = *(long **)(pGVar12 + 0x58);
    *(undefined4 *)(pGVar12 + 0x70) = 0x12;
    if ((plVar15 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar15 + 0x8c))) {
      (**(code **)(*plVar15 + 0x58))(plVar15);
      pGVar12 = *(GameOverlayView **)(this + 0x128);
    }
  }
  pGVar12[0xe5] = (GameOverlayView)0x0;
  GameOverlayView::InitWithGameState(pGVar12,param_1);
  lVar14 = *(long *)(*(long *)(*(long *)(this + 0x128) + 0x1d8) + 0x1e0);
  plVar15 = *(long **)(*(long *)(*(long *)(this + 0x128) + 0x1d8) + 0x1e8);
  if ((plVar15 != (long *)0x0) && (plVar15[1] == 0)) {
                    /* try { // try from 004c6690 to 005c6707 has its CatchHandler @ 004c6690
                       catch() { ... } // from try @ 004c6690 with catch @ 004c6690
                       catch() { ... } // from try @ 004c67bc with catch @ 004c6690
                       catch() { ... } // from try @ 004c69c4 with catch @ 004c6690
                       catch() { ... } // from try @ 004c6ce4 with catch @ 004c6690
                       catch() { ... } // from try @ 004c6e70 with catch @ 004c6690
                       catch() { ... } // from try @ 004c6f28 with catch @ 004c6690 */
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar16 = plVar15[2];
    plVar15[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  if (lVar14 == 0) {
    this_01 = *(ConsumableItemView **)(*(long *)(this + 0x128) + 0x1d8);
    psVar20 = (string *)**(undefined8 **)param_1;
    FUN_00666bb8(&local_98,"healingpotion",&local_c0);
    GameData::ItemForName(psVar20);
    ConsumableItemView::SetItem(this_01,(shared_ptr *)&local_88);
    plVar15 = local_80;
                    /* try { // try from 004c6708 to 005c670b has its CatchHandler @ 004c6e78 */
    if ((local_80 != (long *)0x0) &&
       (lVar14 = local_80[1], local_80[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*local_80 + 0x10))(local_80);
      lVar14 = plVar15[2];
      plVar15[2] = lVar14 + -1;
                    /* try { // try from 004c6728 to 005c673b has its CatchHandler @ 004c6e74 */
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
                    /* try { // try from 004c673c to 005c674f has its CatchHandler @ 004c6e8c */
                    /* try { // try from 004c6750 to 005c675b has its CatchHandler @ 004c6e44 */
    if (local_98 + -0x18 != (GUILabel *)PTR_DAT_007e5de8) {
      pGVar13 = local_98 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *(int *)pGVar13;
                    /* try { // try from 004c70c8 to 005c70cb has its CatchHandler @ 004c7184 */
        *(int *)pGVar13 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *(int *)pGVar13;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
          if (bVar5) {
            *(int *)pGVar13 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete(local_98 + -0x18);
      }
    }
  }
  GameOverlayView::Layout();
  if (local_80 != (long *)0x0) {
    local_80[1] = local_80[1] + 1;
  }
  plVar15 = *(long **)(this + 0x140);
  *(GUILabel **)(this + 0x138) = local_88;
  *(long **)(this + 0x140) = local_80;
                    /* try { // try from 004c677c to 005c677f has its CatchHandler @ 004c6e8c */
  if ((plVar15 != (long *)0x0) && (lVar14 = plVar15[1], plVar15[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar14 = plVar15[2];
    plVar15[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
                    /* try { // try from 004c67b0 to 005c67bb has its CatchHandler @ 004c6efc */
                    /* try { // try from 004c67bc to 005c6893 has its CatchHandler @ 004c6690 */
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  plVar15 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar14 = local_80[1], local_80[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    lVar14 = plVar15[2];
    plVar15[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  puVar10 = PTR_DAT_007e5de8;
  fVar9 = DAT_00683734;
  uVar8 = DAT_00683728;
  if (0 < (int)((ulong)(*(long *)(*(long *)(this + 0x138) + 0x10) -
                       *(long *)(*(long *)(this + 0x138) + 8)) >> 4)) {
    lVar14 = 0;
    do {
      this_00 = operator_new(0x270);
                    /* try { // try from 004c68e8 to 005c68ef has its CatchHandler @ 004c6dd8 */
      DraggableOverlayItem::DraggableOverlayItem(this_00);
                    /* try { // try from 004c68f0 to 005c6903 has its CatchHandler @ 004c6dd4 */
      boost::shared_ptr<Caver::DraggableOverlayItem>::shared_ptr<Caver::DraggableOverlayItem>
                ((shared_ptr<Caver::DraggableOverlayItem> *)&local_88,this_00);
      pGVar13 = local_88;
      *(ConfigureOverlayView **)(local_88 + 0xf0) = this + 0xf0;
                    /* try { // try from 004c6904 to 005c6913 has its CatchHandler @ 004c6e0c */
      puVar1 = (undefined8 *)(*(long *)(*(long *)(this + 0x138) + 8) + lVar14 * 0x10);
      uVar2 = *puVar1;
      plVar15 = (long *)puVar1[1];
      if (plVar15 != (long *)0x0) {
                    /* try { // try from 004c6914 to 005c694b has its CatchHandler @ 004c6ddc */
        plVar15[1] = plVar15[1] + 1;
      }
      FUN_0066a528(&local_98,uVar2);
      FUN_0066a6a8(pGVar13 + 600,&local_98);
      if (local_98 + -0x18 != (GUILabel *)puVar10) {
        pGVar13 = local_98 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar11 = *(int *)pGVar13;
          *(int *)pGVar13 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *(int *)pGVar13;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
            if (bVar5) {
              *(int *)pGVar13 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete(local_98 + -0x18);
        }
      }
      if ((plVar15 != (long *)0x0) &&
         (lVar16 = plVar15[1], plVar15[1] = lVar16 + -1, lVar16 + -1 == 0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        lVar16 = plVar15[2];
                    /* try { // try from 004c696c to 005c696f has its CatchHandler @ 004c6e0c */
        plVar15[2] = lVar16 + -1;
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      pcVar18 = *(code **)(*(long *)this + 0x60);
      local_98 = local_88;
      local_90 = local_80;
      if (local_80 != (long *)0x0) {
        local_80[1] = local_80[1] + 1;
      }
                    /* try { // try from 004c69b0 to 005c69c3 has its CatchHandler @ 004c6f00 */
      (*pcVar18)(this,&local_98);
      plVar15 = local_90;
                    /* try { // try from 004c69c4 to 005c6bbf has its CatchHandler @ 004c6690 */
      if ((local_90 != (long *)0x0) &&
         (lVar16 = local_90[1], local_90[1] = lVar16 + -1, lVar16 + -1 == 0)) {
        (**(code **)(*local_90 + 0x10))(local_90);
        lVar16 = plVar15[2];
        plVar15[2] = lVar16 + -1;
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      puVar1 = *(undefined8 **)(this + 0x150);
      if (puVar1 == *(undefined8 **)(this + 0x158)) {
        std::
        vector<boost::shared_ptr<Caver::DraggableOverlayItem>,std::allocator<boost::shared_ptr<Caver::DraggableOverlayItem>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::DraggableOverlayItem>,std::allocator<boost::shared_ptr<Caver::DraggableOverlayItem>>>
                         *)(this + 0x148),puVar1,&local_88);
      }
      else {
        *puVar1 = local_88;
        puVar1[1] = local_80;
        if (local_80 != (long *)0x0) {
          local_80[1] = local_80[1] + 1;
        }
        *(undefined8 **)(this + 0x150) = puVar1 + 2;
      }
      psVar20 = *(string **)(this + 0x128);
      FUN_0066a528(&local_98,local_88 + 600);
      GameOverlayView::SubviewForIdentifier(psVar20);
      plVar15 = plStack_a0;
      cVar3 = *(char *)(local_a8 + 0xe5);
      if ((plStack_a0 != (long *)0x0) &&
         (lVar16 = plStack_a0[1], plStack_a0[1] = lVar16 + -1, lVar16 + -1 == 0)) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        lVar16 = plVar15[2];
        plVar15[2] = lVar16 + -1;
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      if (local_98 + -0x18 == (GUILabel *)puVar10) {
LAB_004c6ac0:
        if (cVar3 != '\0') goto LAB_004c6ac8;
LAB_004c6b6c:
        local_b8[0] = 0xff0000;
        DraggableOverlayItem::SetColor((DraggableOverlayItem *)local_88,local_b8);
      }
      else {
        pGVar13 = local_98 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar11 = *(int *)pGVar13;
          *(int *)pGVar13 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *(int *)pGVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
            if (bVar5) {
              *(int *)pGVar13 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (0 < iVar11) goto LAB_004c6ac0;
        operator_delete(local_98 + -0x18);
        if (cVar3 == '\0') goto LAB_004c6b6c;
LAB_004c6ac8:
        local_b0[0] = 0xff;
        DraggableOverlayItem::SetColor((DraggableOverlayItem *)local_88,local_b0);
      }
      local_c0 = puVar10 + 0x18;
      FUN_0066a528(&local_98,local_88 + 600);
      iVar11 = FUN_006689e0(&local_98,&DAT_00695cce);
      if (local_98 + -0x18 == (GUILabel *)puVar10) {
LAB_004c6bb4:
        if (iVar11 != 0) goto LAB_004c6bb8;
LAB_004c6c70:
                    /* try { // try from 004c6c80 to 005c6ce3 has its CatchHandler @ 004c6d74 */
        FUN_0066918c(&local_c0,"Target Info",0xb);
      }
      else {
        pGVar13 = local_98 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar19 = *(int *)pGVar13;
          *(int *)pGVar13 = iVar19 + -1;
        }
        else {
          do {
            iVar19 = *(int *)pGVar13;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
            if (bVar5) {
              *(int *)pGVar13 = iVar19 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (0 < iVar19) goto LAB_004c6bb4;
        operator_delete(local_98 + -0x18);
        if (iVar11 == 0) goto LAB_004c6c70;
LAB_004c6bb8:
                    /* try { // try from 004c6bc0 to 005c6bd7 has its CatchHandler @ 004c6da4 */
        FUN_0066a528(&local_98,local_88 + 600);
        iVar11 = FUN_006689e0(&local_98,&DAT_006920ef);
        if (local_98 + -0x18 != (GUILabel *)puVar10) {
          pGVar13 = local_98 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar19 = *(int *)pGVar13;
                    /* try { // try from 004c68bc to 005c68e7 has its CatchHandler @ 004c6f00 */
            *(int *)pGVar13 = iVar19 + -1;
          }
          else {
            do {
              iVar19 = *(int *)pGVar13;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
              if (bVar5) {
                *(int *)pGVar13 = iVar19 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar19 < 1) {
            operator_delete(local_98 + -0x18);
          }
        }
        if (iVar11 == 0) {
          FUN_0066918c(&local_c0,"Experience Bar",0xe);
        }
      }
      plVar15 = (long *)(local_c0 + -0x18);
      if (*plVar15 != 0) {
        pGVar13 = operator_new(0x150);
        GUILabel::GUILabel(pGVar13);
        boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
                  ((shared_ptr<Caver::GUILabel> *)&local_98,pGVar13);
        if (*(int *)(local_98 + 0x70) != 0x12) {
          plVar15 = *(long **)(local_98 + 0x58);
          *(undefined4 *)(local_98 + 0x70) = 0x12;
          if ((plVar15 != (long *)0x0) && (fVar9 < *(float *)((long)plVar15 + 0x8c))) {
                    /* try { // try from 004c6ce4 to 005c6d97 has its CatchHandler @ 004c6690 */
            (**(code **)(*plVar15 + 0x58))();
          }
        }
        pGVar13 = local_98;
        Font::DefaultFont();
        if (local_d0 != *(GUILabel **)(pGVar13 + 0xf0)) {
          if (local_c8 != (long *)0x0) {
            local_c8[1] = local_c8[1] + 1;
          }
          plVar15 = *(long **)(pGVar13 + 0xf8);
          *(GUILabel **)(pGVar13 + 0xf0) = local_d0;
          *(long **)(pGVar13 + 0xf8) = local_c8;
          if ((plVar15 != (long *)0x0) &&
             (lVar16 = plVar15[1], plVar15[1] = lVar16 + -1, lVar16 + -1 == 0)) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            lVar16 = plVar15[2];
            plVar15[2] = lVar16 + -1;
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
          }
          GUILabel::UpdateText(pGVar13);
        }
        plVar15 = local_c8;
                    /* catch() { ... } // from try @ 004c6c80 with catch @ 004c6d74 */
        if ((local_c8 != (long *)0x0) &&
           (lVar16 = local_c8[1], local_c8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
          (**(code **)(*local_c8 + 0x10))(local_c8);
                    /* try { // try from 004c6d98 to 005c6e6f has its CatchHandler @ 004c6f30 */
          lVar16 = plVar15[2];
          plVar15[2] = lVar16 + -1;
                    /* catch() { ... } // from try @ 004c6bc0 with catch @ 004c6da4 */
          if (lVar16 + -1 == 0) {
            (**(code **)(*plVar15 + 0x18))(plVar15);
          }
        }
        pGVar13 = local_98;
                    /* catch() { ... } // from try @ 004c68f0 with catch @ 004c6dd4 */
                    /* catch() { ... } // from try @ 004c68e8 with catch @ 004c6dd8 */
                    /* catch() { ... } // from try @ 004c6914 with catch @ 004c6ddc */
        if ((((local_98[0x108] != (GUILabel)0xbf) || (local_98[0x109] != (GUILabel)0xbf)) ||
            (local_98[0x10a] != (GUILabel)0xbf)) || (local_98[0x10b] != (GUILabel)0xbf)) {
          plVar15 = *(long **)(local_98 + 0x118);
          *(undefined4 *)(local_98 + 0x108) = 0xbfbfbfbf;
          *(undefined8 *)(local_98 + 0x110) = 0;
          *(undefined8 *)(local_98 + 0x118) = 0;
                    /* catch() { ... } // from try @ 004c6904 with catch @ 004c6e0c
                       catch() { ... } // from try @ 004c696c with catch @ 004c6e0c */
          if ((plVar15 != (long *)0x0) &&
             (lVar16 = plVar15[1], plVar15[1] = lVar16 + -1, lVar16 + -1 == 0)) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            lVar16 = plVar15[2];
            plVar15[2] = lVar16 + -1;
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
          }
                    /* catch() { ... } // from try @ 004c6750 with catch @ 004c6e44 */
          GUILabel::UpdateText(pGVar13);
        }
        local_98[0x140] = (GUILabel)0x1;
        *(undefined4 *)(local_98 + 0x141) = 0xbf000000;
        *(undefined8 *)(local_98 + 0x148) = uVar8;
        GUILabel::UpdateText(local_98);
                    /* try { // try from 004c6e70 to 005c6f23 has its CatchHandler @ 004c6690 */
        *(undefined4 *)(local_98 + 0x130) = 4;
                    /* catch() { ... } // from try @ 004c6728 with catch @ 004c6e74 */
        GUILabel::UpdateBounds(local_98);
                    /* catch() { ... } // from try @ 004c6708 with catch @ 004c6e78 */
        *(undefined4 *)(local_98 + 0x134) = 4;
        GUILabel::UpdateBounds(local_98);
        pGVar13 = local_98;
                    /* catch() { ... } // from try @ 004c673c with catch @ 004c6e8c
                       catch() { ... } // from try @ 004c677c with catch @ 004c6e8c */
        if ((*(size_t *)(local_c0 + -0x18) !=
             *(size_t *)((long)*(void **)(local_98 + 0x100) + -0x18)) ||
           (iVar11 = memcmp(local_c0,*(void **)(local_98 + 0x100),*(size_t *)(local_c0 + -0x18)),
           iVar11 != 0)) {
          FUN_0066a6a8(pGVar13 + 0x100,&local_c0);
          GUILabel::UpdateText(pGVar13);
          pGVar13 = local_98;
        }
        pcVar18 = *(code **)(*(long *)local_88 + 0x60);
        local_c8 = local_90;
        if (local_90 != (long *)0x0) {
          local_90[1] = local_90[1] + 1;
        }
        local_d0 = pGVar13;
        (*pcVar18)(local_88,&local_d0);
        plVar15 = local_c8;
                    /* catch() { ... } // from try @ 004c67b0 with catch @ 004c6efc
                       catch() { ... } // from try @ 004c6894 with catch @ 004c6efc */
        if ((local_c8 != (long *)0x0) &&
           (lVar16 = local_c8[1], local_c8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004c68bc with catch @ 004c6f00
                       catch() { ... } // from try @ 004c69b0 with catch @ 004c6f00 */
          (**(code **)(*local_c8 + 0x10))(local_c8);
          lVar16 = plVar15[2];
          plVar15[2] = lVar16 + -1;
          if (lVar16 + -1 == 0) {
                    /* try { // try from 004c6f24 to 005c6f27 has its CatchHandler @ 004c6f30 */
                    /* try { // try from 004c6f28 to 005c6f33 has its CatchHandler @ 004c6690 */
            (**(code **)(*plVar15 + 0x18))(plVar15);
          }
        }
                    /* catch() { ... } // from try @ 004c6d98 with catch @ 004c6f30
                       catch() { ... } // from try @ 004c6f24 with catch @ 004c6f30 */
        plVar15 = local_90;
                    /* catch() { ... } // from try @ 004c715c with catch @ 004c6f34
                       catch() { ... } // from try @ 004c73bc with catch @ 004c6f34 */
        if ((local_90 != (long *)0x0) &&
           (lVar16 = local_90[1], local_90[1] = lVar16 + -1, lVar16 + -1 == 0)) {
          (**(code **)(*local_90 + 0x10))(local_90);
          lVar16 = plVar15[2];
          plVar15[2] = lVar16 + -1;
          if (lVar16 + -1 == 0) {
            (**(code **)(*plVar15 + 0x18))(plVar15);
          }
        }
        plVar15 = (long *)(local_c0 + -0x18);
      }
      plVar7 = local_80;
      if (plVar15 != (long *)puVar10) {
        piVar17 = (int *)(local_c0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar11 = *piVar17;
                    /* try { // try from 004c6894 to 005c689b has its CatchHandler @ 004c6efc */
          *piVar17 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *piVar17;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar5) {
              *piVar17 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete(plVar15);
          plVar7 = local_80;
        }
      }
      local_80 = plVar7;
      if ((plVar7 != (long *)0x0) && (lVar16 = plVar7[1], plVar7[1] = lVar16 + -1, lVar16 + -1 == 0)
         ) {
                    /* try { // try from 004c6fac to 005c6faf has its CatchHandler @ 004c71b4 */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar16 = plVar7[2];
        plVar7[2] = lVar16 + -1;
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
                    /* try { // try from 004c6fd0 to 005c6fd3 has its CatchHandler @ 004c71ac */
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)((ulong)(*(long *)(*(long *)(this + 0x138) + 0x10) -
                                   *(long *)(*(long *)(this + 0x138) + 8)) >> 4));
  }
  local_88 = *(GUILabel **)(this + 0x128);
  pcVar18 = *(code **)(*(long *)this + 0x60);
  local_80 = *(long **)(this + 0x130);
                    /* try { // try from 004c7004 to 005c7007 has its CatchHandler @ 004c71a4 */
  if (local_80 != (long *)0x0) {
    local_80[1] = local_80[1] + 1;
  }
  (*pcVar18)(this,&local_88);
  plVar15 = local_80;
                    /* try { // try from 004c702c to 005c702f has its CatchHandler @ 004c719c */
  if ((local_80 != (long *)0x0) &&
     (lVar14 = local_80[1], local_80[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    lVar14 = plVar15[2];
    plVar15[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
                    /* try { // try from 004c7060 to 005c7063 has its CatchHandler @ 004c7194 */
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
                    /* try { // try from 004c7094 to 005c7097 has its CatchHandler @ 004c718c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


