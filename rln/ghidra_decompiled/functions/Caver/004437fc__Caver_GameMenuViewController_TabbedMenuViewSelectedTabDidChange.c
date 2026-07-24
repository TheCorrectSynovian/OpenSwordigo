/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004437fc
 * Function: Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange
 * Signature: undefined __thiscall TabbedMenuViewSelectedTabDidChange(GameMenuViewController * this, TabbedMenuView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView*) */

void __thiscall
Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange
          (GameMenuViewController *this,TabbedMenuView *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  InventoryView *pIVar7;
  GuideToggleView *pGVar8;
  GUISwitch *pGVar9;
  StoreController *this_00;
  ulong uVar10;
  MapMenuPage *this_01;
  QuestsView *this_02;
  SettingsView *this_03;
  CharacterView *this_04;
  long lVar11;
  int *piVar12;
  long lVar13;
  InventoryView *pIVar14;
  GUILabel *pGVar15;
  undefined1 auStack_a0 [8];
  InventoryView *local_98;
  long *local_90;
  undefined8 local_88;
  long *local_80;
  InventoryView *local_78;
  long *local_70;
  long local_68;
  InventoryView *local_60;
  long *local_58;
  long local_48;
  
                    /* try { // try from 00443808 to 00543837 has its CatchHandler @ 00443808
                       catch() { ... } // from try @ 00443808 with catch @ 00443808
                       catch() { ... } // from try @ 004438a0 with catch @ 00443808 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar11 = *(long *)(param_1 + 0x128);
  if (lVar11 == 0) {
                    /* catch() { ... } // from try @ 00443838 with catch @ 00443854 */
    FUN_00666bb8(&local_68,&DAT_0068fbeb,&local_60);
  }
  else if (*(int *)(lVar11 + 0x208) < 0) {
    FUN_00666bb8(&local_68,&DAT_0068fbeb,&local_60);
  }
  else {
                    /* try { // try from 00443838 to 0054383f has its CatchHandler @ 00443854 */
    FUN_0066a528(&local_68,*(long *)(lVar11 + 0x218) + (long)*(int *)(lVar11 + 0x208) * 8);
  }
                    /* try { // try from 00443878 to 0054389f has its CatchHandler @ 004438a8 */
  lVar11 = *(long *)(*(long *)(this + 0x88) + 0x80);
  plVar1 = *(long **)(*(long *)(this + 0x88) + 0x88);
  if (plVar1 != (long *)0x0) {
    plVar1[1] = plVar1[1] + 1;
  }
  FUN_0066a6a8(lVar11 + 400,&local_68);
                    /* try { // try from 004438a0 to 005438ab has its CatchHandler @ 00443808 */
                    /* catch() { ... } // from try @ 00443878 with catch @ 004438a8 */
  if ((plVar1 != (long *)0x0) && (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar11 = plVar1[2];
    plVar1[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  local_78 = (InventoryView *)0x0;
  local_70 = (long *)0x0;
  local_88 = 0;
  local_80 = (long *)0x0;
  iVar6 = FUN_006689e0(&local_68,&DAT_00691f83);
  if (iVar6 == 0) {
    this_01 = operator_new(0x200);
    MapMenuPage::MapMenuPage(this_01);
    boost::shared_ptr<Caver::MapMenuPage>::shared_ptr<Caver::MapMenuPage>
              ((shared_ptr<Caver::MapMenuPage> *)&local_98,this_01);
    lVar11 = *(long *)(this + 0x88);
    local_60 = *(InventoryView **)(lVar11 + 0x80);
    local_58 = *(long **)(lVar11 + 0x88);
    if (local_58 != (long *)0x0) {
      local_58[1] = local_58[1] + 1;
    }
    MapMenuPage::InitWithGameState
              ((MapMenuPage *)local_98,(shared_ptr *)&local_60,*(bool *)(lVar11 + 0xc0));
    plVar1 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar11 = local_58[1], local_58[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar11 = plVar1[2];
      plVar1[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    plVar1 = local_70;
    if (local_90 != (long *)0x0) {
      local_90[1] = local_90[1] + 1;
    }
    local_78 = local_98;
    local_70 = local_90;
    if ((plVar1 != (long *)0x0) && (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0))
    {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar11 = plVar1[2];
      plVar1[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    pGVar8 = operator_new(0x118);
    GuideToggleView::GuideToggleView(pGVar8);
    boost::shared_ptr<Caver::GuideToggleView>::shared_ptr<Caver::GuideToggleView>
              ((shared_ptr<Caver::GuideToggleView> *)&local_60,pGVar8);
    pIVar7 = *(InventoryView **)(this + 0xa8);
    plVar1 = *(long **)(this + 0xb0);
    *(InventoryView **)(this + 0xa8) = local_60;
    *(long **)(this + 0xb0) = local_58;
    local_60 = pIVar7;
    local_58 = plVar1;
    if ((plVar1 != (long *)0x0) && (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0))
    {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar11 = plVar1[2];
      plVar1[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    pGVar15 = *(GUILabel **)(*(long *)(this + 0xa8) + 0xf8);
    *(GameMenuViewController **)(*(long *)(this + 0xa8) + 0xf0) = this + 0x68;
    FUN_00666bb8(&local_60,"COMPASS",auStack_a0);
    pIVar7 = local_60;
    pIVar14 = local_60 + -0x18;
    if ((*(size_t *)pIVar14 != *(size_t *)((long)*(void **)(pGVar15 + 0x100) + -0x18)) ||
       (iVar6 = memcmp(local_60,*(void **)(pGVar15 + 0x100),*(size_t *)pIVar14), iVar6 != 0)) {
      FUN_0066a6a8(pGVar15 + 0x100,&local_60);
      GUILabel::UpdateText(pGVar15);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00443f4c with catch @ 00443e48
                       catch(type#1 @ 00000000) { ... } // from try @ 00444134 with catch @ 00443e48
                        */
      pIVar14 = local_60 + -0x18;
      pIVar7 = local_60;
    }
    if (pIVar14 != (InventoryView *)PTR_DAT_007e5de8) {
      pIVar7 = pIVar7 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *(int *)pIVar7;
                    /* try { // try from 0044448c to 00544507 has its CatchHandler @ 004446ec */
        *(int *)pIVar7 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *(int *)pIVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pIVar7,0x10);
          if (bVar3) {
            *(int *)pIVar7 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete(pIVar14);
      }
    }
    lVar11 = *(long *)(*(long *)(this + 0x88) + 0x80);
    plVar1 = *(long **)(*(long *)(this + 0x88) + 0x88);
    lVar13 = *(long *)(this + 0xa8);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = plVar1[1] + 1;
    }
    pGVar9 = *(GUISwitch **)(lVar13 + 0x108);
    pGVar9[0x148] = *(GUISwitch *)(lVar11 + 0x1c8);
    GUISwitch::UpdateFrameTexture(pGVar9);
    if ((plVar1 != (long *)0x0) && (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0))
    {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar11 = plVar1[2];
      plVar1[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    plVar5 = local_80;
    local_88 = *(undefined8 *)(this + 0xa8);
    plVar1 = *(long **)(this + 0xb0);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = plVar1[1] + 1;
    }
    if ((local_80 != (long *)0x0) &&
       (lVar11 = local_80[1], local_80[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      lVar11 = *local_80;
                    /* try { // try from 00443f00 to 00543f03 has its CatchHandler @ 0044410c */
      local_80 = plVar1;
      (**(code **)(lVar11 + 0x10))(plVar5);
      lVar11 = plVar5[2];
      plVar5[2] = lVar11 + -1;
      plVar1 = local_80;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        plVar1 = local_80;
      }
    }
    local_80 = plVar1;
    plVar1 = local_90;
    if ((local_90 != (long *)0x0) &&
       (lVar11 = local_90[1], local_90[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 00443f48 to 00543f4b has its CatchHandler @ 00444100 */
                    /* try { // try from 00443f4c to 0054412b has its CatchHandler @ 00443e48 */
      (**(code **)(*local_90 + 0x10))(local_90);
      lVar11 = plVar1[2];
      plVar1[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  else {
    iVar6 = FUN_006689e0(&local_68,"quests");
    if (iVar6 == 0) {
      this_02 = operator_new(400);
      QuestsView::QuestsView(this_02);
      boost::shared_ptr<Caver::QuestsView>::shared_ptr<Caver::QuestsView>
                ((shared_ptr<Caver::QuestsView> *)&local_60,this_02);
      local_98 = *(InventoryView **)(*(long *)(this + 0x88) + 0x80);
      local_90 = *(long **)(*(long *)(this + 0x88) + 0x88);
      if (local_90 != (long *)0x0) {
        local_90[1] = local_90[1] + 1;
      }
      QuestsView::InitWithGameState((QuestsView *)local_60,(shared_ptr *)&local_98);
      plVar1 = local_90;
      if ((local_90 != (long *)0x0) &&
         (lVar11 = local_90[1], local_90[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*local_90 + 0x10))(local_90);
        lVar11 = plVar1[2];
        plVar1[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
      plVar1 = local_70;
      if (local_58 != (long *)0x0) {
        local_58[1] = local_58[1] + 1;
      }
      local_78 = local_60;
      local_70 = local_58;
      if ((plVar1 != (long *)0x0) && (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0)
         ) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar11 = plVar1[2];
        plVar1[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
      plVar1 = local_58;
      if ((local_58 != (long *)0x0) &&
         (lVar11 = local_58[1], local_58[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*local_58 + 0x10))(local_58);
        lVar11 = plVar1[2];
        plVar1[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
    }
    else {
      iVar6 = FUN_006689e0(&local_68,"settings");
      if (iVar6 == 0) {
        this_03 = operator_new(0x1e0);
        SettingsView::SettingsView(this_03);
        boost::shared_ptr<Caver::SettingsView>::shared_ptr<Caver::SettingsView>
                  ((shared_ptr<Caver::SettingsView> *)&local_60,this_03);
        *(GameMenuViewController **)(local_60 + 0xf8) = this + 0x60;
        local_98 = *(InventoryView **)(*(long *)(this + 0x88) + 0x80);
        local_90 = *(long **)(*(long *)(this + 0x88) + 0x88);
        if (local_90 != (long *)0x0) {
          local_90[1] = local_90[1] + 1;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00443f48 with catch @ 00444100
                        */
        SettingsView::InitWithGameState((SettingsView *)local_60,(shared_ptr *)&local_98);
        plVar1 = local_90;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00443f00 with catch @ 0044410c
                        */
        if ((local_90 != (long *)0x0) &&
           (lVar11 = local_90[1], local_90[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*local_90 + 0x10))(local_90);
                    /* try { // try from 0044412c to 00544133 has its CatchHandler @ 0044413c */
          lVar11 = plVar1[2];
                    /* try { // try from 00444134 to 0054413f has its CatchHandler @ 00443e48 */
          plVar1[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0044412c with catch @ 0044413c
                        */
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
        plVar1 = local_70;
        if (local_58 != (long *)0x0) {
          local_58[1] = local_58[1] + 1;
        }
        local_78 = local_60;
        local_70 = local_58;
        if ((plVar1 != (long *)0x0) &&
           (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar11 = plVar1[2];
          plVar1[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
        plVar1 = local_58;
        if ((local_58 != (long *)0x0) &&
           (lVar11 = local_58[1], local_58[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*local_58 + 0x10))(local_58);
          lVar11 = plVar1[2];
          plVar1[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
      }
      else {
        iVar6 = FUN_006689e0(&local_68,&DAT_0068e4f6);
        if (iVar6 == 0) {
          this_04 = operator_new(0x1e8);
          CharacterView::CharacterView(this_04);
          boost::shared_ptr<Caver::CharacterView>::shared_ptr<Caver::CharacterView>
                    ((shared_ptr<Caver::CharacterView> *)&local_60,this_04);
          *(GameMenuViewController **)(local_60 + 0x100) = this + 0x50;
          local_98 = *(InventoryView **)(*(long *)(this + 0x88) + 0x80);
          local_90 = *(long **)(*(long *)(this + 0x88) + 0x88);
          if (local_90 != (long *)0x0) {
            local_90[1] = local_90[1] + 1;
          }
          CharacterView::InitWithGameState((CharacterView *)local_60,(shared_ptr *)&local_98);
          plVar1 = local_90;
          if ((local_90 != (long *)0x0) &&
             (lVar11 = local_90[1], local_90[1] = lVar11 + -1, lVar11 + -1 == 0)) {
            (**(code **)(*local_90 + 0x10))(local_90);
            lVar11 = plVar1[2];
            plVar1[2] = lVar11 + -1;
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar1 + 0x18))(plVar1);
            }
          }
          plVar1 = local_70;
          if (local_58 != (long *)0x0) {
            local_58[1] = local_58[1] + 1;
          }
          local_78 = local_60;
          local_70 = local_58;
          if ((plVar1 != (long *)0x0) &&
             (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0)) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            lVar11 = plVar1[2];
            plVar1[2] = lVar11 + -1;
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar1 + 0x18))(plVar1);
            }
          }
          plVar1 = local_58;
          if ((local_58 != (long *)0x0) &&
             (lVar11 = local_58[1], local_58[1] = lVar11 + -1, lVar11 + -1 == 0)) {
            (**(code **)(*local_58 + 0x10))(local_58);
            lVar11 = plVar1[2];
                    /* catch() { ... } // from try @ 00444554 with catch @ 00444320
                       catch() { ... } // from try @ 00444794 with catch @ 00444320 */
            plVar1[2] = lVar11 + -1;
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar1 + 0x18))(plVar1);
            }
          }
        }
        else {
          iVar6 = FUN_006689e0(&local_68,"inventory");
          if (iVar6 == 0) {
            pIVar7 = operator_new(0x180);
            InventoryView::InventoryView(pIVar7);
            boost::shared_ptr<Caver::InventoryView>::shared_ptr<Caver::InventoryView>
                      ((shared_ptr<Caver::InventoryView> *)&local_98,pIVar7);
            *(GameMenuViewController **)(local_98 + 0x110) = this + 0x48;
            local_60 = *(InventoryView **)(*(long *)(this + 0x88) + 0x80);
            local_58 = *(long **)(*(long *)(this + 0x88) + 0x88);
            if (local_58 != (long *)0x0) {
              local_58[1] = local_58[1] + 1;
            }
            InventoryView::InitWithGameState(local_98,(shared_ptr *)&local_60);
            plVar1 = local_58;
            if ((local_58 != (long *)0x0) &&
               (lVar11 = local_58[1], local_58[1] = lVar11 + -1, lVar11 + -1 == 0)) {
              (**(code **)(*local_58 + 0x10))(local_58);
              lVar11 = plVar1[2];
              plVar1[2] = lVar11 + -1;
              if (lVar11 + -1 == 0) {
                (**(code **)(*plVar1 + 0x18))(plVar1);
              }
            }
            plVar1 = local_70;
            if (local_90 != (long *)0x0) {
              local_90[1] = local_90[1] + 1;
            }
            local_78 = local_98;
            local_70 = local_90;
            if ((plVar1 != (long *)0x0) &&
               (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0)) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
              lVar11 = plVar1[2];
              plVar1[2] = lVar11 + -1;
              if (lVar11 + -1 == 0) {
                (**(code **)(*plVar1 + 0x18))(plVar1);
              }
            }
            pGVar8 = operator_new(0x118);
            GuideToggleView::GuideToggleView(pGVar8);
            boost::shared_ptr<Caver::GuideToggleView>::shared_ptr<Caver::GuideToggleView>
                      ((shared_ptr<Caver::GuideToggleView> *)&local_60,pGVar8);
            pIVar7 = *(InventoryView **)(this + 0xb8);
            plVar1 = *(long **)(this + 0xc0);
            *(InventoryView **)(this + 0xb8) = local_60;
            *(long **)(this + 0xc0) = local_58;
            local_60 = pIVar7;
            local_58 = plVar1;
            if ((plVar1 != (long *)0x0) &&
               (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0)) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
              lVar11 = plVar1[2];
              plVar1[2] = lVar11 + -1;
              if (lVar11 + -1 == 0) {
                (**(code **)(*plVar1 + 0x18))(plVar1);
              }
            }
            pGVar15 = *(GUILabel **)(*(long *)(this + 0xb8) + 0xf8);
            *(GameMenuViewController **)(*(long *)(this + 0xb8) + 0xf0) = this + 0x68;
                    /* try { // try from 00443adc to 00543b0f has its CatchHandler @ 00443adc
                       catch() { ... } // from try @ 00443adc with catch @ 00443adc
                       catch() { ... } // from try @ 00443b14 with catch @ 00443adc
                       catch() { ... } // from try @ 00443b4c with catch @ 00443adc */
            FUN_00666bb8(&local_60,"COIN DOUBLER",auStack_a0);
            pIVar7 = local_60;
            pIVar14 = local_60 + -0x18;
            if ((*(size_t *)pIVar14 != *(size_t *)((long)*(void **)(pGVar15 + 0x100) + -0x18)) ||
               (iVar6 = memcmp(local_60,*(void **)(pGVar15 + 0x100),*(size_t *)pIVar14), iVar6 != 0)
               ) {
                    /* try { // try from 00443b10 to 00543b13 has its CatchHandler @ 00443b34 */
                    /* try { // try from 00443b14 to 00543b3f has its CatchHandler @ 00443adc */
              FUN_0066a6a8(pGVar15 + 0x100,&local_60);
              GUILabel::UpdateText(pGVar15);
              pIVar14 = local_60 + -0x18;
              pIVar7 = local_60;
            }
                    /* catch() { ... } // from try @ 00443b10 with catch @ 00443b34 */
            if (pIVar14 != (InventoryView *)PTR_DAT_007e5de8) {
              pIVar7 = pIVar7 + -8;
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar6 = *(int *)pIVar7;
                *(int *)pIVar7 = iVar6 + -1;
              }
              else {
                do {
                  iVar6 = *(int *)pIVar7;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pIVar7,0x10);
                  if (bVar3) {
                    *(int *)pIVar7 = iVar6 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              if (iVar6 < 1) {
                operator_delete(pIVar14);
              }
            }
            lVar11 = *(long *)(*(long *)(this + 0x88) + 0x80);
            plVar1 = *(long **)(*(long *)(this + 0x88) + 0x88);
                    /* try { // try from 00443b40 to 00543b43 has its CatchHandler @ 00443b44 */
            lVar13 = *(long *)(this + 0xb8);
                    /* catch() { ... } // from try @ 00443b40 with catch @ 00443b44 */
            if (plVar1 != (long *)0x0) {
                    /* try { // try from 00443b48 to 00543b4b has its CatchHandler @ 00443b54 */
                    /* try { // try from 00443b4c to 00543b57 has its CatchHandler @ 00443adc */
              plVar1[1] = plVar1[1] + 1;
            }
                    /* catch() { ... } // from try @ 00443b48 with catch @ 00443b54 */
                    /* catch() { ... } // from try @ 00443bc8 with catch @ 00443b58
                       catch() { ... } // from try @ 00443c3c with catch @ 00443b58 */
            pGVar9 = *(GUISwitch **)(lVar13 + 0x108);
            pGVar9[0x148] = *(GUISwitch *)(lVar11 + 0x1ca);
            GUISwitch::UpdateFrameTexture(pGVar9);
            if ((plVar1 != (long *)0x0) &&
               (lVar11 = plVar1[1], plVar1[1] = lVar11 + -1, lVar11 + -1 == 0)) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
              lVar11 = plVar1[2];
              plVar1[2] = lVar11 + -1;
              if (lVar11 + -1 == 0) {
                (**(code **)(*plVar1 + 0x18))(plVar1);
              }
            }
            plVar5 = local_80;
            local_88 = *(undefined8 *)(this + 0xb8);
            plVar1 = *(long **)(this + 0xc0);
            if (plVar1 != (long *)0x0) {
              plVar1[1] = plVar1[1] + 1;
            }
                    /* try { // try from 00443bbc to 00543bc7 has its CatchHandler @ 00443c10 */
                    /* try { // try from 00443bc8 to 00543c33 has its CatchHandler @ 00443b58 */
            if ((local_80 != (long *)0x0) &&
               (lVar11 = local_80[1], local_80[1] = lVar11 + -1, lVar11 + -1 == 0)) {
              lVar11 = *local_80;
              local_80 = plVar1;
              (**(code **)(lVar11 + 0x10))(plVar5);
              lVar11 = plVar5[2];
              plVar5[2] = lVar11 + -1;
              plVar1 = local_80;
              if (lVar11 + -1 == 0) {
                (**(code **)(*plVar5 + 0x18))(plVar5);
                plVar1 = local_80;
              }
            }
            local_80 = plVar1;
            this_00 = (StoreController *)StoreController::SharedController();
            uVar10 = StoreController::IsCoinDoublerUnlockedCheck(this_00);
            plVar1 = local_90;
                    /* catch() { ... } // from try @ 00443bbc with catch @ 00443c10 */
            if ((uVar10 & 1) == 0) {
              *(undefined1 *)(*(long *)(this + 0xb8) + 0xe4) = 1;
            }
                    /* try { // try from 00443c34 to 00543c3b has its CatchHandler @ 00443c44 */
            if ((local_90 != (long *)0x0) &&
               (lVar11 = local_90[1], local_90[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 00443c3c to 00543c47 has its CatchHandler @ 00443b58 */
                    /* catch() { ... } // from try @ 00443c34 with catch @ 00443c44 */
              (**(code **)(*local_90 + 0x10))(local_90);
              lVar11 = plVar1[2];
              plVar1[2] = lVar11 + -1;
              if (lVar11 + -1 == 0) {
                (**(code **)(*plVar1 + 0x18))(plVar1);
              }
            }
          }
        }
      }
    }
  }
  TabbedMenuView::SetContentView(param_1,(shared_ptr *)&local_78);
  TabbedMenuView::SetStripeAccessoryView(param_1,(shared_ptr *)&local_88);
  plVar1 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar11 = local_80[1], local_80[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    lVar11 = plVar1[2];
    plVar1[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  plVar1 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar11 = local_70[1], local_70[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar11 = plVar1[2];
    plVar1[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
    piVar12 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar12;
                    /* try { // try from 0044444c to 00544453 has its CatchHandler @ 00444668 */
      *piVar12 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00444414 to 0054441f has its CatchHandler @ 004446dc */
  return;
}


