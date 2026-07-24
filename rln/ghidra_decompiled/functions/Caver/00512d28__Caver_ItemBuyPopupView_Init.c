/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00512d28
 * Function: Caver::ItemBuyPopupView::Init
 * Signature: undefined __thiscall Init(ItemBuyPopupView * this, shared_ptr * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&, int) */

void __thiscall
Caver::ItemBuyPopupView::Init(ItemBuyPopupView *this,shared_ptr *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  GUILabel GVar5;
  GUILabel GVar6;
  GUILabel GVar7;
  char cVar8;
  long lVar9;
  string *psVar10;
  Sprite *pSVar11;
  GUIButton *pGVar12;
  GUILabel *pGVar13;
  FontLibrary *pFVar14;
  ulong uVar15;
  FontText *pFVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  int *piVar21;
  int iVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  float fVar26;
  long *plVar27;
  float fVar28;
  long *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  float local_110;
  undefined4 local_10c;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ItemBuyPopupView *local_d0;
  undefined8 local_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  ItemBuyPopupView *local_a8;
  undefined8 local_a0;
  long local_98 [3];
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00512d18 with catch @ 00512d28
                        */
  lVar9 = tpidr_el0;
  local_98[2] = *(long *)(lVar9 + 0x28);
                    /* catch() { ... } // from try @ 00512db8 with catch @ 00512d78 */
  plStack_b8 = _UNK_006942c8;
  local_c0 = (Sprite *)_DAT_006942c0;
  (**(code **)(*(long *)this + 0xf8))(this,&local_c0);
  psVar10 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_c0,"ui_notification_background",local_98);
                    /* try { // try from 00512db0 to 00612db7 has its CatchHandler @ 00512dc8 */
  TextureLibrary::TextureForName(psVar10,SUB81(&local_c0,0));
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 00512db8 to 00612ddb has its CatchHandler @ 00512d78 */
                    /* catch() { ... } // from try @ 00512db0 with catch @ 00512dc8 */
  if ((undefined *)((long)local_c0 + -0x18) != PTR_DAT_007e5de8) {
    piVar21 = (int *)((long)local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (iVar22 < 1) {
      operator_delete((undefined *)((long)local_c0 + -0x18));
    }
  }
  pSVar11 = operator_new(0x58);
  *(undefined4 *)(pSVar11 + 0x30) = 0;
  pSVar11[0x50] = (Sprite)0x0;
  *(undefined8 *)(pSVar11 + 0x38) = 0;
  *(undefined8 *)(pSVar11 + 0x18) = 0;
  *(undefined8 *)(pSVar11 + 0x10) = 0;
  *(undefined8 *)(pSVar11 + 0x28) = 0;
  *(undefined8 *)(pSVar11 + 0x20) = 0;
  *(undefined8 *)(pSVar11 + 8) = 0;
  *(undefined8 *)pSVar11 = 0;
  *(undefined8 *)(pSVar11 + 0x48) = 0;
  *(undefined8 *)(pSVar11 + 0x40) = 0;
  local_c0 = pSVar11;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)&plStack_b8,pSVar11);
  boost::detail::sp_enable_shared_from_this(&local_c0,pSVar11,pSVar11);
  uVar3 = *(undefined8 *)(this + 0xf0);
  plVar24 = *(long **)(this + 0xf8);
  *(Sprite **)(this + 0xf0) = local_c0;
  *(long **)(this + 0xf8) = plStack_b8;
  local_c0 = (Sprite *)uVar3;
  plStack_b8 = plVar24;
  if ((plVar24 != (long *)0x0) && (lVar18 = plVar24[1], plVar24[1] = lVar18 + -1, lVar18 + -1 == 0))
  {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    lVar18 = plVar24[2];
    plVar24[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  Sprite::Init(*(Sprite **)(this + 0xf0),(intrusive_ptr *)&local_e8,2,4,false);
  local_c0 = (Sprite *)CONCAT44(local_c0._4_4_,0xffffffff);
  Sprite::AddRectangle
            (*(Sprite **)(this + 0xf0),(Rectangle *)(this + 0x84),
             (Rectangle *)((long)local_e8 + 0x5c),(Color *)&local_c0);
  psVar10 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_c0,"ui_menu_button",local_98);
  TextureLibrary::TextureForName(psVar10,SUB81(&local_c0,0));
  if ((undefined *)((long)local_c0 + -0x18) != puVar4) {
    piVar21 = (int *)((long)local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (iVar22 < 1) {
      operator_delete((undefined *)((long)local_c0 + -0x18));
    }
  }
  psVar10 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_c0,"ui_menu_button_pressed",local_98);
  TextureLibrary::TextureForName(psVar10,SUB81(&local_c0,0));
  if ((undefined *)((long)local_c0 + -0x18) != puVar4) {
    piVar21 = (int *)((long)local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (iVar22 < 1) {
      operator_delete((undefined *)((long)local_c0 + -0x18));
    }
  }
  plVar25 = *(long **)((long)local_f0 + 0x54);
  pGVar12 = operator_new(0x1d0);
  GUIButton::GUIButton(pGVar12,0);
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>
            ((shared_ptr<Caver::GUIButton> *)&local_c0,pGVar12);
  uVar3 = *(undefined8 *)(this + 0x110);
  plVar24 = *(long **)(this + 0x118);
  *(Sprite **)(this + 0x110) = local_c0;
  *(long **)(this + 0x118) = plStack_b8;
  local_c0 = (Sprite *)uVar3;
  plStack_b8 = plVar24;
  if ((plVar24 != (long *)0x0) && (lVar18 = plVar24[1], plVar24[1] = lVar18 + -1, lVar18 + -1 == 0))
  {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    lVar18 = plVar24[2];
    plVar24[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  pGVar12 = operator_new(0x1d0);
  GUIButton::GUIButton(pGVar12,0);
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>
            ((shared_ptr<Caver::GUIButton> *)&local_c0,pGVar12);
  puVar4 = *(undefined **)(this + 0x120);
  plVar24 = *(long **)(this + 0x128);
  *(Sprite **)(this + 0x120) = local_c0;
  *(long **)(this + 0x128) = plStack_b8;
  local_c0 = (Sprite *)puVar4;
  plStack_b8 = plVar24;
  if ((plVar24 != (long *)0x0) && (lVar18 = plVar24[1], plVar24[1] = lVar18 + -1, lVar18 + -1 == 0))
  {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    lVar18 = plVar24[2];
    plVar24[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  puVar4 = PTR_ButtonPressed_007e5a40;
  local_a0 = 0x649696ffffffff;
  local_98[0] = *(long *)(this + 0x110);
  fVar26 = SUB84(plVar25,0);
  fVar28 = fVar26 + 4.0;
  local_98[1] = *(undefined8 *)(this + 0x120);
  lVar18 = 0;
  do {
    pGVar12 = (GUIButton *)local_98[lVar18];
    GUIButton::SetFrameTextureForState(pGVar12,0,&local_f0);
    GUIButton::SetFrameTextureForState(pGVar12,1,&local_f8);
    pGVar13 = (GUILabel *)GUIButton::titleLabel(pGVar12);
    pFVar14 = (FontLibrary *)FontLibrary::sharedLibrary();
    FontLibrary::DefaultFont(pFVar14);
    if (local_c0 != (Sprite *)*(undefined **)(pGVar13 + 0xf0)) {
      if (plStack_b8 != (long *)0x0) {
        plStack_b8[1] = plStack_b8[1] + 1;
      }
      plVar24 = *(long **)(pGVar13 + 0xf8);
      *(Sprite **)(pGVar13 + 0xf0) = local_c0;
      *(long **)(pGVar13 + 0xf8) = plStack_b8;
      if ((plVar24 != (long *)0x0) &&
         (lVar19 = plVar24[1], plVar24[1] = lVar19 + -1, lVar19 + -1 == 0)) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        lVar19 = plVar24[2];
        plVar24[2] = lVar19 + -1;
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar24 + 0x18))(plVar24);
        }
      }
      GUILabel::UpdateText(pGVar13);
    }
    plVar24 = plStack_b8;
    if ((plStack_b8 != (long *)0x0) &&
       (lVar19 = plStack_b8[1], plStack_b8[1] = lVar19 + -1, lVar19 + -1 == 0)) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      lVar19 = plVar24[2];
      plVar24[2] = lVar19 + -1;
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
    }
    pGVar13 = (GUILabel *)GUIButton::titleLabel(pGVar12);
    lVar19 = lVar18 * 4;
    GVar5 = *(GUILabel *)((long)&local_a0 + lVar19 + 1);
    GVar6 = *(GUILabel *)((long)&local_a0 + lVar19 + 2);
    GVar7 = *(GUILabel *)((long)&local_a0 + lVar19 + 3);
    if ((((*(GUILabel *)((long)&local_a0 + lVar19) != pGVar13[0x108]) || (GVar5 != pGVar13[0x109]))
        || (GVar6 != pGVar13[0x10a])) || (GVar7 != pGVar13[0x10b])) {
      plVar24 = *(long **)(pGVar13 + 0x118);
      *(uint *)(pGVar13 + 0x108) =
           CONCAT13(GVar7,CONCAT12(GVar6,CONCAT11(GVar5,*(GUILabel *)((long)&local_a0 + lVar19))));
      *(undefined8 *)(pGVar13 + 0x110) = 0;
      *(undefined8 *)(pGVar13 + 0x118) = 0;
      if ((plVar24 != (long *)0x0) &&
         (lVar19 = plVar24[1], plVar24[1] = lVar19 + -1, lVar19 + -1 == 0)) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        lVar19 = plVar24[2];
        plVar24[2] = lVar19 + -1;
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar24 + 0x18))(plVar24);
        }
      }
      GUILabel::UpdateText(pGVar13);
    }
    local_c0 = (Sprite *)
               CONCAT44(0x40a00000,
                        (int)(fVar28 * (float)(int)lVar18 +
                             ((*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5) -
                             (fVar28 + fVar26) * 0.5)));
    plStack_b8 = plVar25;
    GUIView::SetFrame((GUIView *)pGVar12,(Rectangle *)&local_c0);
    local_c0 = (Sprite *)0x0;
    uStack_d8 = 0;
    local_e0 = (long *)puVar4;
    local_d0 = this;
    uVar15 = boost::detail::function::has_empty_target(&local_e0);
    if ((uVar15 & 1) == 0) {
      local_a8 = local_d0;
      uStack_b0 = uStack_d8;
      plStack_b8 = local_e0;
      local_c0 = (Sprite *)PTR_stored_vtable_007e5f40;
    }
    else {
      local_c0 = (Sprite *)(undefined *)0x0;
    }
    GUIControl::AddTargetActionForControlEvent((GUIControl *)pGVar12,this,&local_c0,0x40);
    if (local_c0 != (Sprite *)0x0) {
      if ((((ulong)local_c0 & 1) == 0) &&
         (*(code **)((ulong)local_c0 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_c0 & 0xfffffffffffffffe))(&plStack_b8,&plStack_b8,2);
      }
      local_c0 = (Sprite *)0x0;
    }
    bVar1 = lVar18 == 0;
    lVar18 = 1;
  } while (bVar1);
  pGVar12 = *(GUIButton **)(this + 0x110);
  FUN_00666bb8(&local_c0,&DAT_00694311,&local_100);
  plVar24 = (long *)PTR_DAT_007e5de8;
  GUIButton::SetTitle(pGVar12,(string *)&local_c0);
  if (local_c0 + -0x18 != (Sprite *)plVar24) {
    piVar21 = (int *)(local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar24 = (long *)PTR_DAT_007e5de8;
    if (iVar22 < 1) {
      operator_delete(local_c0 + -0x18);
    }
  }
  local_c0 = *(Sprite **)(this + 0x110);
  pcVar20 = *(code **)(*(long *)this + 0x60);
  plStack_b8 = *(long **)(this + 0x118);
  if (plStack_b8 != (long *)0x0) {
    plStack_b8[1] = plStack_b8[1] + 1;
  }
  (*pcVar20)(this,&local_c0);
  plVar25 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar18 = plStack_b8[1], plStack_b8[1] = lVar18 + -1, lVar18 + -1 == 0)) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    lVar18 = plVar25[2];
    plVar25[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  pGVar12 = *(GUIButton **)(this + 0x120);
  FUN_00666bb8(&local_c0,"Don\'t buy",&local_100);
  GUIButton::SetTitle(pGVar12,(string *)&local_c0);
  if ((long *)((long)local_c0 + -0x18) != plVar24) {
    piVar21 = (int *)((long)local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar24 = (long *)PTR_DAT_007e5de8;
    if (iVar22 < 1) {
      operator_delete((long *)((long)local_c0 + -0x18));
    }
  }
  local_c0 = *(Sprite **)(this + 0x120);
  pcVar20 = *(code **)(*(long *)this + 0x60);
  plStack_b8 = *(long **)(this + 0x128);
  if (plStack_b8 != (long *)0x0) {
    plStack_b8[1] = plStack_b8[1] + 1;
  }
  (*pcVar20)(this,&local_c0);
  plVar25 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar18 = plStack_b8[1], plStack_b8[1] = lVar18 + -1, lVar18 + -1 == 0)) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    lVar18 = plVar25[2];
    plVar25[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  psVar10 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_c0,"ui_menu_itemslot",&local_108);
  TextureLibrary::TextureForName(psVar10,SUB81(&local_c0,0));
  if ((long *)((long)local_c0 + -0x18) != plVar24) {
    piVar21 = (int *)((long)local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar24 = (long *)PTR_DAT_007e5de8;
    if (iVar22 < 1) {
      operator_delete((long *)((long)local_c0 + -0x18));
    }
  }
  psVar10 = (string *)TextureLibrary::sharedLibrary();
  FUN_0066a528(&local_e0,*(long *)param_1 + 8);
  FUN_0035a030(&local_c0,"item_",&local_e0);
  TextureLibrary::TextureForName(psVar10,SUB81(&local_c0,0));
  if ((long *)((long)local_c0 + -0x18) != plVar24) {
    piVar21 = (int *)((long)local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar24 = (long *)PTR_DAT_007e5de8;
    if (iVar22 < 1) {
      operator_delete((long *)((long)local_c0 + -0x18));
    }
  }
  if (local_e0 + -3 != plVar24) {
    plVar24 = local_e0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = (int)*plVar24;
      *(int *)plVar24 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = (int)*plVar24;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar1) {
          *(int *)plVar24 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar24 = (long *)PTR_DAT_007e5de8;
    if (iVar22 < 1) {
      operator_delete(local_e0 + -3);
    }
  }
  uStack_d8 = *(undefined8 *)((long)local_100 + 0x54);
  plVar27 = *(long **)((long)local_108 + 0x54);
  local_e0 = (long *)CONCAT44(0x425c0000,*(float *)(*(long *)(this + 0x110) + 0x74) + -2.0);
  pSVar11 = operator_new(0x58);
  *(undefined4 *)(pSVar11 + 0x30) = 0;
  pSVar11[0x50] = (Sprite)0x0;
  *(undefined8 *)(pSVar11 + 0x38) = 0;
  *(undefined8 *)(pSVar11 + 0x18) = 0;
  *(undefined8 *)(pSVar11 + 0x10) = 0;
  *(undefined8 *)(pSVar11 + 0x28) = 0;
  *(undefined8 *)(pSVar11 + 0x20) = 0;
  *(undefined8 *)(pSVar11 + 8) = 0;
  *(undefined8 *)pSVar11 = 0;
  *(undefined8 *)(pSVar11 + 0x48) = 0;
  *(undefined8 *)(pSVar11 + 0x40) = 0;
  local_c0 = pSVar11;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)&plStack_b8,pSVar11);
  boost::detail::sp_enable_shared_from_this(&local_c0,pSVar11,pSVar11);
  uVar3 = *(undefined8 *)(this + 0x130);
  plVar25 = *(long **)(this + 0x138);
  *(Sprite **)(this + 0x130) = local_c0;
  *(long **)(this + 0x138) = plStack_b8;
  local_c0 = (Sprite *)uVar3;
  plStack_b8 = plVar25;
  if ((plVar25 != (long *)0x0) && (lVar18 = plVar25[1], plVar25[1] = lVar18 + -1, lVar18 + -1 == 0))
  {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    lVar18 = plVar25[2];
    plVar25[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  Sprite::Init(*(Sprite **)(this + 0x130),(intrusive_ptr *)&local_100,2,4,false);
  local_c0 = (Sprite *)CONCAT44(local_c0._4_4_,0xffffffff);
  Sprite::AddRectangle
            (*(Sprite **)(this + 0x130),(Rectangle *)&local_e0,(Rectangle *)((long)local_100 + 0x5c)
             ,(Color *)&local_c0);
  pSVar11 = operator_new(0x58);
  *(undefined4 *)(pSVar11 + 0x30) = 0;
  pSVar11[0x50] = (Sprite)0x0;
  *(undefined8 *)(pSVar11 + 0x38) = 0;
  *(undefined8 *)(pSVar11 + 0x18) = 0;
  *(undefined8 *)(pSVar11 + 0x10) = 0;
  *(undefined8 *)(pSVar11 + 0x28) = 0;
  *(undefined8 *)(pSVar11 + 0x20) = 0;
  *(undefined8 *)(pSVar11 + 8) = 0;
  *(undefined8 *)pSVar11 = 0;
  *(undefined8 *)(pSVar11 + 0x48) = 0;
  *(undefined8 *)(pSVar11 + 0x40) = 0;
  local_c0 = pSVar11;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)&plStack_b8,pSVar11);
  boost::detail::sp_enable_shared_from_this(&local_c0,pSVar11,pSVar11);
  uVar3 = *(undefined8 *)(this + 0x140);
  plVar25 = *(long **)(this + 0x148);
  *(Sprite **)(this + 0x140) = local_c0;
  *(long **)(this + 0x148) = plStack_b8;
  local_c0 = (Sprite *)uVar3;
  plStack_b8 = plVar25;
  if ((plVar25 != (long *)0x0) && (lVar18 = plVar25[1], plVar25[1] = lVar18 + -1, lVar18 + -1 == 0))
  {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    lVar18 = plVar25[2];
    plVar25[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  Sprite::Init(*(Sprite **)(this + 0x140),(intrusive_ptr *)&local_108,2,4,false);
  local_c0 = (Sprite *)
             CONCAT44(((float)((ulong)local_e0 >> 0x20) + (float)((ulong)uStack_d8 >> 0x20) * 0.5) -
                      (float)((ulong)plVar27 >> 0x20) * 0.5,
                      (SUB84(local_e0,0) + (float)uStack_d8 * 0.5) - SUB84(plVar27,0) * 0.5);
  local_110 = -NAN;
  plStack_b8 = plVar27;
  Sprite::AddRectangle
            (*(Sprite **)(this + 0x140),(Rectangle *)&local_c0,(Rectangle *)((long)local_108 + 0x5c)
             ,(Color *)&local_110);
  pFVar16 = operator_new(0xf0);
  *(undefined4 *)(pFVar16 + 0x10) = 0xff000000;
  pFVar16[0x2c] = (FontText)0xff;
  *(undefined4 *)(pFVar16 + 0xe8) = 0xffffffff;
  *(undefined4 *)(pFVar16 + 0x28) = 0;
  *(undefined4 *)(pFVar16 + 0x88) = 0;
  *(undefined8 *)(pFVar16 + 0xa0) = 0;
  pFVar16[0xa8] = (FontText)0x0;
  *(undefined4 *)(pFVar16 + 0x50) = 0;
  *(undefined8 *)(pFVar16 + 0xe0) = 0;
  *(undefined8 *)(pFVar16 + 8) = 0;
  *(undefined8 *)pFVar16 = 0;
  *(undefined8 *)(pFVar16 + 0x20) = 0;
  *(undefined8 *)(pFVar16 + 0x18) = 0;
  *(undefined8 *)(pFVar16 + 0x80) = 0;
  *(undefined8 *)(pFVar16 + 0x78) = 0;
  *(undefined8 *)(pFVar16 + 0x70) = 0;
  *(undefined8 *)(pFVar16 + 0x68) = 0;
  *(undefined8 *)(pFVar16 + 0x60) = 0;
  *(undefined8 *)(pFVar16 + 0x58) = 0;
  *(undefined8 *)(pFVar16 + 0x98) = 0;
  *(undefined8 *)(pFVar16 + 0x90) = 0;
  *(undefined8 *)(pFVar16 + 0x38) = 0;
  *(undefined8 *)(pFVar16 + 0x30) = 0;
  *(undefined8 *)(pFVar16 + 0x48) = 0;
  *(undefined8 *)(pFVar16 + 0x40) = 0;
  *(undefined8 *)(pFVar16 + 200) = 0;
  *(undefined8 *)(pFVar16 + 0xc0) = 0;
  *(undefined8 *)(pFVar16 + 0xd8) = 0;
  *(undefined8 *)(pFVar16 + 0xd0) = 0;
  *(undefined8 *)(pFVar16 + 0xb8) = 0;
  *(undefined8 *)(pFVar16 + 0xb0) = 0;
  local_c0 = (Sprite *)pFVar16;
  boost::detail::shared_count::shared_count<Caver::FontText>((shared_count *)&plStack_b8,pFVar16);
  boost::detail::sp_enable_shared_from_this(&local_c0,pFVar16,pFVar16);
  uVar3 = *(undefined8 *)(this + 0x100);
  plVar25 = *(long **)(this + 0x108);
  *(Sprite **)(this + 0x100) = local_c0;
  *(long **)(this + 0x108) = plStack_b8;
  local_c0 = (Sprite *)uVar3;
  plStack_b8 = plVar25;
  if ((plVar25 != (long *)0x0) && (lVar18 = plVar25[1], plVar25[1] = lVar18 + -1, lVar18 + -1 == 0))
  {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    lVar18 = plVar25[2];
    plVar25[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  puVar23 = *(undefined8 **)(this + 0x100);
  pFVar14 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(pFVar14);
  if (plStack_b8 != (long *)0x0) {
    plStack_b8[1] = plStack_b8[1] + 1;
  }
  plVar25 = (long *)puVar23[1];
  *puVar23 = local_c0;
  puVar23[1] = plStack_b8;
  if ((plVar25 != (long *)0x0) && (lVar18 = plVar25[1], plVar25[1] = lVar18 + -1, lVar18 + -1 == 0))
  {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    lVar18 = plVar25[2];
    plVar25[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  plVar25 = plStack_b8;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar18 = plStack_b8[1], plStack_b8[1] = lVar18 + -1, lVar18 + -1 == 0)) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    lVar18 = plVar25[2];
    plVar25[2] = lVar18 + -1;
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  local_c0 = (Sprite *)CONCAT44(local_c0._4_4_,0xffffffff);
  FontText::SetColor(*(FontText **)(this + 0x100),(Color *)&local_c0);
  local_10c = 0x42be0000;
  local_110 = (float)local_e0 + (float)uStack_d8 + 5.0;
  pFVar16 = *(FontText **)(this + 0x100);
  FUN_0066a528(&local_138,*(long *)param_1 + 0x10);
  FUN_0035a030(&local_130,&DAT_00694330,&local_138);
  FUN_0066a528(&local_128,&local_130);
  FUN_006677d4(&local_128," for ",5);
  uVar2 = -param_2;
  if (-1 < param_2) {
    uVar2 = param_2;
  }
  local_140 = plVar24 + 3;
  pcVar17 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                      (uVar2,(char *)((long)&uStack_b0 + 4));
  plVar25 = plVar24 + 3;
  if (param_2 < 0) {
    pcVar17 = pcVar17 + -1;
    *pcVar17 = '-';
    plVar25 = local_140;
  }
  FUN_00669e1c(&local_140,0,plVar25[-3],pcVar17,((long)&uStack_b0 + 4) - (long)pcVar17);
  FUN_0066a528(&local_120,&local_128);
  FUN_00667614(&local_120,&local_140);
  FUN_0066a528(&local_118,&local_120);
  FUN_006677d4(&local_118," soul shards?",0xd);
  FontText::AddText(pFVar16,(string *)&local_118,(*(float *)(this + 0x8c) - local_110) + -10.0,
                    (Vector2 *)&local_110);
  if ((long *)(local_118 + -0x18) != plVar24) {
    piVar21 = (int *)(local_118 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar24 = (long *)PTR_DAT_007e5de8;
    if (iVar22 < 1) {
      operator_delete((long *)(local_118 + -0x18));
    }
  }
  if ((long *)(local_120 + -0x18) != plVar24) {
    piVar21 = (int *)(local_120 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar24 = (long *)PTR_DAT_007e5de8;
    if (iVar22 < 1) {
      operator_delete((long *)(local_120 + -0x18));
    }
  }
  if (local_140 + -3 != plVar24) {
    plVar24 = local_140 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = (int)*plVar24;
      *(int *)plVar24 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = (int)*plVar24;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar1) {
          *(int *)plVar24 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar24 = (long *)PTR_DAT_007e5de8;
    if (iVar22 < 1) {
      operator_delete(local_140 + -3);
    }
  }
  if ((long *)(local_128 + -0x18) != plVar24) {
    piVar21 = (int *)(local_128 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar24 = (long *)PTR_DAT_007e5de8;
    if (iVar22 < 1) {
      operator_delete((long *)(local_128 + -0x18));
    }
  }
  if ((long *)(local_130 + -0x18) != plVar24) {
    piVar21 = (int *)(local_130 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    plVar24 = (long *)PTR_DAT_007e5de8;
    if (iVar22 < 1) {
      operator_delete((long *)(local_130 + -0x18));
    }
  }
  if ((long *)(local_138 + -0x18) != plVar24) {
    piVar21 = (int *)(local_138 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar22 = *piVar21;
      *piVar21 = iVar22 + -1;
    }
    else {
      do {
        iVar22 = *piVar21;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar1) {
          *piVar21 = iVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (iVar22 < 1) {
      operator_delete((long *)(local_138 + -0x18));
    }
  }
  if ((local_108 != (long *)0x0) &&
     (iVar22 = (int)local_108[1] + -1, *(int *)(local_108 + 1) = iVar22, iVar22 == 0)) {
    (**(code **)(*local_108 + 8))();
  }
  if ((local_100 != (long *)0x0) &&
     (iVar22 = (int)local_100[1] + -1, *(int *)(local_100 + 1) = iVar22, iVar22 == 0)) {
    (**(code **)(*local_100 + 8))();
  }
  if ((local_f8 != (long *)0x0) &&
     (iVar22 = (int)local_f8[1] + -1, *(int *)(local_f8 + 1) = iVar22, iVar22 == 0)) {
    (**(code **)(*local_f8 + 8))();
  }
  if ((local_f0 != (long *)0x0) &&
     (iVar22 = (int)local_f0[1] + -1, *(int *)(local_f0 + 1) = iVar22, iVar22 == 0)) {
    (**(code **)(*local_f0 + 8))();
  }
  if ((local_e8 != (long *)0x0) &&
     (iVar22 = (int)local_e8[1] + -1, *(int *)(local_e8 + 1) = iVar22, iVar22 == 0)) {
    (**(code **)(*local_e8 + 8))();
  }
  if (*(long *)(lVar9 + 0x28) != local_98[2]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


