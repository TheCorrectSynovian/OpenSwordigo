/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005304b8
 * Function: Caver::QuestsView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(QuestsView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestsView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall Caver::QuestsView::InitWithGameState(QuestsView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  LabelGroup *pLVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  float fVar7;
  undefined *puVar8;
  GUIScrollView *this_00;
  long *plVar9;
  undefined8 *puVar10;
  GUIFrameView *pGVar11;
  long lVar12;
  new_allocator<Caver::QuestsView::LabelGroup> *this_01;
  long lVar13;
  code *pcVar14;
  GUILabel *pGVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  GUILabel GVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long *plVar25;
  long lVar26;
  undefined *puVar27;
  GameState *this_02;
  long *plVar28;
  string *psVar29;
  long lVar30;
  GUILabel *local_120;
  long *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  long local_108;
  long local_100;
  GUILabel *local_f8;
  long *local_f0;
  undefined8 local_e8;
  long *plStack_e0;
  long *local_d8;
  GUILabel *pGStack_d0;
  long *local_c8;
  GUILabel *pGStack_c0;
  long *local_b8;
  GUILabel *local_b0;
  long *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  GUILabel *local_98;
  long *local_90;
  long local_88 [2];
  long local_78;
  
                    /* try { // try from 005304b8 to 006304bf has its CatchHandler @ 005304c8 */
                    /* try { // try from 005304c0 to 006304cb has its CatchHandler @ 005303c4 */
                    /* catch() { ... } // from try @ 005304b8 with catch @ 005304c8 */
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  uVar1 = *(undefined8 *)param_1;
  lVar13 = *(long *)(param_1 + 8);
  if (lVar13 != 0) {
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
  }
  plVar25 = *(long **)(this + 0x100);
  *(undefined8 *)(this + 0xf8) = uVar1;
  *(long *)(this + 0x100) = lVar13;
  if ((plVar25 != (long *)0x0) && (lVar13 = plVar25[1], plVar25[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    lVar13 = plVar25[2];
    plVar25[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  this_00 = operator_new(0x1f0);
  GUIScrollView::GUIScrollView(this_00);
  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>
            ((shared_ptr<Caver::GUIScrollView> *)&local_e8,this_00);
  uVar1 = *(undefined8 *)(this + 0x108);
  plVar25 = *(long **)(this + 0x110);
  *(GUILabel **)(this + 0x108) = local_e8;
  *(long **)(this + 0x110) = plStack_e0;
  if ((plVar25 != (long *)0x0) && (lVar13 = plVar25[1], plVar25[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    local_e8 = (GUILabel *)uVar1;
    plStack_e0 = plVar25;
    (**(code **)(*plVar25 + 0x10))(plVar25);
    lVar13 = plVar25[2];
    plVar25[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  local_e8 = *(GUILabel **)(this + 0x108);
  pcVar14 = *(code **)(*(long *)this + 0x60);
  plStack_e0 = *(long **)(this + 0x110);
  if (plStack_e0 != (long *)0x0) {
    plStack_e0[1] = plStack_e0[1] + 1;
  }
  (*pcVar14)(this,&local_e8);
  plVar25 = plStack_e0;
                    /* catch() { ... } // from try @ 00530624 with catch @ 00530610 */
  if ((plStack_e0 != (long *)0x0) &&
     (lVar13 = plStack_e0[1], plStack_e0[1] = lVar13 + -1, lVar13 + -1 == 0)) {
                    /* try { // try from 00530620 to 00630623 has its CatchHandler @ 00530634 */
                    /* try { // try from 00530624 to 00630647 has its CatchHandler @ 00530610 */
    (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
    lVar13 = plVar25[2];
    plVar25[2] = lVar13 + -1;
                    /* catch() { ... } // from try @ 00530620 with catch @ 00530634 */
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  GameState::GetAllCompletedQuests(*(GameState **)(this + 0xf8),(vector *)(this + 0x118));
  GameState::GetAllQuestsInProgress(*(GameState **)(this + 0xf8),(vector *)(this + 0x118));
  puVar8 = PTR_DAT_007e5de8;
  fVar7 = DAT_00683484;
  plVar25 = *(long **)(this + 0x118);
  plVar28 = *(long **)(this + 0x120);
  if (plVar25 != plVar28) {
    do {
      lVar13 = *plVar25;
      psVar29 = (string *)**(undefined8 **)(this + 0xf8);
      FUN_0066a528(&local_98,lVar13);
      GameData::QuestForName(psVar29);
      if (local_98 + -0x18 != (GUILabel *)puVar8) {
        pGVar15 = local_98 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar18 = *(int *)pGVar15;
          *(int *)pGVar15 = iVar18 + -1;
        }
        else {
          do {
            iVar18 = *(int *)pGVar15;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
            if (bVar5) {
              *(int *)pGVar15 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar18 < 1) {
          operator_delete(local_98 + -0x18);
        }
      }
      if (local_e8 != (GUILabel *)0x0) {
        FUN_0066a528(local_88,local_e8 + 0x10);
        plVar9 = (long *)(local_88[0] + -0x18);
        lVar30 = *plVar9;
        if (plVar9 != (long *)puVar8) {
          piVar16 = (int *)(local_88[0] + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar18 = *piVar16;
            *piVar16 = iVar18 + -1;
          }
          else {
            do {
              iVar18 = *piVar16;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar5) {
                *piVar16 = iVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar18 < 1) {
            operator_delete(plVar9);
          }
        }
        if (lVar30 != 0) {
          FUN_0066a528(&local_f8,local_e8 + 0x10);
          FUN_0035a030(&local_b0,"Quest: ",&local_f8);
          local_9c = 0xffffffff;
          local_a0 = 0xff000000;
          GameInterfaceBuilder::NormalLabel
                    ((GameInterfaceBuilder *)&local_98,&local_b0,&local_9c,&local_a0);
          if (local_b0 + -0x18 != (GUILabel *)puVar8) {
            pGVar15 = local_b0 + -8;
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar18 = *(int *)pGVar15;
              *(int *)pGVar15 = iVar18 + -1;
            }
            else {
              do {
                iVar18 = *(int *)pGVar15;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
                if (bVar5) {
                  *(int *)pGVar15 = iVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if (iVar18 < 1) {
              operator_delete(local_b0 + -0x18);
            }
          }
          if (local_f8 + -0x18 == (GUILabel *)puVar8) {
LAB_005308c8:
            cVar3 = *(char *)(lVar13 + 8);
            pGVar15 = local_98;
          }
          else {
            pGVar15 = local_f8 + -8;
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar18 = *(int *)pGVar15;
              *(int *)pGVar15 = iVar18 + -1;
            }
            else {
              do {
                iVar18 = *(int *)pGVar15;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
                if (bVar5) {
                  *(int *)pGVar15 = iVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if (0 < iVar18) goto LAB_005308c8;
            operator_delete(local_f8 + -0x18);
            cVar3 = *(char *)(lVar13 + 8);
            pGVar15 = local_98;
          }
          local_98 = pGVar15;
          if (cVar3 != '\0') {
            uVar19 = (uint)((float)(byte)pGVar15[0x108] * fVar7);
            uVar21 = (uint)((float)(byte)pGVar15[0x109] * fVar7);
            uVar23 = (uint)((float)(byte)pGVar15[0x10a] * fVar7);
            if (0xfe < (int)uVar19) {
              uVar19 = 0xff;
            }
            if (0xfe < (int)uVar21) {
              uVar21 = 0xff;
            }
            if (0xfe < (int)uVar23) {
              uVar23 = 0xff;
            }
            if ((((pGVar15[0x10b] != (GUILabel)0xff) ||
                 ((uint)(byte)pGVar15[0x108] != (uVar19 & 0xff))) ||
                ((uint)(byte)pGVar15[0x109] != (uVar21 & 0xff))) ||
               ((uint)(byte)pGVar15[0x10a] != (uVar23 & 0xff))) {
              plVar9 = *(long **)(pGVar15 + 0x118);
              *(uint *)(pGVar15 + 0x108) =
                   uVar19 & 0xff | (uVar21 & 0xff) << 8 | uVar23 << 0x10 | 0xff000000;
              *(undefined8 *)(pGVar15 + 0x110) = 0;
              *(undefined8 *)(pGVar15 + 0x118) = 0;
              if ((plVar9 != (long *)0x0) &&
                 (lVar30 = plVar9[1], plVar9[1] = lVar30 + -1, lVar30 + -1 == 0)) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
                lVar30 = plVar9[2];
                plVar9[2] = lVar30 + -1;
                if (lVar30 + -1 == 0) {
                  (**(code **)(*plVar9 + 0x18))(plVar9);
                }
              }
              GUILabel::UpdateText(pGVar15);
            }
          }
          plVar9 = *(long **)(this + 0x108);
          pcVar14 = *(code **)(*plVar9 + 0x60);
          local_b0 = local_98;
          local_a8 = local_90;
          if (local_90 != (long *)0x0) {
            local_90[1] = local_90[1] + 1;
          }
          (*pcVar14)(plVar9,&local_b0);
          plVar9 = local_a8;
          if ((local_a8 != (long *)0x0) &&
             (lVar30 = local_a8[1], local_a8[1] = lVar30 + -1, lVar30 + -1 == 0)) {
            (**(code **)(*local_a8 + 0x10))(local_a8);
            lVar30 = plVar9[2];
            plVar9[2] = lVar30 + -1;
            if (lVar30 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
          FUN_0066a528(&local_b0,lVar13);
          puVar10 = (undefined8 *)
                    std::
                    map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
                    ::operator[]((map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
                                  *)(this + 0x160),(string *)&local_b0);
          if (local_90 != (long *)0x0) {
            local_90[1] = local_90[1] + 1;
          }
          plVar9 = (long *)puVar10[1];
          *puVar10 = local_98;
          puVar10[1] = local_90;
          if ((plVar9 != (long *)0x0) &&
             (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            lVar13 = plVar9[2];
            plVar9[2] = lVar13 + -1;
            if (lVar13 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
          plVar9 = local_90;
          if (local_b0 + -0x18 != (GUILabel *)puVar8) {
            pGVar15 = local_b0 + -8;
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar18 = *(int *)pGVar15;
              *(int *)pGVar15 = iVar18 + -1;
            }
            else {
              do {
                iVar18 = *(int *)pGVar15;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
                if (bVar5) {
                  *(int *)pGVar15 = iVar18 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if (iVar18 < 1) {
              operator_delete(local_b0 + -0x18);
              plVar9 = local_90;
            }
          }
          local_90 = plVar9;
          if ((plVar9 != (long *)0x0) &&
             (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            lVar13 = plVar9[2];
            plVar9[2] = lVar13 + -1;
            if (lVar13 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
        }
      }
      plVar9 = plStack_e0;
      if ((plStack_e0 != (long *)0x0) &&
         (lVar13 = plStack_e0[1], plStack_e0[1] = lVar13 + -1, lVar13 + -1 == 0)) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        lVar13 = plVar9[2];
        plVar9[2] = lVar13 + -1;
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      plVar25 = plVar25 + 1;
    } while (plVar25 != plVar28);
  }
  puVar8 = PTR_DAT_007e5de8;
  fVar7 = DAT_00683484;
  if (0 < (int)((ulong)(*(long *)(*(long *)param_1 + 0x1b8) - *(long *)(*(long *)param_1 + 0x1b0))
               >> 4)) {
    lVar13 = 0;
    puVar27 = PTR_pthread_create_007e4e78;
    do {
      pGVar11 = operator_new(0x110);
      GUIFrameView::GUIFrameView(pGVar11);
      boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
                ((shared_ptr<Caver::GUIFrameView> *)&local_98,pGVar11);
      pGVar15 = local_98;
      psVar29 = (string *)TextureLibrary::sharedLibrary();
      FUN_00666bb8(&local_b0,"textbubble_border",&local_120);
      TextureLibrary::TextureForName(psVar29,SUB81(&local_b0,0));
      GUIFrameView::SetFrameTexture((GUIFrameView *)pGVar15,(intrusive_ptr *)&local_e8,false);
      if ((local_e8 != (GUILabel *)0x0) &&
         (iVar18 = *(int *)(local_e8 + 8), *(int *)(local_e8 + 8) = iVar18 + -1, iVar18 + -1 == 0))
      {
        (**(code **)(*(long *)local_e8 + 8))();
      }
      if (local_b0 + -0x18 != (GUILabel *)puVar8) {
        pGVar15 = local_b0 + -8;
        if (puVar27 == (undefined *)0x0) {
          iVar18 = *(int *)pGVar15;
          *(int *)pGVar15 = iVar18 + -1;
        }
        else {
          do {
            iVar18 = *(int *)pGVar15;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
            if (bVar5) {
              *(int *)pGVar15 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar18 < 1) {
          operator_delete(local_b0 + -0x18);
        }
      }
      plVar25 = *(long **)(this + 0x108);
      pcVar14 = *(code **)(*plVar25 + 0x60);
      local_e8 = local_98;
      plStack_e0 = local_90;
      if (local_90 != (long *)0x0) {
        local_90[1] = local_90[1] + 1;
      }
      (*pcVar14)(plVar25,&local_e8);
      plVar25 = plStack_e0;
      if ((plStack_e0 != (long *)0x0) &&
         (lVar30 = plStack_e0[1], plStack_e0[1] = lVar30 + -1, lVar30 + -1 == 0)) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        lVar30 = plVar25[2];
        plVar25[2] = lVar30 + -1;
        if (lVar30 + -1 == 0) {
          (**(code **)(*plVar25 + 0x18))(plVar25);
        }
      }
      pGVar11 = operator_new(0x110);
      GUIFrameView::GUIFrameView(pGVar11);
      boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
                ((shared_ptr<Caver::GUIFrameView> *)&local_b0,pGVar11);
      pGVar15 = local_b0;
      psVar29 = (string *)TextureLibrary::sharedLibrary();
      FUN_00666bb8(&local_f8,"textbubble_peg",&local_100);
      TextureLibrary::TextureForName(psVar29,SUB81(&local_f8,0));
      GUIFrameView::SetFrameTexture((GUIFrameView *)pGVar15,(intrusive_ptr *)&local_e8,true);
      if ((local_e8 != (GUILabel *)0x0) &&
         (iVar18 = *(int *)(local_e8 + 8), *(int *)(local_e8 + 8) = iVar18 + -1, iVar18 + -1 == 0))
      {
        (**(code **)(*(long *)local_e8 + 8))();
      }
      if (local_f8 + -0x18 != (GUILabel *)puVar8) {
        pGVar15 = local_f8 + -8;
        if (puVar27 == (undefined *)0x0) {
          iVar18 = *(int *)pGVar15;
          *(int *)pGVar15 = iVar18 + -1;
        }
        else {
          do {
            iVar18 = *(int *)pGVar15;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
            if (bVar5) {
              *(int *)pGVar15 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar18 < 1) {
          operator_delete(local_f8 + -0x18);
        }
      }
      plVar25 = *(long **)(local_b0 + 0x100);
      if (plVar25 != (long *)0x0) {
        *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
      }
      plStack_e0 = *(long **)((long)plVar25 + 0x54);
      local_e8 = (GUILabel *)0x0;
      GUIView::SetFrame((GUIView *)local_b0,(Rectangle *)&local_e8);
      iVar18 = (int)plVar25[1] + -1;
      *(int *)(plVar25 + 1) = iVar18;
      if (iVar18 == 0) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
      pcVar14 = *(code **)(*(long *)local_98 + 0x60);
      local_e8 = local_b0;
      plStack_e0 = local_a8;
      if (local_a8 != (long *)0x0) {
        local_a8[1] = local_a8[1] + 1;
      }
      (*pcVar14)(local_98,&local_e8);
      plVar25 = plStack_e0;
      if ((plStack_e0 != (long *)0x0) &&
         (lVar30 = plStack_e0[1], plStack_e0[1] = lVar30 + -1, lVar30 + -1 == 0)) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        lVar30 = plVar25[2];
        plVar25[2] = lVar30 + -1;
        if (lVar30 + -1 == 0) {
          (**(code **)(*plVar25 + 0x18))(plVar25);
        }
      }
      this_02 = *(GameState **)param_1;
      plVar25 = (long *)(*(long *)(this_02 + 0x1b0) + lVar13 * 0x10);
      lVar30 = *plVar25;
      plVar25 = (long *)plVar25[1];
      if (plVar25 != (long *)0x0) {
        plVar25[1] = plVar25[1] + 1;
      }
      FUN_0066a528(&local_e8,lVar30);
      lVar12 = GameState::StateForQuestWithName(this_02,(string *)&local_e8);
      if (local_e8 + -0x18 != (GUILabel *)puVar8) {
        pGVar15 = local_e8 + -8;
        if (puVar27 == (undefined *)0x0) {
          iVar18 = *(int *)pGVar15;
          *(int *)pGVar15 = iVar18 + -1;
        }
        else {
          do {
            iVar18 = *(int *)pGVar15;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
            if (bVar5) {
              *(int *)pGVar15 = iVar18 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar18 < 1) {
          operator_delete(local_e8 + -0x18);
        }
      }
      if (lVar12 != 0) {
        cVar3 = *(char *)(lVar12 + 8);
        local_e8._4_4_ = (undefined4)((ulong)local_e8 >> 0x20);
        if (cVar3 == '\0') {
          local_e8 = (GUILabel *)CONCAT44(local_e8._4_4_,0xffcccccc);
          GUIFrameView::SetFrameColor((GUIFrameView *)local_98,(Color *)&local_e8);
          GUIFrameView::SetFrameColor((GUIFrameView *)local_b0,(Color *)&local_e8);
        }
        else {
          local_e8 = (GUILabel *)CONCAT44(local_e8._4_4_,0xff4c4c4c);
          GUIFrameView::SetFrameColor((GUIFrameView *)local_98,(Color *)&local_e8);
          GUIFrameView::SetFrameColor((GUIFrameView *)local_b0,(Color *)&local_e8);
        }
        local_d8 = (long *)0x0;
        plStack_e0 = (long *)0x0;
        local_e8 = (GUILabel *)0x0;
        if (local_90 != (long *)0x0) {
          local_90[1] = local_90[1] + 1;
        }
        pGStack_d0 = local_98;
        local_c8 = local_90;
        if (local_a8 != (long *)0x0) {
          local_a8[1] = local_a8[1] + 1;
        }
        pGStack_c0 = local_b0;
        local_b8 = local_a8;
        lVar17 = *(long *)(lVar30 + 8);
                    /* catch() { ... } // from try @ 00531008 with catch @ 00530fd8 */
        if (0 < (int)((ulong)(*(long *)(lVar30 + 0x10) - lVar17) >> 3)) {
          lVar26 = 0;
          do {
                    /* try { // try from 005310c8 to 006310cb has its CatchHandler @ 005310d8 */
            FUN_0066a528(&local_108,lVar17 + lVar26 * 8);
                    /* catch() { ... } // from try @ 005310c8 with catch @ 005310d8 */
                    /* try { // try from 005310dc to 006310e3 has its CatchHandler @ 005310ec */
                    /* try { // try from 005310e4 to 006310ef has its CatchHandler @ 00531088 */
            FUN_0035a030(&local_100,"\'",&local_108);
                    /* catch() { ... } // from try @ 005310dc with catch @ 005310ec */
                    /* try { // try from 005310f0 to 0063119b has its CatchHandler @ 005310f0
                       catch() { ... } // from try @ 005310f0 with catch @ 005310f0
                       catch() { ... } // from try @ 005311a0 with catch @ 005310f0
                       catch() { ... } // from try @ 00531244 with catch @ 005310f0
                       catch() { ... } // from try @ 005312a4 with catch @ 005310f0
                       catch() { ... } // from try @ 00531300 with catch @ 005310f0 */
            FUN_0066a528(&local_120,&local_100);
            FUN_006677d4(&local_120,"\'",1);
            local_10c = 0xffffffff;
            local_110 = 0xff000000;
            GameInterfaceBuilder::NormalLabel
                      ((GameInterfaceBuilder *)&local_f8,&local_120,&local_10c,&local_110);
            if (local_120 + -0x18 != (GUILabel *)puVar8) {
              pGVar15 = local_120 + -8;
                    /* try { // try from 00531008 to 0063102f has its CatchHandler @ 00530fd8 */
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar18 = *(int *)pGVar15;
                *(int *)pGVar15 = iVar18 + -1;
              }
              else {
                do {
                  iVar18 = *(int *)pGVar15;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
                  if (bVar5) {
                    *(int *)pGVar15 = iVar18 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              if (iVar18 < 1) {
                operator_delete(local_120 + -0x18);
              }
            }
            if ((undefined *)(local_100 + -0x18) != puVar8) {
              piVar16 = (int *)(local_100 + -8);
                    /* catch() { ... } // from try @ 00530ff4 with catch @ 0053102c */
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 005310e4 with catch @ 00531088 */
                iVar18 = *piVar16;
                *piVar16 = iVar18 + -1;
              }
              else {
                do {
                  iVar18 = *piVar16;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar5) {
                    *piVar16 = iVar18 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              if (iVar18 < 1) {
                operator_delete((undefined *)(local_100 + -0x18));
              }
            }
            if ((undefined *)(local_108 + -0x18) != puVar8) {
              piVar16 = (int *)(local_108 + -8);
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar18 = *piVar16;
                *piVar16 = iVar18 + -1;
              }
              else {
                do {
                  iVar18 = *piVar16;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                  if (bVar5) {
                    *piVar16 = iVar18 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              if (iVar18 < 1) {
                operator_delete((undefined *)(local_108 + -0x18));
              }
            }
            local_f8[0x138] = (GUILabel)0x1;
            GUILabel::UpdateText(local_f8);
            pGVar15 = local_f8;
                    /* try { // try from 0053119c to 0063119f has its CatchHandler @ 005312e0 */
                    /* try { // try from 005311a0 to 0063123f has its CatchHandler @ 005310f0 */
            if ((((local_f8[0x108] == (GUILabel)0xff) && (local_f8[0x109] == (GUILabel)0xdc)) &&
                (local_f8[0x10a] == (GUILabel)0xaf)) && (local_f8[0x10b] == (GUILabel)0xff)) {
              uVar21 = 0xdc;
              uVar19 = 0xaf;
              GVar20 = (GUILabel)0xff;
                    /* try { // try from 00530ff4 to 00631007 has its CatchHandler @ 0053102c */
            }
            else {
              plVar28 = *(long **)(local_f8 + 0x118);
              *(undefined4 *)(local_f8 + 0x108) = 0xffafdcff;
              *(undefined8 *)(local_f8 + 0x110) = 0;
              *(undefined8 *)(local_f8 + 0x118) = 0;
              if ((plVar28 != (long *)0x0) &&
                 (lVar17 = plVar28[1], plVar28[1] = lVar17 + -1, lVar17 + -1 == 0)) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
                lVar17 = plVar28[2];
                plVar28[2] = lVar17 + -1;
                if (lVar17 + -1 == 0) {
                  (**(code **)(*plVar28 + 0x18))(plVar28);
                }
              }
              GUILabel::UpdateText(pGVar15);
              uVar21 = (uint)(byte)local_f8[0x109];
              uVar19 = (uint)(byte)local_f8[0x10a];
              GVar20 = local_f8[0x10b];
              pGVar15 = local_f8;
            }
            local_f8 = pGVar15;
            if (cVar3 != '\0') {
              uVar22 = (uint)((float)uVar21 * fVar7);
              uVar24 = (uint)((float)uVar19 * fVar7);
                    /* try { // try from 00531240 to 00631243 has its CatchHandler @ 005312dc */
              uVar23 = (uint)((float)(byte)pGVar15[0x108] * fVar7);
                    /* try { // try from 00531244 to 00631287 has its CatchHandler @ 005310f0 */
              if (0xfe < (int)uVar23) {
                uVar23 = 0xff;
              }
              if (0xfe < (int)uVar22) {
                uVar22 = 0xff;
              }
              if (0xfe < (int)uVar24) {
                uVar24 = 0xff;
              }
              if (((GVar20 != (GUILabel)0xff) || (uVar19 != (uVar24 & 0xff))) ||
                 ((uVar21 != (uVar22 & 0xff) || ((uint)(byte)pGVar15[0x108] != (uVar23 & 0xff))))) {
                plVar28 = *(long **)(pGVar15 + 0x118);
                    /* try { // try from 00531288 to 006312a3 has its CatchHandler @ 005312f4 */
                *(uint *)(pGVar15 + 0x108) =
                     uVar23 & 0xff | (uVar22 & 0xff) << 8 | uVar24 << 0x10 | 0xff000000;
                *(undefined8 *)(pGVar15 + 0x110) = 0;
                *(undefined8 *)(pGVar15 + 0x118) = 0;
                    /* try { // try from 005312a4 to 006312f7 has its CatchHandler @ 005310f0 */
                if ((plVar28 != (long *)0x0) &&
                   (lVar17 = plVar28[1], plVar28[1] = lVar17 + -1, lVar17 + -1 == 0)) {
                  (**(code **)(*plVar28 + 0x10))(plVar28);
                  lVar17 = plVar28[2];
                  plVar28[2] = lVar17 + -1;
                  if (lVar17 + -1 == 0) {
                    (**(code **)(*plVar28 + 0x18))(plVar28);
                  }
                }
                    /* catch() { ... } // from try @ 00531240 with catch @ 005312dc */
                    /* catch() { ... } // from try @ 0053119c with catch @ 005312e0 */
                GUILabel::UpdateText(pGVar15);
              }
            }
            if (plStack_e0 == local_d8) {
              std::
              vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
              ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
                               *)&local_e8,plStack_e0,&local_f8);
            }
            else {
                    /* catch() { ... } // from try @ 00531288 with catch @ 005312f4 */
              *plStack_e0 = (long)local_f8;
                    /* try { // try from 005312f8 to 006312ff has its CatchHandler @ 00531308 */
              plStack_e0[1] = (long)local_f0;
                    /* try { // try from 00531300 to 0063130b has its CatchHandler @ 005310f0 */
              if (local_f0 != (long *)0x0) {
                    /* catch() { ... } // from try @ 005312f8 with catch @ 00531308 */
                    /* catch() { ... } // from try @ 00531330 with catch @ 0053130c
                       catch() { ... } // from try @ 0053134c with catch @ 0053130c */
                local_f0[1] = local_f0[1] + 1;
              }
              plStack_e0 = plStack_e0 + 2;
            }
                    /* try { // try from 0053132c to 0063132f has its CatchHandler @ 00531340 */
                    /* try { // try from 00531330 to 00631343 has its CatchHandler @ 0053130c */
            pcVar14 = *(code **)(*(long *)local_98 + 0x60);
            local_120 = local_f8;
            local_118 = local_f0;
            if (local_f0 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0053132c with catch @ 00531340 */
                    /* try { // try from 00531344 to 0063134b has its CatchHandler @ 00531354 */
              local_f0[1] = local_f0[1] + 1;
            }
                    /* try { // try from 0053134c to 00631357 has its CatchHandler @ 0053130c */
            (*pcVar14)(local_98,&local_120);
            plVar28 = local_118;
                    /* catch() { ... } // from try @ 00531344 with catch @ 00531354 */
            if ((local_118 != (long *)0x0) &&
               (lVar17 = local_118[1], local_118[1] = lVar17 + -1, lVar17 + -1 == 0)) {
              (**(code **)(*local_118 + 0x10))(local_118);
              lVar17 = plVar28[2];
              plVar28[2] = lVar17 + -1;
              if (lVar17 + -1 == 0) {
                (**(code **)(*plVar28 + 0x18))(plVar28);
              }
            }
            plVar28 = local_f0;
            if ((local_f0 != (long *)0x0) &&
               (lVar17 = local_f0[1], local_f0[1] = lVar17 + -1, lVar17 + -1 == 0)) {
              (**(code **)(*local_f0 + 0x10))(local_f0);
              lVar17 = plVar28[2];
              plVar28[2] = lVar17 + -1;
              if (lVar17 + -1 == 0) {
                (**(code **)(*plVar28 + 0x18))(plVar28);
              }
            }
            lVar17 = *(long *)(lVar30 + 8);
            lVar26 = lVar26 + 1;
          } while (lVar26 < (int)((ulong)(*(long *)(lVar30 + 0x10) - lVar17) >> 3));
        }
        FUN_0066a528(&local_f8,lVar12);
        puVar27 = PTR_pthread_create_007e4e78;
        this_01 = (new_allocator<Caver::QuestsView::LabelGroup> *)
                  std::
                  map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                  ::operator[]((map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
                                *)(this + 0x130),(string *)&local_f8);
        pLVar2 = *(LabelGroup **)(this_01 + 8);
        if (pLVar2 == *(LabelGroup **)(this_01 + 0x10)) {
          std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::
          _M_insert_aux((vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>
                         *)this_01,pLVar2,&local_e8);
        }
        else {
          __gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct
                    (this_01,pLVar2,(LabelGroup *)&local_e8);
          *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 0x38;
        }
        if (local_f8 + -0x18 != (GUILabel *)puVar8) {
          pGVar15 = local_f8 + -8;
          if (puVar27 == (undefined *)0x0) {
            iVar18 = *(int *)pGVar15;
            *(int *)pGVar15 = iVar18 + -1;
          }
          else {
            do {
              iVar18 = *(int *)pGVar15;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
              if (bVar5) {
                *(int *)pGVar15 = iVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          puVar27 = PTR_pthread_create_007e4e78;
          if (iVar18 < 1) {
            operator_delete(local_f8 + -0x18);
          }
        }
        LabelGroup::~LabelGroup((LabelGroup *)&local_e8);
      }
      if ((plVar25 != (long *)0x0) &&
         (lVar30 = plVar25[1], plVar25[1] = lVar30 + -1, lVar30 + -1 == 0)) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        lVar30 = plVar25[2];
        plVar25[2] = lVar30 + -1;
        if (lVar30 + -1 == 0) {
          (**(code **)(*plVar25 + 0x18))(plVar25);
        }
      }
      plVar25 = local_a8;
      if ((local_a8 != (long *)0x0) &&
         (lVar30 = local_a8[1], local_a8[1] = lVar30 + -1, lVar30 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00531530 with catch @ 005314e0 */
        (**(code **)(*local_a8 + 0x10))(local_a8);
        lVar30 = plVar25[2];
        plVar25[2] = lVar30 + -1;
        if (lVar30 + -1 == 0) {
                    /* try { // try from 00531500 to 00631503 has its CatchHandler @ 00531524 */
                    /* try { // try from 00531504 to 0063150b has its CatchHandler @ 0053151c */
          (**(code **)(*plVar25 + 0x18))(plVar25);
        }
      }
      plVar25 = local_90;
                    /* catch() { ... } // from try @ 00531504 with catch @ 0053151c */
      if ((local_90 != (long *)0x0) &&
         (lVar30 = local_90[1], local_90[1] = lVar30 + -1, lVar30 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00531500 with catch @ 00531524 */
                    /* try { // try from 00531528 to 0063152f has its CatchHandler @ 00531540 */
                    /* try { // try from 00531530 to 00631543 has its CatchHandler @ 005314e0 */
        (**(code **)(*local_90 + 0x10))(local_90);
        lVar30 = plVar25[2];
        plVar25[2] = lVar30 + -1;
                    /* catch() { ... } // from try @ 00531528 with catch @ 00531540 */
        if (lVar30 + -1 == 0) {
          (**(code **)(*plVar25 + 0x18))(plVar25);
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)((ulong)(*(long *)(*(long *)param_1 + 0x1b8) -
                                   *(long *)(*(long *)param_1 + 0x1b0)) >> 4));
  }
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


