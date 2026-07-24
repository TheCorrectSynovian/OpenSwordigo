/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052d348
 * Function: Caver::PortalView::PortalView
 * Signature: undefined __thiscall PortalView(PortalView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PortalView::PortalView() */

void __thiscall Caver::PortalView::PortalView(PortalView *this)

{
  GUIView *pGVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long **pplVar6;
  undefined *puVar7;
  int iVar8;
  GUIScrollView *this_00;
  MapView *this_01;
  long *plVar9;
  StripeView *pSVar10;
  string *psVar11;
  GUIView *this_02;
  GuideToggleView *this_03;
  intrusive_ptr *piVar12;
  long lVar13;
  code *pcVar14;
  int *piVar15;
  GUIView *pGVar16;
  GUIView *pGVar17;
  long **pplVar18;
  ulong uVar19;
  long **pplVar20;
  ulong uVar21;
  size_t *psVar22;
  GUILabel *this_04;
  long *plVar23;
  long *plVar24;
  undefined1 auStack_c8 [8];
  long local_c0;
  long *local_b8;
  undefined1 auStack_b0 [8];
  long local_a8;
  long *local_a0 [2];
  long *local_90 [7];
  undefined8 uStack_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e65a0 + 0x10;
  memset(this + 0xf0,0,0x90);
  this_00 = operator_new(0x1f0);
  GUIScrollView::GUIScrollView(this_00);
  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>
            ((shared_ptr<Caver::GUIScrollView> *)local_90,this_00);
  plVar9 = *(long **)(this + 0x100);
  plVar23 = *(long **)(this + 0x108);
  *(long **)(this + 0x100) = local_90[0];
  *(long **)(this + 0x108) = local_90[1];
  if ((plVar23 != (long *)0x0) && (lVar13 = plVar23[1], plVar23[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    local_90[0] = plVar9;
    local_90[1] = plVar23;
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar13 = plVar23[2];
    plVar23[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  local_90[0] = *(long **)(this + 0x100);
  *(undefined1 *)((long)local_90[0] + 0x1b2) = 1;
  pcVar14 = *(code **)(*(long *)this + 0x60);
  local_90[1] = *(long **)(this + 0x108);
  if (local_90[1] != (long *)0x0) {
    local_90[1][1] = local_90[1][1] + 1;
  }
  (*pcVar14)(this,local_90);
  plVar9 = local_90[1];
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  this_01 = operator_new(0x420);
  MapView::MapView(this_01);
  boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>
            ((shared_ptr<Caver::MapView> *)local_90,this_01);
  plVar9 = *(long **)(this + 0x110);
  plVar23 = *(long **)(this + 0x118);
  *(long **)(this + 0x110) = local_90[0];
  *(long **)(this + 0x118) = local_90[1];
  if ((plVar23 != (long *)0x0) && (lVar13 = plVar23[1], plVar23[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    local_90[0] = plVar9;
    local_90[1] = plVar23;
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar13 = plVar23[2];
    plVar23[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  plVar9 = *(long **)(this + 0x100);
  local_90[0] = *(long **)(this + 0x110);
  pcVar14 = *(code **)(*plVar9 + 0x60);
  local_90[1] = *(long **)(this + 0x118);
  if (local_90[1] != (long *)0x0) {
    local_90[1][1] = local_90[1][1] + 1;
  }
  (*pcVar14)(plVar9,local_90);
  plVar9 = local_90[1];
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  pSVar10 = operator_new(0x138);
  StripeView::StripeView(pSVar10);
  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>
            ((shared_ptr<Caver::StripeView> *)local_90,pSVar10);
  plVar9 = *(long **)(this + 0x150);
  plVar23 = *(long **)(this + 0x158);
  *(long **)(this + 0x150) = local_90[0];
  *(long **)(this + 0x158) = local_90[1];
  local_90[0] = plVar9;
  local_90[1] = plVar23;
  if ((plVar23 != (long *)0x0) && (lVar13 = plVar23[1], plVar23[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar13 = plVar23[2];
    plVar23[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  StripeView::SetHasTag(*(StripeView **)(this + 0x150),true,0.0);
  pSVar10 = *(StripeView **)(this + 0x150);
  FUN_00666bb8(local_90,"Portal",&local_a8);
  StripeView::SetTitle(pSVar10,(string *)local_90);
  puVar7 = PTR_DAT_007e5de8;
  if (local_90[0] + -3 != (long *)PTR_DAT_007e5de8) {
                    /* try { // try from 0052e030 to 0062e03b has its CatchHandler @ 0052dfc8 */
                    /* catch() { ... } // from try @ 0052e028 with catch @ 0052e038 */
    plVar9 = local_90[0] + -1;
                    /* try { // try from 0052e03c to 0062e0a7 has its CatchHandler @ 0052e03c
                       catch() { ... } // from try @ 0052e03c with catch @ 0052e03c
                       catch() { ... } // from try @ 0052e0c4 with catch @ 0052e03c
                       catch() { ... } // from try @ 0052e1f0 with catch @ 0052e03c
                       catch() { ... } // from try @ 0052e260 with catch @ 0052e03c */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = (int)*plVar9;
      *(int *)plVar9 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = (int)*plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_90[0] + -3);
    }
  }
  local_90[0] = *(long **)(this + 0x150);
  pcVar14 = *(code **)(*(long *)this + 0x60);
  local_90[1] = *(long **)(this + 0x158);
  if (local_90[1] != (long *)0x0) {
    local_90[1][1] = local_90[1][1] + 1;
  }
  (*pcVar14)(this,local_90);
  plVar9 = local_90[1];
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  pSVar10 = operator_new(0x138);
  StripeView::StripeView(pSVar10);
  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>
            ((shared_ptr<Caver::StripeView> *)local_90,pSVar10);
  plVar9 = *(long **)(this + 0x160);
  plVar23 = *(long **)(this + 0x168);
  *(long **)(this + 0x160) = local_90[0];
  *(long **)(this + 0x168) = local_90[1];
  if ((plVar23 != (long *)0x0) && (lVar13 = plVar23[1], plVar23[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 0052d74c with catch @ 0052d71c */
    local_90[0] = plVar9;
    local_90[1] = plVar23;
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar13 = plVar23[2];
    plVar23[2] = lVar13 + -1;
                    /* try { // try from 0052d738 to 0062d74b has its CatchHandler @ 0052d770 */
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
                    /* try { // try from 0052d74c to 0062d773 has its CatchHandler @ 0052d71c */
  local_90[0] = *(long **)(this + 0x160);
  pcVar14 = *(code **)(*(long *)this + 0x60);
  local_90[1] = *(long **)(this + 0x168);
  if (local_90[1] != (long *)0x0) {
                    /* catch() { ... } // from try @ 0052d738 with catch @ 0052d770 */
    local_90[1][1] = local_90[1][1] + 1;
  }
  (*pcVar14)(this,local_90);
  plVar9 = local_90[1];
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0052d7e0 with catch @ 0052d79c */
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
                    /* try { // try from 0052d7c4 to 0062d7c7 has its CatchHandler @ 0052d7d4 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  psVar11 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 0052d7c4 with catch @ 0052d7d4 */
                    /* try { // try from 0052d7d8 to 0062d7df has its CatchHandler @ 0052d7e8 */
                    /* try { // try from 0052d7e0 to 0062d7eb has its CatchHandler @ 0052d79c */
  FUN_00666bb8(&local_a8,"ui_button_close",auStack_b0);
                    /* catch() { ... } // from try @ 0052d7d8 with catch @ 0052d7e8 */
                    /* try { // try from 0052d7ec to 0062d863 has its CatchHandler @ 0052d7ec
                       catch() { ... } // from try @ 0052d7ec with catch @ 0052d7ec
                       catch() { ... } // from try @ 0052d868 with catch @ 0052d7ec
                       catch() { ... } // from try @ 0052d8c8 with catch @ 0052d7ec
                       catch() { ... } // from try @ 0052d920 with catch @ 0052d7ec */
  TextureLibrary::TextureForName(psVar11,SUB81(&local_a8,0));
  psVar11 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_c0,"ui_button_close_pressed",auStack_c8);
  piVar12 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar11,SUB81(&local_c0,0));
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)local_a0,(intrusive_ptr *)&local_b8,piVar12);
  if (local_90[1] != (long *)0x0) {
    local_90[1][1] = local_90[1][1] + 1;
  }
  plVar9 = *(long **)(this + 0x128);
  *(long **)(this + 0x120) = local_90[0];
  *(long **)(this + 0x128) = local_90[1];
                    /* try { // try from 0052d864 to 0062d867 has its CatchHandler @ 0052d900 */
  if ((plVar9 != (long *)0x0) && (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)) {
                    /* try { // try from 0052d868 to 0062d8ab has its CatchHandler @ 0052d7ec */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = local_90[1];
                    /* try { // try from 0052d8ac to 0062d8c7 has its CatchHandler @ 0052d914 */
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
                    /* try { // try from 0052d8c8 to 0062d917 has its CatchHandler @ 0052d7ec */
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if ((local_b8 != (long *)0x0) &&
     (iVar8 = (int)local_b8[1] + -1, *(int *)(local_b8 + 1) = iVar8, iVar8 == 0)) {
                    /* catch() { ... } // from try @ 0052d864 with catch @ 0052d900 */
    (**(code **)(*local_b8 + 8))();
  }
  if ((undefined *)(local_c0 + -0x18) != puVar7) {
    piVar15 = (int *)(local_c0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar15;
      *piVar15 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_c0 + -0x18));
    }
  }
                    /* try { // try from 0052d920 to 0062d92b has its CatchHandler @ 0052d7ec */
                    /* catch() { ... } // from try @ 0052d918 with catch @ 0052d928 */
  if ((local_a0[0] != (long *)0x0) &&
     (iVar8 = (int)local_a0[0][1] + -1, *(int *)(local_a0[0] + 1) = iVar8, iVar8 == 0)) {
                    /* catch() { ... } // from try @ 0052d974 with catch @ 0052d92c
                       catch() { ... } // from try @ 0052d990 with catch @ 0052d92c */
    (**(code **)(*local_a0[0] + 8))();
  }
  if ((undefined *)(local_a8 + -0x18) != puVar7) {
    piVar15 = (int *)(local_a8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar15;
      *piVar15 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_a8 + -0x18));
    }
  }
  local_90[0] = *(long **)(*(GUIView **)(this + 0x120) + 0x74);
  local_90[1] = (long *)&DAT_4208000042080000;
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)local_90);
  local_90[0] = *(long **)(this + 0x120);
                    /* try { // try from 0052d970 to 0062d973 has its CatchHandler @ 0052d984 */
  pcVar14 = *(code **)(*(long *)this + 0x60);
                    /* try { // try from 0052d974 to 0062d987 has its CatchHandler @ 0052d92c */
  local_90[1] = *(long **)(this + 0x128);
  if (local_90[1] != (long *)0x0) {
                    /* catch() { ... } // from try @ 0052d970 with catch @ 0052d984 */
                    /* try { // try from 0052d988 to 0062d98f has its CatchHandler @ 0052d998 */
    local_90[1][1] = local_90[1][1] + 1;
  }
                    /* try { // try from 0052d990 to 0062d99b has its CatchHandler @ 0052d92c */
                    /* catch() { ... } // from try @ 0052d988 with catch @ 0052d998 */
  (*pcVar14)(this,local_90);
  plVar9 = local_90[1];
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
                    /* catch() { ... } // from try @ 0052da34 with catch @ 0052d9c8 */
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  psVar11 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a8,"ui_button_arrow",auStack_b0);
                    /* try { // try from 0052da0c to 0062da0f has its CatchHandler @ 0052da28 */
                    /* try { // try from 0052da10 to 0062da17 has its CatchHandler @ 0052da3c */
  TextureLibrary::TextureForName(psVar11,SUB81(&local_a8,0));
  psVar11 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 0052da0c with catch @ 0052da28 */
                    /* try { // try from 0052da2c to 0062da33 has its CatchHandler @ 0052da38 */
  FUN_00666bb8(&local_c0,"ui_button_arrow_pressed",auStack_c8);
                    /* try { // try from 0052da34 to 0062da4f has its CatchHandler @ 0052d9c8 */
                    /* catch() { ... } // from try @ 0052da2c with catch @ 0052da38 */
  piVar12 = (intrusive_ptr *)0x1;
                    /* catch() { ... } // from try @ 0052da10 with catch @ 0052da3c */
  TextureLibrary::TextureForName(psVar11,SUB81(&local_c0,0));
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)local_a0,(intrusive_ptr *)&local_b8,piVar12);
  if (local_90[1] != (long *)0x0) {
    local_90[1][1] = local_90[1][1] + 1;
  }
  plVar9 = *(long **)(this + 0x138);
  *(long **)(this + 0x130) = local_90[0];
  *(long **)(this + 0x138) = local_90[1];
  if ((plVar9 != (long *)0x0) && (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = local_90[1];
                    /* try { // try from 0052dac4 to 0062dc03 has its CatchHandler @ 0052dac4
                       catch() { ... } // from try @ 0052dac4 with catch @ 0052dac4
                       catch() { ... } // from try @ 0052dc08 with catch @ 0052dac4 */
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if ((local_b8 != (long *)0x0) &&
     (iVar8 = (int)local_b8[1] + -1, *(int *)(local_b8 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_b8 + 8))();
  }
  if ((undefined *)(local_c0 + -0x18) != puVar7) {
    piVar15 = (int *)(local_c0 + -8);
                    /* try { // try from 0052e0a8 to 0062e0c3 has its CatchHandler @ 0052e254 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar15;
      *piVar15 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_c0 + -0x18));
    }
  }
  if ((local_a0[0] != (long *)0x0) &&
     (iVar8 = (int)local_a0[0][1] + -1, *(int *)(local_a0[0] + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_a0[0] + 8))();
  }
  if ((undefined *)(local_a8 + -0x18) != puVar7) {
                    /* try { // try from 0052e0c4 to 0062e1eb has its CatchHandler @ 0052e03c */
    piVar15 = (int *)(local_a8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar15;
      *piVar15 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_a8 + -0x18));
    }
  }
  local_90[0] = *(long **)(*(GUIView **)(this + 0x130) + 0x74);
  local_90[1] = (long *)DAT_00694b48;
  GUIView::SetFrame(*(GUIView **)(this + 0x130),(Rectangle *)local_90);
  local_90[0] = *(long **)(this + 0x130);
  *(undefined1 *)((long)local_90[0] + 0xe4) = 1;
  pcVar14 = *(code **)(*(long *)this + 0x60);
  local_90[1] = *(long **)(this + 0x138);
  if (local_90[1] != (long *)0x0) {
    local_90[1][1] = local_90[1][1] + 1;
  }
  (*pcVar14)(this,local_90);
  plVar9 = local_90[1];
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
                    /* try { // try from 0052dc04 to 0062dc07 has its CatchHandler @ 0052dcf8 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* try { // try from 0052dc08 to 0062dd0b has its CatchHandler @ 0052dac4 */
  psVar11 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a8,"ui_button_help",&local_c0);
  piVar12 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar11,SUB81(&local_a8,0));
  local_b8 = (long *)0x0;
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)local_a0,(intrusive_ptr *)&local_b8,piVar12);
  if (local_90[1] != (long *)0x0) {
    local_90[1][1] = local_90[1][1] + 1;
  }
  plVar9 = *(long **)(this + 0x148);
  *(long **)(this + 0x140) = local_90[0];
  *(long **)(this + 0x148) = local_90[1];
  if ((plVar9 != (long *)0x0) && (lVar13 = plVar9[1], plVar9[1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = local_90[1];
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* catch() { ... } // from try @ 0052dc04 with catch @ 0052dcf8 */
  if ((local_b8 != (long *)0x0) &&
     (iVar8 = (int)local_b8[1] + -1, *(int *)(local_b8 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_b8 + 8))();
  }
  if ((local_a0[0] != (long *)0x0) &&
     (iVar8 = (int)local_a0[0][1] + -1, *(int *)(local_a0[0] + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_a0[0] + 8))();
  }
  if ((undefined *)(local_a8 + -0x18) != puVar7) {
    piVar15 = (int *)(local_a8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar15;
      *piVar15 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 0052e1ec to 0062e1ef has its CatchHandler @ 0052e240 */
    if (iVar8 < 1) {
                    /* try { // try from 0052e1f0 to 0062e257 has its CatchHandler @ 0052e03c */
      operator_delete((undefined *)(local_a8 + -0x18));
    }
  }
  this_02 = *(GUIView **)(this + 0x140);
  local_90[1] = (long *)_UNK_0068ebd8;
  local_90[0] = _DAT_0068ebd0;
  local_90[3] = (long *)_UNK_0068ebe8;
  local_90[2] = (long *)_DAT_0068ebe0;
  local_90[5] = (long *)_UNK_0068ebf8;
  local_90[4] = (long *)_DAT_0068ebf0;
  pGVar1 = this_02 + 0x198;
  pGVar17 = pGVar1;
  if (pGVar1 <= this_02 + 0x15c) {
    pGVar17 = this_02 + 0x15c;
  }
  uVar2 = ((ulong)(pGVar17 + (-0x159 - (long)this_02)) >> 2) + 1;
  uStack_58 = _UNK_00683808;
  local_90[6] = (long *)_DAT_00683800;
  if (uVar2 < 8) {
    pGVar16 = this_02 + 0x158;
    pplVar18 = local_90;
  }
  else {
    uVar19 = uVar2 & 0x7ffffffffffffff8;
    pplVar18 = (long **)((long)local_90 + uVar19 * 4);
    pGVar17 = this_02 + 0x168;
    pGVar16 = this_02 + uVar19 * 4 + 0x158;
    pplVar20 = local_90 + 2;
    uVar21 = uVar19;
    do {
      pplVar6 = pplVar20 + -1;
      plVar9 = pplVar20[-2];
      plVar24 = pplVar20[1];
      plVar23 = *pplVar20;
      uVar21 = uVar21 - 8;
      pplVar20 = pplVar20 + 4;
      *(long **)(pGVar17 + -8) = *pplVar6;
      *(long **)(pGVar17 + -0x10) = plVar9;
      *(long **)(pGVar17 + 8) = plVar24;
      *(long **)pGVar17 = plVar23;
      pGVar17 = pGVar17 + 0x20;
    } while (uVar21 != 0);
    if (uVar2 == uVar19) goto LAB_0052de08;
  }
  do {
    pGVar17 = pGVar16 + 4;
    *(undefined4 *)pGVar16 = *(undefined4 *)pplVar18;
    pGVar16 = pGVar17;
    pplVar18 = (long **)((long)pplVar18 + 4);
  } while (pGVar17 < pGVar1);
LAB_0052de08:
  local_90[0] = *(long **)(this_02 + 0x74);
  local_90[1] = (long *)&DAT_4208000042080000;
  GUIView::SetFrame(this_02,(Rectangle *)local_90);
  local_90[0] = *(long **)(this + 0x140);
  *(undefined1 *)((long)local_90[0] + 0xe4) = 1;
  pcVar14 = *(code **)(*(long *)this + 0x60);
  local_90[1] = *(long **)(this + 0x148);
  if (local_90[1] != (long *)0x0) {
    local_90[1][1] = local_90[1][1] + 1;
  }
  (*pcVar14)(this,local_90);
  plVar9 = local_90[1];
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  this_03 = operator_new(0x118);
  GuideToggleView::GuideToggleView(this_03);
  boost::shared_ptr<Caver::GuideToggleView>::shared_ptr<Caver::GuideToggleView>
            ((shared_ptr<Caver::GuideToggleView> *)local_90,this_03);
  plVar9 = *(long **)(this + 0x170);
  plVar23 = *(long **)(this + 0x178);
  *(long **)(this + 0x170) = local_90[0];
  *(long **)(this + 0x178) = local_90[1];
  local_90[0] = plVar9;
  local_90[1] = plVar23;
                    /* catch() { ... } // from try @ 0052df1c with catch @ 0052deec */
  if ((plVar23 != (long *)0x0) && (lVar13 = plVar23[1], plVar23[1] = lVar13 + -1, lVar13 + -1 == 0))
  {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar13 = plVar23[2];
                    /* try { // try from 0052df08 to 0062df1b has its CatchHandler @ 0052df40 */
    plVar23[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
                    /* try { // try from 0052df1c to 0062df43 has its CatchHandler @ 0052deec */
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  this_04 = *(GUILabel **)(*(long *)(this + 0x170) + 0xf8);
  FUN_00666bb8(local_90,"COMPASS",&local_a8);
  plVar9 = local_90[0];
  psVar22 = (size_t *)(local_90[0] + -3);
                    /* catch() { ... } // from try @ 0052df08 with catch @ 0052df40 */
  if ((*psVar22 != *(size_t *)((long)*(void **)(this_04 + 0x100) + -0x18)) ||
     (iVar8 = memcmp(local_90[0],*(void **)(this_04 + 0x100),*psVar22), iVar8 != 0)) {
    FUN_0066a6a8(this_04 + 0x100,local_90);
    GUILabel::UpdateText(this_04);
    psVar22 = (size_t *)(local_90[0] + -3);
    plVar9 = local_90[0];
  }
  if (psVar22 != (size_t *)puVar7) {
    plVar9 = plVar9 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = (int)*plVar9;
      *(int *)plVar9 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = (int)*plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(psVar22);
    }
  }
  local_90[0] = *(long **)(this + 0x170);
  pcVar14 = *(code **)(*(long *)this + 0x60);
  local_90[1] = *(long **)(this + 0x178);
  if (local_90[1] != (long *)0x0) {
    local_90[1][1] = local_90[1][1] + 1;
  }
  (*pcVar14)(this,local_90);
  plVar9 = local_90[1];
                    /* catch() { ... } // from try @ 0052e030 with catch @ 0052dfc8 */
  if ((local_90[1] != (long *)0x0) &&
     (lVar13 = local_90[1][1], local_90[1][1] = lVar13 + -1, lVar13 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar13 = plVar9[2];
    plVar9[2] = lVar13 + -1;
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* try { // try from 0052e014 to 0062e017 has its CatchHandler @ 0052e024 */
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0052e014 with catch @ 0052e024 */
                    /* try { // try from 0052e028 to 0062e02f has its CatchHandler @ 0052e038 */
  return;
}


