/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00501d04
 * Function: Caver::GuidePurchaseView::GuidePurchaseView
 * Signature: undefined __thiscall GuidePurchaseView(GuidePurchaseView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GuidePurchaseView::GuidePurchaseView() */

void __thiscall Caver::GuidePurchaseView::GuidePurchaseView(GuidePurchaseView *this)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  FontLibrary *pFVar10;
  GUIFrameView *pGVar11;
  string *psVar12;
  GUIView *this_00;
  GUILabel *pGVar13;
  intrusive_ptr *piVar14;
  long lVar15;
  code *pcVar16;
  int *piVar17;
  int iVar18;
  long *plVar19;
  GUIButton *pGVar20;
  GUIControl *pGVar21;
  long *plVar22;
  ulong uVar23;
  undefined4 local_130 [2];
  undefined4 local_128;
  undefined4 local_124;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined1 auStack_108 [4];
  undefined4 local_104;
  GUILabel *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  GuidePurchaseView *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  undefined4 local_c8 [2];
  undefined4 local_c0 [2];
  undefined4 local_b8 [2];
  undefined4 local_b0 [4];
  GUILabel *local_a0;
  long *plStack_98;
  GuidePurchaseView *local_90;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e5480 + 0x10;
  memset(this + 0xf0,0,0x80);
  FUN_00666bb8(&local_a0,"Guiding Compass",&local_d0);
  local_b0[0] = 0xffbeeeff;
  local_b8[0] = 0xff000000;
  GameInterfaceBuilder::NormalLabel((GameInterfaceBuilder *)&local_100,&local_a0,local_b0,local_b8);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
  }
  plVar19 = *(long **)(this + 0x100);
  *(GUILabel **)(this + 0xf8) = local_100;
  *(GUILabel **)(this + 0x100) = local_f8;
  if ((plVar19 != (long *)0x0) && (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
     lVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = *(long *)((long)local_f8 + 0x10);
    *(long *)((long)local_f8 + 0x10) = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*(long *)local_f8 + 0x18))(local_f8);
    }
  }
  puVar8 = PTR_DAT_007e5de8;
  if (local_a0 + -0x18 != (GUILabel *)PTR_DAT_007e5de8) {
    pGVar13 = local_a0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *(int *)pGVar13;
      *(int *)pGVar13 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *(int *)pGVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
        if (bVar6) {
          *(int *)pGVar13 = iVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_a0 + -0x18);
    }
  }
  local_100 = *(GUILabel **)(this + 0xf8);
  pcVar16 = *(code **)(*(long *)this + 0x60);
  local_f8 = *(GUILabel **)(this + 0x100);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
  }
  (*pcVar16)(this,&local_100);
  plVar19 = (long *)local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
     lVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  FUN_00666bb8(&local_80,"Use the compass to find the way to your next objective easily.",&local_100
              );
  FUN_00666bb8(&local_78,&DAT_00692df4,&local_a0);
  FUN_00666bb8(&local_70,
               "After purchase you can switch it on or off with the toggle in the world map menu.",
               &local_d0);
  uVar23 = 0;
  plVar19 = &local_80;
                    /* try { // try from 00501f38 to 00601f3b has its CatchHandler @ 00502260 */
  do {
                    /* try { // try from 00501f3c to 0060215f has its CatchHandler @ 00501b2c */
    local_c0[0] = 0xe5abd6e5;
    local_c8[0] = 0xff000000;
    GameInterfaceBuilder::NormalLabel((GameInterfaceBuilder *)&local_100,plVar19,local_c0,local_c8);
    pGVar13 = local_100;
    pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
    FontLibrary::SmallDefaultFont(pFVar10);
    if (local_a0 != *(GUILabel **)(pGVar13 + 0xf0)) {
      if (plStack_98 != (long *)0x0) {
        plStack_98[1] = plStack_98[1] + 1;
      }
      plVar22 = *(long **)(pGVar13 + 0xf8);
      *(GUILabel **)(pGVar13 + 0xf0) = local_a0;
      *(long **)(pGVar13 + 0xf8) = plStack_98;
      if ((plVar22 != (long *)0x0) &&
         (lVar15 = plVar22[1], plVar22[1] = lVar15 + -1, lVar15 + -1 == 0)) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        lVar15 = plVar22[2];
        plVar22[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar22 + 0x18))(plVar22);
        }
      }
      GUILabel::UpdateText(pGVar13);
    }
    plVar22 = plStack_98;
    if ((plStack_98 != (long *)0x0) &&
       (lVar15 = plStack_98[1], plStack_98[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      lVar15 = plVar22[2];
      plVar22[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
    }
    local_100[0x138] = (GUILabel)0x1;
    GUILabel::UpdateText(local_100);
    puVar1 = *(undefined8 **)(this + 0x110);
    if (puVar1 == *(undefined8 **)(this + 0x118)) {
      std::
      vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
      ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
                       *)(this + 0x108),puVar1,&local_100);
    }
    else {
      *puVar1 = local_100;
      puVar1[1] = local_f8;
      if (local_f8 != (GUILabel *)0x0) {
        *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
      }
      *(undefined8 **)(this + 0x110) = puVar1 + 2;
    }
    pcVar16 = *(code **)(*(long *)this + 0x60);
    local_a0 = local_100;
    plStack_98 = (long *)local_f8;
    if (local_f8 != (GUILabel *)0x0) {
      *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
    }
    (*pcVar16)(this,&local_a0);
    plVar22 = plStack_98;
    if ((plStack_98 != (long *)0x0) &&
       (lVar15 = plStack_98[1], plStack_98[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      lVar15 = plVar22[2];
      plVar22[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
    }
    plVar22 = (long *)local_f8;
    if ((local_f8 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
       lVar15 + -1 == 0)) {
      (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
      lVar15 = plVar22[2];
      plVar22[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
    }
    uVar23 = uVar23 + 1;
    plVar19 = plVar19 + 1;
  } while (uVar23 < 3);
  pGVar11 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar11);
                    /* try { // try from 00502160 to 00602163 has its CatchHandler @ 00502264 */
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_100,pGVar11);
                    /* try { // try from 00502164 to 00602277 has its CatchHandler @ 00501b2c */
  pGVar13 = *(GUILabel **)(this + 0x120);
  plVar19 = *(long **)(this + 0x128);
  *(GUILabel **)(this + 0x120) = local_100;
  *(GUILabel **)(this + 0x128) = local_f8;
  local_100 = pGVar13;
  local_f8 = (GUILabel *)plVar19;
  if ((plVar19 != (long *)0x0) && (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar11 = *(GUIFrameView **)(this + 0x120);
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a0,"ui_guide_screenshot",&local_d8);
  cVar5 = (char)&stack0xfffffffffffffff0;
  TextureLibrary::TextureForName(psVar12,(bool)(cVar5 + 'p'));
  GUIFrameView::SetFrameTexture(pGVar11,(intrusive_ptr *)&local_100,true);
  if ((local_100 != (GUILabel *)0x0) &&
     (iVar18 = *(int *)(local_100 + 8), *(int *)(local_100 + 8) = iVar18 + -1, iVar18 + -1 == 0)) {
    (**(code **)(*(long *)local_100 + 8))();
  }
  if (local_a0 + -0x18 != (GUILabel *)puVar8) {
    pGVar13 = local_a0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *(int *)pGVar13;
      *(int *)pGVar13 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *(int *)pGVar13;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
        if (bVar6) {
          *(int *)pGVar13 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_a0 + -0x18);
    }
  }
  this_00 = *(GUIView **)(this + 0x120);
  plVar19 = *(long **)(this_00 + 0x100);
  if (plVar19 != (long *)0x0) {
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
  }
  local_100 = *(GUILabel **)(this_00 + 0x74);
                    /* catch() { ... } // from try @ 00501f38 with catch @ 00502260 */
                    /* catch() { ... } // from try @ 00502160 with catch @ 00502264 */
  local_f8 = (GUILabel *)
             CONCAT44((float)((ulong)*(undefined8 *)((long)plVar19 + 0x54) >> 0x20) * 0.9,
                      (float)*(undefined8 *)((long)plVar19 + 0x54) * 0.9);
  GUIView::SetFrame(this_00,(Rectangle *)&local_100);
  iVar18 = (int)plVar19[1] + -1;
  *(int *)(plVar19 + 1) = iVar18;
  if (iVar18 == 0) {
    (**(code **)(*plVar19 + 8))(plVar19);
  }
  local_100 = *(GUILabel **)(this + 0x120);
  pcVar16 = *(code **)(*(long *)this + 0x60);
  local_f8 = *(GUILabel **)(this + 0x128);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
  }
  (*pcVar16)(this,&local_100);
  plVar19 = (long *)local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
     lVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_100,"ui_guide_buy",&local_d8);
  TextureLibrary::TextureForName(psVar12,false);
  if (local_100 + -0x18 != (GUILabel *)puVar8) {
    pGVar13 = local_100 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *(int *)pGVar13;
      *(int *)pGVar13 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *(int *)pGVar13;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
        if (bVar6) {
          *(int *)pGVar13 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_100 + -0x18);
    }
  }
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_100,"ui_guide_buy_pressed",&local_e0);
  piVar14 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar12,false);
  if (local_100 + -0x18 != (GUILabel *)puVar8) {
                    /* try { // try from 005031b0 to 006031b3 has its CatchHandler @ 005031ec */
                    /* try { // try from 005031b4 to 0060320b has its CatchHandler @ 00502f78 */
    pGVar13 = local_100 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *(int *)pGVar13;
      *(int *)pGVar13 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *(int *)pGVar13;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
        if (bVar6) {
          *(int *)pGVar13 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* catch() { ... } // from try @ 005033d4 with catch @ 00503384 */
    if (iVar18 < 1) {
      operator_delete(local_100 + -0x18);
    }
  }
  local_a0 = (GUILabel *)0x0;
  local_e0 = (long *)0x0;
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_a0,(intrusive_ptr *)&local_e0,piVar14);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
  }
  plVar19 = *(long **)(this + 0x138);
  *(GUILabel **)(this + 0x130) = local_100;
  *(GUILabel **)(this + 0x138) = local_f8;
  if ((plVar19 != (long *)0x0) && (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  plVar19 = (long *)local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
     lVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  if ((local_e0 != (long *)0x0) &&
     (iVar18 = (int)local_e0[1] + -1, *(int *)(local_e0 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_e0 + 8))();
  }
  if ((local_a0 != (GUILabel *)0x0) &&
     (iVar18 = *(int *)(local_a0 + 8), *(int *)(local_a0 + 8) = iVar18 + -1, iVar18 + -1 == 0)) {
    (**(code **)(*(long *)local_a0 + 8))();
  }
  pGVar20 = *(GUIButton **)(this + 0x130);
  FUN_00666bb8(&local_100,&DAT_0068f6a7,&local_e0);
  GUIButton::SetTitle(pGVar20,(string *)&local_100);
  if (local_100 + -0x18 != (GUILabel *)puVar8) {
    pGVar13 = local_100 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *(int *)pGVar13;
      *(int *)pGVar13 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *(int *)pGVar13;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
        if (bVar6) {
          *(int *)pGVar13 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 005031b0 with catch @ 005031ec */
      } while (cVar4 != '\0');
    }
                    /* try { // try from 005033a4 to 006033a7 has its CatchHandler @ 005033c8 */
                    /* try { // try from 005033a8 to 006033af has its CatchHandler @ 005033c0 */
    if (iVar18 < 1) {
      operator_delete(local_100 + -0x18);
    }
  }
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x130),0,&local_d0);
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x130),1,&local_d8);
  local_100 = *(GUILabel **)(*(GUIView **)(this + 0x130) + 0x74);
  local_f8 = (GUILabel *)CONCAT44((int)local_d0[0xb],0x42e60000);
  GUIView::SetFrame(*(GUIView **)(this + 0x130),(Rectangle *)&local_100);
  puVar9 = PTR_ButtonPressed_007e7820;
  pGVar21 = *(GUIControl **)(this + 0x130);
  local_100 = (GUILabel *)0x0;
  plStack_98 = (long *)0x0;
  local_a0 = (GUILabel *)PTR_ButtonPressed_007e7820;
  local_90 = this;
  uVar23 = boost::detail::function::has_empty_target(&local_a0);
  if ((uVar23 & 1) == 0) {
    local_e8 = local_90;
    uStack_f0 = plStack_98;
    local_f8 = local_a0;
    local_100 = (GUILabel *)PTR_stored_vtable_007e7510;
  }
  else {
    local_100 = (GUILabel *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar21,this,&local_100,0x40);
  if (local_100 != (GUILabel *)0x0) {
    if ((((ulong)local_100 & 1) == 0) &&
       (*(code **)((ulong)local_100 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_100 & 0xfffffffffffffffe))(&local_f8,&local_f8,2);
    }
    local_100 = (GUILabel *)0x0;
  }
  local_104 = 0x7f7f7f7f;
  GUIButton::SetTintColor(*(GUIButton **)(this + 0x130),&local_104);
  pGVar13 = *(GUILabel **)(this + 0x130);
  uVar2 = *(uint *)(pGVar13 + 0x120);
  uVar3 = uVar2 | 2;
  *(uint *)(pGVar13 + 0x120) = uVar3;
  if (uVar3 != uVar2) {
    (**(code **)(*(long *)pGVar13 + 0x130))();
    pGVar13 = *(GUILabel **)(this + 0x130);
  }
  local_f8 = *(GUILabel **)(this + 0x138);
  pcVar16 = *(code **)(*(long *)this + 0x60);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
  }
  local_100 = pGVar13;
  (*pcVar16)(this,&local_100);
  plVar19 = (long *)local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
     lVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_e0,"ui_button_close",auStack_108);
  TextureLibrary::TextureForName(psVar12,SUB81(&local_e0,0));
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_118,"ui_button_close_pressed",auStack_120);
  piVar14 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar12,SUB81(&local_118,0));
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)&local_a0,(intrusive_ptr *)&local_110,piVar14);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
  }
  plVar19 = *(long **)(this + 0x148);
  *(GUILabel **)(this + 0x140) = local_100;
  *(GUILabel **)(this + 0x148) = local_f8;
                    /* catch() { ... } // from try @ 00502724 with catch @ 005026f4 */
  if ((plVar19 != (long *)0x0) && (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar15 = plVar19[2];
                    /* try { // try from 00502710 to 00602723 has its CatchHandler @ 00502748 */
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
                    /* try { // try from 00502724 to 0060274b has its CatchHandler @ 005026f4 */
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  plVar19 = (long *)local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
     lVar15 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00502710 with catch @ 00502748 */
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  if ((local_110 != (long *)0x0) &&
     (iVar18 = (int)local_110[1] + -1, *(int *)(local_110 + 1) = iVar18, iVar18 == 0)) {
                    /* catch() { ... } // from try @ 005027dc with catch @ 0050278c */
    (**(code **)(*local_110 + 8))();
  }
  if ((undefined *)(local_118 + -0x18) != puVar8) {
                    /* catch() { ... } // from try @ 00503024 with catch @ 005031f4 */
    piVar17 = (int *)(local_118 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
                    /* catch() { ... } // from try @ 005033a8 with catch @ 005033c0 */
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
                    /* catch() { ... } // from try @ 005030ec with catch @ 00503208 */
                    /* try { // try from 0050320c to 00603213 has its CatchHandler @ 0050321c */
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar6) {
          *piVar17 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* catch() { ... } // from try @ 005033a4 with catch @ 005033c8 */
    if (iVar18 < 1) {
                    /* try { // try from 005033cc to 006033d3 has its CatchHandler @ 005033e4 */
      operator_delete((undefined *)(local_118 + -0x18));
                    /* try { // try from 005033d4 to 006033e7 has its CatchHandler @ 00503384 */
    }
  }
  if ((local_a0 != (GUILabel *)0x0) &&
     (iVar18 = *(int *)(local_a0 + 8), *(int *)(local_a0 + 8) = iVar18 + -1, iVar18 + -1 == 0)) {
                    /* try { // try from 005027c0 to 006027c3 has its CatchHandler @ 005027d0 */
    (**(code **)(*(long *)local_a0 + 8))();
  }
                    /* catch() { ... } // from try @ 005027c0 with catch @ 005027d0 */
                    /* try { // try from 005027d4 to 006027db has its CatchHandler @ 005027e4 */
  if (local_e0 + -3 != (long *)puVar8) {
                    /* catch() { ... } // from try @ 0050320c with catch @ 0050321c */
                    /* catch() { ... } // from try @ 00503244 with catch @ 00503220
                       catch() { ... } // from try @ 00503260 with catch @ 00503220 */
    plVar19 = local_e0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = (int)*plVar19;
                    /* catch() { ... } // from try @ 005033cc with catch @ 005033e4 */
      *(int *)plVar19 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = (int)*plVar19;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *(int *)plVar19 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_e0 + -3);
    }
  }
                    /* try { // try from 005027dc to 006027e7 has its CatchHandler @ 0050278c */
                    /* catch() { ... } // from try @ 005027d4 with catch @ 005027e4 */
  local_100 = *(GUILabel **)(*(GUIView **)(this + 0x140) + 0x74);
                    /* try { // try from 005027e8 to 0060283b has its CatchHandler @ 005027e8
                       catch(type#1 @ 00000000) { ... } // from try @ 005027e8 with catch @ 005027e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00502858 with catch @ 005027e8
                       catch(type#1 @ 00000000) { ... } // from try @ 005028e4 with catch @ 005027e8
                        */
  local_f8 = (GUILabel *)&DAT_4208000042080000;
  GUIView::SetFrame(*(GUIView **)(this + 0x140),(Rectangle *)&local_100);
  pGVar21 = *(GUIControl **)(this + 0x140);
  local_100 = (GUILabel *)0x0;
  plStack_98 = (long *)0x0;
  local_a0 = (GUILabel *)puVar9;
  local_90 = this;
  uVar23 = boost::detail::function::has_empty_target(&local_a0);
  if ((uVar23 & 1) == 0) {
    local_e8 = local_90;
    uStack_f0 = plStack_98;
    local_f8 = local_a0;
    local_100 = (GUILabel *)PTR_stored_vtable_007e7510;
  }
  else {
    local_100 = (GUILabel *)0x0;
  }
                    /* try { // try from 0050283c to 00602857 has its CatchHandler @ 005028d8 */
  GUIControl::AddTargetActionForControlEvent(pGVar21,this,&local_100,0x40);
                    /* try { // try from 00502858 to 006028db has its CatchHandler @ 005027e8 */
  if (((local_100 != (GUILabel *)0x0) && (((ulong)local_100 & 1) == 0)) &&
     (*(code **)((ulong)local_100 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_100 & 0xfffffffffffffffe))(&local_f8,&local_f8,2);
  }
  local_100 = *(GUILabel **)(this + 0x140);
  pcVar16 = *(code **)(*(long *)this + 0x60);
  local_f8 = *(GUILabel **)(this + 0x148);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)(local_f8 + 8) = *(long *)(local_f8 + 8) + 1;
  }
  (*pcVar16)(this,&local_100);
  pGVar13 = local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)(local_f8 + 8), *(long *)(local_f8 + 8) = lVar15 + -1, lVar15 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0050283c with catch @ 005028d8
                        */
                    /* try { // try from 005028dc to 006028e3 has its CatchHandler @ 005028ec */
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = *(long *)(pGVar13 + 0x10);
                    /* try { // try from 005028e4 to 006028ef has its CatchHandler @ 005027e8 */
    *(long *)(pGVar13 + 0x10) = lVar15 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005028dc with catch @ 005028ec
                        */
    if (lVar15 + -1 == 0) {
      (**(code **)(*(long *)pGVar13 + 0x18))(pGVar13);
    }
  }
  FUN_00666bb8(&local_a0,"Restore",&local_110);
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_a0,false);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)(local_f8 + 8) = *(long *)(local_f8 + 8) + 1;
  }
  plVar19 = *(long **)(this + 0x158);
  *(GUILabel **)(this + 0x150) = local_100;
  *(GUILabel **)(this + 0x158) = local_f8;
  if ((plVar19 != (long *)0x0) && (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar13 = local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)(local_f8 + 8), *(long *)(local_f8 + 8) = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = *(long *)(pGVar13 + 0x10);
    *(long *)(pGVar13 + 0x10) = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*(long *)pGVar13 + 0x18))(pGVar13);
    }
  }
  if (local_a0 + -0x18 != (GUILabel *)puVar8) {
                    /* try { // try from 00503240 to 00603243 has its CatchHandler @ 00503254 */
                    /* try { // try from 00503244 to 00603257 has its CatchHandler @ 00503220 */
    pGVar13 = local_a0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *(int *)pGVar13;
      *(int *)pGVar13 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *(int *)pGVar13;
                    /* catch() { ... } // from try @ 00503240 with catch @ 00503254 */
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
        if (bVar6) {
          *(int *)pGVar13 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00503258 to 0060325f has its CatchHandler @ 00503268 */
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_a0 + -0x18);
    }
  }
  pGVar20 = *(GUIButton **)(this + 0x150);
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a0,"ui_main_button",&local_110);
  TextureLibrary::TextureForName(psVar12,(bool)(cVar5 + 'p'));
  GUIButton::SetFrameTextureForState(pGVar20,0,&local_100);
  if ((local_100 != (GUILabel *)0x0) &&
     (iVar18 = *(int *)(local_100 + 8), *(int *)(local_100 + 8) = iVar18 + -1, iVar18 + -1 == 0)) {
    (**(code **)(*(long *)local_100 + 8))();
  }
  if (local_a0 + -0x18 != (GUILabel *)puVar8) {
                    /* try { // try from 00503260 to 0060326b has its CatchHandler @ 00503220 */
                    /* catch() { ... } // from try @ 00503258 with catch @ 00503268 */
    pGVar13 = local_a0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *(int *)pGVar13;
      *(int *)pGVar13 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *(int *)pGVar13;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
        if (bVar6) {
          *(int *)pGVar13 = iVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_a0 + -0x18);
    }
  }
  pGVar20 = *(GUIButton **)(this + 0x150);
  psVar12 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a0,"ui_main_button_pressed",&local_110);
  TextureLibrary::TextureForName(psVar12,(bool)(cVar5 + 'p'));
                    /* catch() { ... } // from try @ 00502b00 with catch @ 00502a94 */
  GUIButton::SetFrameTextureForState(pGVar20,1,&local_100);
  if ((local_100 != (GUILabel *)0x0) &&
     (iVar18 = *(int *)(local_100 + 8), *(int *)(local_100 + 8) = iVar18 + -1, iVar18 + -1 == 0)) {
    (**(code **)(*(long *)local_100 + 8))();
  }
  if (local_a0 + -0x18 != (GUILabel *)puVar8) {
    pGVar13 = local_a0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *(int *)pGVar13;
      *(int *)pGVar13 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *(int *)pGVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
        if (bVar6) {
          *(int *)pGVar13 = iVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_a0 + -0x18);
    }
  }
  pGVar13 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x150));
  pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(pFVar10);
  if (local_100 != *(GUILabel **)(pGVar13 + 0xf0)) {
                    /* try { // try from 00502af8 to 00602aff has its CatchHandler @ 00502b7c */
    if (local_f8 != (GUILabel *)0x0) {
                    /* try { // try from 00502b00 to 00602b8f has its CatchHandler @ 00502a94 */
      *(long *)(local_f8 + 8) = *(long *)(local_f8 + 8) + 1;
    }
    plVar19 = *(long **)(pGVar13 + 0xf8);
    *(GUILabel **)(pGVar13 + 0xf0) = local_100;
    *(GUILabel **)(pGVar13 + 0xf8) = local_f8;
    if ((plVar19 != (long *)0x0) &&
       (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar15 = plVar19[2];
      plVar19[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    GUILabel::UpdateText(pGVar13);
  }
  pGVar13 = local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)(local_f8 + 8), *(long *)(local_f8 + 8) = lVar15 + -1, lVar15 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00502af8 with catch @ 00502b7c */
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = *(long *)(pGVar13 + 0x10);
    *(long *)(pGVar13 + 0x10) = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*(long *)pGVar13 + 0x18))(pGVar13);
    }
  }
  pGVar21 = *(GUIControl **)(this + 0x150);
  local_100 = (GUILabel *)0x0;
  plStack_98 = (long *)0x0;
  local_a0 = (GUILabel *)puVar9;
  local_90 = this;
  uVar23 = boost::detail::function::has_empty_target(&local_a0);
  if ((uVar23 & 1) == 0) {
    local_e8 = local_90;
    uStack_f0 = plStack_98;
    local_f8 = local_a0;
    local_100 = (GUILabel *)PTR_stored_vtable_007e7510;
  }
  else {
    local_100 = (GUILabel *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar21,this,&local_100,0x40);
  if (((local_100 != (GUILabel *)0x0) && (((ulong)local_100 & 1) == 0)) &&
     (*(code **)((ulong)local_100 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_100 & 0xfffffffffffffffe))(&local_f8,&local_f8,2);
  }
  local_100 = *(GUILabel **)(*(GUIView **)(this + 0x150) + 0x74);
  local_f8 = (GUILabel *)_DAT_00693ca8;
  GUIView::SetFrame(*(GUIView **)(this + 0x150),(Rectangle *)&local_100);
  pGVar13 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x150));
  if (((pGVar13[0x108] != (GUILabel)0xcc) || (pGVar13[0x109] != (GUILabel)0xcc)) ||
     ((pGVar13[0x10a] != (GUILabel)0xcc || (pGVar13[0x10b] != (GUILabel)0xcc)))) {
    plVar19 = *(long **)(pGVar13 + 0x118);
    *(undefined4 *)(pGVar13 + 0x108) = 0xcccccccc;
    *(undefined8 *)(pGVar13 + 0x110) = 0;
    *(undefined8 *)(pGVar13 + 0x118) = 0;
    if ((plVar19 != (long *)0x0) &&
       (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar15 = plVar19[2];
      plVar19[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    GUILabel::UpdateText(pGVar13);
  }
  local_124 = 0x7f7f7f7f;
  GUIButton::SetTintColor(*(GUIButton **)(this + 0x150),&local_124);
  local_100 = *(GUILabel **)(this + 0x150);
  pcVar16 = *(code **)(*(long *)this + 0x60);
  local_f8 = *(GUILabel **)(this + 0x158);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
  }
  (*pcVar16)(this,&local_100);
  plVar19 = (long *)local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
     lVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  FUN_00666bb8(&local_a0,"Already purchased? Restore your previous purchase here",&local_110);
  local_128 = 0xffffffff;
  local_130[0] = 0xff000000;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_100,&local_a0,&local_128,local_130);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
  }
  plVar19 = *(long **)(this + 0x168);
  *(GUILabel **)(this + 0x160) = local_100;
  *(GUILabel **)(this + 0x168) = local_f8;
  if ((plVar19 != (long *)0x0) && (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  plVar19 = (long *)local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
     lVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 00502e78 with catch @ 00502e48 */
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  if (local_a0 + -0x18 != (GUILabel *)puVar8) {
    pGVar13 = local_a0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *(int *)pGVar13;
      *(int *)pGVar13 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *(int *)pGVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pGVar13,0x10);
        if (bVar6) {
          *(int *)pGVar13 = iVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_a0 + -0x18);
    }
  }
                    /* try { // try from 00502e64 to 00602e77 has its CatchHandler @ 00502e9c */
  pGVar13 = *(GUILabel **)(this + 0x160);
  pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(pFVar10);
                    /* try { // try from 00502e78 to 00602e9f has its CatchHandler @ 00502e48 */
  if (local_100 != *(GUILabel **)(pGVar13 + 0xf0)) {
    if (local_f8 != (GUILabel *)0x0) {
      *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
    }
    plVar19 = *(long **)(pGVar13 + 0xf8);
                    /* catch() { ... } // from try @ 00502e64 with catch @ 00502e9c */
    *(GUILabel **)(pGVar13 + 0xf0) = local_100;
    *(GUILabel **)(pGVar13 + 0xf8) = local_f8;
    if ((plVar19 != (long *)0x0) &&
       (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar15 = plVar19[2];
      plVar19[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    GUILabel::UpdateText(pGVar13);
  }
  plVar19 = (long *)local_f8;
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
     lVar15 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00502f6c with catch @ 00502f08 */
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar13 = *(GUILabel **)(this + 0x160);
                    /* try { // try from 00502f50 to 00602f53 has its CatchHandler @ 00502f60 */
                    /* catch() { ... } // from try @ 00502f50 with catch @ 00502f60 */
                    /* try { // try from 00502f64 to 00602f6b has its CatchHandler @ 00502f74 */
  if ((((pGVar13[0x108] != (GUILabel)0xb4) || (pGVar13[0x109] != (GUILabel)0xb4)) ||
      (pGVar13[0x10a] != (GUILabel)0xb4)) || (pGVar13[0x10b] != (GUILabel)0xb4)) {
    plVar19 = *(long **)(pGVar13 + 0x118);
                    /* try { // try from 00502f6c to 00602f77 has its CatchHandler @ 00502f08 */
                    /* catch() { ... } // from try @ 00502f64 with catch @ 00502f74 */
    *(undefined4 *)(pGVar13 + 0x108) = 0xb4b4b4b4;
                    /* try { // try from 00502f78 to 00603023 has its CatchHandler @ 00502f78
                       catch() { ... } // from try @ 00502f78 with catch @ 00502f78
                       catch() { ... } // from try @ 00503028 with catch @ 00502f78
                       catch() { ... } // from try @ 005030a8 with catch @ 00502f78
                       catch() { ... } // from try @ 00503108 with catch @ 00502f78
                       catch() { ... } // from try @ 005031b4 with catch @ 00502f78
                       catch() { ... } // from try @ 00503214 with catch @ 00502f78 */
    *(undefined8 *)(pGVar13 + 0x110) = 0;
    *(undefined8 *)(pGVar13 + 0x118) = 0;
    if ((plVar19 != (long *)0x0) &&
       (lVar15 = plVar19[1], plVar19[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar15 = plVar19[2];
      plVar19[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    GUILabel::UpdateText(pGVar13);
    pGVar13 = *(GUILabel **)(this + 0x160);
  }
  pGVar13[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar13 + 0x141) = 0;
  *(undefined8 *)(pGVar13 + 0x148) = 0;
  GUILabel::UpdateText(pGVar13);
  local_100 = *(GUILabel **)(this + 0x160);
  pcVar16 = *(code **)(*(long *)this + 0x60);
  local_f8 = *(GUILabel **)(this + 0x168);
  if (local_f8 != (GUILabel *)0x0) {
    *(long *)((long)local_f8 + 8) = *(long *)((long)local_f8 + 8) + 1;
  }
  (*pcVar16)(this,&local_100);
  plVar19 = (long *)local_f8;
                    /* try { // try from 00503024 to 00603027 has its CatchHandler @ 005031f4 */
                    /* try { // try from 00503028 to 006030a3 has its CatchHandler @ 00502f78 */
  if ((local_f8 != (GUILabel *)0x0) &&
     (lVar15 = *(long *)((long)local_f8 + 8), *(long *)((long)local_f8 + 8) = lVar15 + -1,
     lVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_f8 + 0x10))(local_f8);
    lVar15 = plVar19[2];
    plVar19[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  *(undefined1 *)(*(long *)(this + 0x150) + 0xe4) = 1;
  *(undefined1 *)(*(long *)(this + 0x160) + 0xe4) = 1;
  if ((local_d8 != (long *)0x0) &&
     (iVar18 = (int)local_d8[1] + -1, *(int *)(local_d8 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_d8 + 8))();
  }
                    /* try { // try from 005030a4 to 006030a7 has its CatchHandler @ 005031f0 */
                    /* try { // try from 005030a8 to 006030eb has its CatchHandler @ 00502f78 */
  if ((local_d0 != (long *)0x0) &&
     (iVar18 = (int)local_d0[1] + -1, *(int *)(local_d0 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_d0 + 8))();
  }
  if ((undefined *)(local_70 + -0x18) != puVar8) {
    piVar17 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar6) {
          *piVar17 = iVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_78 + -0x18) != puVar8) {
    piVar17 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar6) {
          *piVar17 = iVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
                    /* try { // try from 005030ec to 00603107 has its CatchHandler @ 00503208 */
  if ((undefined *)(local_80 + -0x18) != puVar8) {
    piVar17 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar6) {
          *piVar17 = iVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
                    /* try { // try from 005034dc to 00603727 has its CatchHandler @ 005034dc
                       catch() { ... } // from try @ 005034dc with catch @ 005034dc
                       catch() { ... } // from try @ 0050372c with catch @ 005034dc
                       catch() { ... } // from try @ 00503860 with catch @ 005034dc
                       catch() { ... } // from try @ 00503988 with catch @ 005034dc */
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00503108 to 006031af has its CatchHandler @ 00502f78 */
  return;
}


