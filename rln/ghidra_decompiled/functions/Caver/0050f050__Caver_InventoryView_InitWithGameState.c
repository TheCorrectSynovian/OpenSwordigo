/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050f050
 * Function: Caver::InventoryView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(InventoryView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::InventoryView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall Caver::InventoryView::InitWithGameState(InventoryView *this,shared_ptr *param_1)

{
  Rectangle *pRVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  InventoryItemPanel *pIVar13;
  GUIFrameView *pGVar14;
  string *psVar15;
  GUIView *pGVar16;
  GUILabel *pGVar17;
  FontLibrary *this_00;
  GUIView *this_01;
  ulong uVar18;
  InventoryTrinketSlot *pIVar19;
  Rectangle *pRVar20;
  intrusive_ptr *__n;
  long lVar21;
  shared_ptr *psVar22;
  long lVar23;
  code *pcVar24;
  int *piVar25;
  shared_ptr *psVar26;
  GUIView *pGVar27;
  GUIView *pGVar28;
  void *pvVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  long *plVar33;
  GUIButton *this_02;
  GUIControl *pGVar34;
  long lVar35;
  size_t *psVar36;
  long lVar37;
  float fVar38;
  undefined8 local_120;
  undefined8 uStack_118;
  long *local_110 [2];
  undefined8 local_100;
  long *plStack_f8;
  InventoryView *local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  InventoryView *local_c8 [4];
  undefined8 uStack_a8;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  uVar2 = *(undefined8 *)param_1;
  lVar21 = *(long *)(param_1 + 8);
  if (lVar21 != 0) {
    *(long *)(lVar21 + 8) = *(long *)(lVar21 + 8) + 1;
  }
  plVar32 = *(long **)(this + 0x120);
  *(undefined8 *)(this + 0x118) = uVar2;
  *(long *)(this + 0x120) = lVar21;
  if ((plVar32 != (long *)0x0) && (lVar21 = plVar32[1], plVar32[1] = lVar21 + -1, lVar21 + -1 == 0))
  {
    (**(code **)(*plVar32 + 0x10))(plVar32);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  *(undefined4 *)(this + 0x128) = 3;
  puVar12 = operator_new__(0x38);
  *puVar12 = 3;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[2] = 0;
  puVar12[1] = 0;
  psVar22 = *(shared_ptr **)(this + 0x130);
  *(undefined8 **)(this + 0x130) = puVar12 + 1;
  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(psVar22);
  if (0 < *(int *)(this + 0x128)) {
    lVar35 = 0;
    lVar21 = 0;
    do {
      lVar37 = *(long *)(this + 0x130);
      pIVar13 = operator_new(0x170);
      InventoryItemPanel::InventoryItemPanel(pIVar13);
      boost::shared_ptr<Caver::InventoryItemPanel>::shared_ptr<Caver::InventoryItemPanel>
                ((shared_ptr<Caver::InventoryItemPanel> *)&local_e0,pIVar13);
      plVar32 = (long *)(lVar37 + lVar35);
      lVar37 = *plVar32;
      *plVar32 = (long)local_e0;
      plVar33 = (long *)plVar32[1];
      plVar32[1] = (long)uStack_d8;
      if ((plVar33 != (long *)0x0) &&
         (lVar23 = plVar33[1], plVar33[1] = lVar23 + -1, lVar23 + -1 == 0)) {
        local_e0 = (long *)lVar37;
        uStack_d8 = plVar33;
        (**(code **)(*plVar33 + 0x10))(plVar33);
        lVar37 = plVar33[2];
        plVar33[2] = lVar37 + -1;
        if (lVar37 + -1 == 0) {
          (**(code **)(*plVar33 + 0x18))(plVar33);
        }
      }
      lVar37 = *(long *)(this + 0x130);
      local_e0 = *(long **)(lVar37 + lVar35);
      *(InventoryView **)((long)local_e0 + 0xf8) = this + 0xf8;
      pcVar24 = *(code **)(*(long *)this + 0x60);
      uStack_d8 = (long *)((long *)(lVar37 + lVar35))[1];
      if (uStack_d8 != (long *)0x0) {
        uStack_d8[1] = uStack_d8[1] + 1;
      }
      (*pcVar24)(this,&local_e0);
      plVar32 = uStack_d8;
                    /* try { // try from 0050f20c to 0060f20f has its CatchHandler @ 0050f4d4 */
                    /* try { // try from 0050f210 to 0060f2ff has its CatchHandler @ 0050f038 */
      if ((uStack_d8 != (long *)0x0) &&
         (lVar37 = uStack_d8[1], uStack_d8[1] = lVar37 + -1, lVar37 + -1 == 0)) {
        (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
        lVar37 = plVar32[2];
        plVar32[2] = lVar37 + -1;
        if (lVar37 + -1 == 0) {
          (**(code **)(*plVar32 + 0x18))(plVar32);
        }
      }
      lVar21 = lVar21 + 1;
      lVar35 = lVar35 + 0x10;
    } while (lVar21 < *(int *)(this + 0x128));
  }
  psVar22 = (shared_ptr *)(this + 0x118);
  InventoryItemPanel::Init((InventoryItemPanel *)**(undefined8 **)(this + 0x130),psVar22);
  pIVar13 = (InventoryItemPanel *)**(undefined8 **)(this + 0x130);
  CharacterState::HighestLevelItemOfType(&local_e0,*(long *)param_1 + 0x10,1);
  InventoryItemPanel::SetItem(pIVar13,(shared_ptr *)&local_e0);
  plVar32 = uStack_d8;
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  local_e0 = *(long **)(*(long *)param_1 + 0x78);
  pIVar13 = (InventoryItemPanel *)**(undefined8 **)(this + 0x130);
  uStack_d8 = *(long **)(*(long *)param_1 + 0x80);
  if (uStack_d8 != (long *)0x0) {
                    /* try { // try from 0050f300 to 0060f303 has its CatchHandler @ 0050f4d8 */
                    /* try { // try from 0050f304 to 0060f3d7 has its CatchHandler @ 0050f038 */
    uStack_d8[1] = uStack_d8[1] + 1;
  }
  InventoryItemPanel::SetTrinket(pIVar13,(shared_ptr *)&local_e0);
  plVar32 = uStack_d8;
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  InventoryItemPanel::Init(*(InventoryItemPanel **)(*(long *)(this + 0x130) + 0x10),psVar22);
  pIVar13 = *(InventoryItemPanel **)(*(long *)(this + 0x130) + 0x10);
  CharacterState::HighestLevelItemOfType(&local_e0,*(long *)param_1 + 0x10,2);
  InventoryItemPanel::SetItem(pIVar13,(shared_ptr *)&local_e0);
  plVar32 = uStack_d8;
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
                    /* try { // try from 0050f3d8 to 0060f3db has its CatchHandler @ 0050f4dc */
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
                    /* try { // try from 0050f3dc to 0060f4ef has its CatchHandler @ 0050f038 */
  local_e0 = *(long **)(*(long *)param_1 + 0x88);
  pIVar13 = *(InventoryItemPanel **)(*(long *)(this + 0x130) + 0x10);
  uStack_d8 = *(long **)(*(long *)param_1 + 0x90);
  if (uStack_d8 != (long *)0x0) {
    uStack_d8[1] = uStack_d8[1] + 1;
  }
  InventoryItemPanel::SetTrinket(pIVar13,(shared_ptr *)&local_e0);
  plVar32 = uStack_d8;
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  InventoryItemPanel::Init(*(InventoryItemPanel **)(*(long *)(this + 0x130) + 0x20),psVar22);
  local_e0 = *(long **)(*(long *)param_1 + 0x68);
  pIVar13 = *(InventoryItemPanel **)(*(long *)(this + 0x130) + 0x20);
  uStack_d8 = *(long **)(*(long *)param_1 + 0x70);
  if (uStack_d8 != (long *)0x0) {
    uStack_d8[1] = uStack_d8[1] + 1;
  }
  InventoryItemPanel::SetSkill(pIVar13,(shared_ptr *)&local_e0);
  plVar32 = uStack_d8;
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
                    /* catch() { ... } // from try @ 0050f20c with catch @ 0050f4d4 */
                    /* catch() { ... } // from try @ 0050f300 with catch @ 0050f4d8 */
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
                    /* catch() { ... } // from try @ 0050f3d8 with catch @ 0050f4dc */
  local_e0 = *(long **)(*(long *)param_1 + 0x98);
  pIVar13 = *(InventoryItemPanel **)(*(long *)(this + 0x130) + 0x20);
  uStack_d8 = *(long **)(*(long *)param_1 + 0xa0);
  if (uStack_d8 != (long *)0x0) {
    uStack_d8[1] = uStack_d8[1] + 1;
  }
  InventoryItemPanel::SetTrinket(pIVar13,(shared_ptr *)&local_e0);
  plVar32 = uStack_d8;
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  puVar9 = PTR_DAT_007e5de8;
  if (0 < *(int *)(this + 0x128)) {
    lVar21 = 0;
    do {
      lVar37 = *(long *)(*(long *)(*(long *)(this + 0x130) + lVar21 * 0x10) + 0x120);
      lVar35 = *(long *)(lVar37 + 0x100);
      plVar32 = *(long **)(lVar37 + 0x108);
      if (plVar32 != (long *)0x0) {
        plVar32[1] = plVar32[1] + 1;
      }
      if (lVar35 == 0) {
        bVar10 = false;
        if (plVar32 != (long *)0x0) goto LAB_0050f76c;
LAB_0050f79c:
        if (bVar10) {
LAB_0050f7a0:
          lVar37 = *(long *)(*(long *)(this + 0x130) + lVar21 * 0x10);
          lVar35 = *(long *)(lVar37 + 0x120);
          plVar32 = *(long **)(lVar37 + 0x128);
          if (plVar32 == (long *)0x0) {
            *(undefined1 *)(lVar35 + 0x278) = 1;
          }
          else {
            lVar37 = plVar32[1];
            *(undefined1 *)(lVar35 + 0x278) = 1;
            plVar32[1] = lVar37;
            if (lVar37 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
              lVar35 = plVar32[2];
              plVar32[2] = lVar35 + -1;
              if (lVar35 + -1 == 0) {
                (**(code **)(*plVar32 + 0x18))(plVar32);
              }
            }
          }
          lVar35 = *(long *)psVar22;
          FUN_00666bb8(&local_e0,&DAT_0068fbeb,local_110);
          FUN_0066a6a8(lVar35 + 0x1a0,&local_e0);
          if ((undefined *)((long)local_e0 + -0x18) != puVar9) {
            piVar25 = (int *)((long)local_e0 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar11 = *piVar25;
              *piVar25 = iVar11 + -1;
            }
            else {
              do {
                iVar11 = *piVar25;
                cVar3 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                if (bVar10) {
                  *piVar25 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if (iVar11 < 1) {
              operator_delete((undefined *)((long)local_e0 + -0x18));
            }
          }
        }
      }
      else {
        if (plVar32 != (long *)0x0) {
          plVar32[1] = plVar32[1] + 1;
        }
        FUN_0066a528(&local_e0,lVar35 + 8);
        FUN_0066a528(&local_100,*(long *)psVar22 + 0x1a0);
        pvVar29 = local_100;
        psVar36 = (size_t *)((long)local_100 + -0x18);
        if (*(size_t *)((long)local_e0 + -0x18) == *psVar36) {
          iVar11 = memcmp(local_e0,local_100,*(size_t *)((long)local_e0 + -0x18));
          bVar10 = iVar11 == 0;
        }
        else {
          bVar10 = false;
        }
        if (psVar36 != (size_t *)puVar9) {
          piVar25 = (int *)((long)pvVar29 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar11 = *piVar25;
            *piVar25 = iVar11 + -1;
          }
          else {
            do {
              iVar11 = *piVar25;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar4) {
                *piVar25 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar11 < 1) {
            operator_delete(psVar36);
          }
        }
        if ((undefined *)((long)local_e0 + -0x18) != puVar9) {
          piVar25 = (int *)((long)local_e0 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar11 = *piVar25;
            *piVar25 = iVar11 + -1;
          }
          else {
            do {
              iVar11 = *piVar25;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar4) {
                *piVar25 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar11 < 1) {
            operator_delete((undefined *)((long)local_e0 + -0x18));
          }
        }
        if ((plVar32 != (long *)0x0) &&
           (lVar35 = plVar32[1], plVar32[1] = lVar35 + -1, lVar35 + -1 == 0)) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
          lVar35 = plVar32[2];
          plVar32[2] = lVar35 + -1;
          if (lVar35 + -1 == 0) {
            (**(code **)(*plVar32 + 0x18))(plVar32);
          }
        }
        if (plVar32 == (long *)0x0) goto LAB_0050f79c;
LAB_0050f76c:
        lVar35 = plVar32[1];
        plVar32[1] = lVar35 + -1;
        if (lVar35 + -1 != 0) goto LAB_0050f79c;
        (**(code **)(*plVar32 + 0x10))(plVar32);
        lVar35 = plVar32[2];
        plVar32[2] = lVar35 + -1;
        if (lVar35 + -1 != 0) goto LAB_0050f79c;
        (**(code **)(*plVar32 + 0x18))(plVar32);
        if (bVar10) goto LAB_0050f7a0;
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < *(int *)(this + 0x128));
  }
  pGVar14 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar14);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_e0,pGVar14);
  plVar32 = *(long **)(this + 0x138);
  plVar33 = *(long **)(this + 0x140);
  *(long **)(this + 0x138) = local_e0;
  *(long **)(this + 0x140) = uStack_d8;
  local_e0 = plVar32;
  uStack_d8 = plVar33;
                    /* catch() { ... } // from try @ 0050f8b0 with catch @ 0050f880 */
  if ((plVar33 != (long *)0x0) && (lVar21 = plVar33[1], plVar33[1] = lVar21 + -1, lVar21 + -1 == 0))
  {
    (**(code **)(*plVar33 + 0x10))(plVar33);
    lVar21 = plVar33[2];
                    /* try { // try from 0050f89c to 0060f8af has its CatchHandler @ 0050f8d4 */
    plVar33[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
                    /* try { // try from 0050f8b0 to 0060f8d7 has its CatchHandler @ 0050f880 */
      (**(code **)(*plVar33 + 0x18))(plVar33);
    }
  }
  pGVar14 = *(GUIFrameView **)(this + 0x138);
  psVar15 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 0050f89c with catch @ 0050f8d4 */
  FUN_00666bb8(&local_100,"ui_menu_stripe",&local_120);
  TextureLibrary::TextureForName(psVar15,false);
  GUIFrameView::SetFrameTexture(pGVar14,(intrusive_ptr *)&local_e0,true);
  if ((local_e0 != (long *)0x0) &&
     (iVar11 = (int)local_e0[1] + -1, *(int *)(local_e0 + 1) = iVar11, iVar11 == 0)) {
    (**(code **)(*local_e0 + 8))();
  }
  puVar9 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 0050f978 with catch @ 0050f928 */
  if ((undefined *)((long)local_100 + -0x18) != PTR_DAT_007e5de8) {
    piVar25 = (int *)((long)local_100 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar25;
      *piVar25 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar25;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar10) {
          *piVar25 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)((long)local_100 + -0x18));
    }
  }
  pGVar16 = *(GUIView **)(this + 0x138);
  plVar32 = *(long **)(pGVar16 + 0x100);
  if (plVar32 != (long *)0x0) {
    *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
  }
  local_e0 = *(long **)(pGVar16 + 0x74);
  uStack_d8 = *(long **)((long)plVar32 + 0x54);
                    /* try { // try from 0050f95c to 0060f95f has its CatchHandler @ 0050f96c */
  GUIView::SetFrame(pGVar16,(Rectangle *)&local_e0);
  iVar11 = (int)plVar32[1] + -1;
                    /* catch() { ... } // from try @ 0050f95c with catch @ 0050f96c */
  *(int *)(plVar32 + 1) = iVar11;
                    /* try { // try from 0050f970 to 0060f977 has its CatchHandler @ 0050f980 */
  if (iVar11 == 0) {
                    /* try { // try from 0050f978 to 0060f983 has its CatchHandler @ 0050f928 */
                    /* catch() { ... } // from try @ 0050f970 with catch @ 0050f980 */
    (**(code **)(*plVar32 + 8))(plVar32);
  }
                    /* try { // try from 0050f984 to 0060f9f3 has its CatchHandler @ 0050f984
                       catch() { ... } // from try @ 0050f984 with catch @ 0050f984
                       catch() { ... } // from try @ 0050fa10 with catch @ 0050f984
                       catch() { ... } // from try @ 0050fa80 with catch @ 0050f984
                       catch() { ... } // from try @ 0050fb28 with catch @ 0050f984
                       catch() { ... } // from try @ 0050fb9c with catch @ 0050f984 */
  local_e0 = *(long **)(this + 0x138);
  pcVar24 = *(code **)(*(long *)this + 0x60);
  uStack_d8 = *(long **)(this + 0x140);
  if (uStack_d8 != (long *)0x0) {
    uStack_d8[1] = uStack_d8[1] + 1;
  }
  (*pcVar24)(this,&local_e0);
  plVar32 = uStack_d8;
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
                    /* try { // try from 0050f9f4 to 0060fa0f has its CatchHandler @ 0050fb90 */
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  pGVar17 = operator_new(0x150);
  GUILabel::GUILabel(pGVar17);
                    /* try { // try from 0050fa10 to 0060fa7b has its CatchHandler @ 0050f984 */
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_e0,pGVar17);
  lVar21 = *(long *)(this + 0x148);
  plVar32 = *(long **)(this + 0x150);
  *(long **)(this + 0x148) = local_e0;
  *(long **)(this + 0x150) = uStack_d8;
  local_e0 = (long *)lVar21;
  uStack_d8 = plVar32;
  if ((plVar32 != (long *)0x0) && (lVar21 = plVar32[1], plVar32[1] = lVar21 + -1, lVar21 + -1 == 0))
  {
    (**(code **)(*plVar32 + 0x10))(plVar32);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  pGVar17 = *(GUILabel **)(this + 0x148);
                    /* try { // try from 0050fa7c to 0060fa7f has its CatchHandler @ 0050fb7c */
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
                    /* try { // try from 0050fa80 to 0060fb23 has its CatchHandler @ 0050f984 */
  FontLibrary::DefaultFont(this_00);
  if (local_e0 != (long *)*(long *)(pGVar17 + 0xf0)) {
    if (uStack_d8 != (long *)0x0) {
      uStack_d8[1] = uStack_d8[1] + 1;
    }
    plVar32 = *(long **)(pGVar17 + 0xf8);
    *(long **)(pGVar17 + 0xf0) = local_e0;
    *(long **)(pGVar17 + 0xf8) = uStack_d8;
    if ((plVar32 != (long *)0x0) &&
       (lVar21 = plVar32[1], plVar32[1] = lVar21 + -1, lVar21 + -1 == 0)) {
      (**(code **)(*plVar32 + 0x10))(plVar32);
      lVar21 = plVar32[2];
      plVar32[2] = lVar21 + -1;
      if (lVar21 + -1 == 0) {
        (**(code **)(*plVar32 + 0x18))(plVar32);
      }
    }
    GUILabel::UpdateText(pGVar17);
  }
  plVar32 = uStack_d8;
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
                    /* try { // try from 0050fb24 to 0060fb27 has its CatchHandler @ 0050fb78 */
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
                    /* try { // try from 0050fb28 to 0060fb93 has its CatchHandler @ 0050f984 */
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  pGVar17 = *(GUILabel **)(this + 0x148);
                    /* catch() { ... } // from try @ 0050fb24 with catch @ 0050fb78 */
  if ((((pGVar17[0x108] != (GUILabel)0xff) || (pGVar17[0x109] != (GUILabel)0xff)) ||
      (pGVar17[0x10a] != (GUILabel)0xff)) || (pGVar17[0x10b] != (GUILabel)0xff)) {
                    /* catch() { ... } // from try @ 0050fa7c with catch @ 0050fb7c */
    plVar32 = *(long **)(pGVar17 + 0x118);
    *(undefined4 *)(pGVar17 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar17 + 0x110) = 0;
    *(undefined8 *)(pGVar17 + 0x118) = 0;
                    /* catch() { ... } // from try @ 0050f9f4 with catch @ 0050fb90 */
                    /* try { // try from 0050fb94 to 0060fb9b has its CatchHandler @ 0050fba4 */
                    /* try { // try from 0050fb9c to 0060fba7 has its CatchHandler @ 0050f984 */
    if ((plVar32 != (long *)0x0) &&
       (lVar21 = plVar32[1], plVar32[1] = lVar21 + -1, lVar21 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0050fb94 with catch @ 0050fba4 */
                    /* catch() { ... } // from try @ 0050fc04 with catch @ 0050fba8
                       catch() { ... } // from try @ 0050fc20 with catch @ 0050fba8 */
      (**(code **)(*plVar32 + 0x10))(plVar32);
      lVar21 = plVar32[2];
      plVar32[2] = lVar21 + -1;
      if (lVar21 + -1 == 0) {
        (**(code **)(*plVar32 + 0x18))(plVar32);
      }
    }
    GUILabel::UpdateText(pGVar17);
    pGVar17 = *(GUILabel **)(this + 0x148);
  }
  uVar2 = DAT_00683728;
  pGVar17[0x140] = (GUILabel)0x1;
                    /* try { // try from 0050fbec to 0060fc03 has its CatchHandler @ 0050fc14 */
  *(undefined4 *)(pGVar17 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar17 + 0x148) = uVar2;
  GUILabel::UpdateText(pGVar17);
                    /* try { // try from 0050fc04 to 0060fc17 has its CatchHandler @ 0050fba8 */
  pGVar17 = *(GUILabel **)(this + 0x148);
  *(undefined4 *)(pGVar17 + 0x130) = 0;
  GUILabel::UpdateBounds(pGVar17);
  plVar32 = *(long **)(this + 0x138);
                    /* catch() { ... } // from try @ 0050fbec with catch @ 0050fc14 */
  local_e0 = *(long **)(this + 0x148);
                    /* try { // try from 0050fc18 to 0060fc1f has its CatchHandler @ 0050fc28 */
  pcVar24 = *(code **)(*plVar32 + 0x60);
                    /* try { // try from 0050fc20 to 0060fc2b has its CatchHandler @ 0050fba8 */
  uStack_d8 = *(long **)(this + 0x150);
                    /* catch() { ... } // from try @ 0050fc18 with catch @ 0050fc28 */
  if (uStack_d8 != (long *)0x0) {
    uStack_d8[1] = uStack_d8[1] + 1;
  }
  (*pcVar24)(plVar32,&local_e0);
  plVar32 = uStack_d8;
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
                    /* catch() { ... } // from try @ 0050fd0c with catch @ 0050fc8c */
  pGVar17 = *(GUILabel **)(this + 0x148);
  FUN_00666bb8(&local_e0,"Trinkets",local_110);
  pvVar29 = local_e0;
  psVar36 = (size_t *)((long)local_e0 + -0x18);
  __n = (intrusive_ptr *)*psVar36;
  if ((__n != *(intrusive_ptr **)((long)*(void **)(pGVar17 + 0x100) + -0x18)) ||
     (iVar11 = memcmp(local_e0,*(void **)(pGVar17 + 0x100),(size_t)__n), iVar11 != 0)) {
                    /* try { // try from 0050fcd0 to 0060fce7 has its CatchHandler @ 0050fd00 */
    FUN_0066a6a8(pGVar17 + 0x100,&local_e0);
    GUILabel::UpdateText(pGVar17);
    psVar36 = (size_t *)((long)local_e0 + -0x18);
    pvVar29 = local_e0;
  }
                    /* try { // try from 0050fce8 to 0060fcef has its CatchHandler @ 0050fd14 */
  if (psVar36 != (size_t *)puVar9) {
    piVar25 = (int *)((long)pvVar29 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar25;
      *piVar25 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar25;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar10) {
          *piVar25 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(psVar36);
    }
  }
                    /* catch() { ... } // from try @ 0050fcd0 with catch @ 0050fd00 */
                    /* try { // try from 0050fd04 to 0060fd0b has its CatchHandler @ 0050fd10 */
                    /* try { // try from 0050fd0c to 0060fd27 has its CatchHandler @ 0050fc8c */
                    /* catch() { ... } // from try @ 0050fd04 with catch @ 0050fd10 */
  fVar38 = *(float *)(*(long *)(*(GUIView **)(this + 0x148) + 0xf0) + 0x48);
                    /* catch() { ... } // from try @ 0050fce8 with catch @ 0050fd14 */
  local_e0 = (long *)CONCAT44((int)(((*(float *)(*(long *)(this + 0x138) + 0x88) +
                                     *(float *)(*(long *)(this + 0x138) + 0x90) * 0.5) -
                                    fVar38 * 0.5) + 1.0),0x42f00000);
  uStack_d8 = (long *)CONCAT44(fVar38,0x42c80000);
  GUIView::SetFrame(*(GUIView **)(this + 0x148),(Rectangle *)&local_e0);
  local_100 = (long *)0x0;
  local_110[0] = (long *)0x0;
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)&local_100,(intrusive_ptr *)local_110,__n);
  if (uStack_d8 != (long *)0x0) {
    uStack_d8[1] = uStack_d8[1] + 1;
  }
  plVar32 = *(long **)(this + 0x170);
  *(long **)(this + 0x168) = local_e0;
  *(long **)(this + 0x170) = uStack_d8;
  if ((plVar32 != (long *)0x0) && (lVar21 = plVar32[1], plVar32[1] = lVar21 + -1, lVar21 + -1 == 0))
  {
    (**(code **)(*plVar32 + 0x10))(plVar32);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  plVar32 = uStack_d8;
                    /* try { // try from 0050fdc4 to 0060ff43 has its CatchHandler @ 0050fdc4
                       catch() { ... } // from try @ 0050fdc4 with catch @ 0050fdc4
                       catch() { ... } // from try @ 0050ff48 with catch @ 0050fdc4
                       catch() { ... } // from try @ 005100dc with catch @ 0050fdc4 */
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  if ((local_110[0] != (long *)0x0) &&
     (iVar11 = (int)local_110[0][1] + -1, *(int *)(local_110[0] + 1) = iVar11, iVar11 == 0)) {
    (**(code **)(*local_110[0] + 8))();
  }
  if ((local_100 != (long *)0x0) &&
     (iVar11 = (int)local_100[1] + -1, *(int *)(local_100 + 1) = iVar11, iVar11 == 0)) {
    (**(code **)(*local_100 + 8))();
  }
  this_02 = *(GUIButton **)(this + 0x168);
  psVar15 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_100,"ui_button_help",&local_120);
  TextureLibrary::TextureForName(psVar15,false);
  GUIButton::SetImage(this_02,(intrusive_ptr *)&local_e0);
  if ((local_e0 != (long *)0x0) &&
     (iVar11 = (int)local_e0[1] + -1, *(int *)(local_e0 + 1) = iVar11, iVar11 == 0)) {
    (**(code **)(*local_e0 + 8))();
  }
  if (local_100 + -3 != (long *)puVar9) {
    plVar32 = local_100 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = (int)*plVar32;
      *(int *)plVar32 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = (int)*plVar32;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar10) {
          *(int *)plVar32 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_100 + -3);
    }
  }
  this_01 = *(GUIView **)(this + 0x168);
  uStack_d8 = (long *)_UNK_0068ebd8;
  local_e0 = (long *)_DAT_0068ebd0;
  local_c8[0] = _UNK_0068ebe8;
  local_d0 = _DAT_0068ebe0;
  local_c8[2] = (InventoryView *)_UNK_0068ebf8;
  local_c8[1] = (InventoryView *)_DAT_0068ebf0;
  pGVar16 = this_01 + 0x198;
  pGVar28 = pGVar16;
  if (pGVar16 <= this_01 + 0x15c) {
    pGVar28 = this_01 + 0x15c;
  }
  uVar18 = ((ulong)(pGVar28 + (-0x159 - (long)this_01)) >> 2) + 1;
  uStack_a8 = _UNK_00683808;
  local_c8[3] = (InventoryView *)_DAT_00683800;
  if (uVar18 < 8) {
    pGVar27 = this_01 + 0x158;
    puVar12 = &local_e0;
  }
  else {
    uVar30 = uVar18 & 0x7ffffffffffffff8;
    puVar12 = (undefined8 *)((long)&local_e0 + uVar30 * 4);
    pGVar28 = this_01 + 0x168;
                    /* try { // try from 0050ff44 to 0060ff47 has its CatchHandler @ 0051025c */
    pGVar27 = this_01 + uVar30 * 4 + 0x158;
                    /* try { // try from 0050ff48 to 006100d7 has its CatchHandler @ 0050fdc4 */
    plVar32 = &local_d0;
    uVar31 = uVar30;
    do {
      plVar33 = plVar32 + -1;
      lVar21 = plVar32[-2];
      lVar37 = plVar32[1];
      lVar35 = *plVar32;
      uVar31 = uVar31 - 8;
      plVar32 = plVar32 + 4;
      *(long *)(pGVar28 + -8) = *plVar33;
      *(long *)(pGVar28 + -0x10) = lVar21;
      *(long *)(pGVar28 + 8) = lVar37;
      *(long *)pGVar28 = lVar35;
      pGVar28 = pGVar28 + 0x20;
    } while (uVar31 != 0);
    if (uVar18 == uVar30) goto LAB_0050ff80;
  }
  do {
    pGVar28 = pGVar27 + 4;
    *(undefined4 *)pGVar27 = *(undefined4 *)puVar12;
    pGVar27 = pGVar28;
    puVar12 = (undefined8 *)((long)puVar12 + 4);
  } while (pGVar28 < pGVar16);
LAB_0050ff80:
  local_e0 = *(long **)(this_01 + 0x74);
  uStack_d8 = (long *)&DAT_4208000042080000;
  GUIView::SetFrame(this_01,(Rectangle *)&local_e0);
  lVar21 = *(long *)(this + 0x168);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar21 + 0x84),5.0);
  *(long **)(lVar21 + 0x9c) = uStack_d8;
  *(long **)(lVar21 + 0x94) = local_e0;
  pGVar16 = *(GUIView **)(this + 0x168);
  uStack_d8 = *(long **)(pGVar16 + 0x7c);
  local_e0 = (long *)CONCAT44((int)((*(float *)(*(long *)(this + 0x138) + 0x88) +
                                    *(float *)(*(long *)(this + 0x138) + 0x90) * 0.5) -
                                   *(float *)(pGVar16 + 0x80) * 0.5),0x43c80000);
  GUIView::SetFrame(pGVar16,(Rectangle *)&local_e0);
  pGVar34 = *(GUIControl **)(this + 0x168);
  local_e0 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  local_100 = (long *)PTR_ButtonPressed_007e4f00;
  local_f0 = this;
  uVar18 = boost::detail::function::has_empty_target(&local_100);
  if ((uVar18 & 1) == 0) {
    local_c8[0] = local_f0;
    local_d0 = (long)plStack_f8;
    uStack_d8 = local_100;
    local_e0 = (long *)PTR_stored_vtable_007e5358;
  }
  else {
    local_e0 = (long *)(undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar34,this,&local_e0,0x40);
  if (((local_e0 != (long *)0x0) && (((ulong)local_e0 & 1) == 0)) &&
     (*(code **)((ulong)local_e0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_e0 & 0xfffffffffffffffe))(&uStack_d8,&uStack_d8,2);
  }
  plVar32 = *(long **)(this + 0x138);
  local_e0 = *(long **)(this + 0x168);
  pcVar24 = *(code **)(*plVar32 + 0x60);
  uStack_d8 = *(long **)(this + 0x170);
  if (uStack_d8 != (long *)0x0) {
    uStack_d8[1] = uStack_d8[1] + 1;
  }
  (*pcVar24)(plVar32,&local_e0);
  plVar32 = uStack_d8;
                    /* try { // try from 005100d8 to 006100db has its CatchHandler @ 00510260 */
                    /* try { // try from 005100dc to 00610273 has its CatchHandler @ 0050fdc4 */
  if ((uStack_d8 != (long *)0x0) &&
     (lVar21 = uStack_d8[1], uStack_d8[1] = lVar21 + -1, lVar21 + -1 == 0)) {
    (**(code **)(*uStack_d8 + 0x10))(uStack_d8);
    lVar21 = plVar32[2];
    plVar32[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  *(undefined4 *)(this + 0x158) = 3;
  puVar12 = operator_new__(0x38);
  *puVar12 = 3;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[2] = 0;
  puVar12[1] = 0;
  psVar26 = *(shared_ptr **)(this + 0x160);
  *(undefined8 **)(this + 0x160) = puVar12 + 1;
  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryTrinketSlot>>(psVar26);
  FUN_00666bb8(&local_e0,"firetrinket",&local_100);
  FUN_00666bb8(&uStack_d8,0x68eb35,local_110);
  FUN_00666bb8(&local_d0,"shadowtrinket",&local_120);
  fVar8 = DAT_00694114;
  fVar7 = DAT_00694110;
  fVar6 = DAT_00684314;
  fVar38 = DAT_00683734;
  if (*(int *)(this + 0x158) < 1) {
    bVar10 = false;
  }
  else {
    lVar21 = 0;
    bVar10 = false;
    do {
      lVar35 = *(long *)(this + 0x160);
      pIVar19 = operator_new(0x160);
      InventoryTrinketSlot::InventoryTrinketSlot(pIVar19);
      boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>
                ((shared_ptr<Caver::InventoryTrinketSlot> *)&local_100,pIVar19);
      puVar12 = (undefined8 *)(lVar35 + lVar21 * 0x10);
      pvVar29 = (void *)*puVar12;
      lVar35 = lVar35 + lVar21 * 0x10;
      *puVar12 = local_100;
      plVar32 = *(long **)(lVar35 + 8);
      *(long **)(lVar35 + 8) = plStack_f8;
      local_100 = pvVar29;
      plStack_f8 = plVar32;
      if ((plVar32 != (long *)0x0) &&
         (lVar35 = plVar32[1], plVar32[1] = lVar35 + -1, lVar35 + -1 == 0)) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        lVar35 = plVar32[2];
        plVar32[2] = lVar35 + -1;
        if (lVar35 + -1 == 0) {
          (**(code **)(*plVar32 + 0x18))(plVar32);
        }
      }
      lVar35 = lVar21 * 0x10;
      pIVar19 = *(InventoryTrinketSlot **)(*(long *)(this + 0x160) + lVar35);
      *(InventoryView **)(pIVar19 + 0xf8) = this + 0x100;
      InventoryTrinketSlot::Init(pIVar19,psVar22,fVar6);
      uVar18 = CharacterState::HasItemWithName
                         ((CharacterState *)(*(long *)psVar22 + 0x10),(string *)(&local_e0 + lVar21)
                         );
      if ((uVar18 & 1) != 0) {
        pIVar19 = *(InventoryTrinketSlot **)(*(long *)(this + 0x160) + lVar35);
        GameData::ItemForName((string *)**(undefined8 **)(this + 0x118));
        InventoryTrinketSlot::SetTrinket(pIVar19,(shared_ptr *)&local_100);
        plVar32 = plStack_f8;
        if ((plStack_f8 != (long *)0x0) &&
           (lVar37 = plStack_f8[1], plStack_f8[1] = lVar37 + -1, lVar37 + -1 == 0)) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          lVar37 = plVar32[2];
          plVar32[2] = lVar37 + -1;
          if (lVar37 + -1 == 0) {
            (**(code **)(*plVar32 + 0x18))(plVar32);
          }
        }
                    /* catch() { ... } // from try @ 005105e0 with catch @ 005105b0 */
        lVar23 = *(long *)(*(long *)(*(long *)(this + 0x160) + lVar35) + 0x110);
        lVar37 = *(long *)(lVar23 + 0x100);
        plVar32 = *(long **)(lVar23 + 0x108);
        if (plVar32 != (long *)0x0) {
                    /* try { // try from 005105cc to 006105df has its CatchHandler @ 00510604 */
          plVar32[1] = plVar32[1] + 1;
        }
        if (lVar37 == 0) {
                    /* catch() { ... } // from try @ 00510684 with catch @ 0051063c */
          bVar10 = false;
        }
        else {
          if (plVar32 != (long *)0x0) {
                    /* try { // try from 005105e0 to 00610607 has its CatchHandler @ 005105b0 */
            plVar32[1] = plVar32[1] + 1;
          }
          FUN_0066a528(&local_100,lVar37 + 8);
          FUN_0066a528(local_110,*(long *)psVar22 + 0x1a0);
          plVar33 = local_110[0];
                    /* catch() { ... } // from try @ 005105cc with catch @ 00510604 */
          psVar36 = (size_t *)(local_110[0] + -3);
          if (*(size_t *)((long)local_100 + -0x18) == *psVar36) {
            iVar11 = memcmp(local_100,local_110[0],*(size_t *)((long)local_100 + -0x18));
            bVar10 = iVar11 == 0;
          }
          else {
            bVar10 = false;
          }
          if (psVar36 != (size_t *)puVar9) {
            plVar33 = plVar33 + -1;
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar11 = (int)*plVar33;
              *(int *)plVar33 = iVar11 + -1;
            }
            else {
              do {
                iVar11 = (int)*plVar33;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar4) {
                  *(int *)plVar33 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if (iVar11 < 1) {
              operator_delete(psVar36);
            }
          }
          if ((undefined *)((long)local_100 + -0x18) != puVar9) {
            piVar25 = (int *)((long)local_100 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar11 = *piVar25;
              *piVar25 = iVar11 + -1;
            }
            else {
              do {
                iVar11 = *piVar25;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                if (bVar4) {
                  *piVar25 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if (iVar11 < 1) {
              operator_delete((undefined *)((long)local_100 + -0x18));
            }
          }
                    /* catch() { ... } // from try @ 00510668 with catch @ 00510678 */
          if ((plVar32 != (long *)0x0) &&
             (lVar37 = plVar32[1], plVar32[1] = lVar37 + -1, lVar37 + -1 == 0)) {
                    /* try { // try from 0051067c to 00610683 has its CatchHandler @ 0051068c */
                    /* try { // try from 00510684 to 0061068f has its CatchHandler @ 0051063c */
            (**(code **)(*plVar32 + 0x10))(plVar32);
                    /* catch() { ... } // from try @ 0051067c with catch @ 0051068c */
            lVar37 = plVar32[2];
                    /* try { // try from 00510690 to 006106ef has its CatchHandler @ 00510690
                       catch() { ... } // from try @ 00510690 with catch @ 00510690
                       catch() { ... } // from try @ 0051070c with catch @ 00510690
                       catch() { ... } // from try @ 0051077c with catch @ 00510690
                       catch() { ... } // from try @ 005107ec with catch @ 00510690 */
            plVar32[2] = lVar37 + -1;
            if (lVar37 + -1 == 0) {
              (**(code **)(*plVar32 + 0x18))(plVar32);
            }
          }
        }
        if ((plVar32 != (long *)0x0) &&
           (lVar37 = plVar32[1], plVar32[1] = lVar37 + -1, lVar37 + -1 == 0)) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
          lVar37 = plVar32[2];
          plVar32[2] = lVar37 + -1;
          if (lVar37 + -1 == 0) {
            (**(code **)(*plVar32 + 0x18))(plVar32);
          }
        }
                    /* try { // try from 005106f0 to 0061070b has its CatchHandler @ 005107e0 */
        if (bVar10) {
          lVar37 = *(long *)(*(long *)(*(long *)(this + 0x160) + lVar35) + 0x110);
          plVar32 = *(long **)(*(long *)(*(long *)(this + 0x160) + lVar35) + 0x118);
          if (plVar32 == (long *)0x0) {
            *(undefined1 *)(lVar37 + 0x278) = 1;
          }
          else {
            lVar23 = plVar32[1];
                    /* try { // try from 0051070c to 00610777 has its CatchHandler @ 00510690 */
            *(undefined1 *)(lVar37 + 0x278) = 1;
            plVar32[1] = lVar23;
            if (lVar23 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
              lVar37 = plVar32[2];
              plVar32[2] = lVar37 + -1;
              if (lVar37 + -1 == 0) {
                (**(code **)(*plVar32 + 0x18))(plVar32);
              }
            }
          }
          lVar37 = *(long *)psVar22;
          FUN_00666bb8(&local_100,&DAT_0068fbeb,&local_120);
          FUN_0066a6a8(lVar37 + 0x1a0,&local_100);
                    /* try { // try from 00510778 to 0061077b has its CatchHandler @ 005107cc */
                    /* try { // try from 0051077c to 006107e3 has its CatchHandler @ 00510690 */
          if ((undefined *)((long)local_100 + -0x18) != puVar9) {
            piVar25 = (int *)((long)local_100 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar11 = *piVar25;
              *piVar25 = iVar11 + -1;
            }
            else {
              do {
                iVar11 = *piVar25;
                cVar3 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                if (bVar10) {
                  *piVar25 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if (iVar11 < 1) {
              operator_delete((undefined *)((long)local_100 + -0x18));
            }
          }
        }
        bVar10 = true;
      }
      plVar32 = *(long **)(this + 0x138);
      puVar12 = (undefined8 *)(*(long *)(this + 0x160) + lVar21 * 0x10);
      local_100 = (long *)*puVar12;
      pcVar24 = *(code **)(*plVar32 + 0x60);
      plStack_f8 = (long *)puVar12[1];
      if (plStack_f8 != (long *)0x0) {
        plStack_f8[1] = plStack_f8[1] + 1;
      }
      (*pcVar24)(plVar32,&local_100);
      plVar32 = plStack_f8;
                    /* catch() { ... } // from try @ 00510778 with catch @ 005107cc */
      if ((plStack_f8 != (long *)0x0) &&
         (lVar37 = plStack_f8[1], plStack_f8[1] = lVar37 + -1, lVar37 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005106f0 with catch @ 005107e0 */
                    /* try { // try from 005107e4 to 006107eb has its CatchHandler @ 005107f4 */
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                    /* try { // try from 005107ec to 006107f7 has its CatchHandler @ 00510690 */
        lVar37 = plVar32[2];
                    /* catch() { ... } // from try @ 005107e4 with catch @ 005107f4 */
        plVar32[2] = lVar37 + -1;
                    /* catch() { ... } // from try @ 00510840 with catch @ 005107f8
                       catch() { ... } // from try @ 0051085c with catch @ 005107f8 */
        if (lVar37 + -1 == 0) {
          (**(code **)(*plVar32 + 0x18))(plVar32);
        }
      }
      pGVar16 = *(GUIView **)(*(long *)(this + 0x160) + lVar35);
      plStack_f8 = *(long **)(pGVar16 + 0x7c);
                    /* try { // try from 0051083c to 0061083f has its CatchHandler @ 00510850 */
                    /* try { // try from 00510840 to 00610853 has its CatchHandler @ 005107f8 */
      local_100 = (long *)CONCAT44((int)((*(float *)(*(long *)(this + 0x138) + 0x88) +
                                         *(float *)(*(long *)(this + 0x138) + 0x90) * 0.5) -
                                        *(float *)(pGVar16 + 0x80) * 0.5),
                                   (float)(int)lVar21 * fVar7 + fVar8);
                    /* catch() { ... } // from try @ 0051083c with catch @ 00510850 */
                    /* try { // try from 00510854 to 0061085b has its CatchHandler @ 00510864 */
      GUIView::SetFrame(pGVar16,(Rectangle *)&local_100);
                    /* try { // try from 0051085c to 00610867 has its CatchHandler @ 005107f8 */
      lVar37 = *(long *)(*(long *)(this + 0x160) + lVar35);
                    /* catch() { ... } // from try @ 00510854 with catch @ 00510864 */
      Rectangle::RectangleByOutsetting((Rectangle *)(lVar37 + 0x84),10.0);
      *(long **)(lVar37 + 0x9c) = plStack_f8;
      *(long **)(lVar37 + 0x94) = local_100;
      pRVar20 = *(Rectangle **)(this + 0x138);
      pRVar1 = pRVar20 + 0x94;
      if (*(float *)(pRVar20 + 0x9c) <= fVar38) {
        pRVar1 = pRVar20 + 0x84;
      }
                    /* catch() { ... } // from try @ 00510900 with catch @ 00510894 */
      plStack_f8 = *(long **)(pRVar1 + 8);
      local_100 = *(long **)pRVar1;
      lVar35 = *(long *)(*(long *)(this + 0x160) + lVar35);
      puVar12 = (undefined8 *)(lVar35 + 0x94);
      if (*(float *)(lVar35 + 0x9c) <= fVar38) {
        puVar12 = (undefined8 *)(lVar35 + 0x84);
      }
      uStack_118 = puVar12[1];
      local_120 = *puVar12;
      GUIView::ConvertRectFromView(pRVar20,(GUIView *)&local_120);
      Rectangle::ExpandToincludeRectangle((Rectangle *)&local_100,(Rectangle *)local_110);
                    /* try { // try from 005108d8 to 006108db has its CatchHandler @ 005108f4 */
      lVar35 = *(long *)(this + 0x138);
                    /* try { // try from 005108dc to 006108e3 has its CatchHandler @ 00510908 */
      lVar21 = lVar21 + 1;
      *(long **)(lVar35 + 0x9c) = plStack_f8;
      *(long **)(lVar35 + 0x94) = local_100;
    } while (lVar21 < *(int *)(this + 0x158));
  }
  UpdateTrinketHighlights(this);
  if (!bVar10) {
    *(undefined1 *)(*(long *)(this + 0x168) + 0xe4) = 1;
    *(undefined1 *)(*(long *)(this + 0x148) + 0xe4) = 1;
  }
  if ((undefined *)(local_d0 + -0x18) != puVar9) {
    piVar25 = (int *)(local_d0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 005108f8 to 006108ff has its CatchHandler @ 00510904 */
      iVar11 = *piVar25;
                    /* try { // try from 00510900 to 0061091b has its CatchHandler @ 00510894 */
      *piVar25 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar25;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar10) {
          *piVar25 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 005108f8 with catch @ 00510904 */
                    /* catch() { ... } // from try @ 005108dc with catch @ 00510908 */
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_d0 + -0x18));
    }
  }
  if (uStack_d8 + -3 != (long *)puVar9) {
    plVar32 = uStack_d8 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = (int)*plVar32;
      *(int *)plVar32 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = (int)*plVar32;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar10) {
          *(int *)plVar32 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(uStack_d8 + -3);
    }
  }
  if ((undefined *)((long)local_e0 + -0x18) != puVar9) {
    piVar25 = (int *)((long)local_e0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar25;
      *piVar25 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar25;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar10) {
          *piVar25 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)((long)local_e0 + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0050ff44 with catch @ 0051025c */
                    /* catch() { ... } // from try @ 005100d8 with catch @ 00510260 */
  return;
}


