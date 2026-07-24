/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f5d10
 * Function: Caver::AttributePointsView::AttributePointsView
 * Signature: undefined __thiscall AttributePointsView(AttributePointsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::AttributePointsView::AttributePointsView() */

void __thiscall Caver::AttributePointsView::AttributePointsView(AttributePointsView *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long **pplVar5;
  undefined8 uVar6;
  undefined *puVar7;
  GUIFrameView *pGVar8;
  string *psVar9;
  GUILabel *pGVar10;
  FontLibrary *this_00;
  ulong uVar11;
  long *plVar12;
  intrusive_ptr *piVar13;
  long lVar14;
  code *pcVar15;
  GUILabel *pGVar16;
  int *piVar17;
  int iVar18;
  GUILabel *pGVar19;
  GUILabel **ppGVar20;
  ulong uVar21;
  long **pplVar22;
  ulong uVar23;
  GUIControl *pGVar24;
  GUILabel *pGVar25;
  long *plVar26;
  long *plVar27;
  undefined4 local_100;
  undefined4 uStack_fc;
  long *local_f8;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  AttributePointsView *local_c0;
  GUILabel *local_b0;
  long *aplStack_a8 [2];
  AttributePointsView *local_98 [4];
  undefined8 uStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e7208 + 0x10;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (AttributePointsView)0x0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0xffffffff;
  *(undefined **)this = puVar1;
  memset(this + 0x108,0,0x60);
  puVar1 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined **)(this + 0x168) = puVar1 + 0x18;
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x188));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x1d0));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x218));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x260));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x2a8));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x2f0));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x338));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x380));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x3c8));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x410));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x458));
  GUIAnimatedSprite::GUIAnimatedSprite((GUIAnimatedSprite *)(this + 0x4a0));
  *(undefined4 *)(this + 0x518) = 0;
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x500) = 0;
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  this[0x538] = (AttributePointsView)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  *(undefined8 *)(this + 0x530) = 0;
  *(undefined8 *)(this + 0x528) = 0;
  this[0x540] = (AttributePointsView)0x0;
  pGVar8 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar8);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_b0,pGVar8);
  pGVar10 = *(GUILabel **)(this + 0x108);
  plVar26 = *(long **)(this + 0x110);
  *(GUILabel **)(this + 0x108) = local_b0;
  *(long **)(this + 0x110) = aplStack_a8[0];
  local_b0 = pGVar10;
  aplStack_a8[0] = plVar26;
  if ((plVar26 != (long *)0x0) && (lVar14 = plVar26[1], plVar26[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    lVar14 = plVar26[2];
    plVar26[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  pGVar8 = *(GUIFrameView **)(this + 0x108);
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_d0,"ui_frame_dark",&local_e8);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_d0,0));
  GUIFrameView::SetFrameTexture(pGVar8,(intrusive_ptr *)&local_b0,false);
  if ((local_b0 != (GUILabel *)0x0) &&
     (iVar18 = *(int *)(local_b0 + 8), *(int *)(local_b0 + 8) = iVar18 + -1, iVar18 + -1 == 0)) {
    (**(code **)(*(long *)local_b0 + 8))();
  }
  if (local_d0 + -3 != (long *)puVar1) {
    plVar26 = local_d0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = (int)*plVar26;
      *(int *)plVar26 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = (int)*plVar26;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar3) {
          *(int *)plVar26 = iVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_d0 + -3);
    }
  }
  local_b0 = *(GUILabel **)(this + 0x108);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  aplStack_a8[0] = *(long **)(this + 0x110);
  if (aplStack_a8[0] != (long *)0x0) {
    aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
  }
  (*pcVar15)(this,&local_b0);
  plVar26 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar26[2];
    plVar26[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  GameInterfaceBuilder::TextGradient(DAT_00687988,1.0,DAT_00687828,1.0);
  pGVar10 = operator_new(0x150);
  GUILabel::GUILabel(pGVar10);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_b0,pGVar10);
  pGVar10 = *(GUILabel **)(this + 0x118);
  plVar26 = *(long **)(this + 0x120);
  *(GUILabel **)(this + 0x118) = local_b0;
  *(long **)(this + 0x120) = aplStack_a8[0];
  local_b0 = pGVar10;
  aplStack_a8[0] = plVar26;
  if ((plVar26 != (long *)0x0) && (lVar14 = plVar26[1], plVar26[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    lVar14 = plVar26[2];
    plVar26[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  pGVar10 = *(GUILabel **)(this + 0x118);
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_00);
  if (local_b0 != *(GUILabel **)(pGVar10 + 0xf0)) {
    if (aplStack_a8[0] != (long *)0x0) {
      aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
    }
    plVar26 = *(long **)(pGVar10 + 0xf8);
    *(GUILabel **)(pGVar10 + 0xf0) = local_b0;
    *(long **)(pGVar10 + 0xf8) = aplStack_a8[0];
    if ((plVar26 != (long *)0x0) &&
       (lVar14 = plVar26[1], plVar26[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      lVar14 = plVar26[2];
      plVar26[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar26 + 0x18))(plVar26);
      }
    }
    GUILabel::UpdateText(pGVar10);
  }
  plVar26 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar26[2];
    plVar26[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  pGVar10 = *(GUILabel **)(this + 0x118);
  if (local_d8 != (long *)0x0) {
    local_d8[1] = local_d8[1] + 1;
  }
  plVar26 = *(long **)(pGVar10 + 0x118);
  *(undefined8 *)(pGVar10 + 0x110) = local_e0;
  *(long **)(pGVar10 + 0x118) = local_d8;
  if ((plVar26 != (long *)0x0) && (lVar14 = plVar26[1], plVar26[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    lVar14 = plVar26[2];
    plVar26[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  GUILabel::UpdateText(pGVar10);
  uVar6 = DAT_00683728;
  pGVar10 = *(GUILabel **)(this + 0x118);
  pGVar10[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar10 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar10 + 0x148) = uVar6;
  GUILabel::UpdateText(pGVar10);
  plVar26 = *(long **)(this + 0x108);
  local_b0 = *(GUILabel **)(this + 0x118);
  pcVar15 = *(code **)(*plVar26 + 0x60);
  aplStack_a8[0] = *(long **)(this + 0x120);
  if (aplStack_a8[0] != (long *)0x0) {
    aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
  }
  (*pcVar15)(plVar26,&local_b0);
  plVar26 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar26[2];
    plVar26[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_e8,&DAT_00693830,auStack_f0);
  piVar13 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar9,SUB81(&local_e8,0));
  local_f8 = (long *)0x0;
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)&local_d0,(intrusive_ptr *)&local_f8,piVar13);
  if (aplStack_a8[0] != (long *)0x0) {
    aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
  }
  plVar26 = *(long **)(this + 0x130);
  *(GUILabel **)(this + 0x128) = local_b0;
  *(long **)(this + 0x130) = aplStack_a8[0];
  if ((plVar26 != (long *)0x0) && (lVar14 = plVar26[1], plVar26[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    lVar14 = plVar26[2];
    plVar26[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  plVar26 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar26[2];
    plVar26[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  if ((local_f8 != (long *)0x0) &&
     (iVar18 = (int)local_f8[1] + -1, *(int *)(local_f8 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_f8 + 8))();
  }
  if ((local_d0 != (long *)0x0) &&
     (iVar18 = (int)local_d0[1] + -1, *(int *)(local_d0 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_d0 + 8))();
  }
  if ((undefined *)(local_e8 + -0x18) != puVar1) {
    piVar17 = (int *)(local_e8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_e8 + -0x18));
    }
  }
  puVar7 = PTR_ButtonPressed_007e54e0;
  pGVar24 = *(GUIControl **)(this + 0x128);
  local_b0 = (GUILabel *)0x0;
  uStack_c8 = 0;
  local_d0 = (long *)PTR_ButtonPressed_007e54e0;
  local_c0 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_d0);
  if ((uVar11 & 1) == 0) {
    local_98[0] = local_c0;
    aplStack_a8[1] = (long *)uStack_c8;
    aplStack_a8[0] = local_d0;
    local_b0 = (GUILabel *)PTR_stored_vtable_007e5ab0;
  }
  else {
    local_b0 = (GUILabel *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar24,this,&local_b0,1);
  if (((local_b0 != (GUILabel *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(aplStack_a8,aplStack_a8,2);
  }
  plVar26 = _UNK_006937f8;
  pGVar10 = _DAT_006937f0;
  aplStack_a8[0] = _UNK_006937f8;
  local_b0 = _DAT_006937f0;
  GUIView::SetFrame(*(GUIView **)(this + 0x128),(Rectangle *)&local_b0);
  plVar12 = *(long **)(this + 0x108);
  local_b0 = *(GUILabel **)(this + 0x128);
  pcVar15 = *(code **)(*plVar12 + 0x60);
  aplStack_a8[0] = *(long **)(this + 0x130);
  if (aplStack_a8[0] != (long *)0x0) {
    aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
  }
  (*pcVar15)(plVar12,&local_b0);
  plVar12 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar12[2];
    plVar12[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_e8,"ui_button_minus",auStack_f0);
  piVar13 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar9,SUB81(&local_e8,0));
  local_f8 = (long *)0x0;
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)&local_d0,(intrusive_ptr *)&local_f8,piVar13);
  if (aplStack_a8[0] != (long *)0x0) {
    aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
  }
  plVar12 = *(long **)(this + 0x140);
  *(GUILabel **)(this + 0x138) = local_b0;
  *(long **)(this + 0x140) = aplStack_a8[0];
  if ((plVar12 != (long *)0x0) && (lVar14 = plVar12[1], plVar12[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar14 = plVar12[2];
    plVar12[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar12[2];
    plVar12[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if ((local_f8 != (long *)0x0) &&
     (iVar18 = (int)local_f8[1] + -1, *(int *)(local_f8 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_f8 + 8))();
  }
  if ((local_d0 != (long *)0x0) &&
     (iVar18 = (int)local_d0[1] + -1, *(int *)(local_d0 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_d0 + 8))();
  }
  if ((undefined *)(local_e8 + -0x18) != puVar1) {
    piVar17 = (int *)(local_e8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_e8 + -0x18));
    }
  }
  aplStack_a8[0] = plVar26;
  local_b0 = pGVar10;
  GUIView::SetFrame(*(GUIView **)(this + 0x138),(Rectangle *)&local_b0);
  pGVar24 = *(GUIControl **)(this + 0x138);
  local_b0 = (GUILabel *)0x0;
  uStack_c8 = 0;
  local_d0 = (long *)puVar7;
  local_c0 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_d0);
  if ((uVar11 & 1) == 0) {
    local_98[0] = local_c0;
    aplStack_a8[1] = (long *)uStack_c8;
    aplStack_a8[0] = local_d0;
    local_b0 = (GUILabel *)PTR_stored_vtable_007e5ab0;
  }
  else {
    local_b0 = (GUILabel *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar24,this,&local_b0,1);
  if (((local_b0 != (GUILabel *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(aplStack_a8,aplStack_a8,2);
  }
  plVar12 = *(long **)(this + 0x108);
  local_b0 = *(GUILabel **)(this + 0x138);
  pcVar15 = *(code **)(*plVar12 + 0x60);
  aplStack_a8[0] = *(long **)(this + 0x140);
  if (aplStack_a8[0] != (long *)0x0) {
    aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
  }
  (*pcVar15)(plVar12,&local_b0);
  plVar12 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar12[2];
    plVar12[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  FUN_00666bb8(&local_d0,&DAT_0069384f,&local_f8);
  local_100 = 0xff000000;
  uStack_fc = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_b0,&local_d0,&uStack_fc,&local_100);
  if (aplStack_a8[0] != (long *)0x0) {
    aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
  }
  plVar12 = *(long **)(this + 0x150);
  *(GUILabel **)(this + 0x148) = local_b0;
  *(long **)(this + 0x150) = aplStack_a8[0];
  if ((plVar12 != (long *)0x0) && (lVar14 = plVar12[1], plVar12[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar14 = plVar12[2];
                    /* try { // try from 004f6790 to 005f6827 has its CatchHandler @ 004f6790
                       catch(type#1 @ 00000000) { ... } // from try @ 004f6790 with catch @ 004f6790
                       catch(type#1 @ 00000000) { ... } // from try @ 004f682c with catch @ 004f6790
                       catch(type#1 @ 00000000) { ... } // from try @ 004f979c with catch @ 004f6790
                        */
    plVar12[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar12[2];
    plVar12[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if (local_d0 + -3 != (long *)puVar1) {
    plVar12 = local_d0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = (int)*plVar12;
      *(int *)plVar12 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = (int)*plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *(int *)plVar12 = iVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete(local_d0 + -3);
    }
  }
  pGVar25 = *(GUILabel **)(this + 0x148);
                    /* try { // try from 004f6828 to 005f682b has its CatchHandler @ 004f9790 */
                    /* try { // try from 004f682c to 005f9793 has its CatchHandler @ 004f6790 */
  if ((((pGVar25[0x108] != (GUILabel)0xff) || (pGVar25[0x109] != (GUILabel)0xe6)) ||
      (pGVar25[0x10a] != (GUILabel)0xa0)) || (pGVar25[0x10b] != (GUILabel)0xff)) {
    plVar12 = *(long **)(pGVar25 + 0x118);
    *(undefined4 *)(pGVar25 + 0x108) = 0xffa0e6ff;
    *(undefined8 *)(pGVar25 + 0x110) = 0;
    *(undefined8 *)(pGVar25 + 0x118) = 0;
    if ((plVar12 != (long *)0x0) &&
       (lVar14 = plVar12[1], plVar12[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar14 = plVar12[2];
      plVar12[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    GUILabel::UpdateText(pGVar25);
    pGVar25 = *(GUILabel **)(this + 0x148);
  }
  plVar12 = *(long **)(this + 0x108);
  aplStack_a8[0] = *(long **)(this + 0x150);
  pcVar15 = *(code **)(*plVar12 + 0x60);
  if (aplStack_a8[0] != (long *)0x0) {
    aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
  }
  local_b0 = pGVar25;
  (*pcVar15)(plVar12,&local_b0);
  plVar12 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar12[2];
    plVar12[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_e8,"ui_button_help",auStack_f0);
  piVar13 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar9,SUB81(&local_e8,0));
  local_f8 = (long *)0x0;
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)&local_d0,(intrusive_ptr *)&local_f8,piVar13);
  if (aplStack_a8[0] != (long *)0x0) {
    aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
  }
  plVar12 = *(long **)(this + 0x160);
  *(GUILabel **)(this + 0x158) = local_b0;
  *(long **)(this + 0x160) = aplStack_a8[0];
  if ((plVar12 != (long *)0x0) && (lVar14 = plVar12[1], plVar12[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar14 = plVar12[2];
    plVar12[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar12[2];
    plVar12[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if ((local_f8 != (long *)0x0) &&
     (iVar18 = (int)local_f8[1] + -1, *(int *)(local_f8 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_f8 + 8))();
  }
  if ((local_d0 != (long *)0x0) &&
     (iVar18 = (int)local_d0[1] + -1, *(int *)(local_d0 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*local_d0 + 8))();
  }
  if ((undefined *)(local_e8 + -0x18) != puVar1) {
    piVar17 = (int *)(local_e8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar17;
      *piVar17 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar3) {
          *piVar17 = iVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_e8 + -0x18));
    }
  }
  aplStack_a8[0] = plVar26;
  local_b0 = pGVar10;
  GUIView::SetFrame(*(GUIView **)(this + 0x158),(Rectangle *)&local_b0);
  pGVar24 = *(GUIControl **)(this + 0x158);
  local_b0 = (GUILabel *)0x0;
  uStack_c8 = 0;
  local_d0 = (long *)puVar7;
  local_c0 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_d0);
  if ((uVar11 & 1) == 0) {
    local_98[0] = local_c0;
    aplStack_a8[1] = (long *)uStack_c8;
    aplStack_a8[0] = local_d0;
    local_b0 = (GUILabel *)PTR_stored_vtable_007e5ab0;
  }
  else {
    local_b0 = (GUILabel *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar24,this,&local_b0,1);
  if (((local_b0 != (GUILabel *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(aplStack_a8,aplStack_a8,2);
  }
  pGVar16 = *(GUILabel **)(this + 0x158);
  aplStack_a8[0] = _UNK_00693808;
  local_b0 = _DAT_00693800;
  local_98[0] = (AttributePointsView *)_UNK_00693818;
  aplStack_a8[1] = (long *)_DAT_00693810;
  local_98[2] = (AttributePointsView *)_UNK_00693828;
  local_98[1] = (AttributePointsView *)_DAT_00693820;
  pGVar10 = pGVar16 + 0x198;
  pGVar25 = pGVar10;
  if (pGVar10 <= pGVar16 + 0x15c) {
    pGVar25 = pGVar16 + 0x15c;
  }
  uVar11 = ((ulong)(pGVar25 + (-0x159 - (long)pGVar16)) >> 2) + 1;
  uStack_78 = _UNK_00683808;
  local_98[3] = (AttributePointsView *)_DAT_00683800;
  if (uVar11 < 8) {
    pGVar19 = pGVar16 + 0x158;
    ppGVar20 = &local_b0;
  }
  else {
    uVar21 = uVar11 & 0x7ffffffffffffff8;
    ppGVar20 = (GUILabel **)((long)&local_b0 + uVar21 * 4);
    pGVar25 = pGVar16 + 0x168;
    pGVar19 = pGVar16 + uVar21 * 4 + 0x158;
    pplVar22 = aplStack_a8 + 1;
    uVar23 = uVar21;
    do {
      pplVar5 = pplVar22 + -1;
      plVar26 = pplVar22[-2];
      plVar27 = pplVar22[1];
      plVar12 = *pplVar22;
      uVar23 = uVar23 - 8;
      pplVar22 = pplVar22 + 4;
      *(long **)(pGVar25 + -8) = *pplVar5;
      *(long **)(pGVar25 + -0x10) = plVar26;
      *(long **)(pGVar25 + 8) = plVar27;
      *(long **)pGVar25 = plVar12;
      pGVar25 = pGVar25 + 0x20;
    } while (uVar23 != 0);
    if (uVar11 == uVar21) goto LAB_004f6bac;
  }
  do {
    pGVar25 = pGVar19 + 4;
    *(undefined4 *)pGVar19 = *(undefined4 *)ppGVar20;
    pGVar19 = pGVar25;
    ppGVar20 = (GUILabel **)((long)ppGVar20 + 4);
  } while (pGVar25 < pGVar10);
LAB_004f6bac:
  pcVar15 = *(code **)(*(long *)this + 0x60);
  aplStack_a8[0] = *(long **)(this + 0x160);
  if (aplStack_a8[0] != (long *)0x0) {
    aplStack_a8[0][1] = aplStack_a8[0][1] + 1;
  }
  local_b0 = pGVar16;
  (*pcVar15)(this,&local_b0);
  plVar26 = aplStack_a8[0];
  if ((aplStack_a8[0] != (long *)0x0) &&
     (lVar14 = aplStack_a8[0][1], aplStack_a8[0][1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*aplStack_a8[0] + 0x10))(aplStack_a8[0]);
    lVar14 = plVar26[2];
    plVar26[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  *(undefined1 *)(*(long *)(this + 0x128) + 0xe4) = 1;
  *(undefined1 *)(*(long *)(this + 0x138) + 0xe4) = 1;
  *(undefined1 *)(*(long *)(this + 0x158) + 0xe4) = 1;
  if ((local_d8 != (long *)0x0) &&
     (lVar14 = local_d8[1], local_d8[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*local_d8 + 0x10))(local_d8);
    lVar14 = local_d8[2];
    local_d8[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*local_d8 + 0x18))(local_d8);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


