/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ec094
 * Function: Caver::StoreProductView::StoreProductView
 * Signature: undefined __thiscall StoreProductView(StoreProductView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreProductView::StoreProductView() */

void __thiscall Caver::StoreProductView::StoreProductView(StoreProductView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  GUIFrameView *pGVar5;
  string *psVar6;
  GUIView *this_00;
  FontLibrary *this_01;
  intrusive_ptr *piVar7;
  long lVar8;
  code *pcVar9;
  int iVar10;
  long *plVar11;
  GUIButton *this_02;
  GUILabel *pGVar12;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  GUILabel *local_58;
  undefined8 local_50;
  long local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ec054 with catch @ 004ec0ac
                        */
  lVar3 = tpidr_el0;
                    /* try { // try from 004ec0b0 to 005ec0b7 has its CatchHandler @ 004ec0c0 */
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 004ec0b8 to 005ec0c3 has its CatchHandler @ 004ec00c */
  GUIView::GUIView((GUIView *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ec0b0 with catch @ 004ec0c0
                        */
                    /* catch() { ... } // from try @ 004ec100 with catch @ 004ec0c4
                       catch() { ... } // from try @ 004ec144 with catch @ 004ec0c4 */
  *(undefined **)this = PTR_vtable_007e7de0 + 0x10;
  memset(this + 0xf0,0,0x60);
  pGVar5 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar5);
                    /* try { // try from 004ec0fc to 005ec0ff has its CatchHandler @ 004ec138 */
                    /* try { // try from 004ec100 to 005ec13b has its CatchHandler @ 004ec0c4 */
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_58,pGVar5);
  pGVar12 = *(GUILabel **)(this + 0xf0);
  plVar11 = *(long **)(this + 0xf8);
  *(GUILabel **)(this + 0xf0) = local_58;
  *(long **)(this + 0xf8) = local_50;
  local_58 = pGVar12;
  local_50 = plVar11;
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004ec0fc with catch @ 004ec138 */
                    /* try { // try from 004ec13c to 005ec143 has its CatchHandler @ 004ec14c */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
                    /* try { // try from 004ec144 to 005ec14f has its CatchHandler @ 004ec0c4 */
    plVar11[2] = lVar8 + -1;
                    /* catch() { ... } // from try @ 004ec13c with catch @ 004ec14c */
    if (lVar8 + -1 == 0) {
                    /* catch() { ... } // from try @ 004ec168 with catch @ 004ec154 */
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  pGVar5 = *(GUIFrameView **)(this + 0xf0);
                    /* try { // try from 004ec164 to 005ec167 has its CatchHandler @ 004ec178 */
  psVar6 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 004ec168 to 005ec18b has its CatchHandler @ 004ec154 */
                    /* catch() { ... } // from try @ 004ec164 with catch @ 004ec178 */
  FUN_00666bb8(&local_60,"ui_frame_dark",&local_70);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_60,0));
  GUIFrameView::SetFrameTexture(pGVar5,(intrusive_ptr *)&local_58,false);
  if ((local_58 != (GUILabel *)0x0) &&
     (iVar10 = *(int *)(local_58 + 8), *(int *)(local_58 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
    (**(code **)(*(long *)local_58 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  if (local_60 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar11 = local_60 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar11;
      *(int *)plVar11 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = (int)*plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *(int *)plVar11 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_60 + -3);
    }
  }
  local_58 = *(GUILabel **)(this + 0xf0);
  pcVar9 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0xf8);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar9)(this,&local_58);
  plVar11 = local_50;
  if ((local_50 != (long *)0x0) && (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_58,"ui_guide_buy",&local_70);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_58,0));
  if (local_58 + -0x18 != (GUILabel *)puVar4) {
    pGVar12 = local_58 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *(int *)pGVar12;
      *(int *)pGVar12 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *(int *)pGVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar12,0x10);
        if (bVar2) {
          *(int *)pGVar12 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_58 + -0x18);
    }
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_58,"ui_guide_buy_pressed",&local_78);
  piVar7 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar6,SUB81(&local_58,0));
  if (local_58 + -0x18 != (GUILabel *)puVar4) {
    pGVar12 = local_58 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *(int *)pGVar12;
      *(int *)pGVar12 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *(int *)pGVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar12,0x10);
        if (bVar2) {
          *(int *)pGVar12 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_58 + -0x18);
    }
  }
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_70,(intrusive_ptr *)&local_78,piVar7);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar11 = *(long **)(this + 0x108);
  *(GUILabel **)(this + 0x100) = local_58;
  *(long **)(this + 0x108) = local_50;
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  plVar11 = local_50;
  if ((local_50 != (long *)0x0) && (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if ((local_78 != (long *)0x0) &&
     (iVar10 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_78 + 8))();
  }
  if ((local_70 != (long *)0x0) &&
     (iVar10 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_70 + 8))();
  }
  this_02 = *(GUIButton **)(this + 0x100);
  FUN_00666bb8(&local_58,&DAT_0068f6a7,&local_78);
  GUIButton::SetTitle(this_02,(string *)&local_58);
  if (local_58 + -0x18 != (GUILabel *)puVar4) {
    pGVar12 = local_58 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *(int *)pGVar12;
      *(int *)pGVar12 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *(int *)pGVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar12,0x10);
        if (bVar2) {
          *(int *)pGVar12 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_58 + -0x18);
    }
  }
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x100),0,&local_60);
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x100),1,&local_68);
  local_58 = *(GUILabel **)(*(GUIView **)(this + 0x100) + 0x74);
  local_50 = (long *)CONCAT44((int)local_60[0xb],0x43100000);
  GUIView::SetFrame(*(GUIView **)(this + 0x100),(Rectangle *)&local_58);
  local_58 = *(GUILabel **)(this + 0x100);
  pcVar9 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x108);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar9)(this,&local_58);
  plVar11 = local_50;
  if ((local_50 != (long *)0x0) && (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  pGVar5 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar5);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_58,pGVar5);
  pGVar12 = *(GUILabel **)(this + 0x110);
  plVar11 = *(long **)(this + 0x118);
  *(GUILabel **)(this + 0x110) = local_58;
  *(long **)(this + 0x118) = local_50;
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    local_58 = pGVar12;
    local_50 = plVar11;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
                    /* catch() { ... } // from try @ 004ec580 with catch @ 004ec550 */
  local_58 = *(GUILabel **)(this + 0x110);
  pcVar9 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x118);
  if (local_50 != (long *)0x0) {
                    /* try { // try from 004ec56c to 005ec57f has its CatchHandler @ 004ec5a4 */
    local_50[1] = local_50[1] + 1;
  }
                    /* try { // try from 004ec580 to 005ec5a7 has its CatchHandler @ 004ec550 */
  (*pcVar9)(this,&local_58);
  plVar11 = local_50;
  if ((local_50 != (long *)0x0) && (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 004ec56c with catch @ 004ec5a4 */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  this_00 = operator_new(0xf0);
  GUIView::GUIView(this_00);
  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>
            ((shared_ptr<Caver::GUIView> *)&local_58,this_00);
  pGVar12 = *(GUILabel **)(this + 0x120);
  plVar11 = *(long **)(this + 0x128);
                    /* catch() { ... } // from try @ 004ec644 with catch @ 004ec5f0 */
  *(GUILabel **)(this + 0x120) = local_58;
  *(long **)(this + 0x128) = local_50;
  local_58 = pGVar12;
  local_50 = plVar11;
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
                    /* try { // try from 004ec628 to 005ec62b has its CatchHandler @ 004ec638 */
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* catch() { ... } // from try @ 004ec628 with catch @ 004ec638 */
                    /* try { // try from 004ec63c to 005ec643 has its CatchHandler @ 004ec64c */
                    /* try { // try from 004ec644 to 005ec64f has its CatchHandler @ 004ec5f0 */
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
                    /* catch() { ... } // from try @ 004ec63c with catch @ 004ec64c */
                    /* try { // try from 004ec650 to 005ec697 has its CatchHandler @ 004ec650
                       catch(type#1 @ 00000000) { ... } // from try @ 004ec650 with catch @ 004ec650
                       catch(type#1 @ 00000000) { ... } // from try @ 004ec6b4 with catch @ 004ec650
                       catch(type#1 @ 00000000) { ... } // from try @ 004ec760 with catch @ 004ec650
                        */
  (**(code **)(*(long *)this + 0x60))(this,this + 0x120);
  FUN_00666bb8(&local_70,&DAT_0068fbeb,auStack_80);
  local_88 = 0xff000000;
  uStack_84 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_58,&local_70,&uStack_84,&local_88);
  if (local_50 != (long *)0x0) {
                    /* try { // try from 004ec698 to 005ec6b3 has its CatchHandler @ 004ec754 */
    local_50[1] = local_50[1] + 1;
  }
  plVar11 = *(long **)(this + 0x138);
  *(GUILabel **)(this + 0x130) = local_58;
  *(long **)(this + 0x138) = local_50;
                    /* try { // try from 004ec6b4 to 005ec757 has its CatchHandler @ 004ec650 */
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  plVar11 = local_50;
  if ((local_50 != (long *)0x0) && (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if (local_70 + -3 != (long *)puVar4) {
    plVar11 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar11;
      *(int *)plVar11 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = (int)*plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *(int *)plVar11 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_70 + -3);
    }
  }
  plVar11 = *(long **)(this + 0x120);
  local_58 = *(GUILabel **)(this + 0x130);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ec698 with catch @ 004ec754
                        */
  pcVar9 = *(code **)(*plVar11 + 0x60);
                    /* try { // try from 004ec758 to 005ec75f has its CatchHandler @ 004ec768 */
  local_50 = *(long **)(this + 0x138);
                    /* try { // try from 004ec760 to 005ec76b has its CatchHandler @ 004ec650 */
  if (local_50 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ec758 with catch @ 004ec768
                        */
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar9)(plVar11,&local_58);
  plVar11 = local_50;
  if ((local_50 != (long *)0x0) && (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  FUN_00666bb8(&local_70,&DAT_0068fbeb,auStack_80);
  local_90 = 0xff000000;
  uStack_8c = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_58,&local_70,&uStack_8c,&local_90);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar11 = *(long **)(this + 0x148);
  *(GUILabel **)(this + 0x140) = local_58;
  *(long **)(this + 0x148) = local_50;
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  plVar11 = local_50;
  if ((local_50 != (long *)0x0) && (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if (local_70 + -3 != (long *)puVar4) {
    plVar11 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar11;
      *(int *)plVar11 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = (int)*plVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *(int *)plVar11 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(local_70 + -3);
    }
  }
  pGVar12 = *(GUILabel **)(this + 0x140);
  this_01 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(this_01);
  if (local_58 != *(GUILabel **)(pGVar12 + 0xf0)) {
    if (local_50 != (long *)0x0) {
      local_50[1] = local_50[1] + 1;
    }
    plVar11 = *(long **)(pGVar12 + 0xf8);
    *(GUILabel **)(pGVar12 + 0xf0) = local_58;
    *(long **)(pGVar12 + 0xf8) = local_50;
    if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
                    /* catch() { ... } // from try @ 004ec97c with catch @ 004ec910 */
      lVar8 = plVar11[2];
      plVar11[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    GUILabel::UpdateText(pGVar12);
  }
  plVar11 = local_50;
  if ((local_50 != (long *)0x0) && (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* try { // try from 004ec974 to 005ec97b has its CatchHandler @ 004ec9f8 */
                    /* try { // try from 004ec97c to 005eca0b has its CatchHandler @ 004ec910 */
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  pGVar12 = *(GUILabel **)(this + 0x140);
  if ((((pGVar12[0x108] != (GUILabel)0xc8) || (pGVar12[0x109] != (GUILabel)0xb4)) ||
      (pGVar12[0x10a] != (GUILabel)0xa0)) || (pGVar12[0x10b] != (GUILabel)0xff)) {
    plVar11 = *(long **)(pGVar12 + 0x118);
    *(undefined4 *)(pGVar12 + 0x108) = 0xffa0b4c8;
    *(undefined8 *)(pGVar12 + 0x110) = 0;
    *(undefined8 *)(pGVar12 + 0x118) = 0;
    if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar8 = plVar11[2];
      plVar11[2] = lVar8 + -1;
                    /* catch() { ... } // from try @ 004ec974 with catch @ 004ec9f8 */
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    GUILabel::UpdateText(pGVar12);
    pGVar12 = *(GUILabel **)(this + 0x140);
  }
  plVar11 = *(long **)(this + 0x120);
  local_50 = *(long **)(this + 0x148);
  pcVar9 = *(code **)(*plVar11 + 0x60);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  local_58 = pGVar12;
  (*pcVar9)(plVar11,&local_58);
  plVar11 = local_50;
  if ((local_50 != (long *)0x0) && (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if ((local_68 != (long *)0x0) &&
     (iVar10 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_68 + 8))();
  }
  if ((local_60 != (long *)0x0) &&
     (iVar10 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_60 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


