/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051cf44
 * Function: Caver::MapMenuPage::MapMenuPage
 * Signature: undefined __thiscall MapMenuPage(MapMenuPage * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::MapMenuPage() */

void __thiscall Caver::MapMenuPage::MapMenuPage(MapMenuPage *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  string *psVar7;
  MapView *this_00;
  GUIScrollView *this_01;
  long *plVar8;
  StripeView *this_02;
  GUILabel *pGVar9;
  FontLibrary *this_03;
  long lVar10;
  code *pcVar11;
  int iVar12;
  undefined1 auStack_88 [8];
  long *local_80;
  long *local_78;
  GUILabel *local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
                    /* catch() { ... } // from try @ 0051cf08 with catch @ 0051cf48 */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 0051cf68 to 0061cf6f has its CatchHandler @ 0051cf78 */
                    /* try { // try from 0051cf70 to 0061cf7b has its CatchHandler @ 0051cec4 */
  GUIView::GUIView((GUIView *)this);
  puVar6 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 0051cf68 with catch @ 0051cf78 */
  puVar1 = PTR_vtable_007e7bc8 + 0x170;
  puVar2 = PTR_vtable_007e7bc8 + 0x10;
  *(undefined **)(this + 0xf0) = PTR_DAT_007e5de8 + 0x18;
  *(undefined **)(this + 0xf8) = puVar1;
  *(undefined **)this = puVar2;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  GUIRoundedRect::GUIRoundedRect((GUIRoundedRect *)(this + 0x110));
  memset(this + 0x1b8,0,0x41);
  FUN_00666bb8(&local_70,"WORLD MAP",&local_80);
                    /* catch() { ... } // from try @ 0051cff0 with catch @ 0051cfdc */
  FUN_0066a6a8(this + 0xf0,&local_70);
                    /* try { // try from 0051cfec to 0061cfef has its CatchHandler @ 0051d000 */
  if (local_70 + -0x18 != (GUILabel *)puVar6) {
    pGVar9 = local_70 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pGVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar4) {
          *(int *)pGVar9 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_70 + -0x18);
    }
  }
                    /* try { // try from 0051cff0 to 0061d013 has its CatchHandler @ 0051cfdc */
  psVar7 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 0051cfec with catch @ 0051d000 */
  FUN_00666bb8(&local_78,"ui_menu_container",auStack_60);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_78,0));
  GUIRoundedRect::InitWithTexture((GUIRoundedRect *)(this + 0x110),(intrusive_ptr *)&local_70);
  if ((local_70 != (GUILabel *)0x0) &&
     (iVar12 = *(int *)(local_70 + 8), *(int *)(local_70 + 8) = iVar12 + -1, iVar12 + -1 == 0)) {
    (**(code **)(*(long *)local_70 + 8))();
  }
  if (local_78 + -3 != (long *)puVar6) {
                    /* catch() { ... } // from try @ 0051d268 with catch @ 0051d6c8 */
                    /* catch() { ... } // from try @ 0051d5cc with catch @ 0051d6cc */
    plVar8 = local_78 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar8;
      *(int *)plVar8 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_78 + -3);
    }
  }
  this_00 = operator_new(0x420);
  MapView::MapView(this_00);
  boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>
            ((shared_ptr<Caver::MapView> *)&local_70,this_00);
  pGVar9 = *(GUILabel **)(this + 0x1c8);
  plVar8 = *(long **)(this + 0x1d0);
  *(GUILabel **)(this + 0x1c8) = local_70;
  *(long **)(this + 0x1d0) = local_68;
  local_70 = pGVar9;
  local_68 = plVar8;
  if ((plVar8 != (long *)0x0) && (lVar10 = plVar8[1], plVar8[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  *(MapMenuPage **)(*(long *)(this + 0x1c8) + 0xf0) = this + 0xf8;
  this_01 = operator_new(0x1f0);
                    /* try { // try from 0051d0f4 to 0061d267 has its CatchHandler @ 0051d0f4
                       catch() { ... } // from try @ 0051d0f4 with catch @ 0051d0f4
                       catch() { ... } // from try @ 0051d26c with catch @ 0051d0f4
                       catch() { ... } // from try @ 0051d5d0 with catch @ 0051d0f4 */
  GUIScrollView::GUIScrollView(this_01);
  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>
            ((shared_ptr<Caver::GUIScrollView> *)&local_70,this_01);
  pGVar9 = *(GUILabel **)(this + 0x1b8);
  plVar8 = *(long **)(this + 0x1c0);
  *(GUILabel **)(this + 0x1b8) = local_70;
  *(long **)(this + 0x1c0) = local_68;
  if ((plVar8 != (long *)0x0) && (lVar10 = plVar8[1], plVar8[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    local_70 = pGVar9;
    local_68 = plVar8;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  local_70 = *(GUILabel **)(this + 0x1b8);
  local_70[0x1b2] = (GUILabel)0x1;
  pcVar11 = *(code **)(*(long *)this + 0x60);
  local_68 = *(long **)(this + 0x1c0);
  if (local_68 != (long *)0x0) {
    local_68[1] = local_68[1] + 1;
  }
  (*pcVar11)(this,&local_70);
  plVar8 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar10 = local_68[1], local_68[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  plVar8 = *(long **)(this + 0x1b8);
  local_70 = *(GUILabel **)(this + 0x1c8);
  pcVar11 = *(code **)(*plVar8 + 0x60);
  local_68 = *(long **)(this + 0x1d0);
  if (local_68 != (long *)0x0) {
    local_68[1] = local_68[1] + 1;
  }
  (*pcVar11)(plVar8,&local_70);
  plVar8 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar10 = local_68[1], local_68[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  this_02 = operator_new(0x138);
                    /* try { // try from 0051d268 to 0061d26b has its CatchHandler @ 0051d6c8 */
                    /* try { // try from 0051d26c to 0061d5cb has its CatchHandler @ 0051d0f4 */
  StripeView::StripeView(this_02);
  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>
            ((shared_ptr<Caver::StripeView> *)&local_70,this_02);
  pGVar9 = *(GUILabel **)(this + 0x1e8);
  plVar8 = *(long **)(this + 0x1f0);
  *(GUILabel **)(this + 0x1e8) = local_70;
  *(long **)(this + 0x1f0) = local_68;
  if ((plVar8 != (long *)0x0) && (lVar10 = plVar8[1], plVar8[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    local_70 = pGVar9;
    local_68 = plVar8;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  local_70 = *(GUILabel **)(this + 0x1e8);
  pcVar11 = *(code **)(*(long *)this + 0x60);
  local_68 = *(long **)(this + 0x1f0);
  if (local_68 != (long *)0x0) {
    local_68[1] = local_68[1] + 1;
  }
  (*pcVar11)(this,&local_70);
  plVar8 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar10 = local_68[1], local_68[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"ui_menu_button",auStack_60);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_70,0));
  if (local_70 + -0x18 != (GUILabel *)puVar6) {
    pGVar9 = local_70 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pGVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar4) {
          *(int *)pGVar9 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_70 + -0x18);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"ui_menu_button_pressed",auStack_88);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_70,0));
  if (local_70 + -0x18 != (GUILabel *)puVar6) {
    pGVar9 = local_70 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pGVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar4) {
          *(int *)pGVar9 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_70 + -0x18);
    }
  }
  pGVar9 = operator_new(0x150);
  GUILabel::GUILabel(pGVar9);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_70,pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x1d8);
  plVar8 = *(long **)(this + 0x1e0);
  *(GUILabel **)(this + 0x1d8) = local_70;
  *(long **)(this + 0x1e0) = local_68;
  local_70 = pGVar9;
  local_68 = plVar8;
  if ((plVar8 != (long *)0x0) && (lVar10 = plVar8[1], plVar8[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x1d8);
  this_03 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_03);
  if (local_70 != *(GUILabel **)(pGVar9 + 0xf0)) {
    if (local_68 != (long *)0x0) {
      local_68[1] = local_68[1] + 1;
    }
    plVar8 = *(long **)(pGVar9 + 0xf8);
    *(GUILabel **)(pGVar9 + 0xf0) = local_70;
    *(long **)(pGVar9 + 0xf8) = local_68;
    if ((plVar8 != (long *)0x0) && (lVar10 = plVar8[1], plVar8[1] = lVar10 + -1, lVar10 + -1 == 0))
    {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar10 = plVar8[2];
      plVar8[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
  plVar8 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar10 = local_68[1], local_68[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x1d8);
  if ((((pGVar9[0x108] != (GUILabel)0xff) || (pGVar9[0x109] != (GUILabel)0xff)) ||
      (pGVar9[0x10a] != (GUILabel)0xff)) || (pGVar9[0x10b] != (GUILabel)0xff)) {
    plVar8 = *(long **)(pGVar9 + 0x118);
    *(undefined4 *)(pGVar9 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar9 + 0x110) = 0;
    *(undefined8 *)(pGVar9 + 0x118) = 0;
    if ((plVar8 != (long *)0x0) && (lVar10 = plVar8[1], plVar8[1] = lVar10 + -1, lVar10 + -1 == 0))
    {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar10 = plVar8[2];
      plVar8[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    GUILabel::UpdateText(pGVar9);
    pGVar9 = *(GUILabel **)(this + 0x1d8);
  }
  local_68 = *(long **)(this + 0x1e0);
  pcVar11 = *(code **)(*(long *)this + 0x60);
  if (local_68 != (long *)0x0) {
                    /* try { // try from 0051d5cc to 0061d5cf has its CatchHandler @ 0051d6cc */
                    /* try { // try from 0051d5d0 to 0061d6df has its CatchHandler @ 0051d0f4 */
    local_68[1] = local_68[1] + 1;
  }
  local_70 = pGVar9;
  (*pcVar11)(this,&local_70);
  plVar8 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar10 = local_68[1], local_68[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if ((local_78 != (long *)0x0) &&
     (iVar12 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_78 + 8))();
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


