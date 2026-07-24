/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048bfd8
 * Function: Caver::CreditsView::CreditsView
 * Signature: undefined __thiscall CreditsView(CreditsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CreditsView::CreditsView() */

void __thiscall Caver::CreditsView::CreditsView(CreditsView *this)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long **pplVar5;
  undefined *puVar6;
  Scene *pSVar7;
  SceneView *pSVar8;
  GUIEffectView *this_00;
  string *psVar9;
  intrusive_ptr *piVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  GUIView *pGVar14;
  GUIView *pGVar15;
  int iVar16;
  code *pcVar17;
  GUIView *pGVar18;
  GUIView **ppGVar19;
  ulong uVar20;
  long **pplVar21;
  GUIView *pGVar22;
  ulong uVar23;
  GUIButton *pGVar24;
  CreditsView *pCVar25;
  long *plVar26;
  long *plVar27;
  undefined4 local_e4;
  long *local_e0;
  GUIView *local_d8;
  long *local_d0;
  intrusive_ptr aiStack_c8 [8];
  long *local_c0;
  undefined1 auStack_b8 [8];
  Scene *local_b0;
  long *local_a8;
  GUIView *local_a0;
  long *aplStack_98 [6];
  undefined8 uStack_68;
  
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar6 = PTR_vtable_007e4ee8;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined **)this = puVar6 + 0x10;
  pCVar25 = this + 0xf0;
  *(undefined8 *)pCVar25 = 0;
  pSVar7 = operator_new(0x408);
  Scene::Scene(pSVar7);
  boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>
            ((shared_ptr<Caver::Scene> *)&local_b0,pSVar7);
  pSVar7 = local_b0;
  FUN_00666bb8(&local_d8,"credits",auStack_b8);
  piVar10 = aiStack_c8;
  FUN_00666bb8(&local_c0,"scene");
  PathForResourceOfType((string *)&local_d8,(string *)&local_c0);
  Scene::LoadFromFile(pSVar7,(string *)&local_a0);
  puVar6 = PTR_DAT_007e5de8;
  if (local_a0 + -0x18 != (GUIView *)PTR_DAT_007e5de8) {
    pGVar15 = local_a0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *(int *)pGVar15;
      *(int *)pGVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *(int *)pGVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
        if (bVar3) {
          *(int *)pGVar15 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete(local_a0 + -0x18);
    }
  }
  if (local_c0 + -3 != (long *)puVar6) {
    plVar13 = local_c0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0048c800 to 0058c83b has its CatchHandler @ 0048c99c */
      iVar16 = (int)*plVar13;
      *(int *)plVar13 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = (int)*plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete(local_c0 + -3);
    }
  }
  if (local_d8 + -0x18 != (GUIView *)puVar6) {
    pGVar15 = local_d8 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *(int *)pGVar15;
      *(int *)pGVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *(int *)pGVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pGVar15,0x10);
        if (bVar3) {
          *(int *)pGVar15 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete(local_d8 + -0x18);
                    /* try { // try from 0048c83c to 0058cb07 has its CatchHandler @ 0048c6c8 */
    }
  }
  pSVar8 = operator_new(0x1a8);
  SceneView::SceneView(pSVar8);
  boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>
            ((shared_ptr<Caver::SceneView> *)&local_a0,pSVar8);
  pGVar15 = *(GUIView **)(this + 0xf0);
  plVar13 = *(long **)(this + 0xf8);
  *(GUIView **)(this + 0xf0) = local_a0;
  *(long **)(this + 0xf8) = aplStack_98[0];
  local_a0 = pGVar15;
  aplStack_98[0] = plVar13;
  if ((plVar13 != (long *)0x0) && (lVar12 = plVar13[1], plVar13[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar12 = plVar13[2];
    plVar13[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  pSVar8 = *(SceneView **)pCVar25;
  if (*(int *)(pSVar8 + 0x70) != 0x12) {
    plVar13 = *(long **)(pSVar8 + 0x58);
    *(undefined4 *)(pSVar8 + 0x70) = 0x12;
    if ((plVar13 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar13 + 0x8c))) {
      (**(code **)(*plVar13 + 0x58))(plVar13);
      pSVar8 = *(SceneView **)pCVar25;
    }
  }
  SceneView::InitWithScene(pSVar8,(shared_ptr *)&local_b0);
  Scene::FinishLoad(local_b0);
  this_00 = operator_new(0x168);
  GUIEffectView::GUIEffectView(this_00);
  boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>
            ((shared_ptr<Caver::GUIEffectView> *)&local_d8,this_00);
  GUIEffect::ShowBars((GUIEffect *)(local_d8 + 0xf0),0.0);
  GUIView::SetFrame(local_d8,(Rectangle *)(*(long *)pCVar25 + 0x84));
  if (*(int *)(local_d8 + 0x70) != 0x12) {
    plVar13 = *(long **)(local_d8 + 0x58);
    *(undefined4 *)(local_d8 + 0x70) = 0x12;
    if ((plVar13 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar13 + 0x8c))) {
      (**(code **)(*plVar13 + 0x58))();
    }
  }
  plVar13 = *(long **)pCVar25;
  pcVar17 = *(code **)(*plVar13 + 0x60);
  aplStack_98[0] = local_d0;
  if (local_d0 != (long *)0x0) {
    local_d0[1] = local_d0[1] + 1;
  }
  local_a0 = local_d8;
  (*pcVar17)(plVar13,&local_a0);
  plVar13 = aplStack_98[0];
  if ((aplStack_98[0] != (long *)0x0) &&
     (lVar12 = aplStack_98[0][1], aplStack_98[0][1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*aplStack_98[0] + 0x10))(aplStack_98[0]);
    lVar12 = plVar13[2];
    plVar13[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  local_c0 = (long *)0x0;
  local_e0 = (long *)0x0;
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_c0,(intrusive_ptr *)&local_e0,piVar10);
  if (aplStack_98[0] != (long *)0x0) {
    aplStack_98[0][1] = aplStack_98[0][1] + 1;
  }
  plVar13 = *(long **)(this + 0x108);
  *(GUIView **)(this + 0x100) = local_a0;
  *(long **)(this + 0x108) = aplStack_98[0];
  if ((plVar13 != (long *)0x0) && (lVar12 = plVar13[1], plVar13[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 0048c33c with catch @ 0048c2e4
                       catch() { ... } // from try @ 0048c358 with catch @ 0048c2e4 */
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar12 = plVar13[2];
    plVar13[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  plVar13 = aplStack_98[0];
  if ((aplStack_98[0] != (long *)0x0) &&
     (lVar12 = aplStack_98[0][1], aplStack_98[0][1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*aplStack_98[0] + 0x10))(aplStack_98[0]);
                    /* try { // try from 0048c338 to 0058c33b has its CatchHandler @ 0048c34c */
    lVar12 = plVar13[2];
                    /* try { // try from 0048c33c to 0058c34f has its CatchHandler @ 0048c2e4 */
    plVar13[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* catch() { ... } // from try @ 0048c338 with catch @ 0048c34c */
                    /* try { // try from 0048c350 to 0058c357 has its CatchHandler @ 0048c360 */
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
                    /* try { // try from 0048c358 to 0058c363 has its CatchHandler @ 0048c2e4 */
                    /* catch() { ... } // from try @ 0048c350 with catch @ 0048c360 */
                    /* catch() { ... } // from try @ 0048c3e0 with catch @ 0048c364 */
  if ((local_e0 != (long *)0x0) &&
     (iVar16 = (int)local_e0[1] + -1, *(int *)(local_e0 + 1) = iVar16, iVar16 == 0)) {
    (**(code **)(*local_e0 + 8))();
  }
  if ((local_c0 != (long *)0x0) &&
     (iVar16 = (int)local_c0[1] + -1, *(int *)(local_c0 + 1) = iVar16, iVar16 == 0)) {
    (**(code **)(*local_c0 + 8))();
  }
  pGVar24 = *(GUIButton **)(this + 0x100);
  psVar9 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0048c3b8 to 0058c3bb has its CatchHandler @ 0048c3d4 */
                    /* try { // try from 0048c3bc to 0058c3c3 has its CatchHandler @ 0048c3e8 */
  FUN_00666bb8(&local_c0,"ui_button_arrow",auStack_b8);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_c0,0));
                    /* catch() { ... } // from try @ 0048c3b8 with catch @ 0048c3d4 */
                    /* try { // try from 0048c3d8 to 0058c3df has its CatchHandler @ 0048c3e4 */
  GUIButton::SetImage(pGVar24,(intrusive_ptr *)&local_a0);
                    /* try { // try from 0048c3e0 to 0058c3fb has its CatchHandler @ 0048c364 */
                    /* catch() { ... } // from try @ 0048c3d8 with catch @ 0048c3e4 */
                    /* catch() { ... } // from try @ 0048c3bc with catch @ 0048c3e8 */
  if ((local_a0 != (GUIView *)0x0) &&
     (iVar16 = *(int *)(local_a0 + 8), *(int *)(local_a0 + 8) = iVar16 + -1, iVar16 + -1 == 0)) {
    (**(code **)(*(long *)local_a0 + 8))();
  }
  if (local_c0 + -3 != (long *)puVar6) {
    plVar13 = local_c0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = (int)*plVar13;
      *(int *)plVar13 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = (int)*plVar13;
                    /* try { // try from 0048c7b0 to 0058c7c3 has its CatchHandler @ 0048ca30 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete(local_c0 + -3);
    }
  }
  pGVar24 = *(GUIButton **)(this + 0x100);
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_c0,"ui_button_arrow_pressed",auStack_b8);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_c0,0));
  GUIButton::SetHighlightedImage(pGVar24,(intrusive_ptr *)&local_a0);
  if ((local_a0 != (GUIView *)0x0) &&
     (iVar16 = *(int *)(local_a0 + 8), *(int *)(local_a0 + 8) = iVar16 + -1, iVar16 + -1 == 0)) {
    (**(code **)(*(long *)local_a0 + 8))();
  }
  if (local_c0 + -3 != (long *)puVar6) {
    plVar13 = local_c0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = (int)*plVar13;
      *(int *)plVar13 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = (int)*plVar13;
                    /* try { // try from 0048c7d4 to 0058c7df has its CatchHandler @ 0048c9f8 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete(local_c0 + -3);
    }
  }
  local_a0 = *(GUIView **)(*(GUIView **)(this + 0x100) + 0x74);
  aplStack_98[0] = DAT_00690900;
  GUIView::SetFrame(*(GUIView **)(this + 0x100),(Rectangle *)&local_a0);
  local_e4 = 0xb2b2b2b2;
  GUIButton::SetTintColor(*(GUIButton **)(this + 0x100),&local_e4);
  pGVar14 = *(GUIView **)(this + 0x100);
  aplStack_98[0] = _UNK_006837d8;
  local_a0 = _DAT_006837d0;
  aplStack_98[2] = (long *)_UNK_006837e8;
  aplStack_98[1] = (long *)_DAT_006837e0;
  aplStack_98[4] = (long *)_UNK_006837f8;
  aplStack_98[3] = (long *)_DAT_006837f0;
  pGVar15 = pGVar14 + 0x198;
                    /* catch() { ... } // from try @ 0048c530 with catch @ 0048c500 */
  pGVar22 = pGVar15;
  if (pGVar15 <= pGVar14 + 0x15c) {
    pGVar22 = pGVar14 + 0x15c;
  }
  uVar1 = ((ulong)(pGVar22 + (-0x159 - (long)pGVar14)) >> 2) + 1;
  uStack_68 = _UNK_00683808;
  aplStack_98[5] = (long *)_DAT_00683800;
                    /* try { // try from 0048c51c to 0058c52f has its CatchHandler @ 0048c554 */
  if (uVar1 < 8) {
    pGVar18 = pGVar14 + 0x158;
    ppGVar19 = &local_a0;
  }
  else {
    uVar20 = uVar1 & 0x7ffffffffffffff8;
                    /* try { // try from 0048c530 to 0058c557 has its CatchHandler @ 0048c500 */
    ppGVar19 = (GUIView **)((long)&local_a0 + uVar20 * 4);
    pGVar22 = pGVar14 + 0x168;
    pGVar18 = pGVar14 + uVar20 * 4 + 0x158;
    pplVar21 = aplStack_98 + 1;
    uVar23 = uVar20;
    do {
      pplVar5 = pplVar21 + -1;
      plVar13 = pplVar21[-2];
      plVar27 = pplVar21[1];
      plVar26 = *pplVar21;
      uVar23 = uVar23 - 8;
                    /* catch() { ... } // from try @ 0048c51c with catch @ 0048c554 */
      pplVar21 = pplVar21 + 4;
      *(long **)(pGVar22 + -8) = *pplVar5;
      *(long **)(pGVar22 + -0x10) = plVar13;
      *(long **)(pGVar22 + 8) = plVar27;
      *(long **)pGVar22 = plVar26;
      pGVar22 = pGVar22 + 0x20;
    } while (uVar23 != 0);
    if (uVar1 == uVar20) goto LAB_0048c57c;
  }
  do {
    pGVar22 = pGVar18 + 4;
    *(undefined4 *)pGVar18 = *(undefined4 *)ppGVar19;
    pGVar18 = pGVar22;
    ppGVar19 = (GUIView **)((long)ppGVar19 + 4);
  } while (pGVar22 < pGVar15);
LAB_0048c57c:
  plVar13 = *(long **)(this + 0xf0);
  pcVar17 = *(code **)(*plVar13 + 0x60);
  aplStack_98[0] = *(long **)(this + 0x108);
  if (aplStack_98[0] != (long *)0x0) {
    aplStack_98[0][1] = aplStack_98[0][1] + 1;
  }
  local_a0 = pGVar14;
  (*pcVar17)(plVar13,&local_a0);
  plVar13 = aplStack_98[0];
  if ((aplStack_98[0] != (long *)0x0) &&
     (lVar12 = aplStack_98[0][1], aplStack_98[0][1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*aplStack_98[0] + 0x10))(aplStack_98[0]);
    lVar12 = plVar13[2];
    plVar13[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  local_a0 = *(GUIView **)(this + 0xf0);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  aplStack_98[0] = *(long **)(this + 0xf8);
  if (aplStack_98[0] != (long *)0x0) {
    aplStack_98[0][1] = aplStack_98[0][1] + 1;
  }
  (*pcVar17)(this,&local_a0);
  plVar13 = aplStack_98[0];
  if ((aplStack_98[0] != (long *)0x0) &&
     (lVar12 = aplStack_98[0][1], aplStack_98[0][1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*aplStack_98[0] + 0x10))(aplStack_98[0]);
    lVar12 = plVar13[2];
    plVar13[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if ((local_d0 != (long *)0x0) &&
     (lVar12 = local_d0[1], local_d0[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_d0 + 0x10))(local_d0);
    lVar12 = local_d0[2];
    local_d0[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*local_d0 + 0x18))(local_d0);
    }
  }
                    /* try { // try from 0048c6c8 to 0058c6f7 has its CatchHandler @ 0048c6c8
                       catch() { ... } // from try @ 0048c6c8 with catch @ 0048c6c8
                       catch() { ... } // from try @ 0048c83c with catch @ 0048c6c8 */
  if ((local_a8 != (long *)0x0) &&
     (lVar12 = local_a8[1], local_a8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_a8 + 0x10))(local_a8);
    lVar12 = local_a8[2];
    local_a8[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 0048c6f8 to 0058c70b has its CatchHandler @ 0048cb04 */
      (**(code **)(*local_a8 + 0x18))(local_a8);
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar11) {
                    /* try { // try from 0048c718 to 0058c723 has its CatchHandler @ 0048ca98 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


