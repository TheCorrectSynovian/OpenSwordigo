/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004edc0c
 * Function: Caver::StoreView::StoreView
 * Signature: undefined __thiscall StoreView(StoreView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreView::StoreView() */

void __thiscall Caver::StoreView::StoreView(StoreView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  GUIScrollView *this_00;
  StripeView *pSVar5;
  string *psVar6;
  GUIView *this_01;
  FontLibrary *this_02;
  intrusive_ptr *piVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  GUILabel *pGVar13;
  long *plVar14;
  undefined1 auStack_90 [8];
  long local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  long local_70;
  long *local_68;
  long local_60;
  long *local_58;
  long local_48;
  
                    /* try { // try from 004edc14 to 005edc1b has its CatchHandler @ 004edd80 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e5c08 + 0x10;
  memset(this + 0xf0,0,0x68);
  this_00 = operator_new(0x1f0);
                    /* try { // try from 004edc68 to 005edc6f has its CatchHandler @ 004edd78 */
  GUIScrollView::GUIScrollView(this_00);
  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>
            ((shared_ptr<Caver::GUIScrollView> *)&local_60,this_00);
  lVar9 = *(long *)(this + 0x130);
  plVar14 = *(long **)(this + 0x138);
  *(long *)(this + 0x130) = local_60;
  *(long **)(this + 0x138) = local_58;
  if ((plVar14 != (long *)0x0) && (lVar8 = plVar14[1], plVar14[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    local_60 = lVar9;
    local_58 = plVar14;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar9 = plVar14[2];
                    /* try { // try from 004edcbc to 005edcc3 has its CatchHandler @ 004edd60 */
    plVar14[2] = lVar9 + -1;
                    /* try { // try from 004edcc4 to 005edd27 has its CatchHandler @ 004edbc8 */
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  local_60 = *(long *)(this + 0x130);
  pcVar10 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x138);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
                    /* catch() { ... } // from try @ 004edbec with catch @ 004edd00 */
  (*pcVar10)(this,&local_60);
  plVar14 = local_58;
  if ((local_58 != (long *)0x0) && (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
                    /* try { // try from 004edd28 to 005edd2b has its CatchHandler @ 004edd5c */
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  pSVar5 = operator_new(0x138);
                    /* catch() { ... } // from try @ 004edd28 with catch @ 004edd5c */
                    /* catch() { ... } // from try @ 004edcbc with catch @ 004edd60 */
                    /* try { // try from 004edd64 to 005edd6b has its CatchHandler @ 004edd74 */
  StripeView::StripeView(pSVar5);
                    /* try { // try from 004edd6c to 005edda7 has its CatchHandler @ 004edbc8 */
  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>
            ((shared_ptr<Caver::StripeView> *)&local_60,pSVar5);
                    /* catch() { ... } // from try @ 004edd64 with catch @ 004edd74 */
  lVar9 = *(long *)(this + 0x100);
  plVar14 = *(long **)(this + 0x108);
                    /* catch() { ... } // from try @ 004edc68 with catch @ 004edd78 */
                    /* catch() { ... } // from try @ 004edc14 with catch @ 004edd80 */
  *(long *)(this + 0x100) = local_60;
  *(long **)(this + 0x108) = local_58;
  local_60 = lVar9;
  local_58 = plVar14;
  if ((plVar14 != (long *)0x0) && (lVar9 = plVar14[1], plVar14[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 004edda8 to 005eddaf has its CatchHandler @ 004ede30 */
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  StripeView::SetHasTag(*(StripeView **)(this + 0x100),true,0.0);
  pSVar5 = *(StripeView **)(this + 0x100);
  FUN_00666bb8(&local_60,&LAB_00690fa4,&local_70);
                    /* try { // try from 004eddfc to 005ede03 has its CatchHandler @ 004ede34 */
  StripeView::SetTitle(pSVar5,(string *)&local_60);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar11 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  local_60 = *(long *)(this + 0x100);
  pcVar10 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x108);
                    /* catch() { ... } // from try @ 004edda8 with catch @ 004ede30 */
                    /* catch() { ... } // from try @ 004eddfc with catch @ 004ede34 */
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar10)(this,&local_60);
  plVar14 = local_58;
  if ((local_58 != (long *)0x0) && (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  pSVar5 = operator_new(0x138);
  StripeView::StripeView(pSVar5);
  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>
            ((shared_ptr<Caver::StripeView> *)&local_60,pSVar5);
  lVar9 = *(long *)(this + 0x110);
  plVar14 = *(long **)(this + 0x118);
  *(long *)(this + 0x110) = local_60;
  *(long **)(this + 0x118) = local_58;
  if ((plVar14 != (long *)0x0) && (lVar8 = plVar14[1], plVar14[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    local_60 = lVar9;
    local_58 = plVar14;
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  local_60 = *(long *)(this + 0x110);
  pcVar10 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x118);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar10)(this,&local_60);
  plVar14 = local_58;
  if ((local_58 != (long *)0x0) && (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  pSVar5 = *(StripeView **)(this + 0x110);
  FUN_00666bb8(&local_60,&DAT_0068fbeb,&local_70);
  StripeView::SetTitle(pSVar5,(string *)&local_60);
  if ((undefined *)(local_60 + -0x18) != puVar4) {
    piVar11 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  pGVar13 = *(GUILabel **)(*(long *)(this + 0x110) + 0x120);
  if ((((pGVar13[0x108] != (GUILabel)0xc8) || (pGVar13[0x109] != (GUILabel)0xb4)) ||
      (pGVar13[0x10a] != (GUILabel)0xa0)) || (pGVar13[0x10b] != (GUILabel)0xff)) {
    plVar14 = *(long **)(pGVar13 + 0x118);
    *(undefined4 *)(pGVar13 + 0x108) = 0xffa0b4c8;
    *(undefined8 *)(pGVar13 + 0x110) = 0;
    *(undefined8 *)(pGVar13 + 0x118) = 0;
    if ((plVar14 != (long *)0x0) && (lVar9 = plVar14[1], plVar14[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      lVar9 = plVar14[2];
      plVar14[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
    GUILabel::UpdateText(pGVar13);
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"ui_button_close",auStack_78);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_70,0));
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_button_close_pressed",auStack_90);
  piVar7 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar6,SUB81(&local_88,0));
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)&local_68,(intrusive_ptr *)&local_80,piVar7);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar14 = *(long **)(this + 0xf8);
  *(long *)(this + 0xf0) = local_60;
  *(long **)(this + 0xf8) = local_58;
  if ((plVar14 != (long *)0x0) && (lVar9 = plVar14[1], plVar14[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  plVar14 = local_58;
  if ((local_58 != (long *)0x0) && (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if ((undefined *)(local_88 + -0x18) != puVar4) {
    piVar11 = (int *)(local_88 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_88 + -0x18));
    }
  }
  if ((local_68 != (long *)0x0) &&
     (iVar12 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_68 + 8))();
  }
  if ((undefined *)(local_70 + -0x18) != puVar4) {
    piVar11 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  this_01 = *(GUIView **)(this + 0xf0);
  local_60 = *(long *)(this_01 + 0x74);
  local_58 = (long *)&DAT_4208000042080000;
  GUIView::SetFrame(this_01,(Rectangle *)&local_60);
  local_60 = *(long *)(this + 0xf0);
  pcVar10 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0xf8);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar10)(this,&local_60);
  plVar14 = local_58;
  if ((local_58 != (long *)0x0) && (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  FUN_00666bb8(&local_68,"Restore Purchases",&local_80);
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_68,false);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar14 = *(long **)(this + 0x128);
  *(long *)(this + 0x120) = local_60;
  *(long **)(this + 0x128) = local_58;
  if ((plVar14 != (long *)0x0) && (lVar9 = plVar14[1], plVar14[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  plVar14 = local_58;
  if ((local_58 != (long *)0x0) && (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  if (local_68 + -3 != (long *)puVar4) {
    plVar14 = local_68 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = (int)*plVar14;
      *(int *)plVar14 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = (int)*plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *(int *)plVar14 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_68 + -3);
    }
  }
  pGVar13 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x120));
  this_02 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(this_02);
  if (local_60 != *(long *)(pGVar13 + 0xf0)) {
    if (local_58 != (long *)0x0) {
      local_58[1] = local_58[1] + 1;
    }
    plVar14 = *(long **)(pGVar13 + 0xf8);
    *(long *)(pGVar13 + 0xf0) = local_60;
    *(long **)(pGVar13 + 0xf8) = local_58;
    if ((plVar14 != (long *)0x0) && (lVar9 = plVar14[1], plVar14[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      lVar9 = plVar14[2];
      plVar14[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
    GUILabel::UpdateText(pGVar13);
  }
  plVar14 = local_58;
  if ((local_58 != (long *)0x0) && (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar9 = plVar14[2];
    plVar14[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  local_60 = *(long *)(*(GUIView **)(this + 0x120) + 0x74);
  local_58 = (long *)DAT_00693280;
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)&local_60);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


