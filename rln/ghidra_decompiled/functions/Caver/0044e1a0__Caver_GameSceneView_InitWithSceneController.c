/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044e1a0
 * Function: Caver::GameSceneView::InitWithSceneController
 * Signature: undefined __thiscall InitWithSceneController(GameSceneView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController>
   const&) */

void __thiscall
Caver::GameSceneView::InitWithSceneController(GameSceneView *this,shared_ptr *param_1)

{
  GUIControl *pGVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long **pplVar5;
  float fVar6;
  undefined *puVar7;
  GameOverlayView *pGVar8;
  string *psVar9;
  ulong uVar10;
  intrusive_ptr *piVar11;
  long lVar12;
  undefined8 *puVar13;
  code *pcVar14;
  int *piVar15;
  int iVar16;
  GUIControl *pGVar17;
  GUIControl *pGVar18;
  long **pplVar19;
  ulong uVar20;
  long **pplVar21;
  ulong uVar22;
  GUIControl *pGVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  long *plVar27;
  undefined1 auStack_d8 [8];
  long local_d0;
  long *local_c8;
  undefined1 auStack_c0 [8];
  long local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  GameSceneView *local_a0;
  long *local_90 [2];
  long *plStack_80;
  GameSceneView *local_78 [4];
  undefined8 uStack_58;
  long local_48;
  
                    /* catch() { ... } // from try @ 004499c4 with catch @ 0044e1b8 */
  lVar4 = tpidr_el0;
                    /* catch() { ... } // from try @ 00449978 with catch @ 0044e1bc */
  local_48 = *(long *)(lVar4 + 0x28);
  GUIView::RemoveAllSubviews((GUIView *)this);
  uVar25 = *(undefined8 *)param_1;
  lVar12 = *(long *)(param_1 + 8);
  if (lVar12 != 0) {
                    /* try { // try from 0044e1d8 to 0054e1e7 has its CatchHandler @ 0044f4b4 */
    *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
  }
  plVar24 = *(long **)(this + 0xf8);
                    /* try { // try from 0044e1e8 to 0054e23f has its CatchHandler @ 00447cc4 */
  *(undefined8 *)(this + 0xf0) = uVar25;
  *(long *)(this + 0xf8) = lVar12;
  if ((plVar24 != (long *)0x0) && (lVar12 = plVar24[1], plVar24[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    lVar12 = plVar24[2];
    plVar24[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* catch() { ... } // from try @ 00449924 with catch @ 0044e220 */
                    /* catch() { ... } // from try @ 004498d8 with catch @ 0044e224 */
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  fVar6 = DAT_00683734;
                    /* try { // try from 0044e240 to 0054e24f has its CatchHandler @ 0044f4b4 */
  if (DAT_00683734 < *(float *)(this + 0x8c)) {
    uVar25 = *(undefined8 *)(this + 0x84);
                    /* try { // try from 0044e250 to 0054e2a7 has its CatchHandler @ 00447cc4 */
    puVar13 = *(undefined8 **)(*(long *)(*(long *)param_1 + 0x20) + 0x240);
    puVar13[1] = *(undefined8 *)(this + 0x8c);
    *puVar13 = uVar25;
    Camera::SetAspectRatio
              (*(Camera **)(*(long *)(*(long *)param_1 + 0x20) + 0x240),
               *(float *)(this + 0x8c) / *(float *)(this + 0x90));
  }
  pGVar8 = operator_new(0x298);
  GameOverlayView::GameOverlayView(pGVar8);
                    /* catch() { ... } // from try @ 00449884 with catch @ 0044e288 */
  boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>
            ((shared_ptr<Caver::GameOverlayView> *)local_90,pGVar8);
                    /* catch() { ... } // from try @ 00449838 with catch @ 0044e28c */
  plVar24 = *(long **)(this + 0x100);
  plVar26 = *(long **)(this + 0x108);
  *(long **)(this + 0x100) = local_90[0];
  *(long **)(this + 0x108) = local_90[1];
  local_90[0] = plVar24;
  local_90[1] = plVar26;
                    /* try { // try from 0044e2a8 to 0054e2b7 has its CatchHandler @ 0044f4b4 */
  if ((plVar26 != (long *)0x0) && (lVar12 = plVar26[1], plVar26[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
                    /* try { // try from 0044e2b8 to 0054e30f has its CatchHandler @ 00447cc4 */
    (**(code **)(*plVar26 + 0x10))(plVar26);
    lVar12 = plVar26[2];
    plVar26[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  pGVar8 = *(GameOverlayView **)(this + 0x100);
                    /* catch() { ... } // from try @ 004497e4 with catch @ 0044e2f0 */
                    /* catch() { ... } // from try @ 00449798 with catch @ 0044e2f4 */
  if (*(int *)(pGVar8 + 0x70) != 0x12) {
    plVar24 = *(long **)(pGVar8 + 0x58);
    *(undefined4 *)(pGVar8 + 0x70) = 0x12;
                    /* try { // try from 0044e310 to 0054e31f has its CatchHandler @ 0044f4b4 */
    if ((plVar24 != (long *)0x0) && (fVar6 < *(float *)((long)plVar24 + 0x8c))) {
                    /* try { // try from 0044e320 to 0054e377 has its CatchHandler @ 00447cc4 */
      (**(code **)(*plVar24 + 0x58))(plVar24);
      pGVar8 = *(GameOverlayView **)(this + 0x100);
    }
  }
  GameOverlayView::InitWithGameState(pGVar8,(shared_ptr *)(*(long *)param_1 + 8));
  local_90[0] = *(long **)(this + 0x100);
  pcVar14 = *(code **)(*(long *)this + 0x60);
  local_90[1] = *(long **)(this + 0x108);
  if (local_90[1] != (long *)0x0) {
                    /* catch() { ... } // from try @ 00449744 with catch @ 0044e358 */
    local_90[1][1] = local_90[1][1] + 1;
  }
                    /* catch() { ... } // from try @ 004496f8 with catch @ 0044e35c */
  (*pcVar14)(this,local_90);
  plVar24 = local_90[1];
                    /* try { // try from 0044e378 to 0054e387 has its CatchHandler @ 0044f4b4 */
  if ((local_90[1] != (long *)0x0) &&
     (lVar12 = local_90[1][1], local_90[1][1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* try { // try from 0044e388 to 0054e3df has its CatchHandler @ 00447cc4 */
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar12 = plVar24[2];
    plVar24[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 004496a4 with catch @ 0044e3c0 */
                    /* catch() { ... } // from try @ 00449658 with catch @ 0044e3c4 */
  FUN_00666bb8(&local_b8,"ui_button_arrow",auStack_c0);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_b8,0));
                    /* try { // try from 0044e3e0 to 0054e3ef has its CatchHandler @ 0044f4b4 */
  psVar9 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0044e3f0 to 0054e447 has its CatchHandler @ 00447cc4 */
  FUN_00666bb8(&local_d0,"ui_button_arrow_pressed",auStack_d8);
  piVar11 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar9,SUB81(&local_d0,0));
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)&local_b0,(intrusive_ptr *)&local_c8,piVar11);
  if (local_90[1] != (long *)0x0) {
                    /* catch() { ... } // from try @ 00449604 with catch @ 0044e428 */
                    /* catch() { ... } // from try @ 004495b8 with catch @ 0044e42c */
    local_90[1][1] = local_90[1][1] + 1;
  }
  plVar24 = *(long **)(this + 0x150);
  *(long **)(this + 0x148) = local_90[0];
  *(long **)(this + 0x150) = local_90[1];
                    /* try { // try from 0044e448 to 0054e457 has its CatchHandler @ 0044f4b4 */
  if ((plVar24 != (long *)0x0) && (lVar12 = plVar24[1], plVar24[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
                    /* try { // try from 0044e458 to 0054e4af has its CatchHandler @ 00447cc4 */
    (**(code **)(*plVar24 + 0x10))(plVar24);
    lVar12 = plVar24[2];
    plVar24[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  plVar24 = local_90[1];
                    /* catch() { ... } // from try @ 00449564 with catch @ 0044e490 */
                    /* catch() { ... } // from try @ 00449518 with catch @ 0044e494 */
  if ((local_90[1] != (long *)0x0) &&
     (lVar12 = local_90[1][1], local_90[1][1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_90[1] + 0x10))(local_90[1]);
    lVar12 = plVar24[2];
                    /* try { // try from 0044e4b0 to 0054e4bf has its CatchHandler @ 0044f4b4 */
    plVar24[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 0044e4c0 to 0054e517 has its CatchHandler @ 00447cc4 */
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  if ((local_c8 != (long *)0x0) &&
     (iVar16 = (int)local_c8[1] + -1, *(int *)(local_c8 + 1) = iVar16, iVar16 == 0)) {
    (**(code **)(*local_c8 + 8))();
  }
  puVar7 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 004494c4 with catch @ 0044e4f8 */
                    /* catch() { ... } // from try @ 00449478 with catch @ 0044e4fc */
  if ((undefined *)(local_d0 + -0x18) != PTR_DAT_007e5de8) {
    piVar15 = (int *)(local_d0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar15;
      *piVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 0044e798 to 0054e7ef has its CatchHandler @ 00447cc4 */
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_d0 + -0x18));
    }
  }
                    /* try { // try from 0044e518 to 0054e527 has its CatchHandler @ 0044f4b4 */
  if ((local_b0 != (long *)0x0) &&
     (iVar16 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar16, iVar16 == 0)) {
    (**(code **)(*local_b0 + 8))();
  }
                    /* try { // try from 0044e528 to 0054e57f has its CatchHandler @ 00447cc4 */
  if ((undefined *)(local_b8 + -0x18) != puVar7) {
                    /* catch() { ... } // from try @ 00449104 with catch @ 0044e768 */
                    /* catch() { ... } // from try @ 004490b8 with catch @ 0044e76c */
    piVar15 = (int *)(local_b8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar15;
      *piVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_b8 + -0x18));
                    /* catch() { ... } // from try @ 00449064 with catch @ 0044e7d0 */
    }
  }
  local_90[0] = (long *)0x0;
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x148),0,local_90);
                    /* catch() { ... } // from try @ 00449424 with catch @ 0044e560 */
  if ((local_90[0] != (long *)0x0) &&
     (iVar16 = (int)local_90[0][1] + -1, *(int *)(local_90[0] + 1) = iVar16, iVar16 == 0)) {
                    /* catch() { ... } // from try @ 004493d8 with catch @ 0044e564 */
    (**(code **)(*local_90[0] + 8))();
  }
  local_90[0] = (long *)0x0;
                    /* try { // try from 0044e580 to 0054e58f has its CatchHandler @ 0044f4b4 */
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x148),1,local_90);
                    /* try { // try from 0044e590 to 0054e5e7 has its CatchHandler @ 00447cc4 */
  if ((local_90[0] != (long *)0x0) &&
     (iVar16 = (int)local_90[0][1] + -1, *(int *)(local_90[0] + 1) = iVar16, iVar16 == 0)) {
    (**(code **)(*local_90[0] + 8))();
  }
  local_90[1] = (long *)_UNK_0068ebc8;
  local_90[0] = _DAT_0068ebc0;
  GUIView::SetFrame(*(GUIView **)(this + 0x148),(Rectangle *)local_90);
                    /* catch() { ... } // from try @ 00449384 with catch @ 0044e5c8 */
                    /* catch() { ... } // from try @ 00449338 with catch @ 0044e5cc */
  pGVar23 = *(GUIControl **)(this + 0x148);
  local_90[1] = _UNK_0068ebd8;
  local_90[0] = _DAT_0068ebd0;
  local_78[0] = _UNK_0068ebe8;
  plStack_80 = (long *)_DAT_0068ebe0;
                    /* try { // try from 0044e5e8 to 0054e5f7 has its CatchHandler @ 0044f4b4 */
  local_78[2] = (GameSceneView *)_UNK_0068ebf8;
  local_78[1] = (GameSceneView *)_DAT_0068ebf0;
                    /* try { // try from 0044e5f8 to 0054e64f has its CatchHandler @ 00447cc4 */
  pGVar1 = pGVar23 + 0x198;
  pGVar18 = pGVar1;
  if (pGVar1 <= pGVar23 + 0x15c) {
    pGVar18 = pGVar23 + 0x15c;
  }
  uVar10 = ((ulong)(pGVar18 + (-0x159 - (long)pGVar23)) >> 2) + 1;
  uStack_58 = _UNK_00683808;
  local_78[3] = (GameSceneView *)_DAT_00683800;
  if (uVar10 < 8) {
    pGVar17 = pGVar23 + 0x158;
    pplVar19 = local_90;
  }
  else {
    uVar20 = uVar10 & 0x7ffffffffffffff8;
                    /* catch() { ... } // from try @ 004492e4 with catch @ 0044e630 */
                    /* catch() { ... } // from try @ 00449298 with catch @ 0044e634 */
    pplVar19 = (long **)((long)local_90 + uVar20 * 4);
    pGVar18 = pGVar23 + 0x168;
    pGVar17 = pGVar23 + uVar20 * 4 + 0x158;
    pplVar21 = local_90 + 2;
    uVar22 = uVar20;
    do {
      pplVar5 = pplVar21 + -1;
      plVar24 = pplVar21[-2];
      plVar27 = pplVar21[1];
      plVar26 = *pplVar21;
                    /* try { // try from 0044e650 to 0054e65f has its CatchHandler @ 0044f4b4 */
      uVar22 = uVar22 - 8;
      pplVar21 = pplVar21 + 4;
      *(long **)(pGVar18 + -8) = *pplVar5;
      *(long **)(pGVar18 + -0x10) = plVar24;
      *(long **)(pGVar18 + 8) = plVar27;
      *(long **)pGVar18 = plVar26;
      pGVar18 = pGVar18 + 0x20;
                    /* try { // try from 0044e660 to 0054e6b7 has its CatchHandler @ 00447cc4 */
    } while (uVar22 != 0);
    if (uVar10 == uVar20) goto LAB_0044e67c;
  }
  do {
    pGVar18 = pGVar17 + 4;
    *(undefined4 *)pGVar17 = *(undefined4 *)pplVar19;
    pGVar17 = pGVar18;
    pplVar19 = (long **)((long)pplVar19 + 4);
  } while (pGVar18 < pGVar1);
LAB_0044e67c:
  local_90[0] = (long *)0x0;
                    /* catch() { ... } // from try @ 00449244 with catch @ 0044e698 */
  uStack_a8 = 0;
  local_b0 = (long *)PTR_CinematicSkipButtonPressed_007e5c00;
  local_a0 = this;
                    /* catch() { ... } // from try @ 004491f8 with catch @ 0044e69c */
  uVar10 = boost::detail::function::has_empty_target(&local_b0);
  if ((uVar10 & 1) == 0) {
    local_78[0] = local_a0;
                    /* try { // try from 0044e6b8 to 0054e6c7 has its CatchHandler @ 0044f4b4 */
    plStack_80 = (long *)uStack_a8;
    local_90[1] = local_b0;
    local_90[0] = (long *)PTR_stored_vtable_007e4bd0;
  }
  else {
    local_90[0] = (long *)0x0;
  }
                    /* try { // try from 0044e6c8 to 0054e71f has its CatchHandler @ 00447cc4 */
  GUIControl::AddTargetActionForControlEvent(pGVar23,this,local_90,0x40);
  if (local_90[0] != (long *)0x0) {
    if ((((ulong)local_90[0] & 1) == 0) &&
       (*(code **)((ulong)local_90[0] & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 004491a4 with catch @ 0044e700 */
                    /* catch() { ... } // from try @ 00449158 with catch @ 0044e704 */
      (**(code **)((ulong)local_90[0] & 0xfffffffffffffffe))(local_90 + 1,local_90 + 1,2);
    }
    local_90[0] = (long *)0x0;
  }
  (**(code **)(*(long *)this + 0x58))(this);
                    /* try { // try from 0044e720 to 0054e72f has its CatchHandler @ 0044f4b4 */
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00449018 with catch @ 0044e7d4 */
    __stack_chk_fail();
  }
                    /* try { // try from 0044e730 to 0054e787 has its CatchHandler @ 00447cc4 */
  return;
}


