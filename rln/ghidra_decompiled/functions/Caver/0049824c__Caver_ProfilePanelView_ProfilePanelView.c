/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049824c
 * Function: Caver::ProfilePanelView::ProfilePanelView
 * Signature: undefined __thiscall ProfilePanelView(ProfilePanelView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ProfilePanelView::ProfilePanelView() */

void __thiscall Caver::ProfilePanelView::ProfilePanelView(ProfilePanelView *this)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  string *psVar7;
  ulong uVar8;
  GUILabel *pGVar9;
  FontLibrary *pFVar10;
  intrusive_ptr *piVar11;
  long lVar12;
  code *pcVar13;
  int *piVar14;
  int iVar15;
  long *plVar16;
  GUIButton *pGVar17;
  GUIControl *pGVar18;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  GUILabel *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ProfilePanelView *local_b8;
  undefined1 auStack_a8 [8];
  long local_a0;
  long *local_98;
  undefined1 auStack_90 [8];
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  ProfilePanelView *local_70;
  long local_58;
  
                    /* catch() { ... } // from try @ 00498334 with catch @ 00498258
                       catch() { ... } // from try @ 0049840c with catch @ 00498258 */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  GUIFrameView::GUIFrameView((GUIFrameView *)this);
  puVar5 = PTR_vtable_007e79c0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0xc08f400000000000;
  *(undefined **)this = puVar5 + 0x10;
                    /* try { // try from 004982b0 to 005982b3 has its CatchHandler @ 00498350 */
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  this[0x138] = (ProfilePanelView)0x0;
  *(undefined **)(this + 0x118) = puVar5 + 400;
  *(undefined **)(this + 0x110) = puVar5 + 0x170;
  memset(this + 0x150,0,0xb8);
  HeroEquipmentManager::HeroEquipmentManager((HeroEquipmentManager *)(this + 0x208));
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x268) = 0;
                    /* try { // try from 004982e0 to 005982e3 has its CatchHandler @ 004983bc */
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,"ui_character_frame",&local_98);
  cVar2 = (char)&stack0xfffffffffffffff0;
  TextureLibrary::TextureForName(psVar7,(bool)(cVar2 + -0x70));
  GUIFrameView::SetFrameTexture((GUIFrameView *)this,(intrusive_ptr *)&local_d0,false);
                    /* try { // try from 00498330 to 00598333 has its CatchHandler @ 00498348 */
                    /* try { // try from 00498334 to 0059837f has its CatchHandler @ 00498258 */
  if ((local_d0 != (GUILabel *)0x0) &&
     (iVar15 = *(int *)(local_d0 + 8), *(int *)(local_d0 + 8) = iVar15 + -1, iVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_d0 + 8))();
  }
  puVar5 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 00498330 with catch @ 00498348 */
                    /* catch() { ... } // from try @ 004982b0 with catch @ 00498350 */
  if (local_80 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00499734 to 00599747 has its CatchHandler @ 00499974 */
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_88,"ui_button_close",auStack_90);
                    /* try { // try from 00498380 to 00598383 has its CatchHandler @ 004983a0 */
  TextureLibrary::TextureForName(psVar7,SUB81(&local_88,0));
  psVar7 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 00498380 with catch @ 004983a0 */
  FUN_00666bb8(&local_a0,"ui_button_close_pressed",auStack_a8);
  piVar11 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar7,SUB81(&local_a0,0));
                    /* catch() { ... } // from try @ 004982e0 with catch @ 004983bc */
  GameInterfaceBuilder::IconButton
            ((GameInterfaceBuilder *)&local_80,(intrusive_ptr *)&local_98,piVar11);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x180);
  *(GUILabel **)(this + 0x178) = local_d0;
  *(long **)(this + 0x180) = uStack_c8;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
                    /* try { // try from 00498400 to 0059840b has its CatchHandler @ 00498414 */
    (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* try { // try from 0049840c to 0059841f has its CatchHandler @ 00498258 */
    lVar12 = plVar16[2];
                    /* catch() { ... } // from try @ 00498400 with catch @ 00498414 */
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* catch() { ... } // from try @ 00498434 with catch @ 00498420 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 00498430 to 00598433 has its CatchHandler @ 00498444 */
                    /* try { // try from 00498434 to 00598457 has its CatchHandler @ 00498420 */
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00498430 with catch @ 00498444 */
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = uStack_c8[2];
                    /* try { // try from 00498458 to 00598473 has its CatchHandler @ 00498458
                       catch() { ... } // from try @ 00498458 with catch @ 00498458
                       catch() { ... } // from try @ 00498478 with catch @ 00498458 */
    uStack_c8[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*uStack_c8 + 0x18))(uStack_c8);
    }
  }
                    /* try { // try from 00498474 to 00598477 has its CatchHandler @ 0049849c */
                    /* try { // try from 00498478 to 005984af has its CatchHandler @ 00498458 */
  if ((local_98 != (long *)0x0) &&
     (iVar15 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar15, iVar15 == 0)) {
    (**(code **)(*local_98 + 8))();
  }
                    /* catch() { ... } // from try @ 00498474 with catch @ 0049849c */
  if ((undefined *)(local_a0 + -0x18) != puVar5) {
    piVar14 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *piVar14;
      *piVar14 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *piVar14;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 00499758 to 00599763 has its CatchHandler @ 00499908 */
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00499734 with catch @ 00499974 */
  if ((local_80 != (long *)0x0) &&
     (iVar15 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar15, iVar15 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_88 + -3 != (long *)puVar5) {
    plVar16 = local_88 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_88 + -3);
    }
  }
  pGVar17 = *(GUIButton **)(this + 0x178);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,"ui_main_button_pressed",&local_98);
  TextureLibrary::TextureForName(psVar7,(bool)(cVar2 + -0x70));
  GUIButton::SetFrameTextureForState(pGVar17,0,&local_d0);
                    /* catch() { ... } // from try @ 00498558 with catch @ 00498528 */
  if ((local_d0 != (GUILabel *)0x0) &&
     (iVar15 = *(int *)(local_d0 + 8), *(int *)(local_d0 + 8) = iVar15 + -1, iVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_d0 + 8))();
  }
                    /* try { // try from 00498544 to 00598557 has its CatchHandler @ 0049857c */
  if (local_80 + -3 != (long *)puVar5) {
                    /* try { // try from 0049978c to 005997c7 has its CatchHandler @ 004998a4 */
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
                    /* try { // try from 00498558 to 0059857f has its CatchHandler @ 00498528 */
  uStack_c8 = _UNK_006913c8;
  local_d0 = _DAT_006913c0;
  GUIView::SetFrame(*(GUIView **)(this + 0x178),(Rectangle *)&local_d0);
  puVar6 = PTR_ButtonPressed_007e6bd8;
  pGVar18 = *(GUIControl **)(this + 0x178);
  local_d0 = (GUILabel *)0x0;
                    /* catch() { ... } // from try @ 00498544 with catch @ 0049857c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00498690 with catch @ 0049858c
                       catch(type#1 @ 00000000) { ... } // from try @ 00498878 with catch @ 0049858c
                        */
  uStack_78 = 0;
  local_80 = (long *)PTR_ButtonPressed_007e6bd8;
  local_70 = this;
  uVar8 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar8 & 1) == 0) {
    local_b8 = local_70;
    uStack_c0 = uStack_78;
    uStack_c8 = local_80;
    local_d0 = (GUILabel *)PTR_stored_vtable_007e76e0;
  }
  else {
    local_d0 = (GUILabel *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar18,this,&local_d0,0x40);
  if (((local_d0 != (GUILabel *)0x0) && (((ulong)local_d0 & 1) == 0)) &&
     (*(code **)((ulong)local_d0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_d0 & 0xfffffffffffffffe))(&uStack_c8,&uStack_c8,2);
  }
  local_d0 = *(GUILabel **)(this + 0x178);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  uStack_c8 = *(long **)(this + 0x180);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  (*pcVar13)(this,&local_d0);
  plVar16 = uStack_c8;
                    /* try { // try from 00498644 to 00598647 has its CatchHandler @ 00498850 */
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 0049868c to 0059868f has its CatchHandler @ 00498844 */
  FUN_00666bb8(&local_80,&DAT_0068fbeb,&local_98);
                    /* try { // try from 00498690 to 0059886f has its CatchHandler @ 0049858c */
  local_d8 = 0xff000000;
  uStack_d4 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_d0,&local_80,&uStack_d4,&local_d8);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1f0);
  *(GUILabel **)(this + 0x1e8) = local_d0;
  *(long **)(this + 0x1f0) = uStack_c8;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (local_80 + -3 != (long *)puVar5) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x1e8);
  *(undefined4 *)(pGVar9 + 0x134) = 4;
  GUILabel::UpdateBounds(pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x1e8);
  if ((((pGVar9[0x108] != (GUILabel)0xb4) || (pGVar9[0x109] != (GUILabel)0xff)) ||
      (pGVar9[0x10a] != (GUILabel)0xb4)) || (pGVar9[0x10b] != (GUILabel)0xff)) {
    plVar16 = *(long **)(pGVar9 + 0x118);
    *(undefined4 *)(pGVar9 + 0x108) = 0xffb4ffb4;
    *(undefined8 *)(pGVar9 + 0x110) = 0;
    *(undefined8 *)(pGVar9 + 0x118) = 0;
    if ((plVar16 != (long *)0x0) &&
       (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar12 = plVar16[2];
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    GUILabel::UpdateText(pGVar9);
    pGVar9 = *(GUILabel **)(this + 0x1e8);
  }
  uStack_c8 = *(long **)(this + 0x1f0);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  local_d0 = pGVar9;
  (*pcVar13)(this,&local_d0);
  plVar16 = uStack_c8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049868c with catch @ 00498844
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00498644 with catch @ 00498850
                        */
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
                    /* try { // try from 00498870 to 00598877 has its CatchHandler @ 00498880 */
    if (lVar12 + -1 == 0) {
                    /* try { // try from 00498878 to 00598883 has its CatchHandler @ 0049858c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00498870 with catch @ 00498880
                        */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 00498884 to 00598927 has its CatchHandler @ 00498884
                       catch() { ... } // from try @ 00498884 with catch @ 00498884
                       catch() { ... } // from try @ 00498998 with catch @ 00498884
                       catch() { ... } // from try @ 00498b6c with catch @ 00498884 */
  FUN_00666bb8(&local_80,&DAT_0068fbeb,&local_98);
  local_e0 = 0xff000000;
  uStack_dc = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_d0,&local_80,&uStack_dc,&local_e0);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1b0);
  *(GUILabel **)(this + 0x1a8) = local_d0;
  *(long **)(this + 0x1b0) = uStack_c8;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = uStack_c8;
                    /* try { // try from 00498928 to 0059893b has its CatchHandler @ 00498b08 */
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* try { // try from 0049893c to 00598953 has its CatchHandler @ 00498a9c */
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 0049896c to 0059897f has its CatchHandler @ 00498a98 */
  if (local_80 + -3 != (long *)puVar5) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x1a8);
  pGVar9[0x138] = (GUILabel)0x1;
  GUILabel::UpdateText(pGVar9);
                    /* try { // try from 00498980 to 00598997 has its CatchHandler @ 00498a60 */
  pGVar9 = *(GUILabel **)(this + 0x1a8);
  if (*(int *)(pGVar9 + 0x13c) != 1) {
    *(undefined4 *)(pGVar9 + 0x13c) = 1;
                    /* try { // try from 00498998 to 00598b33 has its CatchHandler @ 00498884 */
    GUILabel::UpdateText(pGVar9);
    pGVar9 = *(GUILabel **)(this + 0x1a8);
  }
  uStack_c8 = *(long **)(this + 0x1b0);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  local_d0 = pGVar9;
  (*pcVar13)(this,&local_d0);
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  FUN_00666bb8(&local_80,&DAT_0068fbeb,&local_98);
  local_e8 = 0xff000000;
  uStack_e4 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_d0,&local_80,&uStack_e4,&local_e8);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1c0);
                    /* catch() { ... } // from try @ 00498980 with catch @ 00498a60 */
  *(GUILabel **)(this + 0x1b8) = local_d0;
  *(long **)(this + 0x1c0) = uStack_c8;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* catch() { ... } // from try @ 0049896c with catch @ 00498a98 */
                    /* catch() { ... } // from try @ 0049893c with catch @ 00498a9c */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (local_80 + -3 != (long *)puVar5) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  local_d0 = *(GUILabel **)(this + 0x1b8);
                    /* catch() { ... } // from try @ 00498928 with catch @ 00498b08 */
  pcVar13 = *(code **)(*(long *)this + 0x60);
  uStack_c8 = *(long **)(this + 0x1c0);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  (*pcVar13)(this,&local_d0);
  plVar16 = uStack_c8;
                    /* try { // try from 00498b34 to 00598b6b has its CatchHandler @ 00498b74 */
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 00498b6c to 00598b77 has its CatchHandler @ 00498884 */
                    /* catch() { ... } // from try @ 00498b34 with catch @ 00498b74 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  FUN_00666bb8(&local_80,&DAT_0068fbeb,&local_98);
  local_f0 = 0xff000000;
  uStack_ec = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_d0,&local_80,&uStack_ec,&local_f0);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1d0);
  *(GUILabel **)(this + 0x1c8) = local_d0;
  *(long **)(this + 0x1d0) = uStack_c8;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (local_80 + -3 != (long *)puVar5) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x1c8);
  pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(pFVar10);
  if (local_d0 != *(GUILabel **)(pGVar9 + 0xf0)) {
    if (uStack_c8 != (long *)0x0) {
      uStack_c8[1] = uStack_c8[1] + 1;
    }
    plVar16 = *(long **)(pGVar9 + 0xf8);
    *(GUILabel **)(pGVar9 + 0xf0) = local_d0;
    *(long **)(pGVar9 + 0xf8) = uStack_c8;
    if ((plVar16 != (long *)0x0) &&
       (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar12 = plVar16[2];
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  local_d0 = *(GUILabel **)(this + 0x1c8);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  uStack_c8 = *(long **)(this + 0x1d0);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  (*pcVar13)(this,&local_d0);
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  FUN_00666bb8(&local_80,&DAT_0068fbeb,&local_98);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00498e6c with catch @ 00498dd0
                       catch(type#1 @ 00000000) { ... } // from try @ 00498ec4 with catch @ 00498dd0
                        */
  local_f8 = 0xff000000;
  uStack_f4 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_d0,&local_80,&uStack_f4,&local_f8);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1e0);
  *(GUILabel **)(this + 0x1d8) = local_d0;
  *(long **)(this + 0x1e0) = uStack_c8;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
                    /* try { // try from 00498e34 to 00598e37 has its CatchHandler @ 00498e84 */
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* try { // try from 00498e68 to 00598e6b has its CatchHandler @ 00498e7c */
                    /* try { // try from 00498e6c to 00598eb7 has its CatchHandler @ 00498dd0 */
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00498e68 with catch @ 00498e7c
                        */
    if (lVar12 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00498e34 with catch @ 00498e84
                        */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (local_80 + -3 != (long *)puVar5) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x1d8);
  pGVar9[0x138] = (GUILabel)0x1;
  GUILabel::UpdateText(pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x1d8);
                    /* try { // try from 00498eb8 to 00598ec3 has its CatchHandler @ 00498ecc */
  if (*(int *)(pGVar9 + 0x13c) != 1) {
                    /* try { // try from 00498ec4 to 00598ecf has its CatchHandler @ 00498dd0 */
    *(undefined4 *)(pGVar9 + 0x13c) = 1;
    GUILabel::UpdateText(pGVar9);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00498eb8 with catch @ 00498ecc
                        */
    pGVar9 = *(GUILabel **)(this + 0x1d8);
  }
                    /* catch() { ... } // from try @ 00498ee4 with catch @ 00498ed0 */
  uStack_c8 = *(long **)(this + 0x1e0);
  pcVar13 = *(code **)(*(long *)this + 0x60);
                    /* try { // try from 00498ee0 to 00598ee3 has its CatchHandler @ 00498ef4 */
  if (uStack_c8 != (long *)0x0) {
                    /* try { // try from 00498ee4 to 00598f07 has its CatchHandler @ 00498ed0 */
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  local_d0 = pGVar9;
                    /* catch() { ... } // from try @ 00498ee0 with catch @ 00498ef4 */
  (*pcVar13)(this,&local_d0);
  plVar16 = uStack_c8;
                    /* try { // try from 00498f08 to 00598f23 has its CatchHandler @ 00498f08
                       catch() { ... } // from try @ 00498f08 with catch @ 00498f08
                       catch() { ... } // from try @ 00498f28 with catch @ 00498f08 */
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
                    /* try { // try from 00498f24 to 00598f27 has its CatchHandler @ 00498f54 */
    lVar12 = plVar16[2];
                    /* try { // try from 00498f28 to 00598f67 has its CatchHandler @ 00498f08 */
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* catch() { ... } // from try @ 00498f24 with catch @ 00498f54 */
  FUN_00666bb8(&local_80,0x690f97,&local_98);
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_80,false);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  plVar16 = *(long **)(this + 400);
  *(GUILabel **)(this + 0x188) = local_d0;
  *(long **)(this + 400) = uStack_c8;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00499010 with catch @ 00498fe0 */
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
                    /* try { // try from 00498ffc to 0059900f has its CatchHandler @ 00499034 */
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* try { // try from 00499010 to 00599037 has its CatchHandler @ 00498fe0 */
  if (local_80 + -3 != (long *)puVar5) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar17 = *(GUIButton **)(this + 0x188);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 00498ffc with catch @ 00499034 */
  FUN_00666bb8(&local_80,"ui_main_button",&local_98);
  TextureLibrary::TextureForName(psVar7,(bool)(cVar2 + -0x70));
  GUIButton::SetFrameTextureForState(pGVar17,0,&local_d0);
  if ((local_d0 != (GUILabel *)0x0) &&
     (iVar15 = *(int *)(local_d0 + 8), *(int *)(local_d0 + 8) = iVar15 + -1, iVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_d0 + 8))();
  }
  if (local_80 + -3 != (long *)puVar5) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar17 = *(GUIButton **)(this + 0x188);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,"ui_main_button_pressed",&local_98);
  TextureLibrary::TextureForName(psVar7,(bool)(cVar2 + -0x70));
  GUIButton::SetFrameTextureForState(pGVar17,1,&local_d0);
  if ((local_d0 != (GUILabel *)0x0) &&
     (iVar15 = *(int *)(local_d0 + 8), *(int *)(local_d0 + 8) = iVar15 + -1, iVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_d0 + 8))();
  }
  if (local_80 + -3 != (long *)puVar5) {
                    /* catch() { ... } // from try @ 0049978c with catch @ 004998a4 */
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar18 = *(GUIControl **)(this + 0x188);
                    /* catch() { ... } // from try @ 004992a0 with catch @ 00499114
                       catch() { ... } // from try @ 0049951c with catch @ 00499114 */
  local_d0 = (GUILabel *)0x0;
  uStack_78 = 0;
  local_80 = (long *)puVar6;
  local_70 = this;
  uVar8 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar8 & 1) == 0) {
    local_b8 = local_70;
    uStack_c0 = uStack_78;
    uStack_c8 = local_80;
    local_d0 = (GUILabel *)PTR_stored_vtable_007e76e0;
  }
  else {
    local_d0 = (GUILabel *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar18,this,&local_d0,0x40);
  if (local_d0 != (GUILabel *)0x0) {
    if ((((ulong)local_d0 & 1) == 0) &&
       (*(code **)((ulong)local_d0 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_d0 & 0xfffffffffffffffe))(&uStack_c8,&uStack_c8,2);
    }
    local_d0 = (GUILabel *)0x0;
  }
  pGVar9 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x188));
  if ((((pGVar9[0x108] != (GUILabel)0xdc) || (pGVar9[0x109] != (GUILabel)0xff)) ||
      (pGVar9[0x10a] != (GUILabel)0xfa)) || (pGVar9[0x10b] != (GUILabel)0xff)) {
    plVar16 = *(long **)(pGVar9 + 0x118);
    *(undefined4 *)(pGVar9 + 0x108) = 0xfffaffdc;
    *(undefined8 *)(pGVar9 + 0x110) = 0;
    *(undefined8 *)(pGVar9 + 0x118) = 0;
                    /* try { // try from 004991fc to 0059920f has its CatchHandler @ 0049948c */
    if ((plVar16 != (long *)0x0) &&
       (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* try { // try from 00499210 to 00599227 has its CatchHandler @ 00499428 */
      lVar12 = plVar16[2];
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
                    /* try { // try from 00499238 to 0059924b has its CatchHandler @ 00499424 */
  local_d0 = *(GUILabel **)(this + 0x188);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  uStack_c8 = *(long **)(this + 400);
                    /* try { // try from 0049924c to 00599263 has its CatchHandler @ 004993ec */
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  (*pcVar13)(this,&local_d0);
  plVar16 = uStack_c8;
                    /* try { // try from 00499274 to 00599287 has its CatchHandler @ 004993e8 */
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* try { // try from 00499288 to 0059929f has its CatchHandler @ 004993b0 */
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
                    /* try { // try from 004992a0 to 005994b7 has its CatchHandler @ 00499114 */
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_d0,"ui_main_button_small",&local_98);
  piVar11 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar7,SUB81(&local_d0,0));
  if (local_d0 + -0x18 != (GUILabel *)puVar5) {
    pGVar9 = local_d0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *(int *)pGVar9;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar3) {
          *(int *)pGVar9 = iVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_d0 + -0x18);
    }
  }
  local_80 = (long *)0x0;
  local_98 = (long *)0x0;
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_80,(intrusive_ptr *)&local_98,piVar11);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  plVar16 = *(long **)(this + 0x1a0);
  *(GUILabel **)(this + 0x198) = local_d0;
  *(long **)(this + 0x1a0) = uStack_c8;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* catch() { ... } // from try @ 00499288 with catch @ 004993b0 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if ((local_98 != (long *)0x0) &&
     (iVar15 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar15, iVar15 == 0)) {
    (**(code **)(*local_98 + 8))();
  }
                    /* catch() { ... } // from try @ 00499274 with catch @ 004993e8 */
                    /* catch() { ... } // from try @ 0049924c with catch @ 004993ec */
  if ((local_80 != (long *)0x0) &&
     (iVar15 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar15, iVar15 == 0)) {
    (**(code **)(*local_80 + 8))();
  }
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x198),0,&local_88);
  pGVar17 = *(GUIButton **)(this + 0x198);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 00499238 with catch @ 00499424 */
                    /* catch() { ... } // from try @ 00499210 with catch @ 00499428 */
  FUN_00666bb8(&local_80,"ui_main_button_small_pressed",&local_a0);
  TextureLibrary::TextureForName(psVar7,(bool)(cVar2 + -0x70));
  GUIButton::SetFrameTextureForState(pGVar17,1,&local_d0);
  if ((local_d0 != (GUILabel *)0x0) &&
     (iVar15 = *(int *)(local_d0 + 8), *(int *)(local_d0 + 8) = iVar15 + -1, iVar15 + -1 == 0)) {
    (**(code **)(*(long *)local_d0 + 8))();
  }
  if (local_80 + -3 != (long *)puVar5) {
    plVar16 = local_80 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = (int)*plVar16;
      *(int *)plVar16 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = (int)*plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *(int *)plVar16 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 00499758 with catch @ 00499908 */
      } while (cVar2 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_80 + -3);
    }
  }
  pGVar17 = *(GUIButton **)(this + 0x198);
                    /* catch() { ... } // from try @ 004991fc with catch @ 0049948c */
  FUN_00666bb8(&local_d0,"Set name",&local_98);
  GUIButton::SetTitle(pGVar17,(string *)&local_d0);
  if (local_d0 + -0x18 != (GUILabel *)puVar5) {
    pGVar9 = local_d0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar15 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar15 + -1;
    }
    else {
      do {
        iVar15 = *(int *)pGVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar3) {
          *(int *)pGVar9 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar15 < 1) {
      operator_delete(local_d0 + -0x18);
    }
  }
                    /* try { // try from 004994b8 to 0059951b has its CatchHandler @ 00499524 */
  local_d0 = *(GUILabel **)(*(GUIView **)(this + 0x198) + 0x74);
  uStack_c8 = (long *)CONCAT44(*(float *)(local_88 + 0xb) + 2.0,0x42780000);
  GUIView::SetFrame(*(GUIView **)(this + 0x198),(Rectangle *)&local_d0);
  pGVar9 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x198));
  pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(pFVar10);
  if (local_d0 != *(GUILabel **)(pGVar9 + 0xf0)) {
    if (uStack_c8 != (long *)0x0) {
                    /* try { // try from 0049951c to 00599527 has its CatchHandler @ 00499114 */
      uStack_c8[1] = uStack_c8[1] + 1;
    }
                    /* catch() { ... } // from try @ 004994b8 with catch @ 00499524 */
    plVar16 = *(long **)(pGVar9 + 0xf8);
    *(GUILabel **)(pGVar9 + 0xf0) = local_d0;
    *(long **)(pGVar9 + 0xf8) = uStack_c8;
    if ((plVar16 != (long *)0x0) &&
       (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar12 = plVar16[2];
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar18 = *(GUIControl **)(this + 0x198);
  local_d0 = (GUILabel *)0x0;
  uStack_78 = 0;
  local_80 = (long *)puVar6;
  local_70 = this;
  uVar8 = boost::detail::function::has_empty_target(&local_80);
  if ((uVar8 & 1) == 0) {
    local_b8 = local_70;
    uStack_c0 = uStack_78;
    uStack_c8 = local_80;
    local_d0 = (GUILabel *)PTR_stored_vtable_007e76e0;
  }
  else {
    local_d0 = (GUILabel *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar18,this,&local_d0,0x40);
  if (((local_d0 != (GUILabel *)0x0) && (((ulong)local_d0 & 1) == 0)) &&
     (*(code **)((ulong)local_d0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_d0 & 0xfffffffffffffffe))(&uStack_c8,&uStack_c8,2);
  }
  local_d0 = *(GUILabel **)(this + 0x198);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  uStack_c8 = *(long **)(this + 0x1a0);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  (*pcVar13)(this,&local_d0);
  plVar16 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar12 = uStack_c8[1], uStack_c8[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if ((local_88 != (long *)0x0) &&
     (iVar15 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar15, iVar15 == 0)) {
    (**(code **)(*local_88 + 8))();
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00499708 to 00599733 has its CatchHandler @ 00499708
                       catch() { ... } // from try @ 00499708 with catch @ 00499708
                       catch() { ... } // from try @ 004997c8 with catch @ 00499708 */
  return;
}


