/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d04f4
 * Function: Caver::GameOverlayView::GameOverlayView
 * Signature: undefined __thiscall GameOverlayView(GameOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::GameOverlayView() */

void __thiscall Caver::GameOverlayView::GameOverlayView(GameOverlayView *this)

{
  map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
  *this_00;
  GameOverlayView *pGVar1;
  GameOverlayView *pGVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  string *psVar9;
  OverlayMenuButton *this_01;
  GUILabel *pGVar10;
  FontLibrary *this_02;
  OverlayButton *this_03;
  ulong uVar11;
  ConsumableItemView *this_04;
  GUIView *pGVar12;
  HealthBar *this_05;
  ManaBar *this_06;
  TargetFrame *this_07;
  ExperienceBar *this_08;
  CoinBar *this_09;
  ItemOverlay *this_10;
  undefined8 *puVar13;
  intrusive_ptr *extraout_x1;
  intrusive_ptr *extraout_x1_00;
  intrusive_ptr *extraout_x1_01;
  intrusive_ptr *extraout_x1_02;
  intrusive_ptr *extraout_x1_03;
  intrusive_ptr *extraout_x1_04;
  intrusive_ptr *extraout_x1_05;
  intrusive_ptr *extraout_x1_06;
  intrusive_ptr *extraout_x1_07;
  intrusive_ptr *extraout_x1_08;
  intrusive_ptr *extraout_x1_09;
  intrusive_ptr *piVar14;
  intrusive_ptr *extraout_x1_10;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  int *piVar18;
  int iVar19;
  code *pcVar20;
  long *plVar21;
  GUIControl *pGVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined1 auStack_148 [8];
  undefined8 local_140;
  long *plStack_138;
  undefined8 uStack_130;
  GameOverlayView *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  undefined8 uStack_108;
  GameOverlayView *local_100;
  long local_e8;
  long *local_e0;
  undefined8 local_d8;
  long local_d0 [4];
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_70 [2];
  
  lVar5 = tpidr_el0;
  local_70[1] = *(long *)(lVar5 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar7 = PTR_vtable_007e5e88;
  this_00 = (map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
             *)(this + 0x108);
  *(GameOverlayView **)(this + 0x128) = this + 0x110;
  *(undefined8 *)(this + 0x130) = 0;
  *(GameOverlayView **)(this + 0x120) = this + 0x110;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0x13c] = (GameOverlayView)0x0;
  *(undefined4 *)(this + 0x138) = 0x3f800000;
  *(undefined **)this = puVar7 + 0x10;
  memset(this + 0x140,0,0x62);
  memset(this + 0x1a8,0,0xf0);
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_110,"ui_controls_left",&local_120);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_110,0));
  GameInterfaceBuilder::ControlButtonWithImage((GameInterfaceBuilder *)&local_140,extraout_x1);
  if (local_e0 != (long *)0x0) {
    local_e0[1] = local_e0[1] + 1;
  }
  plVar21 = *(long **)(this + 0x148);
  *(long *)(this + 0x140) = local_e8;
  *(long **)(this + 0x148) = local_e0;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = local_e0;
  if ((local_e0 != (long *)0x0) &&
     (lVar15 = local_e0[1], local_e0[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if ((local_140 != (long *)0x0) &&
     (iVar19 = (int)local_140[1] + -1, *(int *)(local_140 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_140 + 8))();
  }
  puVar7 = PTR_DAT_007e5de8;
  if (local_110 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 004d2504 with catch @ 004d24d4 */
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  *(undefined1 *)(*(long *)(this + 0x140) + 0xe7) = 1;
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_110,"ui_controls_right",&local_120);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_110,0));
  GameInterfaceBuilder::ControlButtonWithImage((GameInterfaceBuilder *)&local_140,extraout_x1_00);
  if (local_e0 != (long *)0x0) {
    local_e0[1] = local_e0[1] + 1;
  }
  plVar21 = *(long **)(this + 0x158);
  *(long *)(this + 0x150) = local_e8;
  *(long **)(this + 0x158) = local_e0;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = local_e0;
  if ((local_e0 != (long *)0x0) &&
     (lVar15 = local_e0[1], local_e0[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if ((local_140 != (long *)0x0) &&
     (iVar19 = (int)local_140[1] + -1, *(int *)(local_140 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_140 + 8))();
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 004d24f0 to 005d2503 has its CatchHandler @ 004d2528 */
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  *(undefined1 *)(*(long *)(this + 0x150) + 0xe7) = 1;
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_110,"ui_controls_jump",&local_120);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_110,0));
  GameInterfaceBuilder::ControlButtonWithImage((GameInterfaceBuilder *)&local_140,extraout_x1_01);
  if (local_e0 != (long *)0x0) {
    local_e0[1] = local_e0[1] + 1;
  }
  plVar21 = *(long **)(this + 0x168);
  *(long *)(this + 0x160) = local_e8;
  *(long **)(this + 0x168) = local_e0;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = local_e0;
  if ((local_e0 != (long *)0x0) &&
     (lVar15 = local_e0[1], local_e0[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if ((local_140 != (long *)0x0) &&
     (iVar19 = (int)local_140[1] + -1, *(int *)(local_140 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_140 + 8))();
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004d2504 to 005d252b has its CatchHandler @ 004d24d4 */
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_110,"ui_controls_swing",&local_120);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_110,0));
  GameInterfaceBuilder::ControlButtonWithImage((GameInterfaceBuilder *)&local_140,extraout_x1_02);
  if (local_e0 != (long *)0x0) {
    local_e0[1] = local_e0[1] + 1;
  }
  plVar21 = *(long **)(this + 0x178);
  *(long *)(this + 0x170) = local_e8;
  *(long **)(this + 0x178) = local_e0;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = local_e0;
  if ((local_e0 != (long *)0x0) &&
     (lVar15 = local_e0[1], local_e0[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if ((local_140 != (long *)0x0) &&
     (iVar19 = (int)local_140[1] + -1, *(int *)(local_140 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_140 + 8))();
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
                    /* catch() { ... } // from try @ 004d24f0 with catch @ 004d2528 */
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_110,"ui_controls_handle",&local_120);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_110,0));
  GameInterfaceBuilder::ControlButtonWithImage((GameInterfaceBuilder *)&local_140,extraout_x1_03);
  if (local_e0 != (long *)0x0) {
    local_e0[1] = local_e0[1] + 1;
  }
  plVar21 = *(long **)(this + 0x188);
  *(long *)(this + 0x180) = local_e8;
  *(long **)(this + 0x188) = local_e0;
  piVar14 = extraout_x1_04;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    piVar14 = extraout_x1_05;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
      piVar14 = extraout_x1_06;
    }
  }
  plVar21 = local_e0;
  if ((local_e0 != (long *)0x0) &&
     (lVar15 = local_e0[1], local_e0[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    piVar14 = extraout_x1_07;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
      piVar14 = extraout_x1_08;
    }
  }
  if ((local_140 != (long *)0x0) &&
     (iVar19 = (int)local_140[1] + -1, *(int *)(local_140 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_140 + 8))();
    piVar14 = extraout_x1_09;
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
      piVar14 = extraout_x1_10;
    }
  }
  *(undefined1 *)(*(long *)(this + 0x180) + 0xe4) = 1;
  local_140 = (long *)0x0;
  GameInterfaceBuilder::ControlButtonWithImage((GameInterfaceBuilder *)&local_140,piVar14);
  if (local_e0 != (long *)0x0) {
    local_e0[1] = local_e0[1] + 1;
  }
  plVar21 = *(long **)(this + 0x198);
  *(long *)(this + 400) = local_e8;
  *(long **)(this + 0x198) = local_e0;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 004d0ba0 with catch @ 004d0b70 */
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
                    /* try { // try from 004d0b8c to 005d0b9f has its CatchHandler @ 004d0bc4 */
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
                    /* try { // try from 004d0ba0 to 005d0bc7 has its CatchHandler @ 004d0b70 */
  plVar21 = local_e0;
  if ((local_e0 != (long *)0x0) &&
     (lVar15 = local_e0[1], local_e0[1] = lVar15 + -1, lVar15 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004d0b8c with catch @ 004d0bc4 */
    (**(code **)(*local_e0 + 0x10))(local_e0);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
                    /* catch() { ... } // from try @ 004d0c38 with catch @ 004d0bf4 */
  if ((local_140 != (long *)0x0) &&
     (iVar19 = (int)local_140[1] + -1, *(int *)(local_140 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_140 + 8))();
  }
  *(undefined1 *)(*(long *)(this + 400) + 0xe4) = 1;
                    /* try { // try from 004d0c1c to 005d0c1f has its CatchHandler @ 004d0c2c */
  this_01 = operator_new(0x220);
  OverlayMenuButton::OverlayMenuButton(this_01);
                    /* catch() { ... } // from try @ 004d0c1c with catch @ 004d0c2c */
                    /* try { // try from 004d0c30 to 005d0c37 has its CatchHandler @ 004d0c40 */
  boost::shared_ptr<Caver::OverlayMenuButton>::shared_ptr<Caver::OverlayMenuButton>
            ((shared_ptr<Caver::OverlayMenuButton> *)&local_e8,this_01);
                    /* try { // try from 004d0c38 to 005d0c43 has its CatchHandler @ 004d0bf4 */
  lVar15 = *(long *)(this + 0x1c8);
  plVar21 = *(long **)(this + 0x1d0);
                    /* catch() { ... } // from try @ 004d0c30 with catch @ 004d0c40 */
                    /* try { // try from 004d0c44 to 005d0c8b has its CatchHandler @ 004d0c44
                       catch(type#1 @ 00000000) { ... } // from try @ 004d0c44 with catch @ 004d0c44
                       catch(type#1 @ 00000000) { ... } // from try @ 004d0ca8 with catch @ 004d0c44
                       catch(type#1 @ 00000000) { ... } // from try @ 004d0d64 with catch @ 004d0c44
                        */
  *(long *)(this + 0x1c8) = local_e8;
  *(long **)(this + 0x1d0) = local_e0;
  local_e8 = lVar15;
  local_e0 = plVar21;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
                    /* try { // try from 004d0c8c to 005d0ca7 has its CatchHandler @ 004d0d58 */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar10 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x1c8));
  this_02 = (FontLibrary *)FontLibrary::sharedLibrary();
                    /* try { // try from 004d0ca8 to 005d0d5b has its CatchHandler @ 004d0c44 */
  FontLibrary::DefaultFont(this_02);
  if (local_e8 != *(long *)(pGVar10 + 0xf0)) {
    if (local_e0 != (long *)0x0) {
      local_e0[1] = local_e0[1] + 1;
    }
    plVar21 = *(long **)(pGVar10 + 0xf8);
    *(long *)(pGVar10 + 0xf0) = local_e8;
    *(long **)(pGVar10 + 0xf8) = local_e0;
    if ((plVar21 != (long *)0x0) &&
       (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar15 = plVar21[2];
      plVar21[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    GUILabel::UpdateText(pGVar10);
  }
  plVar21 = local_e0;
  if ((local_e0 != (long *)0x0) &&
     (lVar15 = local_e0[1], local_e0[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d0c8c with catch @ 004d0d58
                        */
    if (lVar15 + -1 == 0) {
                    /* try { // try from 004d0d5c to 005d0d63 has its CatchHandler @ 004d0d6c */
                    /* try { // try from 004d0d64 to 005d0d6f has its CatchHandler @ 004d0c44 */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d0d5c with catch @ 004d0d6c
                        */
  pGVar10 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x1c8));
                    /* catch() { ... } // from try @ 004d0dac with catch @ 004d0d88 */
  if ((((pGVar10[0x108] != (GUILabel)0xff) || (pGVar10[0x109] != (GUILabel)0xff)) ||
      (pGVar10[0x10a] != (GUILabel)0xff)) || (pGVar10[0x10b] != (GUILabel)0xff)) {
                    /* try { // try from 004d0da8 to 005d0dab has its CatchHandler @ 004d0dbc */
    plVar21 = *(long **)(pGVar10 + 0x118);
                    /* try { // try from 004d0dac to 005d0dcf has its CatchHandler @ 004d0d88 */
    *(undefined4 *)(pGVar10 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar10 + 0x110) = 0;
    *(undefined8 *)(pGVar10 + 0x118) = 0;
                    /* catch() { ... } // from try @ 004d0da8 with catch @ 004d0dbc */
    if ((plVar21 != (long *)0x0) &&
       (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar15 = plVar21[2];
      plVar21[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    GUILabel::UpdateText(pGVar10);
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_e8,"ui_skill_toggle_button",&local_110);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_e8,0));
  if ((undefined *)(local_e8 + -0x18) != puVar7) {
    piVar18 = (int *)(local_e8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = *piVar18;
      *piVar18 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete((undefined *)(local_e8 + -0x18));
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_e8,"ui_skill_toggle_button_pressed",&local_110);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_e8,0));
  if ((undefined *)(local_e8 + -0x18) != puVar7) {
    piVar18 = (int *)(local_e8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = *piVar18;
      *piVar18 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete((undefined *)(local_e8 + -0x18));
                    /* catch() { ... } // from try @ 004d2668 with catch @ 004d25a0 */
    }
  }
  this_03 = operator_new(0x1f0);
  OverlayButton::OverlayButton(this_03);
  boost::shared_ptr<Caver::OverlayButton>::shared_ptr<Caver::OverlayButton>
            ((shared_ptr<Caver::OverlayButton> *)&local_e8,this_03);
  lVar15 = *(long *)(this + 0x1b8);
  plVar21 = *(long **)(this + 0x1c0);
  *(long *)(this + 0x1b8) = local_e8;
  *(long **)(this + 0x1c0) = local_e0;
  local_e8 = lVar15;
  local_e0 = plVar21;
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x1b8),0,&local_118);
  GUIButton::SetFrameTextureForState(*(GUIButton **)(this + 0x1b8),1,&local_120);
  local_e0 = *(long **)((long)local_118 + 0x54);
  local_e8 = 0;
  GUIView::SetFrame(*(GUIView **)(this + 0x1b8),(Rectangle *)&local_e8);
  uVar17 = DAT_006923f8;
  lVar15 = *(long *)(this + 0x1b8);
  uVar25 = NEON_fmov(0xc1a00000,4);
  *(undefined8 *)(lVar15 + 0x94) = uVar25;
  *(ulong *)(lVar15 + 0x9c) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar15 + 0x7c) >> 0x20) +
                (float)((ulong)uVar17 >> 0x20),(float)*(undefined8 *)(lVar15 + 0x7c) + (float)uVar17
               );
  *(undefined1 *)(*(long *)(this + 0x1b8) + 0xe4) = 1;
  local_e8 = *(long *)(this + 0x140);
  plStack_138 = *(long **)(this + 0x148);
  local_e0 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    plStack_138[1] = plStack_138[1] + 1;
  }
  local_d8 = *(undefined8 *)(this + 0x150);
  local_d0[0] = *(long *)(this + 0x158);
  if (local_d0[0] != 0) {
    *(long *)(local_d0[0] + 8) = *(long *)(local_d0[0] + 8) + 1;
  }
  local_d0[1] = *(undefined8 *)(this + 0x160);
  local_d0[2] = *(long *)(this + 0x168);
  if (local_d0[2] != 0) {
    *(long *)(local_d0[2] + 8) = *(long *)(local_d0[2] + 8) + 1;
  }
  local_d0[3] = *(undefined8 *)(this + 0x170);
  local_b0 = *(long *)(this + 0x178);
  if (local_b0 != 0) {
    *(long *)(local_b0 + 8) = *(long *)(local_b0 + 8) + 1;
  }
  local_a8 = *(undefined8 *)(this + 0x180);
  local_a0 = *(long *)(this + 0x188);
  if (local_a0 != 0) {
    *(long *)(local_a0 + 8) = *(long *)(local_a0 + 8) + 1;
  }
  local_98 = *(undefined8 *)(this + 400);
  local_90 = *(long *)(this + 0x198);
  if (local_90 != 0) {
    *(long *)(local_90 + 8) = *(long *)(local_90 + 8) + 1;
  }
  local_88 = *(undefined8 *)(this + 0x1b8);
  local_80 = *(long *)(this + 0x1c0);
  if (local_80 != 0) {
    *(long *)(local_80 + 8) = *(long *)(local_80 + 8) + 1;
  }
  local_78 = *(undefined8 *)(this + 0x1c8);
  local_70[0] = *(long *)(this + 0x1d0);
  if (local_70[0] != 0) {
    *(long *)(local_70[0] + 8) = *(long *)(local_70[0] + 8) + 1;
  }
  puVar8 = PTR_ButtonHighlightChanged_007e6030;
  puVar6 = PTR_stored_vtable_007e52c0;
  uVar24 = 0;
  pGVar1 = this + 0x248;
  pGVar2 = this + 0x288;
  plVar21 = &local_e8;
  while( true ) {
    local_140 = (long *)*plVar21;
    pcVar20 = *(code **)(*(long *)this + 0x60);
    if (plStack_138 != (long *)0x0) {
      plStack_138[1] = plStack_138[1] + 1;
    }
    (*pcVar20)(this,&local_140);
    plVar23 = plStack_138;
    if ((plStack_138 != (long *)0x0) &&
       (lVar15 = plStack_138[1], plStack_138[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      lVar15 = plVar23[2];
      plVar23[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
    pGVar22 = (GUIControl *)*plVar21;
    local_140 = (long *)0x0;
    uStack_108 = 0;
    local_110 = (long *)puVar8;
    local_100 = this;
    uVar11 = boost::detail::function::has_empty_target(&local_110);
    if ((uVar11 & 1) == 0) {
      local_128 = local_100;
      uStack_130 = uStack_108;
      plStack_138 = local_110;
      local_140 = (long *)puVar6;
    }
    else {
      local_140 = (long *)(undefined *)0x0;
    }
    GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_140,0x200000);
    if (local_140 != (long *)0x0) {
      if ((((ulong)local_140 & 1) == 0) &&
         (*(code **)((ulong)local_140 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_140 & 0xfffffffffffffffe))(&plStack_138,&plStack_138,2);
      }
      local_140 = (long *)0x0;
    }
    if (6 < uVar24) break;
    plStack_138 = (long *)plVar21[3];
    uVar24 = uVar24 + 1;
    plVar21 = plVar21 + 2;
  }
  this_04 = operator_new(0x1f0);
  ConsumableItemView::ConsumableItemView(this_04);
  boost::shared_ptr<Caver::ConsumableItemView>::shared_ptr<Caver::ConsumableItemView>
            ((shared_ptr<Caver::ConsumableItemView> *)&local_140,this_04);
  uVar17 = *(undefined8 *)(this + 0x1d8);
  plVar21 = *(long **)(this + 0x1e0);
  *(long **)(this + 0x1d8) = local_140;
  *(long **)(this + 0x1e0) = plStack_138;
  plStack_138 = plVar21;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    local_140 = (long *)uVar17;
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 004d123c with catch @ 004d120c */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar22 = *(GUIControl **)(this + 0x1d8);
                    /* try { // try from 004d1228 to 005d123b has its CatchHandler @ 004d1260 */
  local_140 = (long *)0x0;
  uStack_108 = 0;
  local_110 = (long *)puVar8;
  local_100 = this;
  uVar24 = boost::detail::function::has_empty_target(&local_110);
                    /* try { // try from 004d123c to 005d1263 has its CatchHandler @ 004d120c */
  if ((uVar24 & 1) == 0) {
    local_128 = local_100;
    uStack_130 = uStack_108;
    plStack_138 = local_110;
    local_140 = (long *)PTR_stored_vtable_007e52c0;
  }
  else {
    local_140 = (long *)(undefined *)0x0;
  }
                    /* catch() { ... } // from try @ 004d1228 with catch @ 004d1260 */
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_140,0x200000);
  if (((local_140 != (long *)0x0) && (((ulong)local_140 & 1) == 0)) &&
     (*(code **)((ulong)local_140 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_140 & 0xfffffffffffffffe))(&plStack_138,&plStack_138,2);
  }
                    /* catch() { ... } // from try @ 004d1300 with catch @ 004d12ac */
  local_140 = *(long **)(this + 0x1d8);
  pcVar20 = *(code **)(*(long *)this + 0x60);
  plStack_138 = *(long **)(this + 0x1e0);
  if (plStack_138 != (long *)0x0) {
    plStack_138[1] = plStack_138[1] + 1;
  }
  (*pcVar20)(this,&local_140);
  plVar21 = plStack_138;
                    /* try { // try from 004d12e4 to 005d12e7 has its CatchHandler @ 004d12f4 */
  if ((plStack_138 != (long *)0x0) &&
     (lVar15 = plStack_138[1], plStack_138[1] = lVar15 + -1, lVar15 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004d12e4 with catch @ 004d12f4 */
                    /* try { // try from 004d12f8 to 005d12ff has its CatchHandler @ 004d1308 */
                    /* try { // try from 004d1300 to 005d130b has its CatchHandler @ 004d12ac */
    (**(code **)(*plStack_138 + 0x10))(plStack_138);
    lVar15 = plVar21[2];
                    /* catch() { ... } // from try @ 004d12f8 with catch @ 004d1308 */
                    /* try { // try from 004d130c to 005d1353 has its CatchHandler @ 004d130c
                       catch(type#1 @ 00000000) { ... } // from try @ 004d130c with catch @ 004d130c
                       catch(type#1 @ 00000000) { ... } // from try @ 004d1370 with catch @ 004d130c
                       catch(type#1 @ 00000000) { ... } // from try @ 004d1480 with catch @ 004d130c
                        */
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar12 = operator_new(0xf0);
  GUIView::GUIView(pGVar12);
  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>
            ((shared_ptr<Caver::GUIView> *)&local_140,pGVar12);
  uVar17 = *(undefined8 *)(this + 0x288);
  *(long **)(this + 0x288) = local_140;
                    /* try { // try from 004d1354 to 005d136f has its CatchHandler @ 004d1474 */
  plVar21 = *(long **)(this + 0x290);
  *(long **)(this + 0x290) = plStack_138;
  local_140 = (long *)uVar17;
  plStack_138 = plVar21;
                    /* try { // try from 004d1370 to 005d1477 has its CatchHandler @ 004d130c */
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  lVar15 = *(long *)pGVar2;
  if (*(int *)(lVar15 + 0x70) != 0x12) {
    plVar21 = *(long **)(lVar15 + 0x58);
    *(undefined4 *)(lVar15 + 0x70) = 0x12;
    if ((plVar21 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar21 + 0x8c))) {
      (**(code **)(*plVar21 + 0x58))();
      lVar15 = *(long *)pGVar2;
    }
  }
  *(undefined1 *)(lVar15 + 0xe5) = 0;
  (**(code **)(*(long *)this + 0x60))(this,pGVar2);
  this_05 = operator_new(0x1b0);
  HealthBar::HealthBar(this_05);
  boost::shared_ptr<Caver::HealthBar>::shared_ptr<Caver::HealthBar>
            ((shared_ptr<Caver::HealthBar> *)&local_140,this_05);
  uVar17 = *(undefined8 *)(this + 0x1e8);
  plVar21 = *(long **)(this + 0x1f0);
  *(long **)(this + 0x1e8) = local_140;
  *(long **)(this + 0x1f0) = plStack_138;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    local_140 = (long *)uVar17;
    plStack_138 = plVar21;
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d1354 with catch @ 004d1474
                        */
                    /* try { // try from 004d1478 to 005d147f has its CatchHandler @ 004d1488 */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
                    /* try { // try from 004d1480 to 005d148b has its CatchHandler @ 004d130c */
  plVar21 = *(long **)(this + 0x288);
  local_140 = *(long **)(this + 0x1e8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d1478 with catch @ 004d1488
                        */
                    /* catch() { ... } // from try @ 004d1518 with catch @ 004d148c
                       catch() { ... } // from try @ 004d15a0 with catch @ 004d148c */
  pcVar20 = *(code **)(*plVar21 + 0x60);
  plStack_138 = *(long **)(this + 0x1f0);
  if (plStack_138 != (long *)0x0) {
    plStack_138[1] = plStack_138[1] + 1;
  }
  (*pcVar20)(plVar21,&local_140);
  plVar21 = plStack_138;
  if ((plStack_138 != (long *)0x0) &&
     (lVar15 = plStack_138[1], plStack_138[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*plStack_138 + 0x10))(plStack_138);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  this_06 = operator_new(0x108);
  ManaBar::ManaBar(this_06);
                    /* try { // try from 004d1514 to 005d1517 has its CatchHandler @ 004d1594 */
                    /* try { // try from 004d1518 to 005d1597 has its CatchHandler @ 004d148c */
  boost::shared_ptr<Caver::ManaBar>::shared_ptr<Caver::ManaBar>
            ((shared_ptr<Caver::ManaBar> *)&local_140,this_06);
  uVar17 = *(undefined8 *)(this + 0x1f8);
  plVar21 = *(long **)(this + 0x200);
  *(long **)(this + 0x1f8) = local_140;
  *(long **)(this + 0x200) = plStack_138;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    local_140 = (long *)uVar17;
    plStack_138 = plVar21;
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = *(long **)(this + 0x1b8);
  local_140 = *(long **)(this + 0x1f8);
  pcVar20 = *(code **)(*plVar21 + 0x60);
  plStack_138 = *(long **)(this + 0x200);
                    /* catch() { ... } // from try @ 004d1514 with catch @ 004d1594 */
  if (plStack_138 != (long *)0x0) {
                    /* try { // try from 004d1598 to 005d159f has its CatchHandler @ 004d15a8 */
                    /* try { // try from 004d15a0 to 005d15ab has its CatchHandler @ 004d148c */
    plStack_138[1] = plStack_138[1] + 1;
  }
                    /* catch() { ... } // from try @ 004d1598 with catch @ 004d15a8 */
  (*pcVar20)(plVar21,&local_140);
  plVar21 = plStack_138;
  if ((plStack_138 != (long *)0x0) &&
     (lVar15 = plStack_138[1], plStack_138[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*plStack_138 + 0x10))(plStack_138);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  uVar17 = *(undefined8 *)(this + 0x1f8);
  plVar21 = *(long **)(this + 0x200);
  lVar15 = *(long *)(this + 0x1b8);
  if (plVar21 != (long *)0x0) {
    plVar21[1] = plVar21[1] + 2;
  }
  plVar23 = *(long **)(lVar15 + 0x1e8);
  *(undefined8 *)(lVar15 + 0x1e0) = uVar17;
  *(long **)(lVar15 + 0x1e8) = plVar21;
  if ((plVar23 != (long *)0x0) && (lVar15 = plVar23[1], plVar23[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar15 = plVar23[2];
    plVar23[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 004d16b0 with catch @ 004d169c */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  lVar15 = *(long *)(this + 0x1b8);
                    /* try { // try from 004d16ac to 005d16af has its CatchHandler @ 004d16c0 */
                    /* try { // try from 004d16b0 to 005d16d3 has its CatchHandler @ 004d169c */
  plStack_138 = *(long **)(*(GUIView **)(this + 0x1f8) + 0x7c);
                    /* catch() { ... } // from try @ 004d16ac with catch @ 004d16c0 */
  local_140 = (long *)CONCAT44(*(float *)(lVar15 + 0x88) + *(float *)(lVar15 + 0x90) + -1.0,
                               -((SUB84(plStack_138,0) - *(float *)(lVar15 + 0x8c)) + -3.0));
  GUIView::SetFrame(*(GUIView **)(this + 0x1f8),(Rectangle *)&local_140);
  this_07 = operator_new(0x310);
  TargetFrame::TargetFrame(this_07);
  boost::shared_ptr<Caver::TargetFrame>::shared_ptr<Caver::TargetFrame>
            ((shared_ptr<Caver::TargetFrame> *)&local_140,this_07);
  uVar17 = *(undefined8 *)(this + 0x208);
  *(long **)(this + 0x208) = local_140;
  plVar21 = *(long **)(this + 0x210);
  *(long **)(this + 0x210) = plStack_138;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    local_140 = (long *)uVar17;
    plStack_138 = plVar21;
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = *(long **)(this + 0x288);
  local_140 = *(long **)(this + 0x208);
  pcVar20 = *(code **)(*plVar21 + 0x60);
  plStack_138 = *(long **)(this + 0x210);
  if (plStack_138 != (long *)0x0) {
    plStack_138[1] = plStack_138[1] + 1;
  }
  (*pcVar20)(plVar21,&local_140);
  plVar21 = plStack_138;
  if ((plStack_138 != (long *)0x0) &&
     (lVar15 = plStack_138[1], plStack_138[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*plStack_138 + 0x10))(plStack_138);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  this_08 = operator_new(0x410);
  ExperienceBar::ExperienceBar(this_08);
  boost::shared_ptr<Caver::ExperienceBar>::shared_ptr<Caver::ExperienceBar>
            ((shared_ptr<Caver::ExperienceBar> *)&local_140,this_08);
  uVar17 = *(undefined8 *)(this + 0x218);
  *(long **)(this + 0x218) = local_140;
  plVar21 = *(long **)(this + 0x220);
  *(long **)(this + 0x220) = plStack_138;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    local_140 = (long *)uVar17;
    plStack_138 = plVar21;
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  local_140 = *(long **)(this + 0x218);
  *(undefined2 *)((long)local_140 + 0x3f8) = 0x101;
  plVar21 = *(long **)(this + 0x288);
  pcVar20 = *(code **)(*plVar21 + 0x60);
  plStack_138 = *(long **)(this + 0x220);
  if (plStack_138 != (long *)0x0) {
    plStack_138[1] = plStack_138[1] + 1;
  }
  (*pcVar20)(plVar21,&local_140);
  plVar21 = plStack_138;
  if ((plStack_138 != (long *)0x0) &&
     (lVar15 = plStack_138[1], plStack_138[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*plStack_138 + 0x10))(plStack_138);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar12 = operator_new(0xf0);
  GUIView::GUIView(pGVar12);
  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>
            ((shared_ptr<Caver::GUIView> *)&local_140,pGVar12);
  uVar17 = *(undefined8 *)(this + 0x248);
  *(long **)(this + 0x248) = local_140;
  plVar21 = *(long **)(this + 0x250);
  *(long **)(this + 0x250) = plStack_138;
  local_140 = (long *)uVar17;
  plStack_138 = plVar21;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  *(undefined1 *)(*(long *)pGVar1 + 0xe5) = 0;
  (**(code **)(**(long **)pGVar2 + 0x60))(*(long **)pGVar2,pGVar1);
  this_09 = operator_new(0x178);
  CoinBar::CoinBar(this_09);
  boost::shared_ptr<Caver::CoinBar>::shared_ptr<Caver::CoinBar>
            ((shared_ptr<Caver::CoinBar> *)&local_140,this_09);
  uVar17 = *(undefined8 *)(this + 0x238);
  *(long **)(this + 0x238) = local_140;
  plVar21 = *(long **)(this + 0x240);
  *(long **)(this + 0x240) = plStack_138;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    local_140 = (long *)uVar17;
    plStack_138 = plVar21;
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = *(long **)(this + 0x248);
  local_140 = *(long **)(this + 0x238);
  pcVar20 = *(code **)(*plVar21 + 0x60);
  plStack_138 = *(long **)(this + 0x240);
  if (plStack_138 != (long *)0x0) {
    plStack_138[1] = plStack_138[1] + 1;
  }
  (*pcVar20)(plVar21,&local_140);
  plVar21 = plStack_138;
  if ((plStack_138 != (long *)0x0) &&
     (lVar15 = plStack_138[1], plStack_138[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*plStack_138 + 0x10))(plStack_138);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  this_10 = operator_new(0x2f0);
  ItemOverlay::ItemOverlay(this_10);
  boost::shared_ptr<Caver::ItemOverlay>::shared_ptr<Caver::ItemOverlay>
            ((shared_ptr<Caver::ItemOverlay> *)&local_140,this_10);
  uVar17 = *(undefined8 *)(this + 0x228);
  *(long **)(this + 0x228) = local_140;
  plVar21 = *(long **)(this + 0x230);
  *(long **)(this + 0x230) = plStack_138;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    local_140 = (long *)uVar17;
    plStack_138 = plVar21;
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = *(long **)(this + 0x248);
  local_140 = *(long **)(this + 0x228);
  pcVar20 = *(code **)(*plVar21 + 0x60);
  plStack_138 = *(long **)(this + 0x230);
  if (plStack_138 != (long *)0x0) {
    plStack_138[1] = plStack_138[1] + 1;
  }
  (*pcVar20)(plVar21,&local_140);
  plVar21 = plStack_138;
  if ((plStack_138 != (long *)0x0) &&
     (lVar15 = plStack_138[1], plStack_138[1] = lVar15 + -1, lVar15 + -1 == 0)) {
    (**(code **)(*plStack_138 + 0x10))(plStack_138);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  local_140 = (long *)NEON_fmov(0x40a00000,4);
  plStack_138 = *(long **)(*(GUIView **)(this + 0x228) + 0x7c);
  GUIView::SetFrame(*(GUIView **)(this + 0x228),(Rectangle *)&local_140);
  plStack_138 = *(long **)(*(GUIView **)(this + 0x238) + 0x7c);
  local_140 = (long *)CONCAT44(*(float *)(*(long *)(this + 0x228) + 0x78) +
                               *(float *)(*(long *)(this + 0x228) + 0x80),0x40a00000);
  GUIView::SetFrame(*(GUIView **)(this + 0x238),(Rectangle *)&local_140);
  plStack_138 = *(long **)(*(long *)(this + 0x228) + 0x7c);
  local_140 = *(long **)(*(long *)(this + 0x228) + 0x74);
  Rectangle::RectangleByOutsetting((Rectangle *)(*(long *)(this + 0x238) + 0x74),5.0);
  Rectangle::ExpandToincludeRectangle((Rectangle *)&local_140,(Rectangle *)&local_110);
  pGVar12 = *(GUIView **)pGVar1;
  Rectangle::RectangleByOutsetting((Rectangle *)&local_140,5.0);
  GUIView::SetFrame(pGVar12,(Rectangle *)&local_110);
  FUN_00666bb8(&local_110,"left",auStack_148);
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  uVar17 = *(undefined8 *)(this + 0x140);
  lVar15 = *(long *)(this + 0x148);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 004d1ccc with catch @ 004d1c9c */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
                    /* try { // try from 004d1cb8 to 005d1ccb has its CatchHandler @ 004d1cf0 */
  FUN_00666bb8(&local_110,"right",auStack_148);
                    /* try { // try from 004d1ccc to 005d1cf3 has its CatchHandler @ 004d1c9c */
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  uVar17 = *(undefined8 *)(this + 0x150);
  lVar15 = *(long *)(this + 0x158);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
                    /* catch() { ... } // from try @ 004d1cb8 with catch @ 004d1cf0 */
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
                    /* catch() { ... } // from try @ 004d1d58 with catch @ 004d1d18 */
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
                    /* try { // try from 004d1d3c to 005d1d3f has its CatchHandler @ 004d1d4c */
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
                    /* catch() { ... } // from try @ 004d1d3c with catch @ 004d1d4c */
                    /* try { // try from 004d1d50 to 005d1d57 has its CatchHandler @ 004d1d60 */
  FUN_00666bb8(&local_110,"jump",auStack_148);
                    /* try { // try from 004d1d58 to 005d1d63 has its CatchHandler @ 004d1d18 */
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
                    /* catch() { ... } // from try @ 004d1d50 with catch @ 004d1d60 */
  uVar17 = *(undefined8 *)(this + 0x160);
  lVar15 = *(long *)(this + 0x168);
                    /* try { // try from 004d1d64 to 005d1dab has its CatchHandler @ 004d1d64
                       catch(type#1 @ 00000000) { ... } // from try @ 004d1d64 with catch @ 004d1d64
                       catch(type#1 @ 00000000) { ... } // from try @ 004d1dc8 with catch @ 004d1d64
                       catch(type#1 @ 00000000) { ... } // from try @ 004d1e84 with catch @ 004d1d64
                        */
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
                    /* try { // try from 004d1dac to 005d1dc7 has its CatchHandler @ 004d1e78 */
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
                    /* try { // try from 004d1dc8 to 005d1e7b has its CatchHandler @ 004d1d64 */
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
                    /* try { // try from 004d25f8 to 005d25fb has its CatchHandler @ 004d260c */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  FUN_00666bb8(&local_110,"swing",auStack_148);
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  uVar17 = *(undefined8 *)(this + 0x170);
  lVar15 = *(long *)(this + 0x178);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  FUN_00666bb8(&local_110,"skill",auStack_148);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d1dac with catch @ 004d1e78
                        */
                    /* try { // try from 004d1e7c to 005d1e83 has its CatchHandler @ 004d1e8c */
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  uVar17 = *(undefined8 *)(this + 400);
  lVar15 = *(long *)(this + 0x198);
                    /* try { // try from 004d1e84 to 005d1e8f has its CatchHandler @ 004d1d64 */
  if (lVar15 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d1e7c with catch @ 004d1e8c
                        */
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
                    /* catch() { ... } // from try @ 004d1ecc with catch @ 004d1ea8 */
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
                    /* try { // try from 004d1ec8 to 005d1ecb has its CatchHandler @ 004d1edc */
    plVar21[2] = lVar15 + -1;
                    /* try { // try from 004d1ecc to 005d1eef has its CatchHandler @ 004d1ea8 */
    if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 004d1ec8 with catch @ 004d1edc */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_110 + -3 != (long *)puVar7) {
                    /* try { // try from 004d2634 to 005d2637 has its CatchHandler @ 004d2674 */
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  FUN_00666bb8(&local_110,"skillToggle",auStack_148);
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  uVar17 = *(undefined8 *)(this + 0x1b8);
  lVar15 = *(long *)(this + 0x1c0);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_110 + -3 != (long *)puVar7) {
                    /* try { // try from 004d2660 to 005d2667 has its CatchHandler @ 004d2670 */
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
                    /* try { // try from 004d2668 to 005d2677 has its CatchHandler @ 004d25a0 */
        iVar19 = (int)*plVar21;
                    /* catch() { ... } // from try @ 004d2660 with catch @ 004d2670 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 004d2634 with catch @ 004d2674 */
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d26c0 with catch @ 004d2810
                        */
    }
  }
  FUN_00666bb8(&local_110,"menu",auStack_148);
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  uVar17 = *(undefined8 *)(this + 0x1c8);
  lVar15 = *(long *)(this + 0x1d0);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004d2814 to 005d281b has its CatchHandler @ 004d2824 */
      iVar19 = (int)*plVar21;
                    /* try { // try from 004d281c to 005d2827 has its CatchHandler @ 004d2678 */
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d2814 with catch @ 004d2824
                        */
    if (iVar19 < 1) {
                    /* catch() { ... } // from try @ 004d28e8 with catch @ 004d2828
                       catch() { ... } // from try @ 004d29f0 with catch @ 004d2828 */
      operator_delete(local_110 + -3);
    }
  }
  FUN_00666bb8(&local_110,"consumables",auStack_148);
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  uVar17 = *(undefined8 *)(this + 0x1d8);
  lVar15 = *(long *)(this + 0x1e0);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  FUN_00666bb8(&local_110,"health",auStack_148);
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  uVar17 = *(undefined8 *)(this + 0x1e8);
  lVar15 = *(long *)(this + 0x1f0);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
                    /* try { // try from 004d26dc to 005d2813 has its CatchHandler @ 004d2678 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  FUN_00666bb8(&local_110,&DAT_006920ef,auStack_148);
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  lVar15 = *(long *)(this + 0x220);
  uVar17 = *(undefined8 *)(this + 0x218);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  FUN_00666bb8(&local_110,&DAT_00695cce,auStack_148);
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  lVar15 = *(long *)(this + 0x210);
  uVar17 = *(undefined8 *)(this + 0x208);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  FUN_00666bb8(&local_110,"items",auStack_148);
  puVar13 = (undefined8 *)
            std::
            map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
            ::operator[](this_00,(string *)&local_110);
  lVar15 = *(long *)(this + 0x250);
  uVar17 = *(undefined8 *)(this + 0x248);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
  }
  plVar21 = (long *)puVar13[1];
  *puVar13 = uVar17;
  puVar13[1] = lVar15;
  if ((plVar21 != (long *)0x0) && (lVar15 = plVar21[1], plVar21[1] = lVar15 + -1, lVar15 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar15 = plVar21[2];
    plVar21[2] = lVar15 + -1;
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_110 + -3 != (long *)puVar7) {
    plVar21 = local_110 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
                    /* try { // try from 004d28b8 to 005d28bb has its CatchHandler @ 004d2984 */
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_110 + -3);
    }
  }
  lVar15 = 0;
  do {
    plVar21 = *(long **)((long)local_70 + lVar15);
    if ((plVar21 != (long *)0x0) &&
       (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    lVar15 = lVar15 + -0x10;
  } while (lVar15 != -0x80);
  if ((local_120 != (long *)0x0) &&
     (iVar19 = (int)local_120[1] + -1, *(int *)(local_120 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_120 + 8))();
  }
  if ((local_118 != (long *)0x0) &&
     (iVar19 = (int)local_118[1] + -1, *(int *)(local_118 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_118 + 8))();
  }
  if (*(long *)(lVar5 + 0x28) == local_70[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


