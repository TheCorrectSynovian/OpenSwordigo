/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00516bd0
 * Function: Caver::ItemInfoView::Init
 * Signature: undefined __thiscall Init(ItemInfoView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ItemInfoView::Init() */

void __thiscall Caver::ItemInfoView::Init(ItemInfoView *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  string *psVar8;
  GUIButton *pGVar9;
  ulong uVar10;
  GUIFrameView *pGVar11;
  GUILabel *pGVar12;
  FontLibrary *pFVar13;
  MenuItemSlot *this_00;
  GUIView *this_01;
  long lVar14;
  code *pcVar15;
  int *piVar16;
  int iVar17;
  GUIControl *pGVar18;
  long *plVar19;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ItemInfoView *local_88;
  long *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  ItemInfoView *local_60;
  undefined1 auStack_50 [8];
  long local_48;
  
                    /* try { // try from 00516be8 to 00616bfb has its CatchHandler @ 00516c20 */
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00516bfc to 00616c23 has its CatchHandler @ 00516bcc */
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a0,"ui_close_button",auStack_50);
                    /* catch() { ... } // from try @ 00516be8 with catch @ 00516c20 */
  TextureLibrary::TextureForName(psVar8,SUB81(&local_a0,0));
  puVar7 = PTR_DAT_007e5de8;
  if ((undefined *)((long)local_a0 + -0x18) != PTR_DAT_007e5de8) {
    piVar16 = (int *)((long)local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar17 = *piVar16;
      *piVar16 = iVar17 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 0051775c with catch @ 00517830 */
        iVar17 = *piVar16;
                    /* catch() { ... } // from try @ 00517708 with catch @ 00517834 */
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = iVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar17 < 1) {
                    /* try { // try from 005178a4 to 006178bb has its CatchHandler @ 005178cc */
      operator_delete((undefined *)((long)local_a0 + -0x18));
    }
  }
  pGVar9 = operator_new(0x1d0);
  GUIButton::GUIButton(pGVar9,0);
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>
            ((shared_ptr<Caver::GUIButton> *)&local_a0,pGVar9);
  uVar1 = *(undefined8 *)(this + 0xf0);
  plVar19 = *(long **)(this + 0xf8);
                    /* catch() { ... } // from try @ 00516ccc with catch @ 00516c78 */
  *(long **)(this + 0xf0) = local_a0;
  *(long **)(this + 0xf8) = uStack_98;
  local_a0 = (long *)uVar1;
  uStack_98 = plVar19;
  if ((plVar19 != (long *)0x0) && (lVar14 = plVar19[1], plVar19[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar14 = plVar19[2];
    plVar19[2] = lVar14 + -1;
                    /* try { // try from 00516cb0 to 00616cb3 has its CatchHandler @ 00516cc0 */
    if (lVar14 + -1 == 0) {
                    /* catch() { ... } // from try @ 00516cb0 with catch @ 00516cc0 */
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
                    /* try { // try from 00516cc4 to 00616ccb has its CatchHandler @ 00516cd4 */
                    /* try { // try from 00516ccc to 00616cd7 has its CatchHandler @ 00516c78 */
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0xf0),0,&local_78);
                    /* catch() { ... } // from try @ 00516cc4 with catch @ 00516cd4 */
                    /* try { // try from 00516cd8 to 00616d3b has its CatchHandler @ 00516cd8
                       catch() { ... } // from try @ 00516cd8 with catch @ 00516cd8
                       catch() { ... } // from try @ 00516d58 with catch @ 00516cd8
                       catch() { ... } // from try @ 00516de4 with catch @ 00516cd8
                       catch() { ... } // from try @ 00516e54 with catch @ 00516cd8 */
  uStack_98 = *(long **)((long)local_78 + 0x54);
  local_a0 = (long *)0x0;
  GUIView::SetFrame(*(GUIView **)(this + 0xf0),(Rectangle *)&local_a0);
  pGVar18 = *(GUIControl **)(this + 0xf0);
  local_a0 = (long *)0x0;
  uStack_68 = 0;
  local_70 = PTR_ButtonPressed_007e6f70;
  local_60 = this;
  uVar10 = boost::detail::function::has_empty_target(&local_70);
  if ((uVar10 & 1) == 0) {
    local_88 = local_60;
    uStack_90 = uStack_68;
    uStack_98 = (long *)local_70;
    local_a0 = (long *)PTR_stored_vtable_007e6530;
  }
  else {
    local_a0 = (long *)(undefined *)0x0;
  }
                    /* try { // try from 00516d3c to 00616d57 has its CatchHandler @ 00516e48 */
  GUIControl::AddTargetActionForControlEvent(pGVar18,this,&local_a0,1);
                    /* try { // try from 00516d58 to 00616ddf has its CatchHandler @ 00516cd8 */
  if (((local_a0 != (long *)0x0) && (((ulong)local_a0 & 1) == 0)) &&
     (*(code **)((ulong)local_a0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a0 & 0xfffffffffffffffe))(&uStack_98,&uStack_98,2);
  }
  local_a0 = *(long **)(this + 0xf0);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  uStack_98 = *(long **)(this + 0xf8);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  (*pcVar15)(this,&local_a0);
  plVar19 = uStack_98;
  if ((uStack_98 != (long *)0x0) &&
     (lVar14 = uStack_98[1], uStack_98[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar14 = plVar19[2];
                    /* try { // try from 00516de0 to 00616de3 has its CatchHandler @ 00516e34 */
                    /* try { // try from 00516de4 to 00616e4b has its CatchHandler @ 00516cd8 */
    plVar19[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar11 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar11);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_a0,pGVar11);
  plVar19 = *(long **)(this + 0x110);
  plVar3 = *(long **)(this + 0x118);
  *(long **)(this + 0x110) = local_a0;
  *(long **)(this + 0x118) = uStack_98;
                    /* catch() { ... } // from try @ 00516de0 with catch @ 00516e34 */
  local_a0 = plVar19;
  uStack_98 = plVar3;
  if ((plVar3 != (long *)0x0) && (lVar14 = plVar3[1], plVar3[1] = lVar14 + -1, lVar14 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00516d3c with catch @ 00516e48 */
                    /* try { // try from 00516e4c to 00616e53 has its CatchHandler @ 00516e5c */
                    /* try { // try from 00516e54 to 00616e5f has its CatchHandler @ 00516cd8 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar14 = plVar3[2];
                    /* catch() { ... } // from try @ 00516e4c with catch @ 00516e5c */
                    /* catch() { ... } // from try @ 00516ea8 with catch @ 00516e60
                       catch() { ... } // from try @ 00516ec4 with catch @ 00516e60 */
    plVar3[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  pGVar11 = *(GUIFrameView **)(this + 0x110);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"ui_frame_dark",auStack_a8);
                    /* try { // try from 00516ea4 to 00616ea7 has its CatchHandler @ 00516eb8 */
                    /* try { // try from 00516ea8 to 00616ebb has its CatchHandler @ 00516e60 */
  TextureLibrary::TextureForName(psVar8,SUB81(&local_70,0));
                    /* catch() { ... } // from try @ 00516ea4 with catch @ 00516eb8 */
  GUIFrameView::SetFrameTexture(pGVar11,(intrusive_ptr *)&local_a0,false);
                    /* try { // try from 00516ebc to 00616ec3 has its CatchHandler @ 00516ecc */
                    /* try { // try from 00516ec4 to 00616ecf has its CatchHandler @ 00516e60 */
                    /* catch() { ... } // from try @ 00516ebc with catch @ 00516ecc */
  if ((local_a0 != (long *)0x0) &&
     (iVar17 = (int)local_a0[1] + -1, *(int *)(local_a0 + 1) = iVar17, iVar17 == 0)) {
    (**(code **)(*local_a0 + 8))();
  }
  if (local_70 + -0x18 != puVar7) {
                    /* catch() { ... } // from try @ 005177dc with catch @ 00517848 */
                    /* try { // try from 0051784c to 00617853 has its CatchHandler @ 0051785c */
    piVar16 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar17 = *piVar16;
      *piVar16 = iVar17 + -1;
    }
    else {
      do {
                    /* try { // try from 00517854 to 0061785f has its CatchHandler @ 005176ac */
        iVar17 = *piVar16;
                    /* catch() { ... } // from try @ 0051784c with catch @ 0051785c */
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = iVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 005178bc with catch @ 00517860
                       catch() { ... } // from try @ 005178d8 with catch @ 00517860 */
      } while (cVar4 != '\0');
    }
                    /* try { // try from 005178bc to 006178cf has its CatchHandler @ 00517860 */
    if (iVar17 < 1) {
      operator_delete(local_70 + -0x18);
    }
  }
                    /* catch() { ... } // from try @ 00516f68 with catch @ 00516efc */
  uStack_98 = (long *)_UNK_00694488;
  local_a0 = (long *)_DAT_00694480;
  GUIView::SetFrame(*(GUIView **)(this + 0x110),(Rectangle *)&local_a0);
  local_a0 = *(long **)(this + 0x110);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  uStack_98 = *(long **)(this + 0x118);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  (*pcVar15)(this,&local_a0);
  plVar19 = uStack_98;
                    /* try { // try from 00516f40 to 00616f43 has its CatchHandler @ 00516f5c */
                    /* try { // try from 00516f44 to 00616f4b has its CatchHandler @ 00516f70 */
  if ((uStack_98 != (long *)0x0) &&
     (lVar14 = uStack_98[1], uStack_98[1] = lVar14 + -1, lVar14 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00516f40 with catch @ 00516f5c */
                    /* try { // try from 00516f60 to 00616f67 has its CatchHandler @ 00516f6c */
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar14 = plVar19[2];
                    /* try { // try from 00516f68 to 00616f83 has its CatchHandler @ 00516efc */
                    /* catch() { ... } // from try @ 00516f60 with catch @ 00516f6c */
    plVar19[2] = lVar14 + -1;
                    /* catch() { ... } // from try @ 00516f44 with catch @ 00516f70 */
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar12 = operator_new(0x150);
  GUILabel::GUILabel(pGVar12);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_a0,pGVar12);
  lVar14 = *(long *)(this + 0x130);
  plVar19 = *(long **)(this + 0x138);
  *(long **)(this + 0x130) = local_a0;
  *(long **)(this + 0x138) = uStack_98;
  local_a0 = (long *)lVar14;
  uStack_98 = plVar19;
  if ((plVar19 != (long *)0x0) && (lVar14 = plVar19[1], plVar19[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar14 = plVar19[2];
    plVar19[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar12 = *(GUILabel **)(this + 0x130);
  pFVar13 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(pFVar13);
                    /* try { // try from 00517010 to 006171f3 has its CatchHandler @ 00517010
                       catch() { ... } // from try @ 00517010 with catch @ 00517010
                       catch() { ... } // from try @ 005171f8 with catch @ 00517010 */
  if (local_a0 != (long *)*(long *)(pGVar12 + 0xf0)) {
    if (uStack_98 != (long *)0x0) {
      uStack_98[1] = uStack_98[1] + 1;
    }
    plVar19 = *(long **)(pGVar12 + 0xf8);
    *(long **)(pGVar12 + 0xf0) = local_a0;
    *(long **)(pGVar12 + 0xf8) = uStack_98;
    if ((plVar19 != (long *)0x0) &&
       (lVar14 = plVar19[1], plVar19[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar14 = plVar19[2];
      plVar19[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    GUILabel::UpdateText(pGVar12);
  }
  plVar19 = uStack_98;
  if ((uStack_98 != (long *)0x0) &&
     (lVar14 = uStack_98[1], uStack_98[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar14 = plVar19[2];
    plVar19[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar12 = *(GUILabel **)(this + 0x130);
  if ((((pGVar12[0x108] != (GUILabel)0xff) || (pGVar12[0x109] != (GUILabel)0xff)) ||
      (pGVar12[0x10a] != (GUILabel)0xff)) || (pGVar12[0x10b] != (GUILabel)0xff)) {
    plVar19 = *(long **)(pGVar12 + 0x118);
    *(undefined4 *)(pGVar12 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar12 + 0x110) = 0;
    *(undefined8 *)(pGVar12 + 0x118) = 0;
    if ((plVar19 != (long *)0x0) &&
       (lVar14 = plVar19[1], plVar19[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar14 = plVar19[2];
      plVar19[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    GUILabel::UpdateText(pGVar12);
    pGVar12 = *(GUILabel **)(this + 0x130);
  }
  uVar1 = DAT_00683728;
  pGVar12[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar12 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar12 + 0x148) = uVar1;
  GUILabel::UpdateText(pGVar12);
  local_a0 = (long *)DAT_006944c0;
  uStack_98 = (long *)CONCAT44(*(undefined4 *)(*(long *)(this + 0x110) + 0x90),0x43660000);
  GUIView::SetFrame(*(GUIView **)(this + 0x130),(Rectangle *)&local_a0);
  plVar19 = *(long **)(this + 0x110);
  local_a0 = *(long **)(this + 0x130);
  pcVar15 = *(code **)(*plVar19 + 0x60);
  uStack_98 = *(long **)(this + 0x138);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  (*pcVar15)(plVar19,&local_a0);
  plVar19 = uStack_98;
                    /* try { // try from 005171f4 to 006171f7 has its CatchHandler @ 00517370 */
                    /* try { // try from 005171f8 to 00617383 has its CatchHandler @ 00517010 */
  if ((uStack_98 != (long *)0x0) &&
     (lVar14 = uStack_98[1], uStack_98[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar14 = plVar19[2];
    plVar19[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  this_00 = operator_new(0x280);
  MenuItemSlot::MenuItemSlot(this_00);
  boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>
            ((shared_ptr<Caver::MenuItemSlot> *)&local_a0,this_00);
  uVar2 = *(undefined8 *)(this + 0x100);
  plVar19 = *(long **)(this + 0x108);
  *(long **)(this + 0x100) = local_a0;
  *(long **)(this + 0x108) = uStack_98;
  local_a0 = (long *)uVar2;
  uStack_98 = plVar19;
  if ((plVar19 != (long *)0x0) && (lVar14 = plVar19[1], plVar19[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar14 = plVar19[2];
    plVar19[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  MenuItemSlot::Init(*(MenuItemSlot **)(this + 0x100),1.0);
  this_01 = *(GUIView **)(this + 0x100);
  this_01[0x120] = (GUIView)0x0;
  uStack_98 = *(long **)(this_01 + 0x7c);
  local_a0 = (long *)CONCAT44((int)((*(float *)(*(long *)(this + 0x110) + 0x88) +
                                    *(float *)(*(long *)(this + 0x110) + 0x90) * 0.5) -
                                   *(float *)(this_01 + 0x80) * 0.5),0xc0000000);
  GUIView::SetFrame(this_01,(Rectangle *)&local_a0);
  plVar19 = *(long **)(this + 0x110);
  local_a0 = *(long **)(this + 0x100);
  pcVar15 = *(code **)(*plVar19 + 0x60);
  uStack_98 = *(long **)(this + 0x108);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  (*pcVar15)(plVar19,&local_a0);
  plVar19 = uStack_98;
  if ((uStack_98 != (long *)0x0) &&
     (lVar14 = uStack_98[1], uStack_98[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar14 = plVar19[2];
    plVar19[2] = lVar14 + -1;
                    /* catch() { ... } // from try @ 005171f4 with catch @ 00517370 */
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar11 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar11);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_a0,pGVar11);
  plVar19 = *(long **)(this + 0x120);
  plVar3 = *(long **)(this + 0x128);
  *(long **)(this + 0x120) = local_a0;
  *(long **)(this + 0x128) = uStack_98;
  local_a0 = plVar19;
  uStack_98 = plVar3;
  if ((plVar3 != (long *)0x0) && (lVar14 = plVar3[1], plVar3[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar14 = plVar3[2];
    plVar3[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  pGVar11 = *(GUIFrameView **)(this + 0x120);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"ui_frame_dark",auStack_a8);
  TextureLibrary::TextureForName(psVar8,SUB81(&local_70,0));
  GUIFrameView::SetFrameTexture(pGVar11,(intrusive_ptr *)&local_a0,false);
  if ((local_a0 != (long *)0x0) &&
     (iVar17 = (int)local_a0[1] + -1, *(int *)(local_a0 + 1) = iVar17, iVar17 == 0)) {
    (**(code **)(*local_a0 + 8))();
  }
  if (local_70 + -0x18 != puVar7) {
    piVar16 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 005178a4 with catch @ 005178cc */
      iVar17 = *piVar16;
                    /* try { // try from 005178d0 to 006178d7 has its CatchHandler @ 005178e0 */
      *piVar16 = iVar17 + -1;
    }
    else {
      do {
        iVar17 = *piVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = iVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* try { // try from 005178d8 to 006178e3 has its CatchHandler @ 00517860 */
    if (iVar17 < 1) {
                    /* catch() { ... } // from try @ 005178d0 with catch @ 005178e0 */
      operator_delete(local_70 + -0x18);
    }
  }
  uStack_98 = (long *)_UNK_00694498;
  local_a0 = (long *)_DAT_00694490;
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)&local_a0);
  local_a0 = *(long **)(this + 0x120);
  pcVar15 = *(code **)(*(long *)this + 0x60);
  uStack_98 = *(long **)(this + 0x128);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  (*pcVar15)(this,&local_a0);
  plVar19 = uStack_98;
  if ((uStack_98 != (long *)0x0) &&
     (lVar14 = uStack_98[1], uStack_98[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar14 = plVar19[2];
    plVar19[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar12 = operator_new(0x150);
  GUILabel::GUILabel(pGVar12);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_a0,pGVar12);
  lVar14 = *(long *)(this + 0x140);
  plVar19 = *(long **)(this + 0x148);
  *(long **)(this + 0x140) = local_a0;
  *(long **)(this + 0x148) = uStack_98;
  local_a0 = (long *)lVar14;
  uStack_98 = plVar19;
  if ((plVar19 != (long *)0x0) && (lVar14 = plVar19[1], plVar19[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar14 = plVar19[2];
    plVar19[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar12 = *(GUILabel **)(this + 0x140);
  pFVar13 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(pFVar13);
  if (local_a0 != (long *)*(long *)(pGVar12 + 0xf0)) {
    if (uStack_98 != (long *)0x0) {
      uStack_98[1] = uStack_98[1] + 1;
    }
    plVar19 = *(long **)(pGVar12 + 0xf8);
    *(long **)(pGVar12 + 0xf0) = local_a0;
    *(long **)(pGVar12 + 0xf8) = uStack_98;
                    /* catch() { ... } // from try @ 005175f4 with catch @ 005175c4 */
    if ((plVar19 != (long *)0x0) &&
       (lVar14 = plVar19[1], plVar19[1] = lVar14 + -1, lVar14 + -1 == 0)) {
                    /* try { // try from 005175e0 to 006175f3 has its CatchHandler @ 00517618 */
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar14 = plVar19[2];
      plVar19[2] = lVar14 + -1;
                    /* try { // try from 005175f4 to 0061761b has its CatchHandler @ 005175c4 */
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    GUILabel::UpdateText(pGVar12);
  }
  plVar19 = uStack_98;
                    /* catch() { ... } // from try @ 005175e0 with catch @ 00517618 */
  if ((uStack_98 != (long *)0x0) &&
     (lVar14 = uStack_98[1], uStack_98[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar14 = plVar19[2];
    plVar19[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
                    /* catch() { ... } // from try @ 005176a0 with catch @ 00517654 */
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  pGVar12 = *(GUILabel **)(this + 0x140);
                    /* try { // try from 00517684 to 00617687 has its CatchHandler @ 00517694 */
  if ((((pGVar12[0x108] != (GUILabel)0xfb) || (pGVar12[0x109] != (GUILabel)0xb0)) ||
      (pGVar12[0x10a] != (GUILabel)0x3b)) || (pGVar12[0x10b] != (GUILabel)0xff)) {
    plVar19 = *(long **)(pGVar12 + 0x118);
                    /* catch() { ... } // from try @ 00517684 with catch @ 00517694 */
                    /* try { // try from 00517698 to 0061769f has its CatchHandler @ 005176a8 */
    *(undefined4 *)(pGVar12 + 0x108) = 0xff3bb0fb;
    *(undefined8 *)(pGVar12 + 0x110) = 0;
    *(undefined8 *)(pGVar12 + 0x118) = 0;
                    /* try { // try from 005176a0 to 006176ab has its CatchHandler @ 00517654 */
                    /* catch() { ... } // from try @ 00517698 with catch @ 005176a8 */
                    /* try { // try from 005176ac to 00617707 has its CatchHandler @ 005176ac
                       catch() { ... } // from try @ 005176ac with catch @ 005176ac
                       catch() { ... } // from try @ 0051770c with catch @ 005176ac
                       catch() { ... } // from try @ 00517760 with catch @ 005176ac
                       catch() { ... } // from try @ 005177f8 with catch @ 005176ac
                       catch() { ... } // from try @ 00517854 with catch @ 005176ac */
    if ((plVar19 != (long *)0x0) &&
       (lVar14 = plVar19[1], plVar19[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      lVar14 = plVar19[2];
      plVar19[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
    GUILabel::UpdateText(pGVar12);
    pGVar12 = *(GUILabel **)(this + 0x140);
  }
  pGVar12[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar12 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar12 + 0x148) = uVar1;
                    /* try { // try from 00517708 to 0061770b has its CatchHandler @ 00517834 */
                    /* try { // try from 0051770c to 0061775b has its CatchHandler @ 005176ac */
  GUILabel::UpdateText(pGVar12);
  pGVar12 = *(GUILabel **)(this + 0x140);
  pGVar12[0x138] = (GUILabel)0x1;
  GUILabel::UpdateText(pGVar12);
  local_a0 = (long *)_DAT_006944c8;
  uStack_98 = (long *)CONCAT44(*(undefined4 *)(*(long *)(this + 0x120) + 0x90),
                               *(float *)(*(long *)(this + 0x120) + 0x8c) + DAT_00684324);
  GUIView::SetFrame(*(GUIView **)(this + 0x140),(Rectangle *)&local_a0);
  plVar19 = *(long **)(this + 0x120);
  local_a0 = *(long **)(this + 0x140);
                    /* try { // try from 0051775c to 0061775f has its CatchHandler @ 00517830 */
                    /* try { // try from 00517760 to 006177db has its CatchHandler @ 005176ac */
  pcVar15 = *(code **)(*plVar19 + 0x60);
  uStack_98 = *(long **)(this + 0x148);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  (*pcVar15)(plVar19,&local_a0);
  plVar19 = uStack_98;
  if ((uStack_98 != (long *)0x0) &&
     (lVar14 = uStack_98[1], uStack_98[1] = lVar14 + -1, lVar14 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar14 = plVar19[2];
    plVar19[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
                    /* try { // try from 005177dc to 006177f7 has its CatchHandler @ 00517848 */
  if ((local_78 != (long *)0x0) &&
     (iVar17 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar17, iVar17 == 0)) {
    (**(code **)(*local_78 + 8))();
  }
                    /* try { // try from 005177f8 to 0061784b has its CatchHandler @ 005176ac */
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


