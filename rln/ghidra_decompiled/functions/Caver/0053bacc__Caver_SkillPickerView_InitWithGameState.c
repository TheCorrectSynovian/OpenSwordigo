/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053bacc
 * Function: Caver::SkillPickerView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(SkillPickerView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall Caver::SkillPickerView::InitWithGameState(SkillPickerView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  float fVar7;
  undefined *puVar8;
  MenuItemSlot *pMVar9;
  bool bVar10;
  int iVar11;
  GUILabel *pGVar12;
  FontLibrary *pFVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  MenuItemSlot *pMVar16;
  GUIView *this_00;
  ulong uVar17;
  long lVar18;
  shared_ptr *psVar19;
  int *piVar20;
  code *pcVar21;
  long lVar22;
  long *plVar23;
  size_t *psVar24;
  ulong uVar25;
  bool bVar26;
  void *pvVar27;
  ulong uVar28;
  long *plVar29;
  undefined *puVar30;
  void *local_130;
  float local_128;
  float fStack_124;
  undefined8 local_120;
  undefined8 local_118;
  GUILabel *local_110;
  long *local_108;
  MenuItemSlot *local_100;
  long *local_f8;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  long *local_e0;
  long *local_d8;
  MenuItemSlot *local_d0;
  long *local_c8;
  undefined1 auStack_c0 [8];
  void *local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  uVar1 = *(undefined8 *)param_1;
  lVar18 = *(long *)(param_1 + 8);
  if (lVar18 != 0) {
    *(long *)(lVar18 + 8) = *(long *)(lVar18 + 8) + 1;
  }
  plVar23 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(long *)(this + 0x108) = lVar18;
  if ((plVar23 != (long *)0x0) && (lVar18 = plVar23[1], plVar23[1] = lVar18 + -1, lVar18 + -1 == 0))
  {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar18 = plVar23[2];
    plVar23[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  pGVar12 = operator_new(0x150);
  GUILabel::GUILabel(pGVar12);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_b8,pGVar12);
  pvVar27 = *(void **)(this + 0x110);
  plVar23 = *(long **)(this + 0x118);
  *(void **)(this + 0x110) = local_b8;
  *(long **)(this + 0x118) = local_b0;
  local_b8 = pvVar27;
  local_b0 = plVar23;
  if ((plVar23 != (long *)0x0) && (lVar18 = plVar23[1], plVar23[1] = lVar18 + -1, lVar18 + -1 == 0))
  {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar18 = plVar23[2];
    plVar23[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  pGVar12 = *(GUILabel **)(this + 0x110);
  pFVar13 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(pFVar13);
  if (local_b8 != *(void **)(pGVar12 + 0xf0)) {
    if (local_b0 != (long *)0x0) {
      local_b0[1] = local_b0[1] + 1;
    }
    plVar23 = *(long **)(pGVar12 + 0xf8);
    *(void **)(pGVar12 + 0xf0) = local_b8;
    *(long **)(pGVar12 + 0xf8) = local_b0;
    if ((plVar23 != (long *)0x0) &&
       (lVar18 = plVar23[1], plVar23[1] = lVar18 + -1, lVar18 + -1 == 0)) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      lVar18 = plVar23[2];
      plVar23[2] = lVar18 + -1;
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
    GUILabel::UpdateText(pGVar12);
  }
  plVar23 = local_b0;
  if ((local_b0 != (long *)0x0) &&
     (lVar18 = local_b0[1], local_b0[1] = lVar18 + -1, lVar18 + -1 == 0)) {
    (**(code **)(*local_b0 + 0x10))(local_b0);
    lVar18 = plVar23[2];
    plVar23[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  pGVar12 = *(GUILabel **)(this + 0x110);
  if ((((pGVar12[0x108] != (GUILabel)0xff) || (pGVar12[0x109] != (GUILabel)0xff)) ||
      (pGVar12[0x10a] != (GUILabel)0xff)) || (pGVar12[0x10b] != (GUILabel)0xff)) {
    plVar23 = *(long **)(pGVar12 + 0x118);
    *(undefined4 *)(pGVar12 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar12 + 0x110) = 0;
    *(undefined8 *)(pGVar12 + 0x118) = 0;
    if ((plVar23 != (long *)0x0) &&
       (lVar18 = plVar23[1], plVar23[1] = lVar18 + -1, lVar18 + -1 == 0)) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      lVar18 = plVar23[2];
      plVar23[2] = lVar18 + -1;
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
    GUILabel::UpdateText(pGVar12);
    pGVar12 = *(GUILabel **)(this + 0x110);
  }
  uVar1 = DAT_00683728;
  pGVar12[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar12 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar12 + 0x148) = uVar1;
  GUILabel::UpdateText(pGVar12);
  pGVar12 = *(GUILabel **)(this + 0x110);
  *(undefined4 *)(pGVar12 + 0x130) = 4;
  GUILabel::UpdateBounds(pGVar12);
  pGVar12 = *(GUILabel **)(this + 0x110);
  FUN_00666bb8(&local_b8,"Choose a spell",&local_e0);
  pvVar27 = local_b8;
  psVar24 = (size_t *)((long)local_b8 + -0x18);
  if ((*psVar24 != *(size_t *)((long)*(void **)(pGVar12 + 0x100) + -0x18)) ||
     (iVar11 = memcmp(local_b8,*(void **)(pGVar12 + 0x100),*psVar24), iVar11 != 0)) {
    FUN_0066a6a8(pGVar12 + 0x100,&local_b8);
    GUILabel::UpdateText(pGVar12);
    psVar24 = (size_t *)((long)local_b8 + -0x18);
    pvVar27 = local_b8;
  }
  puVar8 = PTR_DAT_007e5de8;
  if (psVar24 != (size_t *)PTR_DAT_007e5de8) {
    piVar20 = (int *)((long)pvVar27 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar20;
                    /* try { // try from 0053c888 to 0063cae7 has its CatchHandler @ 0053c81c */
      *piVar20 = iVar11 + -1;
    }
    else {
      do {
                    /* try { // try from 0053c86c to 0063c887 has its CatchHandler @ 0053cae4 */
        iVar11 = *piVar20;
        cVar2 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar26) {
          *piVar20 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(psVar24);
    }
  }
  *(undefined4 *)(this + 0x120) = 4;
  puVar14 = operator_new__(0x48);
  *puVar14 = 4;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[2] = 0;
  puVar14[1] = 0;
  psVar19 = *(shared_ptr **)(this + 0x128);
  *(undefined8 **)(this + 0x128) = puVar14 + 1;
  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(psVar19);
  iVar11 = *(int *)(this + 0x120);
  uVar28 = (ulong)iVar11;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar28;
  uVar25 = uVar28 * 0x10;
  uVar17 = uVar25 + 8;
  if (SUB168(auVar4 * ZEXT816(0x10),8) != 0 || 0xfffffffffffffff7 < uVar25) {
    uVar17 = 0xffffffffffffffff;
  }
  puVar15 = operator_new__(uVar17);
  *puVar15 = uVar28;
  if (iVar11 != 0) {
    memset(puVar15 + 1,0,uVar25);
  }
  psVar19 = *(shared_ptr **)(this + 0x130);
  *(ulong **)(this + 0x130) = puVar15 + 1;
  boost::checked_array_delete<boost::shared_ptr<Caver::GUILabel>>(psVar19);
  iVar11 = *(int *)(this + 0x120);
  uVar28 = (ulong)iVar11;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar28;
  uVar25 = uVar28 * 0x10;
  uVar17 = uVar25 + 8;
  if (SUB168(auVar5 * ZEXT816(0x10),8) != 0 || 0xfffffffffffffff7 < uVar25) {
    uVar17 = 0xffffffffffffffff;
  }
  puVar15 = operator_new__(uVar17);
  *puVar15 = uVar28;
  if (iVar11 != 0) {
    memset(puVar15 + 1,0,uVar25);
  }
  psVar19 = *(shared_ptr **)(this + 0x138);
  *(ulong **)(this + 0x138) = puVar15 + 1;
  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(psVar19);
  FUN_00666bb8(&local_b8,"bolt",&local_d0);
  FUN_00666bb8(&local_b0,"bomb",&local_e0);
  FUN_00666bb8(&local_a8,"hookshot",&local_f0);
  FUN_00666bb8(&local_a0,"dimension",&local_100);
  fVar7 = DAT_00688018;
  if (0 < *(int *)(this + 0x120)) {
    lVar18 = 0;
    puVar30 = PTR_pthread_create_007e4e78;
    do {
      pMVar16 = operator_new(0x280);
      MenuItemSlot::MenuItemSlot(pMVar16);
      boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>
                ((shared_ptr<Caver::MenuItemSlot> *)&local_d0,pMVar16);
      *(SkillPickerView **)(local_d0 + 0xf0) = this + 0xf0;
      MenuItemSlot::Init(local_d0,1.0);
      local_d0[0x120] = (MenuItemSlot)0x0;
      this_00 = operator_new(0xf0);
      GUIView::GUIView(this_00);
      boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>
                ((shared_ptr<Caver::GUIView> *)&local_e0,this_00);
      local_ec = *(undefined4 *)(local_d0 + 0x78);
      local_e4 = *(undefined4 *)(local_d0 + 0x80);
      local_f0 = *(float *)(local_d0 + 0x74) + fVar7;
      local_e8 = (*(float *)(local_d0 + 0x74) + *(float *)(local_d0 + 0x7c)) - local_f0;
      (**(code **)(*local_e0 + 0xf8))(local_e0,&local_f0);
      pcVar21 = *(code **)(*local_e0 + 0x60);
      local_100 = local_d0;
      local_f8 = local_c8;
      if (local_c8 != (long *)0x0) {
        local_c8[1] = local_c8[1] + 1;
      }
      (*pcVar21)(local_e0,&local_100);
      plVar23 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar22 = local_f8[1], local_f8[1] = lVar22 + -1, lVar22 + -1 == 0)) {
        (**(code **)(*local_f8 + 0x10))(local_f8);
        lVar22 = plVar23[2];
        plVar23[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar23 + 0x18))(plVar23);
        }
      }
      plVar23 = (long *)(*(long *)(this + 0x128) + lVar18 * 0x10);
      if (local_c8 != (long *)0x0) {
        local_c8[1] = local_c8[1] + 1;
      }
      plVar29 = (long *)plVar23[1];
      *plVar23 = (long)local_d0;
      plVar23[1] = (long)local_c8;
      if ((plVar29 != (long *)0x0) &&
         (lVar22 = plVar29[1], plVar29[1] = lVar22 + -1, lVar22 + -1 == 0)) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        lVar22 = plVar29[2];
        plVar29[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar29 + 0x18))(plVar29);
        }
      }
      puVar14 = (undefined8 *)(*(long *)(this + 0x138) + lVar18 * 0x10);
      if (local_d8 != (long *)0x0) {
        local_d8[1] = local_d8[1] + 1;
      }
      plVar23 = (long *)puVar14[1];
      *puVar14 = local_e0;
      puVar14[1] = local_d8;
      if ((plVar23 != (long *)0x0) &&
         (lVar22 = plVar23[1], plVar23[1] = lVar22 + -1, lVar22 + -1 == 0)) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        lVar22 = plVar23[2];
        plVar23[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar23 + 0x18))(plVar23);
        }
      }
      (**(code **)(*(long *)this + 0x60))(this,&local_e0);
      uVar17 = CharacterState::HasSkillWithName
                         ((CharacterState *)(*(long *)param_1 + 0x10),(string *)(&local_b8 + lVar18)
                         );
      if ((uVar17 & 1) == 0) {
        bVar26 = false;
      }
      else {
        GameData::SkillForName((string *)**(undefined8 **)param_1);
        MenuItemSlot::SetSkill(local_d0,(shared_ptr *)&local_100,true);
        local_d0[0x120] = (MenuItemSlot)0x1;
        local_d0[0x122] = (MenuItemSlot)0x1;
        pGVar12 = operator_new(0x150);
        GUILabel::GUILabel(pGVar12);
        boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
                  ((shared_ptr<Caver::GUILabel> *)&local_110,pGVar12);
        pGVar12 = local_110;
        pFVar13 = (FontLibrary *)FontLibrary::sharedLibrary();
        FontLibrary::SmallDefaultFont(pFVar13);
        if (local_120 != *(void **)(pGVar12 + 0xf0)) {
          if (local_118 != (long *)0x0) {
            local_118[1] = local_118[1] + 1;
          }
          plVar23 = *(long **)(pGVar12 + 0xf8);
          *(GUILabel **)(pGVar12 + 0xf0) = local_120;
          *(long **)(pGVar12 + 0xf8) = local_118;
          if ((plVar23 != (long *)0x0) &&
             (lVar22 = plVar23[1], plVar23[1] = lVar22 + -1, lVar22 + -1 == 0)) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
            lVar22 = plVar23[2];
            plVar23[2] = lVar22 + -1;
            if (lVar22 + -1 == 0) {
              (**(code **)(*plVar23 + 0x18))(plVar23);
            }
          }
          GUILabel::UpdateText(pGVar12);
        }
        if ((local_118 != (long *)0x0) &&
           (lVar22 = local_118[1], local_118[1] = lVar22 + -1, lVar22 + -1 == 0)) {
          (**(code **)(*local_118 + 0x10))(local_118);
          lVar22 = local_118[2];
          local_118[2] = lVar22 + -1;
          if (lVar22 + -1 == 0) {
            (**(code **)(*local_118 + 0x18))(local_118);
          }
        }
        local_110[0x140] = (GUILabel)0x1;
        *(undefined4 *)(local_110 + 0x141) = 0xff000000;
        *(undefined8 *)(local_110 + 0x148) = uVar1;
        GUILabel::UpdateText(local_110);
        pGVar12 = local_110;
        FUN_0066a528(&local_120,local_100 + 8);
        pvVar27 = local_120;
        psVar24 = (size_t *)((long)local_120 + -0x18);
        if ((*psVar24 != *(size_t *)((long)*(void **)(pGVar12 + 0x100) + -0x18)) ||
           (iVar11 = memcmp(local_120,*(void **)(pGVar12 + 0x100),*psVar24), iVar11 != 0)) {
          FUN_0066a6a8(pGVar12 + 0x100,&local_120);
          GUILabel::UpdateText(pGVar12);
          psVar24 = (size_t *)((long)local_120 + -0x18);
          pvVar27 = local_120;
        }
        if (psVar24 != (size_t *)puVar8) {
          piVar20 = (int *)((long)pvVar27 + -8);
          if (puVar30 == (undefined *)0x0) {
            iVar11 = *piVar20;
            *piVar20 = iVar11 + -1;
          }
          else {
            do {
              iVar11 = *piVar20;
              cVar2 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar26) {
                *piVar20 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar11 < 1) {
            operator_delete(psVar24);
          }
        }
        pcVar21 = *(code **)(*local_e0 + 0x60);
        local_120 = local_110;
        local_118 = local_108;
        if (local_108 != (long *)0x0) {
          local_108[1] = local_108[1] + 1;
        }
        (*pcVar21)(local_e0,&local_120);
        plVar23 = local_118;
        if ((local_118 != (long *)0x0) &&
           (lVar22 = local_118[1], local_118[1] = lVar22 + -1, lVar22 + -1 == 0)) {
          (**(code **)(*local_118 + 0x10))(local_118);
          lVar22 = plVar23[2];
          plVar23[2] = lVar22 + -1;
          if (lVar22 + -1 == 0) {
            (**(code **)(*plVar23 + 0x18))(plVar23);
          }
        }
        puVar14 = (undefined8 *)(*(long *)(this + 0x130) + lVar18 * 0x10);
        if (local_108 != (long *)0x0) {
          local_108[1] = local_108[1] + 1;
        }
        plVar23 = (long *)puVar14[1];
        *puVar14 = local_110;
        puVar14[1] = local_108;
        if ((plVar23 != (long *)0x0) &&
           (lVar22 = plVar23[1], plVar23[1] = lVar22 + -1, lVar22 + -1 == 0)) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          lVar22 = plVar23[2];
          plVar23[2] = lVar22 + -1;
          if (lVar22 + -1 == 0) {
            (**(code **)(*plVar23 + 0x18))(plVar23);
          }
        }
                    /* catch() { ... } // from try @ 0053c6b8 with catch @ 0053c688 */
        GUILabel::TextSize();
                    /* try { // try from 0053c6a4 to 0063c6b7 has its CatchHandler @ 0053c6dc */
        local_118 = (long *)CONCAT44(fStack_124,local_128);
                    /* try { // try from 0053c6b8 to 0063c6df has its CatchHandler @ 0053c688 */
        local_120 = (GUILabel *)
                    CONCAT44((int)((*(float *)(local_e0 + 0x11) + *(float *)(local_e0 + 0x12) * 0.5)
                                  - fStack_124 * 0.5),
                             (*(float *)(local_d0 + 0x74) + -10.0) - local_128);
        GUIView::SetFrame((GUIView *)local_110,(Rectangle *)&local_120);
        pMVar9 = local_100;
        pMVar16 = *(MenuItemSlot **)(*(long *)param_1 + 0x68);
        plVar23 = *(long **)(*(long *)param_1 + 0x70);
                    /* catch() { ... } // from try @ 0053c6a4 with catch @ 0053c6dc */
        if (plVar23 == (long *)0x0) {
          if (local_100 != pMVar16) goto LAB_0053c724;
LAB_0053bf7c:
          bVar26 = true;
          *(int *)(this + 0x140) = (int)lVar18;
        }
        else {
          if (plVar23[1] == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
            lVar22 = plVar23[2];
            plVar23[2] = lVar22 + -1;
            if (lVar22 + -1 == 0) {
              (**(code **)(*plVar23 + 0x18))(plVar23);
            }
          }
          if (pMVar9 == pMVar16) goto LAB_0053bf7c;
LAB_0053c724:
          bVar26 = false;
        }
        FUN_0066a528(&local_120,local_100);
        FUN_0066a528(&local_130,*(long *)(this + 0x100) + 0x1a8);
        pvVar27 = local_130;
        psVar24 = (size_t *)((long)local_130 + -0x18);
        if (*(size_t *)((long)local_120 + -0x18) == *psVar24) {
          iVar11 = memcmp(local_120,local_130,*(size_t *)((long)local_120 + -0x18));
          bVar10 = iVar11 == 0;
        }
        else {
          bVar10 = false;
        }
        if (psVar24 != (size_t *)puVar8) {
          piVar20 = (int *)((long)pvVar27 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar11 = *piVar20;
            *piVar20 = iVar11 + -1;
          }
          else {
            do {
              iVar11 = *piVar20;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar3) {
                *piVar20 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar11 < 1) {
            operator_delete(psVar24);
          }
        }
        if ((undefined *)((long)local_120 + -0x18) != puVar8) {
          piVar20 = (int *)((long)local_120 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar11 = *piVar20;
            *piVar20 = iVar11 + -1;
          }
          else {
            do {
              iVar11 = *piVar20;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar3) {
                *piVar20 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar11 < 1) {
            operator_delete((undefined *)((long)local_120 + -0x18));
          }
        }
        if (bVar10) {
          local_d0[0x278] = (MenuItemSlot)0x1;
          lVar22 = *(long *)(this + 0x100);
          FUN_00666bb8(&local_120,&DAT_0068fbeb,auStack_c0);
          FUN_0066a6a8(lVar22 + 0x1a8,&local_120);
          if ((undefined *)((long)local_120 + -0x18) != puVar8) {
            piVar20 = (int *)((long)local_120 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar11 = *piVar20;
              *piVar20 = iVar11 + -1;
            }
            else {
              do {
                iVar11 = *piVar20;
                cVar2 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                if (bVar10) {
                  *piVar20 = iVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar11 < 1) {
              operator_delete((undefined *)((long)local_120 + -0x18));
            }
          }
        }
        plVar23 = local_108;
        puVar30 = PTR_pthread_create_007e4e78;
        if ((local_108 != (long *)0x0) &&
           (lVar22 = local_108[1], local_108[1] = lVar22 + -1, lVar22 + -1 == 0)) {
          (**(code **)(*local_108 + 0x10))(local_108);
          lVar22 = plVar23[2];
          plVar23[2] = lVar22 + -1;
          if (lVar22 + -1 == 0) {
            (**(code **)(*plVar23 + 0x18))(plVar23);
          }
        }
        plVar23 = local_f8;
        if ((local_f8 != (long *)0x0) &&
           (lVar22 = local_f8[1], local_f8[1] = lVar22 + -1, lVar22 + -1 == 0)) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
          lVar22 = plVar23[2];
          plVar23[2] = lVar22 + -1;
          if (lVar22 + -1 == 0) {
            (**(code **)(*plVar23 + 0x18))(plVar23);
          }
        }
      }
      SetSlotSelected(this,(int)lVar18,bVar26);
      plVar23 = local_d8;
                    /* catch() { ... } // from try @ 0053c810 with catch @ 0053c74c */
      if ((local_d8 != (long *)0x0) &&
         (lVar22 = local_d8[1], local_d8[1] = lVar22 + -1, lVar22 + -1 == 0)) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
        lVar22 = plVar23[2];
        plVar23[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar23 + 0x18))(plVar23);
        }
      }
      plVar23 = local_c8;
      if ((local_c8 != (long *)0x0) &&
         (lVar22 = local_c8[1], local_c8[1] = lVar22 + -1, lVar22 + -1 == 0)) {
        (**(code **)(*local_c8 + 0x10))(local_c8);
                    /* try { // try from 0053c7b0 to 0063c7b3 has its CatchHandler @ 0053c7c4 */
        lVar22 = plVar23[2];
        plVar23[2] = lVar22 + -1;
        if (lVar22 + -1 == 0) {
                    /* catch() { ... } // from try @ 0053c7b0 with catch @ 0053c7c4 */
          (**(code **)(*plVar23 + 0x18))(plVar23);
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(this + 0x120));
  }
  if ((undefined *)(local_a0 + -0x18) != puVar8) {
    piVar20 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar20;
      *piVar20 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar20;
        cVar2 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar26) {
          *piVar20 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  if ((undefined *)(local_a8 + -0x18) != puVar8) {
    piVar20 = (int *)(local_a8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar20;
      *piVar20 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar20;
        cVar2 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar26) {
          *piVar20 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_a8 + -0x18));
    }
  }
                    /* try { // try from 0053c808 to 0063c80f has its CatchHandler @ 0053c818 */
  if (local_b0 + -3 != (long *)puVar8) {
    plVar23 = local_b0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = (int)*plVar23;
      *(int *)plVar23 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = (int)*plVar23;
        cVar2 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar26) {
          *(int *)plVar23 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_b0 + -3);
    }
  }
                    /* try { // try from 0053c810 to 0063c81b has its CatchHandler @ 0053c74c */
                    /* catch() { ... } // from try @ 0053c808 with catch @ 0053c818 */
                    /* try { // try from 0053c81c to 0063c86b has its CatchHandler @ 0053c81c
                       catch(type#1 @ 00000000) { ... } // from try @ 0053c81c with catch @ 0053c81c
                       catch(type#1 @ 00000000) { ... } // from try @ 0053c888 with catch @ 0053c81c
                       catch(type#1 @ 00000000) { ... } // from try @ 0053caf0 with catch @ 0053c81c
                        */
  if ((undefined *)((long)local_b8 + -0x18) != puVar8) {
    piVar20 = (int *)((long)local_b8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar20;
      *piVar20 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar20;
        cVar2 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar26) {
          *piVar20 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)((long)local_b8 + -0x18));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


