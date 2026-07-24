/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053f67c
 * Function: Caver::TabbedMenuView::TabbedMenuView
 * Signature: undefined __thiscall TabbedMenuView(TabbedMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TabbedMenuView::TabbedMenuView() */

void __thiscall Caver::TabbedMenuView::TabbedMenuView(TabbedMenuView *this)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  GUIFrameView *pGVar7;
  string *psVar8;
  GUIView *pGVar9;
  GUILabel *pGVar10;
  TabView *this_00;
  long lVar11;
  code *pcVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  long *plVar16;
  float fVar17;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  GUIView::GUIView((GUIView *)this);
                    /* try { // try from 0053f6bc to 0063f6e3 has its CatchHandler @ 0053f988 */
  puVar1 = PTR_vtable_007e7c98 + 0x10;
  *(undefined **)(this + 0xf0) = PTR_vtable_007e7c98 + 0x158;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  this[0x120] = (TabbedMenuView)0x0;
  memset(this + 0x128,0,0x60);
                    /* try { // try from 0053f6e8 to 0063f7a7 has its CatchHandler @ 0053f98c */
  pGVar7 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar7);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_58,pGVar7);
  plVar16 = *(long **)(this + 0x148);
  plVar2 = *(long **)(this + 0x150);
  *(long **)(this + 0x148) = local_58;
  *(long **)(this + 0x150) = local_50;
  local_58 = plVar16;
  local_50 = plVar2;
  if ((plVar2 != (long *)0x0) && (lVar11 = plVar2[1], plVar2[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar11 = plVar2[2];
    plVar2[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar7 = *(GUIFrameView **)(this + 0x148);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(local_68,"ui_menu_stripe",auStack_70);
  TextureLibrary::TextureForName(psVar8,SUB81(local_68,0));
  GUIFrameView::SetFrameTexture(pGVar7,(intrusive_ptr *)&local_58,true);
                    /* try { // try from 0053f7ac to 0063f7bf has its CatchHandler @ 0053f970 */
  if ((local_58 != (long *)0x0) &&
     (iVar14 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar14, iVar14 == 0)) {
                    /* try { // try from 0053f7c4 to 0063f7cb has its CatchHandler @ 0053f8fc */
    (**(code **)(*local_58 + 8))();
  }
  puVar1 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar13 = (int *)(local_68[0] + -8);
                    /* try { // try from 005401b8 to 006401bb has its CatchHandler @ 0054044c */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  pGVar9 = *(GUIView **)(this + 0x148);
  plVar16 = *(long **)(pGVar9 + 0x100);
  if (plVar16 != (long *)0x0) {
                    /* try { // try from 0053f7f0 to 0063f7fb has its CatchHandler @ 0053f98c */
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  }
  local_58 = *(long **)(pGVar9 + 0x74);
  local_50 = *(long **)((long)plVar16 + 0x54);
  GUIView::SetFrame(pGVar9,(Rectangle *)&local_58);
                    /* try { // try from 0053f810 to 0063f817 has its CatchHandler @ 0053f8a8 */
  iVar14 = (int)plVar16[1] + -1;
  *(int *)(plVar16 + 1) = iVar14;
  if (iVar14 == 0) {
                    /* try { // try from 0053f824 to 0063f82f has its CatchHandler @ 0053f98c */
    (**(code **)(*plVar16 + 8))(plVar16);
  }
                    /* try { // try from 0053f830 to 0063f8cf has its CatchHandler @ 0053f5bc */
  local_58 = *(long **)(this + 0x148);
  pcVar12 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x150);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar12)(this,&local_58);
  plVar16 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar11 = local_50[1], local_50[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar11 = plVar16[2];
    plVar16[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* catch() { ... } // from try @ 0053f810 with catch @ 0053f8a8 */
                    /* catch() { ... } // from try @ 0053f66c with catch @ 0053f8ac */
  pGVar7 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar7);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_58,pGVar7);
  plVar16 = *(long **)(this + 0x158);
  plVar2 = *(long **)(this + 0x160);
                    /* try { // try from 0053f8d0 to 0063f8f7 has its CatchHandler @ 0053f9e0 */
  *(long **)(this + 0x158) = local_58;
  *(long **)(this + 0x160) = local_50;
  local_58 = plVar16;
  local_50 = plVar2;
  if ((plVar2 != (long *)0x0) && (lVar11 = plVar2[1], plVar2[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 0053f8f8 to 0063f9af has its CatchHandler @ 0053f5bc */
                    /* catch() { ... } // from try @ 0053f7c4 with catch @ 0053f8fc */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar11 = plVar2[2];
    plVar2[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar7 = *(GUIFrameView **)(this + 0x158);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(local_68,"ui_menu_stripe_tag",auStack_70);
  TextureLibrary::TextureForName(psVar8,SUB81(local_68,0));
  GUIFrameView::SetFrameTexture(pGVar7,(intrusive_ptr *)&local_58,true);
                    /* catch() { ... } // from try @ 0053f7ac with catch @ 0053f970 */
                    /* catch() { ... } // from try @ 0053f5f8 with catch @ 0053f974 */
  if ((local_58 != (long *)0x0) &&
     (iVar14 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar14, iVar14 == 0)) {
                    /* catch() { ... } // from try @ 0053f618 with catch @ 0053f988
                       catch() { ... } // from try @ 0053f6bc with catch @ 0053f988 */
    (**(code **)(*local_58 + 8))();
  }
                    /* catch() { ... } // from try @ 0053f610 with catch @ 0053f98c
                       catch() { ... } // from try @ 0053f6e8 with catch @ 0053f98c
                       catch() { ... } // from try @ 0053f7f0 with catch @ 0053f98c
                       catch() { ... } // from try @ 0053f824 with catch @ 0053f98c */
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
                    /* try { // try from 005401d8 to 006401df has its CatchHandler @ 005403b0 */
    piVar13 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  pGVar9 = *(GUIView **)(this + 0x158);
  plVar16 = *(long **)(pGVar9 + 0x100);
  uVar15 = _DAT_00000054;
  fVar17 = _DAT_00000058;
  if (plVar16 != (long *)0x0) {
    uVar15 = *(undefined4 *)((long)plVar16 + 0x54);
    fVar17 = *(float *)(plVar16 + 0xb);
                    /* try { // try from 0053f9b0 to 0063f9d7 has its CatchHandler @ 0053f9e0 */
    if ((int)plVar16[1] == 0) {
      (**(code **)(*plVar16 + 8))(plVar16);
      pGVar9 = *(GUIView **)(this + 0x158);
    }
  }
                    /* catch() { ... } // from try @ 0053f8d0 with catch @ 0053f9e0
                       catch() { ... } // from try @ 0053f9b0 with catch @ 0053f9e0 */
                    /* try { // try from 0053f9e4 to 0063fa1b has its CatchHandler @ 0053f9e4
                       catch() { ... } // from try @ 0053f9e4 with catch @ 0053f9e4
                       catch() { ... } // from try @ 0053fa20 with catch @ 0053f9e4
                       catch() { ... } // from try @ 0053fac0 with catch @ 0053f9e4
                       catch() { ... } // from try @ 0053fbd8 with catch @ 0053f9e4 */
  local_50 = (long *)CONCAT44(fVar17,uVar15);
  local_58 = (long *)((ulong)(uint)(int)((*(float *)(*(long *)(this + 0x148) + 0x88) +
                                         *(float *)(*(long *)(this + 0x148) + 0x90) * 0.5) -
                                        fVar17 * 0.5) << 0x20);
  GUIView::SetFrame(pGVar9,(Rectangle *)&local_58);
  plVar16 = *(long **)(this + 0x148);
                    /* try { // try from 0053fa1c to 0063fa1f has its CatchHandler @ 0053fbe0 */
  local_58 = *(long **)(this + 0x158);
                    /* try { // try from 0053fa20 to 0063fa6b has its CatchHandler @ 0053f9e4 */
  pcVar12 = *(code **)(*plVar16 + 0x60);
  local_50 = *(long **)(this + 0x160);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar12)(plVar16,&local_58);
  plVar16 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar11 = local_50[1], local_50[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 0053fa6c to 0063fa77 has its CatchHandler @ 0053fb44 */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar11 = plVar16[2];
    plVar16[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 0053fa98 to 0063fabf has its CatchHandler @ 0053fb34 */
  pGVar10 = operator_new(0x150);
  GUILabel::GUILabel(pGVar10);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_58,pGVar10);
  plVar16 = *(long **)(this + 0x168);
  plVar2 = *(long **)(this + 0x170);
                    /* try { // try from 0053fac0 to 0063fb67 has its CatchHandler @ 0053f9e4 */
  *(long **)(this + 0x168) = local_58;
  *(long **)(this + 0x170) = local_50;
  local_58 = plVar16;
  local_50 = plVar2;
  if ((plVar2 != (long *)0x0) && (lVar11 = plVar2[1], plVar2[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar11 = plVar2[2];
    plVar2[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar10 = *(GUILabel **)(this + 0x168);
  if (*(int *)(pGVar10 + 0x70) != 0x12) {
    plVar16 = *(long **)(pGVar10 + 0x58);
    *(undefined4 *)(pGVar10 + 0x70) = 0x12;
                    /* catch() { ... } // from try @ 0053fa98 with catch @ 0053fb34 */
    if ((plVar16 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar16 + 0x8c))) {
                    /* catch() { ... } // from try @ 0053fa6c with catch @ 0053fb44 */
      (**(code **)(*plVar16 + 0x58))();
      pGVar10 = *(GUILabel **)(this + 0x168);
    }
  }
  Font::DefaultFont();
                    /* try { // try from 0053fb68 to 0063fbd7 has its CatchHandler @ 0053fbdc */
  if (local_58 != *(long **)(pGVar10 + 0xf0)) {
    if (local_50 != (long *)0x0) {
      local_50[1] = local_50[1] + 1;
    }
    plVar16 = *(long **)(pGVar10 + 0xf8);
    *(long **)(pGVar10 + 0xf0) = local_58;
    *(long **)(pGVar10 + 0xf8) = local_50;
    if ((plVar16 != (long *)0x0) &&
       (lVar11 = plVar16[1], plVar16[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar11 = plVar16[2];
      plVar16[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    GUILabel::UpdateText(pGVar10);
  }
  plVar16 = local_50;
                    /* try { // try from 0053fbd8 to 0063fbf3 has its CatchHandler @ 0053f9e4 */
                    /* catch() { ... } // from try @ 0053fb68 with catch @ 0053fbdc */
                    /* catch() { ... } // from try @ 0053fa1c with catch @ 0053fbe0 */
  if ((local_50 != (long *)0x0) &&
     (lVar11 = local_50[1], local_50[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 0053fbf4 to 0063fc2b has its CatchHandler @ 0053fbf4
                       catch() { ... } // from try @ 0053fbf4 with catch @ 0053fbf4
                       catch() { ... } // from try @ 0053fd3c with catch @ 0053fbf4
                       catch() { ... } // from try @ 0053fe28 with catch @ 0053fbf4
                       catch() { ... } // from try @ 0053fe84 with catch @ 0053fbf4
                       catch() { ... } // from try @ 0053ff8c with catch @ 0053fbf4 */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar11 = plVar16[2];
    plVar16[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar10 = *(GUILabel **)(this + 0x168);
                    /* try { // try from 0053fc2c to 0063fc3f has its CatchHandler @ 0053fe40 */
                    /* try { // try from 0053fc40 to 0063fc53 has its CatchHandler @ 0053fed4 */
  if ((((pGVar10[0x108] != (GUILabel)0xff) || (pGVar10[0x109] != (GUILabel)0xff)) ||
      (pGVar10[0x10a] != (GUILabel)0xff)) || (pGVar10[0x10b] != (GUILabel)0xff)) {
    plVar16 = *(long **)(pGVar10 + 0x118);
                    /* try { // try from 0053fc54 to 0063fc5b has its CatchHandler @ 0053fe30 */
    *(undefined4 *)(pGVar10 + 0x108) = 0xffffffff;
                    /* try { // try from 0053fc5c to 0063fc6f has its CatchHandler @ 0053fe2c */
    *(undefined8 *)(pGVar10 + 0x110) = 0;
    *(undefined8 *)(pGVar10 + 0x118) = 0;
                    /* try { // try from 0053fc70 to 0063fc83 has its CatchHandler @ 0053fe44 */
    if ((plVar16 != (long *)0x0) &&
       (lVar11 = plVar16[1], plVar16[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* try { // try from 0053fc84 to 0063fc93 has its CatchHandler @ 0053fdfc */
      lVar11 = plVar16[2];
      plVar16[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    GUILabel::UpdateText(pGVar10);
    pGVar10 = *(GUILabel **)(this + 0x168);
  }
  uVar6 = DAT_00688c08;
                    /* try { // try from 0053fcb4 to 0063fcb7 has its CatchHandler @ 0053fe44 */
  pGVar10[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar10 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar10 + 0x148) = uVar6;
  GUILabel::UpdateText(pGVar10);
  pGVar10 = *(GUILabel **)(this + 0x168);
  *(undefined4 *)(pGVar10 + 0x130) = 4;
  GUILabel::UpdateBounds(pGVar10);
  pGVar10 = *(GUILabel **)(this + 0x168);
  *(undefined4 *)(pGVar10 + 0x134) = 4;
                    /* try { // try from 0053fcf0 to 0063fcf3 has its CatchHandler @ 0053fed4 */
  GUILabel::UpdateBounds(pGVar10);
  GUIView::SetFrame(*(GUIView **)(this + 0x168),(Rectangle *)(*(long *)(this + 0x158) + 0x84));
  plVar16 = *(long **)(this + 0x158);
                    /* try { // try from 0053fd08 to 0063fd1b has its CatchHandler @ 0053ff40 */
  local_58 = *(long **)(this + 0x168);
  pcVar12 = *(code **)(*plVar16 + 0x60);
  local_50 = *(long **)(this + 0x170);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
                    /* try { // try from 0053fd34 to 0063fd3b has its CatchHandler @ 0053fdf8 */
  (*pcVar12)(plVar16,&local_58);
  plVar16 = local_50;
                    /* try { // try from 0053fd3c to 0063fe1f has its CatchHandler @ 0053fbf4 */
  if ((local_50 != (long *)0x0) &&
     (lVar11 = local_50[1], local_50[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar11 = plVar16[2];
    plVar16[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar7 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar7);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_58,pGVar7);
  plVar16 = *(long **)(this + 0x110);
  plVar2 = *(long **)(this + 0x118);
  *(long **)(this + 0x110) = local_58;
  *(long **)(this + 0x118) = local_50;
  local_58 = plVar16;
  local_50 = plVar2;
  if ((plVar2 != (long *)0x0) && (lVar11 = plVar2[1], plVar2[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar11 = plVar2[2];
    plVar2[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
                    /* catch() { ... } // from try @ 0053fd34 with catch @ 0053fdf8 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 0053fc84 with catch @ 0053fdfc */
  pGVar7 = *(GUIFrameView **)(this + 0x110);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(local_68,"ui_tab_frame",auStack_70);
                    /* try { // try from 0053fe20 to 0063fe27 has its CatchHandler @ 0053ff94 */
                    /* try { // try from 0053fe28 to 0063fe7f has its CatchHandler @ 0053fbf4 */
                    /* catch() { ... } // from try @ 0053fc5c with catch @ 0053fe2c */
  TextureLibrary::TextureForName(psVar8,SUB81(local_68,0));
                    /* catch() { ... } // from try @ 0053fc54 with catch @ 0053fe30 */
  GUIFrameView::SetFrameTexture(pGVar7,(intrusive_ptr *)&local_58,false);
                    /* catch() { ... } // from try @ 0053fc2c with catch @ 0053fe40 */
                    /* catch() { ... } // from try @ 0053fc70 with catch @ 0053fe44
                       catch() { ... } // from try @ 0053fcb4 with catch @ 0053fe44 */
  if ((local_58 != (long *)0x0) &&
     (iVar14 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar14, iVar14 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
                    /* try { // try from 005401f8 to 006402df has its CatchHandler @ 0053ff98 */
    piVar13 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  local_58 = (long *)CONCAT44(local_58._4_4_,0xffffffff);
                    /* try { // try from 0053fe80 to 0063fe83 has its CatchHandler @ 0053ff94 */
                    /* try { // try from 0053fe84 to 0063ff63 has its CatchHandler @ 0053fbf4 */
  GUIFrameView::SetFrameColor(*(GUIFrameView **)(this + 0x110),(Color *)&local_58);
  local_58 = *(long **)(this + 0x110);
  pcVar12 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x118);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar12)(this,&local_58);
  plVar16 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar11 = local_50[1], local_50[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0053fc40 with catch @ 0053fed4
                       catch() { ... } // from try @ 0053fcf0 with catch @ 0053fed4 */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar11 = plVar16[2];
    plVar16[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar7 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar7);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_58,pGVar7);
  plVar16 = *(long **)(this + 0x100);
  plVar2 = *(long **)(this + 0x108);
  *(long **)(this + 0x100) = local_58;
  *(long **)(this + 0x108) = local_50;
  local_58 = plVar16;
  local_50 = plVar2;
                    /* catch() { ... } // from try @ 0053fd08 with catch @ 0053ff40 */
  if ((plVar2 != (long *)0x0) && (lVar11 = plVar2[1], plVar2[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar11 = plVar2[2];
                    /* try { // try from 0053ff64 to 0063ff8b has its CatchHandler @ 0053ff94 */
    plVar2[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  pGVar7 = *(GUIFrameView **)(this + 0x100);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0053ff8c to 0063ff97 has its CatchHandler @ 0053fbf4 */
                    /* catch() { ... } // from try @ 0053fe20 with catch @ 0053ff94
                       catch() { ... } // from try @ 0053fe80 with catch @ 0053ff94
                       catch() { ... } // from try @ 0053ff64 with catch @ 0053ff94 */
                    /* catch() { ... } // from try @ 00540088 with catch @ 0053ff98
                       catch() { ... } // from try @ 005401f8 with catch @ 0053ff98
                       catch() { ... } // from try @ 005404e0 with catch @ 0053ff98 */
  FUN_00666bb8(local_68,"ui_tab_frame",auStack_70);
  TextureLibrary::TextureForName(psVar8,SUB81(local_68,0));
  GUIFrameView::SetFrameTexture(pGVar7,(intrusive_ptr *)&local_58,false);
                    /* try { // try from 0053ffd0 to 0063ffdf has its CatchHandler @ 005403f8 */
  if ((local_58 != (long *)0x0) &&
     (iVar14 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar14, iVar14 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if ((undefined *)(local_68[0] + -0x18) != puVar1) {
    piVar13 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 00540000 with catch @ 005402ac */
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
                    /* try { // try from 00540000 to 00640003 has its CatchHandler @ 005402ac */
  local_58 = (long *)CONCAT44(local_58._4_4_,0xffffffff);
  GUIFrameView::SetFrameColor(*(GUIFrameView **)(this + 0x100),(Color *)&local_58);
  local_58 = *(long **)(this + 0x100);
  pcVar12 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x108);
                    /* try { // try from 00540024 to 0064002b has its CatchHandler @ 00540328 */
  if (local_50 != (long *)0x0) {
                    /* try { // try from 0054002c to 0064003f has its CatchHandler @ 00540320 */
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar12)(this,&local_58);
  plVar16 = local_50;
                    /* try { // try from 00540040 to 00640053 has its CatchHandler @ 0054036c */
                    /* try { // try from 00540054 to 00640063 has its CatchHandler @ 005402ec */
  if ((local_50 != (long *)0x0) &&
     (lVar11 = local_50[1], local_50[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar11 = plVar16[2];
    plVar16[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
                    /* try { // try from 00540084 to 00640087 has its CatchHandler @ 0054036c */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 00540088 to 006400d7 has its CatchHandler @ 0053ff98 */
  this_00 = operator_new(0x220);
  TabView::TabView(this_00);
  boost::shared_ptr<Caver::TabView>::shared_ptr<Caver::TabView>
            ((shared_ptr<Caver::TabView> *)&local_58,this_00);
  plVar16 = *(long **)(this + 0x128);
  plVar2 = *(long **)(this + 0x130);
  *(long **)(this + 0x128) = local_58;
  *(long **)(this + 0x130) = local_50;
  if ((plVar2 != (long *)0x0) && (lVar11 = plVar2[1], plVar2[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 005400d8 to 006400df has its CatchHandler @ 00540324 */
    local_58 = plVar16;
    local_50 = plVar2;
                    /* try { // try from 005400e0 to 006400f3 has its CatchHandler @ 0054031c */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar11 = plVar2[2];
    plVar2[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
                    /* try { // try from 005400f4 to 00640107 has its CatchHandler @ 0054032c */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  local_58 = *(long **)(this + 0x128);
                    /* try { // try from 00540108 to 00640117 has its CatchHandler @ 005402bc */
  local_58[0x1e] = (long)(this + 0xf0);
  plVar16 = *(long **)(this + 0x100);
  pcVar12 = *(code **)(*plVar16 + 0x60);
  local_50 = *(long **)(this + 0x130);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
                    /* try { // try from 00540138 to 0064013b has its CatchHandler @ 0054032c */
  (*pcVar12)(plVar16,&local_58);
  plVar16 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar11 = local_50[1], local_50[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 00540158 to 0064015f has its CatchHandler @ 005403e8 */
                    /* try { // try from 00540160 to 00640173 has its CatchHandler @ 005403e4 */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar11 = plVar16[2];
    plVar16[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
                    /* try { // try from 00540174 to 00640187 has its CatchHandler @ 0054044c */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 00540188 to 00640197 has its CatchHandler @ 005403b4 */
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00540108 with catch @ 005402bc */
  __stack_chk_fail();
}


