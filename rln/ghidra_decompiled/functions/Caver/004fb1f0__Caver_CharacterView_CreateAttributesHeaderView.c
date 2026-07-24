/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004fb1f0
 * Function: Caver::CharacterView::CreateAttributesHeaderView
 * Signature: undefined __thiscall CreateAttributesHeaderView(CharacterView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharacterView::CreateAttributesHeaderView() */

void __thiscall Caver::CharacterView::CreateAttributesHeaderView(CharacterView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  GUIFrameView *pGVar7;
  string *psVar8;
  GUILabel *pGVar9;
  FontLibrary *pFVar10;
  long lVar11;
  code *pcVar12;
  GUILabel *pGVar13;
  GUILabel *pGVar14;
  long *plVar15;
  GUILabel *local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  GUILabel *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pGVar7 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar7);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_70,pGVar7);
  pGVar9 = *(GUILabel **)(this + 0x148);
  plVar15 = *(long **)(this + 0x150);
  *(GUILabel **)(this + 0x148) = local_70;
  *(long **)(this + 0x150) = plStack_68;
  local_70 = pGVar9;
  plStack_68 = plVar15;
  if ((plVar15 != (long *)0x0) && (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pGVar7 = *(GUIFrameView **)(this + 0x148);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_frame_dark",auStack_78);
  TextureLibrary::TextureForName(psVar8,SUB81(&local_88,0));
  GUIFrameView::SetFrameTexture(pGVar7,(intrusive_ptr *)&local_70,false);
  if ((local_70 != (GUILabel *)0x0) &&
     (iVar6 = *(int *)(local_70 + 8), *(int *)(local_70 + 8) = iVar6 + -1, iVar6 + -1 == 0)) {
    (**(code **)(*(long *)local_70 + 8))();
  }
  puVar5 = PTR_DAT_007e5de8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004fb1c4 with catch @ 004fb308
                        */
                    /* try { // try from 004fb30c to 005fb313 has its CatchHandler @ 004fb31c */
  if (local_88 + -0x18 != (GUILabel *)PTR_DAT_007e5de8) {
    pGVar9 = local_88 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *(int *)pGVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar2) {
          *(int *)pGVar9 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_88 + -0x18);
    }
  }
                    /* try { // try from 004fb314 to 005fb31f has its CatchHandler @ 004fb17c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004fb30c with catch @ 004fb31c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004fb34c with catch @ 004fb320
                       catch(type#1 @ 00000000) { ... } // from try @ 004fb378 with catch @ 004fb320
                        */
  plStack_68 = _DAT_00693938;
  local_70 = _DAT_00693930;
  GUIView::SetFrame(*(GUIView **)(this + 0x148),(Rectangle *)&local_70);
  pGVar9 = operator_new(0x150);
  GUILabel::GUILabel(pGVar9);
                    /* try { // try from 004fb340 to 005fb343 has its CatchHandler @ 004fb364 */
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_88,pGVar9);
  pGVar9 = local_88;
                    /* try { // try from 004fb348 to 005fb34b has its CatchHandler @ 004fb35c */
                    /* try { // try from 004fb34c to 005fb36b has its CatchHandler @ 004fb320 */
  pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(pFVar10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004fb348 with catch @ 004fb35c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004fb340 with catch @ 004fb364
                        */
  if (local_70 != *(GUILabel **)(pGVar9 + 0xf0)) {
                    /* try { // try from 004fb36c to 005fb377 has its CatchHandler @ 004fb380 */
    if (plStack_68 != (long *)0x0) {
                    /* try { // try from 004fb378 to 005fb383 has its CatchHandler @ 004fb320 */
      plStack_68[1] = plStack_68[1] + 1;
    }
    plVar15 = *(long **)(pGVar9 + 0xf8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004fb36c with catch @ 004fb380
                        */
    *(GUILabel **)(pGVar9 + 0xf0) = local_70;
    *(long **)(pGVar9 + 0xf8) = plStack_68;
    if ((plVar15 != (long *)0x0) &&
       (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar11 = plVar15[2];
      plVar15[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
  plVar15 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar11 = plStack_68[1], plStack_68[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pGVar9 = local_88;
  if ((((local_88[0x108] != (GUILabel)0xff) || (local_88[0x109] != (GUILabel)0xff)) ||
      (local_88[0x10a] != (GUILabel)0xff)) || (local_88[0x10b] != (GUILabel)0xff)) {
    plVar15 = *(long **)(local_88 + 0x118);
    *(undefined4 *)(local_88 + 0x108) = 0xffffffff;
    *(undefined8 *)(local_88 + 0x110) = 0;
    *(undefined8 *)(local_88 + 0x118) = 0;
    if ((plVar15 != (long *)0x0) &&
       (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar11 = plVar15[2];
      plVar15[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
  uVar4 = DAT_00683728;
  local_88[0x140] = (GUILabel)0x1;
  *(undefined4 *)(local_88 + 0x141) = 0xff000000;
                    /* catch() { ... } // from try @ 004fb4dc with catch @ 004fb4c8 */
  *(undefined8 *)(local_88 + 0x148) = uVar4;
  GUILabel::UpdateText(local_88);
                    /* try { // try from 004fb4d8 to 005fb4db has its CatchHandler @ 004fb4ec */
                    /* try { // try from 004fb4dc to 005fb4ff has its CatchHandler @ 004fb4c8 */
  plStack_68 = (long *)_DAT_00693948;
  local_70 = _DAT_00693940;
  GUIView::SetFrame((GUIView *)local_88,(Rectangle *)&local_70);
  pGVar9 = local_88;
                    /* catch() { ... } // from try @ 004fb4d8 with catch @ 004fb4ec */
  FUN_00666bb8(&local_70,"Attributes",auStack_78);
  pGVar14 = local_70;
                    /* try { // try from 004fb508 to 005fb52f has its CatchHandler @ 004fb508
                       catch() { ... } // from try @ 004fb508 with catch @ 004fb508
                       catch() { ... } // from try @ 004fb574 with catch @ 004fb508 */
  pGVar13 = local_70 + -0x18;
  if ((*(size_t *)pGVar13 != *(size_t *)((long)*(void **)(pGVar9 + 0x100) + -0x18)) ||
     (iVar6 = memcmp(local_70,*(void **)(pGVar9 + 0x100),*(size_t *)pGVar13), iVar6 != 0)) {
                    /* try { // try from 004fb530 to 005fb533 has its CatchHandler @ 004fb568 */
    FUN_0066a6a8(pGVar9 + 0x100,&local_70);
    GUILabel::UpdateText(pGVar9);
    pGVar13 = local_70 + -0x18;
    pGVar14 = local_70;
  }
  if (pGVar13 != (GUILabel *)puVar5) {
    pGVar14 = pGVar14 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *(int *)pGVar14;
      *(int *)pGVar14 = iVar6 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 004fbce4 with catch @ 004fbc9c */
        iVar6 = *(int *)pGVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar14,0x10);
        if (bVar2) {
          *(int *)pGVar14 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(pGVar13);
                    /* try { // try from 004fbd38 to 005fbd53 has its CatchHandler @ 004fbe48 */
    }
  }
  plVar15 = *(long **)(this + 0x148);
  pcVar12 = *(code **)(*plVar15 + 0x60);
  local_70 = local_88;
  plStack_68 = local_80;
  if (local_80 != (long *)0x0) {
                    /* catch() { ... } // from try @ 004fb530 with catch @ 004fb568 */
                    /* try { // try from 004fb56c to 005fb573 has its CatchHandler @ 004fb584 */
    local_80[1] = local_80[1] + 1;
  }
                    /* try { // try from 004fb574 to 005fb587 has its CatchHandler @ 004fb508 */
  (*pcVar12)(plVar15,&local_70);
  plVar15 = plStack_68;
                    /* catch() { ... } // from try @ 004fb56c with catch @ 004fb584 */
  if ((plStack_68 != (long *)0x0) &&
     (lVar11 = plStack_68[1], plStack_68[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pGVar9 = operator_new(0x150);
  GUILabel::GUILabel(pGVar9);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_70,pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x1b8);
  plVar15 = *(long **)(this + 0x1c0);
  *(GUILabel **)(this + 0x1b8) = local_70;
  *(long **)(this + 0x1c0) = plStack_68;
  local_70 = pGVar9;
  plStack_68 = plVar15;
  if ((plVar15 != (long *)0x0) && (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x1b8);
  pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(pFVar10);
  if (local_70 != *(GUILabel **)(pGVar9 + 0xf0)) {
    if (plStack_68 != (long *)0x0) {
      plStack_68[1] = plStack_68[1] + 1;
    }
    plVar15 = *(long **)(pGVar9 + 0xf8);
    *(GUILabel **)(pGVar9 + 0xf0) = local_70;
    *(long **)(pGVar9 + 0xf8) = plStack_68;
    if ((plVar15 != (long *)0x0) &&
       (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar11 = plVar15[2];
      plVar15[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
  plVar15 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar11 = plStack_68[1], plStack_68[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x1b8);
  if ((((pGVar9[0x108] != (GUILabel)0xff) || (pGVar9[0x109] != (GUILabel)0xff)) ||
      (pGVar9[0x10a] != (GUILabel)0xff)) || (pGVar9[0x10b] != (GUILabel)0xff)) {
    plVar15 = *(long **)(pGVar9 + 0x118);
    *(undefined4 *)(pGVar9 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar9 + 0x110) = 0;
    *(undefined8 *)(pGVar9 + 0x118) = 0;
    if ((plVar15 != (long *)0x0) &&
       (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar11 = plVar15[2];
      plVar15[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    GUILabel::UpdateText(pGVar9);
    pGVar9 = *(GUILabel **)(this + 0x1b8);
  }
  pGVar9[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar9 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar9 + 0x148) = uVar4;
  GUILabel::UpdateText(pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x1b8);
  *(undefined4 *)(pGVar9 + 0x130) = 1;
  GUILabel::UpdateBounds(pGVar9);
  plStack_68 = (long *)_UNK_00693958;
  local_70 = _DAT_00693950;
  GUIView::SetFrame(*(GUIView **)(this + 0x1b8),(Rectangle *)&local_70);
  pGVar13 = *(GUILabel **)(this + 0x1b8);
  FUN_00666bb8(&local_70,"Points Available:",auStack_78);
  pGVar9 = local_70;
  pGVar14 = local_70 + -0x18;
  if ((*(size_t *)pGVar14 != *(size_t *)((long)*(void **)(pGVar13 + 0x100) + -0x18)) ||
     (iVar6 = memcmp(local_70,*(void **)(pGVar13 + 0x100),*(size_t *)pGVar14), iVar6 != 0)) {
    FUN_0066a6a8(pGVar13 + 0x100,&local_70);
    GUILabel::UpdateText(pGVar13);
    pGVar14 = local_70 + -0x18;
    pGVar9 = local_70;
  }
  if (pGVar14 != (GUILabel *)puVar5) {
    pGVar9 = pGVar9 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *(int *)pGVar9;
                    /* try { // try from 004fbcc8 to 005fbccb has its CatchHandler @ 004fbcd8 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar2) {
          *(int *)pGVar9 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
                    /* try { // try from 004fbd54 to 005fbe4b has its CatchHandler @ 004fbcf0 */
      operator_delete(pGVar14);
    }
  }
  plVar15 = *(long **)(this + 0x148);
  local_70 = *(GUILabel **)(this + 0x1b8);
  pcVar12 = *(code **)(*plVar15 + 0x60);
  plStack_68 = *(long **)(this + 0x1c0);
  if (plStack_68 != (long *)0x0) {
    plStack_68[1] = plStack_68[1] + 1;
  }
  (*pcVar12)(plVar15,&local_70);
  plVar15 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar11 = plStack_68[1], plStack_68[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pGVar9 = operator_new(0x150);
  GUILabel::GUILabel(pGVar9);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_70,pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x1c8);
  plVar15 = *(long **)(this + 0x1d0);
  *(GUILabel **)(this + 0x1c8) = local_70;
  *(long **)(this + 0x1d0) = plStack_68;
  local_70 = pGVar9;
  plStack_68 = plVar15;
  if ((plVar15 != (long *)0x0) && (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x1c8);
  pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(pFVar10);
  if (local_70 != *(GUILabel **)(pGVar9 + 0xf0)) {
    if (plStack_68 != (long *)0x0) {
      plStack_68[1] = plStack_68[1] + 1;
    }
    plVar15 = *(long **)(pGVar9 + 0xf8);
    *(GUILabel **)(pGVar9 + 0xf0) = local_70;
    *(long **)(pGVar9 + 0xf8) = plStack_68;
    if ((plVar15 != (long *)0x0) &&
       (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar11 = plVar15[2];
      plVar15[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
  plVar15 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar11 = plStack_68[1], plStack_68[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x1c8);
  if ((((pGVar9[0x108] != (GUILabel)0xfb) || (pGVar9[0x109] != (GUILabel)0xb0)) ||
      (pGVar9[0x10a] != (GUILabel)0x3b)) || (pGVar9[0x10b] != (GUILabel)0xff)) {
    plVar15 = *(long **)(pGVar9 + 0x118);
    *(undefined4 *)(pGVar9 + 0x108) = 0xff3bb0fb;
    *(undefined8 *)(pGVar9 + 0x110) = 0;
    *(undefined8 *)(pGVar9 + 0x118) = 0;
    if ((plVar15 != (long *)0x0) &&
       (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar11 = plVar15[2];
      plVar15[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    GUILabel::UpdateText(pGVar9);
    pGVar9 = *(GUILabel **)(this + 0x1c8);
  }
  pGVar9[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar9 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar9 + 0x148) = uVar4;
  GUILabel::UpdateText(pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x1c8);
  *(undefined4 *)(pGVar9 + 0x130) = 1;
  GUILabel::UpdateBounds(pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x1c8);
  *(undefined4 *)(pGVar9 + 0x130) = 1;
  GUILabel::UpdateBounds(pGVar9);
  plStack_68 = (long *)_UNK_00693968;
  local_70 = _DAT_00693960;
  GUIView::SetFrame(*(GUIView **)(this + 0x1c8),(Rectangle *)&local_70);
  pGVar13 = *(GUILabel **)(this + 0x1c8);
  FUN_00666bb8(&local_70,&DAT_006920a5,auStack_78);
  pGVar9 = local_70;
  pGVar14 = local_70 + -0x18;
  if ((*(size_t *)pGVar14 != *(size_t *)((long)*(void **)(pGVar13 + 0x100) + -0x18)) ||
     (iVar6 = memcmp(local_70,*(void **)(pGVar13 + 0x100),*(size_t *)pGVar14), iVar6 != 0)) {
    FUN_0066a6a8(pGVar13 + 0x100,&local_70);
    GUILabel::UpdateText(pGVar13);
    pGVar14 = local_70 + -0x18;
    pGVar9 = local_70;
  }
  if (pGVar14 != (GUILabel *)puVar5) {
                    /* catch() { ... } // from try @ 004fbcc8 with catch @ 004fbcd8 */
                    /* try { // try from 004fbcdc to 005fbce3 has its CatchHandler @ 004fbcec */
    pGVar9 = pGVar9 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar6 + -1;
    }
    else {
      do {
                    /* try { // try from 004fbce4 to 005fbcef has its CatchHandler @ 004fbc9c */
        iVar6 = *(int *)pGVar9;
                    /* catch() { ... } // from try @ 004fbcdc with catch @ 004fbcec */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar2) {
          *(int *)pGVar9 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 004fbcf0 to 005fbd37 has its CatchHandler @ 004fbcf0
                       catch(type#1 @ 00000000) { ... } // from try @ 004fbcf0 with catch @ 004fbcf0
                       catch(type#1 @ 00000000) { ... } // from try @ 004fbd54 with catch @ 004fbcf0
                       catch(type#1 @ 00000000) { ... } // from try @ 004fbe54 with catch @ 004fbcf0
                        */
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(pGVar14);
    }
  }
  plVar15 = *(long **)(this + 0x148);
  local_70 = *(GUILabel **)(this + 0x1c8);
  pcVar12 = *(code **)(*plVar15 + 0x60);
  plStack_68 = *(long **)(this + 0x1d0);
  if (plStack_68 != (long *)0x0) {
    plStack_68[1] = plStack_68[1] + 1;
  }
  (*pcVar12)(plVar15,&local_70);
  plVar15 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar11 = plStack_68[1], plStack_68[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
                    /* catch() { ... } // from try @ 004fbc14 with catch @ 004fbbe4 */
  *(undefined1 *)(*(long *)(this + 0x1b8) + 0xe4) = 1;
  *(undefined1 *)(*(long *)(this + 0x1c8) + 0xe4) = 1;
                    /* try { // try from 004fbc00 to 005fbc13 has its CatchHandler @ 004fbc38 */
  if ((local_80 != (long *)0x0) &&
     (lVar11 = local_80[1], local_80[1] = lVar11 + -1, lVar11 + -1 == 0)) {
                    /* try { // try from 004fbc14 to 005fbc3b has its CatchHandler @ 004fbbe4 */
    (**(code **)(*local_80 + 0x10))(local_80);
    lVar11 = local_80[2];
    local_80[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
                    /* catch() { ... } // from try @ 004fbc00 with catch @ 004fbc38 */
      (**(code **)(*local_80 + 0x18))(local_80);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


