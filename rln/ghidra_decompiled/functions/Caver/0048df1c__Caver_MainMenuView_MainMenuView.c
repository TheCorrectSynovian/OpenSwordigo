/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048df1c
 * Function: Caver::MainMenuView::MainMenuView
 * Signature: undefined __thiscall MainMenuView(MainMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::MainMenuView() */

void __thiscall Caver::MainMenuView::MainMenuView(MainMenuView *this)

{
  undefined *puVar1;
  vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
  *pvVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  SceneView *this_00;
  GUIFrameView *pGVar8;
  string *psVar9;
  GUIView *pGVar10;
  ulong uVar11;
  BadgeCountView *this_01;
  OnlineMenuView *this_02;
  GUILabel *pGVar12;
  FontLibrary *pFVar13;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  undefined8 *puVar14;
  intrusive_ptr *piVar15;
  long lVar16;
  code *pcVar17;
  undefined8 *puVar18;
  int iVar19;
  GUIButton *pGVar20;
  long *plVar21;
  GUIControl *pGVar22;
  long *plVar23;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [4];
  undefined4 local_104;
  long *local_100;
  long *local_f8;
  undefined4 local_ec;
  long *local_e8;
  long *local_e0;
  undefined4 local_d4;
  long *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  long *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  MainMenuView *local_98;
  long *local_90;
  undefined8 uStack_88;
  MainMenuView *local_80;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e7470 + 0x10;
  this[0xe9] = (MainMenuView)0x0;
  *(undefined **)this = puVar1;
  pvVar2 = (vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
            *)(this + 0x178);
  memset(this + 0xf0,0,0xa0);
  this[400] = (MainMenuView)0x1;
  *(undefined8 *)(this + 0x19c) = 0;
  *(undefined8 *)(this + 0x194) = 0;
  memset(this + 0x1a8,0,0xf0);
  this_00 = operator_new(0x1a8);
  SceneView::SceneView(this_00);
  boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>
            ((shared_ptr<Caver::SceneView> *)&local_b0,this_00);
  plVar21 = *(long **)(this + 0xf8);
  plVar23 = *(long **)(this + 0x100);
  *(long **)(this + 0xf8) = local_b0;
  *(long **)(this + 0x100) = uStack_a8;
  if ((plVar23 != (long *)0x0) && (lVar16 = plVar23[1], plVar23[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    local_b0 = plVar21;
    uStack_a8 = plVar23;
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar16 = plVar23[2];
    plVar23[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  local_b0 = *(long **)(this + 0xf8);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  uStack_a8 = *(long **)(this + 0x100);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(this,&local_b0);
  plVar21 = uStack_a8;
                    /* catch() { ... } // from try @ 0048deb8 with catch @ 0048e050 */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar8 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar8);
                    /* catch() { ... } // from try @ 0048de84 with catch @ 0048e0ac */
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_b0,pGVar8);
  plVar21 = *(long **)(this + 0x1f8);
  plVar23 = *(long **)(this + 0x200);
  *(long **)(this + 0x1f8) = local_b0;
  *(long **)(this + 0x200) = uStack_a8;
  local_b0 = plVar21;
  uStack_a8 = plVar23;
  if ((plVar23 != (long *)0x0) && (lVar16 = plVar23[1], plVar23[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 0048de60 with catch @ 0048e0e4 */
                    /* catch() { ... } // from try @ 0048ddfc with catch @ 0048e0e8 */
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar16 = plVar23[2];
    plVar23[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  pGVar8 = *(GUIFrameView **)(this + 0x1f8);
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_90,&DAT_00690f88,&local_d0);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_90,0));
                    /* catch() { ... } // from try @ 0048ddcc with catch @ 0048e14c */
  GUIFrameView::SetFrameTexture(pGVar8,(intrusive_ptr *)&local_b0,true);
  if ((local_b0 != (long *)0x0) &&
     (iVar19 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_b0 + 8))();
  }
  puVar1 = PTR_DAT_007e5de8;
  if (local_90 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  pGVar10 = *(GUIView **)(this + 0x1f8);
  plVar21 = *(long **)(pGVar10 + 0x100);
  if (plVar21 != (long *)0x0) {
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
  }
  local_b0 = *(long **)(pGVar10 + 0x74);
  uStack_a8 = *(long **)((long)plVar21 + 0x54);
                    /* catch() { ... } // from try @ 0048dda8 with catch @ 0048e1b8 */
  GUIView::SetFrame(pGVar10,(Rectangle *)&local_b0);
  iVar19 = (int)plVar21[1] + -1;
  *(int *)(plVar21 + 1) = iVar19;
  if (iVar19 == 0) {
    (**(code **)(*plVar21 + 8))(plVar21);
  }
  local_b0 = *(long **)(this + 0x1f8);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  uStack_a8 = *(long **)(this + 0x200);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(this,&local_b0);
  plVar21 = uStack_a8;
                    /* try { // try from 0048e21c to 0058e25b has its CatchHandler @ 0048e21c
                       catch() { ... } // from try @ 0048e21c with catch @ 0048e21c
                       catch() { ... } // from try @ 0048e264 with catch @ 0048e21c */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
                    /* try { // try from 0048e25c to 0058e263 has its CatchHandler @ 0048e304 */
  pGVar10 = operator_new(0xf0);
                    /* try { // try from 0048e264 to 0058e373 has its CatchHandler @ 0048e21c */
  GUIView::GUIView(pGVar10);
  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>
            ((shared_ptr<Caver::GUIView> *)&local_b0,pGVar10);
  plVar21 = *(long **)(this + 0x108);
  plVar23 = *(long **)(this + 0x110);
  *(long **)(this + 0x108) = local_b0;
  *(long **)(this + 0x110) = uStack_a8;
  local_b0 = plVar21;
  uStack_a8 = plVar23;
  if ((plVar23 != (long *)0x0) && (lVar16 = plVar23[1], plVar23[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar16 = plVar23[2];
    plVar23[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  (**(code **)(*(long *)this + 0x60))(this,this + 0x108);
  FUN_00666bb8(&local_90,0x690f97,&local_d0);
                    /* catch() { ... } // from try @ 0048e25c with catch @ 0048e304 */
  GameInterfaceBuilder::MainMenuButtonWithTitle((GameInterfaceBuilder *)&local_90,extraout_x1);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x120);
  *(long **)(this + 0x118) = local_b0;
  *(long **)(this + 0x120) = uStack_a8;
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0048e3d4 with catch @ 0048e388 */
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
                    /* try { // try from 0048e3ac to 0058e3bf has its CatchHandler @ 0048e4c4 */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
                    /* try { // try from 0048e3c4 to 0058e3d3 has its CatchHandler @ 0048e454 */
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  puVar7 = PTR_ButtonPressed_007e6940;
  pGVar22 = *(GUIControl **)(this + 0x118);
  local_b0 = (long *)0x0;
                    /* try { // try from 0048e3d4 to 0058e4c7 has its CatchHandler @ 0048e388 */
  uStack_88 = 0;
  local_90 = (long *)PTR_ButtonPressed_007e6940;
  local_80 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar11 & 1) == 0) {
    local_98 = local_80;
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
    local_b0 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
  if (((local_b0 != (long *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 0048e3c4 with catch @ 0048e454 */
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
  }
  plVar21 = *(long **)(this + 0x108);
  local_b0 = *(long **)(this + 0x118);
  pcVar17 = *(code **)(*plVar21 + 0x60);
  uStack_a8 = *(long **)(this + 0x120);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(plVar21,&local_b0);
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
                    /* catch() { ... } // from try @ 0048e3ac with catch @ 0048e4c4 */
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = (long *)OnlineController::SharedController();
  uVar11 = (**(code **)(*plVar21 + 0x10))();
  pcVar3 = "Achievements";
  if ((uVar11 & 1) == 0) {
    pcVar3 = "Online";
  }
  FUN_00666bb8(&local_90,pcVar3,&local_d0);
  GameInterfaceBuilder::MainMenuButtonWithTitle((GameInterfaceBuilder *)&local_90,extraout_x1_00);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x130);
  *(long **)(this + 0x128) = local_b0;
  *(long **)(this + 0x130) = uStack_a8;
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
                    /* try { // try from 0048e580 to 0058e59b has its CatchHandler @ 0048e580
                       catch() { ... } // from try @ 0048e580 with catch @ 0048e580
                       catch() { ... } // from try @ 0048e5a0 with catch @ 0048e580 */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 0048e59c to 0058e59f has its CatchHandler @ 0048e644 */
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
                    /* try { // try from 0048e5a0 to 0058e657 has its CatchHandler @ 0048e580 */
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
                    /* try { // try from 00490c04 to 00590c0f has its CatchHandler @ 00490670 */
        iVar19 = (int)*plVar21;
                    /* catch() { ... } // from try @ 00490b30 with catch @ 00490c0c */
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  pGVar22 = *(GUIControl **)(this + 0x128);
  local_b0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)puVar7;
  local_80 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar11 & 1) == 0) {
    local_98 = local_80;
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
    local_b0 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
  if (((local_b0 != (long *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 0048e59c with catch @ 0048e644 */
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
  }
  plVar21 = *(long **)(this + 0x108);
  local_b0 = *(long **)(this + 0x128);
  pcVar17 = *(code **)(*plVar21 + 0x60);
  uStack_a8 = *(long **)(this + 0x130);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(plVar21,&local_b0);
  plVar21 = uStack_a8;
                    /* try { // try from 0048e6a0 to 0058e6a7 has its CatchHandler @ 0048ea34 */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 0048e6a8 to 0058e713 has its CatchHandler @ 0048e658 */
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  this_01 = operator_new(0x110);
  BadgeCountView::BadgeCountView(this_01);
  boost::shared_ptr<Caver::BadgeCountView>::shared_ptr<Caver::BadgeCountView>
            ((shared_ptr<Caver::BadgeCountView> *)&local_b0,this_01);
  plVar21 = *(long **)(this + 0x288);
  *(long **)(this + 0x288) = local_b0;
  plVar23 = *(long **)(this + 0x290);
  *(long **)(this + 0x290) = uStack_a8;
                    /* try { // try from 0048e714 to 0058e71b has its CatchHandler @ 0048e9f0 */
  local_b0 = plVar21;
  uStack_a8 = plVar23;
                    /* try { // try from 0048e71c to 0058e797 has its CatchHandler @ 0048e658 */
  if ((plVar23 != (long *)0x0) && (lVar16 = plVar23[1], plVar23[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar16 = plVar23[2];
    plVar23[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  FUN_00666bb8(&local_90,&LAB_00690fa4,&local_d0);
  GameInterfaceBuilder::MainMenuButtonWithTitle((GameInterfaceBuilder *)&local_90,extraout_x1_01);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x150);
  *(long **)(this + 0x148) = local_b0;
  *(long **)(this + 0x150) = uStack_a8;
                    /* try { // try from 0048e798 to 0058e79b has its CatchHandler @ 0048ea20 */
                    /* try { // try from 0048e79c to 0058e8fb has its CatchHandler @ 0048e658 */
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  pGVar22 = *(GUIControl **)(this + 0x148);
  local_b0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)puVar7;
  local_80 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar11 & 1) == 0) {
    local_98 = local_80;
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
    local_b0 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
  if (((local_b0 != (long *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
  }
  plVar21 = *(long **)(this + 0x108);
  local_b0 = *(long **)(this + 0x148);
  pcVar17 = *(code **)(*plVar21 + 0x60);
  uStack_a8 = *(long **)(this + 0x150);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(plVar21,&local_b0);
  plVar21 = uStack_a8;
                    /* try { // try from 0048e8fc to 0058e903 has its CatchHandler @ 0048e9c0 */
                    /* try { // try from 0048e904 to 0058e9e3 has its CatchHandler @ 0048e658 */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  FUN_00666bb8(&local_90,"Credits",&local_d0);
  GameInterfaceBuilder::MainMenuButtonWithTitle((GameInterfaceBuilder *)&local_90,extraout_x1_02);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x160);
  *(long **)(this + 0x158) = local_b0;
  *(long **)(this + 0x160) = uStack_a8;
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
                    /* catch() { ... } // from try @ 0048e8fc with catch @ 0048e9c0 */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
                    /* try { // try from 0048e9e4 to 0058ea1b has its CatchHandler @ 0048ea68 */
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
                    /* catch() { ... } // from try @ 0048e714 with catch @ 0048e9f0 */
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  pGVar22 = *(GUIControl **)(this + 0x158);
                    /* try { // try from 0048ea1c to 0058ea57 has its CatchHandler @ 0048e658 */
                    /* catch() { ... } // from try @ 0048e798 with catch @ 0048ea20 */
  local_b0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)puVar7;
  local_80 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_90);
                    /* catch() { ... } // from try @ 0048e6a0 with catch @ 0048ea34 */
  if ((uVar11 & 1) == 0) {
    local_98 = local_80;
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
    local_b0 = (long *)0x0;
  }
                    /* try { // try from 0048ea58 to 0058ea5f has its CatchHandler @ 0048ea68 */
                    /* try { // try from 0048ea60 to 0058ea6b has its CatchHandler @ 0048e658 */
                    /* catch() { ... } // from try @ 0048e9e4 with catch @ 0048ea68
                       catch() { ... } // from try @ 0048ea58 with catch @ 0048ea68 */
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
  if (((local_b0 != (long *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
  }
  plVar21 = *(long **)(this + 0x108);
  local_b0 = *(long **)(this + 0x158);
  pcVar17 = *(code **)(*plVar21 + 0x60);
  uStack_a8 = *(long **)(this + 0x160);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(plVar21,&local_b0);
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar10 = *(GUIView **)(this + 0x108);
  local_b0 = *(long **)(pGVar10 + 0x74);
  uStack_a8 = (long *)CONCAT44(0x42c80000,*(undefined4 *)(*(long *)(this + 0x128) + 0x7c));
  GUIView::SetFrame(pGVar10,(Rectangle *)&local_b0);
  puVar18 = *(undefined8 **)(this + 0x180);
  puVar14 = *(undefined8 **)(this + 0x188);
  if (puVar18 == puVar14) {
    std::
    vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
    ::_M_insert_aux(pvVar2,puVar18,this + 0x118);
    puVar18 = *(undefined8 **)(this + 0x180);
    puVar14 = *(undefined8 **)(this + 0x188);
    if (puVar18 == puVar14) goto LAB_0048ebc8;
LAB_0048eb80:
    *puVar18 = *(undefined8 *)(this + 0x128);
    lVar16 = *(long *)(this + 0x130);
    puVar18[1] = lVar16;
    if (lVar16 != 0) {
      *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
    }
    *(undefined8 **)(this + 0x180) = puVar18 + 2;
  }
  else {
    *puVar18 = *(undefined8 *)(this + 0x118);
    lVar16 = *(long *)(this + 0x120);
    puVar18[1] = lVar16;
    if (lVar16 != 0) {
      *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
    }
    puVar18 = puVar18 + 2;
    *(undefined8 **)(this + 0x180) = puVar18;
    if (puVar18 != puVar14) goto LAB_0048eb80;
LAB_0048ebc8:
    std::
    vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
    ::_M_insert_aux(pvVar2,puVar14,this + 0x128);
  }
  if (*(long *)(this + 0x138) != 0) {
    plVar21 = *(long **)(this + 0x180);
    if (plVar21 == *(long **)(this + 0x188)) {
      std::
      vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
      ::_M_insert_aux(pvVar2);
    }
    else {
      *plVar21 = *(long *)(this + 0x138);
      lVar16 = *(long *)(this + 0x140);
      plVar21[1] = lVar16;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
      }
      *(long **)(this + 0x180) = plVar21 + 2;
    }
  }
  puVar18 = *(undefined8 **)(this + 0x180);
  puVar14 = *(undefined8 **)(this + 0x188);
  if (puVar18 == puVar14) {
    std::
    vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
    ::_M_insert_aux(pvVar2,puVar18,this + 0x148);
    puVar18 = *(undefined8 **)(this + 0x180);
    puVar14 = *(undefined8 **)(this + 0x188);
    if (puVar18 != puVar14) goto LAB_0048ec58;
  }
  else {
                    /* try { // try from 0048ec2c to 0058ecbf has its CatchHandler @ 0048ec2c
                       catch(type#1 @ 00000000) { ... } // from try @ 0048ec2c with catch @ 0048ec2c
                       catch(type#1 @ 00000000) { ... } // from try @ 0048ecc8 with catch @ 0048ec2c
                       catch(type#1 @ 00000000) { ... } // from try @ 0048edf8 with catch @ 0048ec2c
                        */
    *puVar18 = *(undefined8 *)(this + 0x148);
    lVar16 = *(long *)(this + 0x150);
    puVar18[1] = lVar16;
    if (lVar16 != 0) {
      *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
    }
    puVar18 = puVar18 + 2;
    *(undefined8 **)(this + 0x180) = puVar18;
    if (puVar18 != puVar14) {
LAB_0048ec58:
      *puVar18 = *(undefined8 *)(this + 0x158);
      lVar16 = *(long *)(this + 0x160);
      puVar18[1] = lVar16;
      if (lVar16 != 0) {
        *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
      }
      *(undefined8 **)(this + 0x180) = puVar18 + 2;
      goto LAB_0048ecac;
    }
  }
  std::
  vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::
  _M_insert_aux(pvVar2,puVar14,this + 0x158);
LAB_0048ecac:
  this_02 = operator_new(0x148);
  OnlineMenuView::OnlineMenuView(this_02);
                    /* try { // try from 0048ecc0 to 0058ecc7 has its CatchHandler @ 0048edcc */
                    /* try { // try from 0048ecc8 to 0058edef has its CatchHandler @ 0048ec2c */
  boost::shared_ptr<Caver::OnlineMenuView>::shared_ptr<Caver::OnlineMenuView>
            ((shared_ptr<Caver::OnlineMenuView> *)&local_b0,this_02);
  plVar21 = *(long **)(this + 0x1a8);
  plVar23 = *(long **)(this + 0x1b0);
  *(long **)(this + 0x1a8) = local_b0;
  *(long **)(this + 0x1b0) = uStack_a8;
  if ((plVar23 != (long *)0x0) && (lVar16 = plVar23[1], plVar23[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    local_b0 = plVar21;
    uStack_a8 = plVar23;
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar16 = plVar23[2];
    plVar23[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  local_b0 = *(long **)(this + 0x1a8);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  uStack_a8 = *(long **)(this + 0x1b0);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(this,&local_b0);
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar22 = *(GUIControl **)(*(long *)(this + 0x1a8) + 0x138);
  *(undefined1 *)(*(long *)(this + 0x1a8) + 0xe4) = 1;
  local_b0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)puVar7;
  local_80 = this;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0048ecc0 with catch @ 0048edcc
                        */
  uVar11 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar11 & 1) == 0) {
    local_98 = local_80;
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
                    /* try { // try from 0048edf0 to 0058edf7 has its CatchHandler @ 0048ee00 */
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
    local_b0 = (long *)0x0;
  }
                    /* try { // try from 0048edf8 to 0058ee03 has its CatchHandler @ 0048ec2c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0048edf0 with catch @ 0048ee00
                        */
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
  if (local_b0 != (long *)0x0) {
    if ((((ulong)local_b0 & 1) == 0) &&
       (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
    }
    local_b0 = (long *)0x0;
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_90,"ui_button_music_blue",&local_d0);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_90,0));
  if (local_b0 != (long *)0x0) {
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
  }
  plVar21 = *(long **)(this + 0x1d8);
  *(long **)(this + 0x1d8) = local_b0;
  if ((plVar21 != (long *)0x0) &&
     (iVar19 = (int)plVar21[1] + -1, *(int *)(plVar21 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*plVar21 + 8))(plVar21);
  }
  if ((local_b0 != (long *)0x0) &&
     (iVar19 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_b0 + 8))();
  }
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* try { // try from 00490ee0 to 00590f83 has its CatchHandler @ 00490ee0
                       catch() { ... } // from try @ 00490ee0 with catch @ 00490ee0
                       catch() { ... } // from try @ 00490f88 with catch @ 00490ee0 */
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_90,"ui_button_music_off_blue",&local_d0);
  piVar15 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar9,SUB81(&local_90,0));
  if (local_b0 != (long *)0x0) {
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
  }
  plVar21 = *(long **)(this + 0x1e0);
  *(long **)(this + 0x1e0) = local_b0;
  if ((plVar21 != (long *)0x0) &&
     (iVar19 = (int)plVar21[1] + -1, *(int *)(plVar21 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*plVar21 + 8))(plVar21);
  }
  if ((local_b0 != (long *)0x0) &&
     (iVar19 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_b0 + 8))();
  }
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  local_90 = (long *)0x0;
  local_b8 = (long *)0x0;
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_90,(intrusive_ptr *)&local_b8,piVar15);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x1d0);
  *(long **)(this + 0x1c8) = local_b0;
  *(long **)(this + 0x1d0) = uStack_a8;
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if ((local_b8 != (long *)0x0) &&
     (iVar19 = (int)local_b8[1] + -1, *(int *)(local_b8 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_b8 + 8))();
  }
  if ((local_90 != (long *)0x0) &&
     (iVar19 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  pGVar22 = *(GUIControl **)(this + 0x1c8);
  local_b0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)puVar7;
  local_80 = this;
                    /* try { // try from 0048f0b4 to 0058f117 has its CatchHandler @ 0048f0b4
                       catch() { ... } // from try @ 0048f0b4 with catch @ 0048f0b4
                       catch() { ... } // from try @ 0048f234 with catch @ 0048f0b4
                       catch() { ... } // from try @ 0048f2b4 with catch @ 0048f0b4 */
  uVar11 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar11 & 1) == 0) {
    local_98 = local_80;
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
    local_b0 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
  if (((local_b0 != (long *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* try { // try from 0048f118 to 0058f127 has its CatchHandler @ 0048f2c0 */
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
  }
  uStack_a8 = *(long **)(*(long *)(this + 0x1d8) + 0x54);
  local_b0 = (long *)0x0;
  GUIView::SetFrame(*(GUIView **)(this + 0x1c8),(Rectangle *)&local_b0);
                    /* try { // try from 0048f144 to 0058f153 has its CatchHandler @ 0048f2bc */
  local_bc = 0xffffffff;
  GUIButton::SetTintColor(*(GUIButton **)(this + 0x1c8),&local_bc);
  local_b0 = *(long **)(this + 0x1c8);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  uStack_a8 = *(long **)(this + 0x1d0);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(this,&local_b0);
  plVar21 = uStack_a8;
                    /* try { // try from 0048f188 to 0058f18f has its CatchHandler @ 0048f288 */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
                    /* try { // try from 0048f1b0 to 0058f1b3 has its CatchHandler @ 0048f2bc */
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
                    /* try { // try from 0048f1c4 to 0058f1db has its CatchHandler @ 0048f2c0 */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_90,"ui_button_sound_blue",&local_d0);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_90,0));
  if (local_b0 != (long *)0x0) {
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
  }
  plVar21 = *(long **)(this + 0x1e8);
  *(long **)(this + 0x1e8) = local_b0;
  if ((plVar21 != (long *)0x0) &&
     (iVar19 = (int)plVar21[1] + -1, *(int *)(plVar21 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*plVar21 + 8))(plVar21);
  }
                    /* try { // try from 0048f230 to 0058f233 has its CatchHandler @ 0048f288 */
                    /* try { // try from 0048f234 to 0058f2ab has its CatchHandler @ 0048f0b4 */
  if ((local_b0 != (long *)0x0) &&
     (iVar19 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_b0 + 8))();
  }
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 0048f188 with catch @ 0048f288
                       catch() { ... } // from try @ 0048f230 with catch @ 0048f288 */
  FUN_00666bb8(&local_90,"ui_button_sound_off_blue",&local_d0);
  piVar15 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar9,SUB81(&local_90,0));
                    /* try { // try from 0048f2ac to 0058f2b3 has its CatchHandler @ 0048f2b8 */
  if (local_b0 != (long *)0x0) {
                    /* try { // try from 0048f2b4 to 0058f32b has its CatchHandler @ 0048f0b4 */
                    /* catch() { ... } // from try @ 0048f2ac with catch @ 0048f2b8 */
                    /* catch() { ... } // from try @ 0048f144 with catch @ 0048f2bc
                       catch() { ... } // from try @ 0048f1b0 with catch @ 0048f2bc */
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
  }
                    /* catch() { ... } // from try @ 0048f118 with catch @ 0048f2c0
                       catch() { ... } // from try @ 0048f1c4 with catch @ 0048f2c0 */
  plVar21 = *(long **)(this + 0x1f0);
  *(long **)(this + 0x1f0) = local_b0;
  if ((plVar21 != (long *)0x0) &&
     (iVar19 = (int)plVar21[1] + -1, *(int *)(plVar21 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*plVar21 + 8))(plVar21);
  }
  if ((local_b0 != (long *)0x0) &&
     (iVar19 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_b0 + 8))();
  }
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  local_90 = (long *)0x0;
  local_b8 = (long *)0x0;
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_90,(intrusive_ptr *)&local_b8,piVar15);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x1c0);
  *(long **)(this + 0x1b8) = local_b0;
  *(long **)(this + 0x1c0) = uStack_a8;
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if ((local_b8 != (long *)0x0) &&
     (iVar19 = (int)local_b8[1] + -1, *(int *)(local_b8 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_b8 + 8))();
  }
  if ((local_90 != (long *)0x0) &&
     (iVar19 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  pGVar22 = *(GUIControl **)(this + 0x1b8);
  local_b0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)puVar7;
  local_80 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar11 & 1) == 0) {
    local_98 = local_80;
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
    local_b0 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
  if (((local_b0 != (long *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
  }
                    /* catch() { ... } // from try @ 0048f604 with catch @ 0048f4c0
                       catch() { ... } // from try @ 0048f7d0 with catch @ 0048f4c0 */
  uStack_a8 = *(long **)(*(long *)(this + 0x1e8) + 0x54);
  local_b0 = (long *)0x0;
  GUIView::SetFrame(*(GUIView **)(this + 0x1b8),(Rectangle *)&local_b0);
  local_c0 = 0xffffffff;
  GUIButton::SetTintColor(*(GUIButton **)(this + 0x1b8),&local_c0);
  local_b0 = *(long **)(this + 0x1b8);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  uStack_a8 = *(long **)(this + 0x1c0);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(this,&local_b0);
  plVar21 = uStack_a8;
                    /* try { // try from 0048f524 to 0058f527 has its CatchHandler @ 0048f6b4 */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
                    /* try { // try from 0048f548 to 0058f54b has its CatchHandler @ 0048f6a4 */
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
                    /* try { // try from 0048f56c to 0058f56f has its CatchHandler @ 0048f694 */
  FUN_00666bb8(&local_90,&DAT_00690965,&local_d0);
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_90,false);
  if (uStack_a8 != (long *)0x0) {
                    /* try { // try from 0048f590 to 0058f593 has its CatchHandler @ 0048f684 */
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x210);
  *(long **)(this + 0x208) = local_b0;
  *(long **)(this + 0x210) = uStack_a8;
                    /* try { // try from 0048f5b4 to 0058f5b7 has its CatchHandler @ 0048f67c */
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
                    /* try { // try from 0048f600 to 0058f603 has its CatchHandler @ 0048f674 */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 0048f604 to 0058f6d7 has its CatchHandler @ 0048f4c0 */
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  pGVar20 = *(GUIButton **)(this + 0x208);
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_90,"ui_main_button",&local_d0);
                    /* catch() { ... } // from try @ 0048f600 with catch @ 0048f674 */
  TextureLibrary::TextureForName(psVar9,SUB81(&local_90,0));
                    /* catch() { ... } // from try @ 0048f5b4 with catch @ 0048f67c */
                    /* catch() { ... } // from try @ 0048f590 with catch @ 0048f684 */
  GUIButton::SetFrameTextureForState(pGVar20,0,&local_b0);
                    /* catch() { ... } // from try @ 0048f56c with catch @ 0048f694 */
  if ((local_b0 != (long *)0x0) &&
     (iVar19 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar19, iVar19 == 0)) {
                    /* catch() { ... } // from try @ 0048f548 with catch @ 0048f6a4 */
    (**(code **)(*local_b0 + 8))();
  }
                    /* catch() { ... } // from try @ 0048f524 with catch @ 0048f6b4 */
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* try { // try from 00490f84 to 00590f87 has its CatchHandler @ 00490fe0 */
    if (iVar19 < 1) {
                    /* try { // try from 00490f88 to 00590ff3 has its CatchHandler @ 00490ee0 */
      operator_delete(local_90 + -3);
    }
  }
  pGVar20 = *(GUIButton **)(this + 0x208);
  psVar9 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0048f6d8 to 0058f7cf has its CatchHandler @ 0048f7f0 */
  FUN_00666bb8(&local_90,"ui_main_button_pressed",&local_d0);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_90,0));
  GUIButton::SetFrameTextureForState(pGVar20,1,&local_b0);
  if ((local_b0 != (long *)0x0) &&
     (iVar19 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_b0 + 8))();
  }
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  pGVar12 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x208));
  pFVar13 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(pFVar13);
  if (local_b0 != *(long **)(pGVar12 + 0xf0)) {
    if (uStack_a8 != (long *)0x0) {
      uStack_a8[1] = uStack_a8[1] + 1;
    }
    plVar21 = *(long **)(pGVar12 + 0xf8);
    *(long **)(pGVar12 + 0xf0) = local_b0;
    *(long **)(pGVar12 + 0xf8) = uStack_a8;
    if ((plVar21 != (long *)0x0) &&
       (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    GUILabel::UpdateText(pGVar12);
  }
  plVar21 = uStack_a8;
                    /* try { // try from 0048f7d0 to 0058f7f3 has its CatchHandler @ 0048f4c0 */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
                    /* catch() { ... } // from try @ 0048f6d8 with catch @ 0048f7f0 */
                    /* catch() { ... } // from try @ 0048f808 with catch @ 0048f7f4 */
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
                    /* try { // try from 0048f804 to 0058f807 has its CatchHandler @ 0048f818 */
                    /* try { // try from 0048f808 to 0058f82b has its CatchHandler @ 0048f7f4 */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar22 = *(GUIControl **)(this + 0x208);
                    /* catch() { ... } // from try @ 0048f804 with catch @ 0048f818 */
  local_b0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)puVar7;
  local_80 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_90);
                    /* try { // try from 0048f82c to 0058f847 has its CatchHandler @ 0048f82c
                       catch() { ... } // from try @ 0048f82c with catch @ 0048f82c
                       catch() { ... } // from try @ 0048f84c with catch @ 0048f82c */
  if ((uVar11 & 1) == 0) {
    local_98 = local_80;
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
                    /* try { // try from 0048f848 to 0058f84b has its CatchHandler @ 0048f88c */
                    /* try { // try from 0048f84c to 0058f89f has its CatchHandler @ 0048f82c */
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
    local_b0 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
  if (((local_b0 != (long *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 0048f848 with catch @ 0048f88c */
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
  }
  local_b0 = *(long **)(*(GUIView **)(this + 0x208) + 0x74);
  uStack_a8 = (long *)DAT_00690f80;
  GUIView::SetFrame(*(GUIView **)(this + 0x208),(Rectangle *)&local_b0);
  local_b0 = *(long **)(this + 0x208);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  uStack_a8 = *(long **)(this + 0x210);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(this,&local_b0);
  plVar21 = uStack_a8;
                    /* catch() { ... } // from try @ 0048f928 with catch @ 0048f8f8 */
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
                    /* try { // try from 0048f914 to 0058f927 has its CatchHandler @ 0048f94c */
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
                    /* try { // try from 0048f928 to 0058f94f has its CatchHandler @ 0048f8f8 */
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  FUN_00666bb8(&local_90,"Resubmit all achievements",&local_d0);
                    /* catch() { ... } // from try @ 0048f914 with catch @ 0048f94c */
  local_c8 = 0xff000000;
  uStack_c4 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_b0,&local_90,&uStack_c4,&local_c8);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x220);
  *(long **)(this + 0x218) = local_b0;
  *(long **)(this + 0x220) = uStack_a8;
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (local_90 + -3 != (long *)puVar1) {
    plVar21 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  pGVar12 = *(GUILabel **)(this + 0x218);
  pFVar13 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(pFVar13);
  if (local_b0 != *(long **)(pGVar12 + 0xf0)) {
    if (uStack_a8 != (long *)0x0) {
      uStack_a8[1] = uStack_a8[1] + 1;
    }
    plVar21 = *(long **)(pGVar12 + 0xf8);
    *(long **)(pGVar12 + 0xf0) = local_b0;
    *(long **)(pGVar12 + 0xf8) = uStack_a8;
    if ((plVar21 != (long *)0x0) &&
       (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    GUILabel::UpdateText(pGVar12);
  }
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar12 = *(GUILabel **)(this + 0x218);
  if ((((pGVar12[0x108] != (GUILabel)0xc8) || (pGVar12[0x109] != (GUILabel)0xc8)) ||
      (pGVar12[0x10a] != (GUILabel)0xc8)) || (pGVar12[0x10b] != (GUILabel)0xc8)) {
    plVar21 = *(long **)(pGVar12 + 0x118);
    *(undefined4 *)(pGVar12 + 0x108) = 0xc8c8c8c8;
    *(undefined8 *)(pGVar12 + 0x110) = 0;
    *(undefined8 *)(pGVar12 + 0x118) = 0;
                    /* try { // try from 0048fb40 to 0058fbcb has its CatchHandler @ 0048fb40
                       catch() { ... } // from try @ 0048fb40 with catch @ 0048fb40
                       catch() { ... } // from try @ 0048fbd0 with catch @ 0048fb40 */
    if ((plVar21 != (long *)0x0) &&
       (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    GUILabel::UpdateText(pGVar12);
    pGVar12 = *(GUILabel **)(this + 0x218);
  }
  pGVar12[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar12 + 0x141) = 0;
  *(undefined8 *)(pGVar12 + 0x148) = 0;
  GUILabel::UpdateText(pGVar12);
  local_b0 = *(long **)(this + 0x218);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  uStack_a8 = *(long **)(this + 0x220);
  if (uStack_a8 != (long *)0x0) {
                    /* try { // try from 0048fbcc to 0058fbcf has its CatchHandler @ 0048fbfc */
    uStack_a8[1] = uStack_a8[1] + 1;
  }
                    /* try { // try from 0048fbd0 to 0058fc0f has its CatchHandler @ 0048fb40 */
  (*pcVar17)(this,&local_b0);
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0048fbcc with catch @ 0048fbfc */
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
                    /* try { // try from 0048fc10 to 0058fc3b has its CatchHandler @ 0048fc10
                       catch() { ... } // from try @ 0048fc10 with catch @ 0048fc10
                       catch() { ... } // from try @ 0048fccc with catch @ 0048fc10 */
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  *(undefined1 *)(*(long *)(this + 0x208) + 0xe4) = 1;
  *(undefined1 *)(*(long *)(this + 0x218) + 0xe4) = 1;
  psVar9 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0048fc3c to 0058fc4f has its CatchHandler @ 0048fe78 */
  FUN_00666bb8(&local_b0,"ui_button_facebook",&local_d0);
                    /* try { // try from 0048fc5c to 0058fc67 has its CatchHandler @ 0048fe0c */
  TextureLibrary::TextureForName(psVar9,SUB81(&local_b0,0));
  if (local_b0 + -3 != (long *)puVar1) {
    plVar21 = local_b0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* catch() { ... } // from try @ 00490f84 with catch @ 00490fe0 */
    if (iVar19 < 1) {
      operator_delete(local_b0 + -3);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0048fc90 to 0058fccb has its CatchHandler @ 0048fda8 */
  FUN_00666bb8(&local_b0,"ui_button_facebook_pressed",&local_e0);
  piVar15 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar9,SUB81(&local_b0,0));
  if (local_b0 + -3 != (long *)puVar1) {
    plVar21 = local_b0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00490ff4 to 00591023 has its CatchHandler @ 00490ff4
                       catch() { ... } // from try @ 00490ff4 with catch @ 00490ff4
                       catch() { ... } // from try @ 00491628 with catch @ 00490ff4 */
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_b0 + -3);
    }
  }
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_b8,(intrusive_ptr *)&local_d0,piVar15);
                    /* try { // try from 0048fccc to 0058fe7b has its CatchHandler @ 0048fc10 */
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x250);
  *(long **)(this + 0x248) = local_b0;
  *(long **)(this + 0x250) = uStack_a8;
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar22 = *(GUIControl **)(this + 0x248);
  local_b0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)puVar7;
  local_80 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 0048fc90 with catch @ 0048fda8 */
    local_98 = local_80;
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
    local_b0 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
  if (((local_b0 != (long *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
  }
  uStack_a8 = *(long **)((long)local_b8 + 0x54);
                    /* catch() { ... } // from try @ 0048fc5c with catch @ 0048fe0c */
  local_b0 = (long *)0x0;
  GUIView::SetFrame(*(GUIView **)(this + 0x248),(Rectangle *)&local_b0);
  local_d4 = 0xffffffff;
  GUIButton::SetTintColor(*(GUIButton **)(this + 0x248),&local_d4);
  local_b0 = *(long **)(this + 0x248);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  uStack_a8 = *(long **)(this + 0x250);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(this,&local_b0);
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0048fc3c with catch @ 0048fe78 */
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0048feb4 to 0058fef7 has its CatchHandler @ 0048feb4
                       catch(type#1 @ 00000000) { ... } // from try @ 0048feb4 with catch @ 0048feb4
                       catch(type#1 @ 00000000) { ... } // from try @ 0048ffc0 with catch @ 0048feb4
                       catch(type#1 @ 00000000) { ... } // from try @ 0048fffc with catch @ 0048feb4
                        */
  FUN_00666bb8(&local_b0,"ui_button_twitter",&local_e8);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_b0,0));
  if (local_b0 + -3 != (long *)puVar1) {
    plVar21 = local_b0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
                    /* try { // try from 00491024 to 00591037 has its CatchHandler @ 004920d0 */
    if (iVar19 < 1) {
      operator_delete(local_b0 + -3);
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0048fef8 to 0058ffbf has its CatchHandler @ 0048fff0 */
  FUN_00666bb8(&local_b0,"ui_button_twitter_pressed",&local_f8);
  piVar15 = (intrusive_ptr *)0x1;
  TextureLibrary::TextureForName(psVar9,SUB81(&local_b0,0));
  if (local_b0 + -3 != (long *)puVar1) {
    plVar21 = local_b0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
                    /* try { // try from 00491048 to 00591053 has its CatchHandler @ 00492064 */
      operator_delete(local_b0 + -3);
    }
  }
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_e0,(intrusive_ptr *)&local_e8,piVar15);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x260);
  *(long **)(this + 600) = local_b0;
  *(long **)(this + 0x260) = uStack_a8;
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 0048ffc0 to 0058fff3 has its CatchHandler @ 0048feb4 */
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar22 = *(GUIControl **)(this + 600);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0048fef8 with catch @ 0048fff0
                        */
                    /* try { // try from 0048fff4 to 0058fffb has its CatchHandler @ 00490004 */
  local_b0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = (long *)puVar7;
  local_80 = this;
                    /* try { // try from 0048fffc to 00590007 has its CatchHandler @ 0048feb4 */
  uVar11 = boost::detail::function::has_empty_target(&local_90);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0048fff4 with catch @ 00490004
                        */
  if ((uVar11 & 1) == 0) {
    local_98 = local_80;
                    /* catch() { ... } // from try @ 00490068 with catch @ 0049001c */
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
    local_b0 = (long *)0x0;
  }
  piVar15 = (intrusive_ptr *)&local_b0;
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,piVar15,0x40);
                    /* try { // try from 00490040 to 00590053 has its CatchHandler @ 00490158 */
  if (((local_b0 != (long *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
     (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* try { // try from 00490058 to 00590067 has its CatchHandler @ 004900e8 */
    piVar15 = (intrusive_ptr *)0x2;
                    /* try { // try from 00490068 to 0059015b has its CatchHandler @ 0049001c */
    (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8);
  }
  uStack_a8 = *(long **)((long)local_e0 + 0x54);
  local_b0 = (long *)0x0;
  GUIView::SetFrame(*(GUIView **)(this + 600),(Rectangle *)&local_b0);
  local_ec = 0xffffffff;
  GUIButton::SetTintColor(*(GUIButton **)(this + 600),&local_ec);
  local_b0 = *(long **)(this + 600);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  uStack_a8 = *(long **)(this + 0x260);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(this,&local_b0);
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00490058 with catch @ 004900e8 */
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  local_90 = (long *)0x0;
  local_f8 = (long *)0x0;
  GameInterfaceBuilder::PlainButton
            ((GameInterfaceBuilder *)&local_90,(intrusive_ptr *)&local_f8,piVar15);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  plVar21 = *(long **)(this + 0x170);
  *(long **)(this + 0x168) = local_b0;
  *(long **)(this + 0x170) = uStack_a8;
                    /* catch() { ... } // from try @ 00490040 with catch @ 00490158 */
  if ((plVar21 != (long *)0x0) && (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0))
  {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
                    /* try { // try from 004901c4 to 00590233 has its CatchHandler @ 004901c4
                       catch(type#1 @ 00000000) { ... } // from try @ 004901c4 with catch @ 004901c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00490244 with catch @ 004901c4
                       catch(type#1 @ 00000000) { ... } // from try @ 004902fc with catch @ 004901c4
                        */
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if ((local_f8 != (long *)0x0) &&
     (iVar19 = (int)local_f8[1] + -1, *(int *)(local_f8 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_f8 + 8))();
  }
  if ((local_90 != (long *)0x0) &&
     (iVar19 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  pGVar22 = *(GUIControl **)(this + 0x168);
  local_b0 = (long *)0x0;
                    /* try { // try from 00490234 to 00590243 has its CatchHandler @ 004902b0 */
  uStack_88 = 0;
  local_90 = (long *)puVar7;
  local_80 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_90);
  if ((uVar11 & 1) == 0) {
    local_98 = local_80;
    uStack_a0 = uStack_88;
    uStack_a8 = local_90;
    local_b0 = (long *)PTR_stored_vtable_007e7290;
  }
  else {
                    /* try { // try from 00490244 to 005902d3 has its CatchHandler @ 004901c4 */
    local_b0 = (long *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
  if (local_b0 != (long *)0x0) {
    if ((((ulong)local_b0 & 1) == 0) &&
       (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
    }
    local_b0 = (long *)0x0;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00490234 with catch @ 004902b0
                        */
  pGVar12 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x168));
  pFVar13 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(pFVar13);
  if (local_b0 != *(long **)(pGVar12 + 0xf0)) {
                    /* try { // try from 004902d4 to 005902fb has its CatchHandler @ 00490304 */
    if (uStack_a8 != (long *)0x0) {
      uStack_a8[1] = uStack_a8[1] + 1;
    }
    plVar21 = *(long **)(pGVar12 + 0xf8);
    *(long **)(pGVar12 + 0xf0) = local_b0;
    *(long **)(pGVar12 + 0xf8) = uStack_a8;
                    /* try { // try from 004902fc to 00590307 has its CatchHandler @ 004901c4 */
    if ((plVar21 != (long *)0x0) &&
       (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004902d4 with catch @ 00490304
                        */
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    GUILabel::UpdateText(pGVar12);
  }
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
                    /* try { // try from 00490364 to 005903af has its CatchHandler @ 00490364
                       catch(type#1 @ 00000000) { ... } // from try @ 00490364 with catch @ 00490364
                       catch(type#1 @ 00000000) { ... } // from try @ 004903bc with catch @ 00490364
                       catch(type#1 @ 00000000) { ... } // from try @ 00490418 with catch @ 00490364
                        */
    lVar16 = plVar21[2];
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  pGVar12 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x168));
                    /* try { // try from 004903b0 to 005903bb has its CatchHandler @ 004903f0 */
                    /* try { // try from 004903bc to 0059040f has its CatchHandler @ 00490364 */
  if ((((pGVar12[0x108] != (GUILabel)0xc8) || (pGVar12[0x109] != (GUILabel)0xc8)) ||
      (pGVar12[0x10a] != (GUILabel)0xc8)) || (pGVar12[0x10b] != (GUILabel)0xc8)) {
    plVar21 = *(long **)(pGVar12 + 0x118);
    *(undefined4 *)(pGVar12 + 0x108) = 0xc8c8c8c8;
    *(undefined8 *)(pGVar12 + 0x110) = 0;
    *(undefined8 *)(pGVar12 + 0x118) = 0;
    if ((plVar21 != (long *)0x0) &&
       (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004903b0 with catch @ 004903f0
                        */
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
                    /* try { // try from 00490410 to 00590417 has its CatchHandler @ 00490420 */
    GUILabel::UpdateText(pGVar12);
  }
                    /* try { // try from 00490418 to 00590423 has its CatchHandler @ 00490364 */
  pGVar20 = *(GUIButton **)(this + 0x168);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00490410 with catch @ 00490420
                        */
  FUN_00666bb8(&local_b0,"Privacy Policy",&local_f8);
  GUIButton::SetTitle(pGVar20,(string *)&local_b0);
  if (local_b0 + -3 != (long *)puVar1) {
    plVar21 = local_b0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar19 = (int)*plVar21;
      *(int *)plVar21 = iVar19 + -1;
    }
    else {
      do {
        iVar19 = (int)*plVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (iVar19 < 1) {
      operator_delete(local_b0 + -3);
    }
  }
  pGVar20 = *(GUIButton **)(this + 0x168);
  GUIButton::titleLabel(pGVar20);
  GUILabel::TextSize();
  local_b0 = *(long **)(pGVar20 + 0x74);
  uStack_a8 = local_90;
  GUIView::SetFrame((GUIView *)pGVar20,(Rectangle *)&local_b0);
  lVar16 = *(long *)(this + 0x168);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar16 + 0x84),5.0);
  *(long **)(lVar16 + 0x9c) = uStack_a8;
  *(long **)(lVar16 + 0x94) = local_b0;
  local_b0 = *(long **)(this + 0x168);
  pcVar17 = *(code **)(*(long *)this + 0x60);
  uStack_a8 = *(long **)(this + 0x170);
  if (uStack_a8 != (long *)0x0) {
    uStack_a8[1] = uStack_a8[1] + 1;
  }
  (*pcVar17)(this,&local_b0);
  plVar21 = uStack_a8;
  if ((uStack_a8 != (long *)0x0) &&
     (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
    (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
    lVar16 = plVar21[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004905b4 with catch @ 004904f8
                        */
    plVar21[2] = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  *(undefined1 *)(*(long *)(this + 0x168) + 0xe4) = 1;
  plVar21 = (long *)OnlineController::SharedController();
  uVar11 = (**(code **)(*plVar21 + 0xe8))();
  if ((uVar11 & 1) != 0) {
                    /* try { // try from 00490530 to 00590533 has its CatchHandler @ 00490580 */
    psVar9 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_b0,"ui_google_signin",&local_100);
                    /* try { // try from 00490554 to 00590557 has its CatchHandler @ 00490570 */
                    /* try { // try from 00490558 to 0059055f has its CatchHandler @ 00490578 */
    TextureLibrary::TextureForName(psVar9,SUB81(&local_b0,0));
    if (local_b0 + -3 != (long *)puVar1) {
                    /* try { // try from 0049107c to 005910b7 has its CatchHandler @ 00492000 */
      plVar21 = local_b0 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004910e0 to 005910f3 has its CatchHandler @ 00491ffc */
        iVar19 = (int)*plVar21;
        *(int *)plVar21 = iVar19 + -1;
      }
      else {
        do {
          iVar19 = (int)*plVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = iVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar19 < 1) {
        operator_delete(local_b0 + -3);
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00490554 with catch @ 00490570
                        */
    psVar9 = (string *)TextureLibrary::sharedLibrary();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00490558 with catch @ 00490578
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00490530 with catch @ 00490580
                        */
    FUN_00666bb8(&local_b0,"ui_google_signin_pressed",auStack_70);
    piVar15 = (intrusive_ptr *)0x1;
    TextureLibrary::TextureForName(psVar9,SUB81(&local_b0,0));
                    /* try { // try from 004905a4 to 005905b3 has its CatchHandler @ 004905c4 */
    if (local_b0 + -3 != (long *)puVar1) {
      plVar21 = local_b0 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar19 = (int)*plVar21;
                    /* try { // try from 00491104 to 0059110f has its CatchHandler @ 00491fc4 */
        *(int *)plVar21 = iVar19 + -1;
      }
      else {
        do {
          iVar19 = (int)*plVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = iVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar19 < 1) {
        operator_delete(local_b0 + -3);
      }
    }
                    /* try { // try from 004905b4 to 005905c7 has its CatchHandler @ 004904f8 */
    GameInterfaceBuilder::PlainButton
              ((GameInterfaceBuilder *)&local_f8,(intrusive_ptr *)&local_100,piVar15);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004905a4 with catch @ 004905c4
                        */
    if (uStack_a8 != (long *)0x0) {
      uStack_a8[1] = uStack_a8[1] + 1;
    }
    plVar21 = *(long **)(this + 0x270);
    *(long **)(this + 0x268) = local_b0;
    *(long **)(this + 0x270) = uStack_a8;
    if ((plVar21 != (long *)0x0) &&
       (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
                    /* catch() { ... } // from try @ 00490648 with catch @ 00490618 */
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    plVar21 = uStack_a8;
                    /* try { // try from 00490634 to 00590647 has its CatchHandler @ 0049066c */
    if ((uStack_a8 != (long *)0x0) &&
       (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 00490648 to 0059066f has its CatchHandler @ 00490618 */
      (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
                    /* catch() { ... } // from try @ 00490634 with catch @ 0049066c */
    pGVar22 = *(GUIControl **)(this + 0x268);
                    /* catch() { ... } // from try @ 0049088c with catch @ 00490670
                       catch() { ... } // from try @ 00490c04 with catch @ 00490670 */
    local_b0 = (long *)0x0;
    uStack_88 = 0;
    local_90 = (long *)puVar7;
    local_80 = this;
    uVar11 = boost::detail::function::has_empty_target(&local_90);
    if ((uVar11 & 1) == 0) {
      local_98 = local_80;
      uStack_a0 = uStack_88;
      uStack_a8 = local_90;
      local_b0 = (long *)PTR_stored_vtable_007e7290;
    }
    else {
      local_b0 = (long *)0x0;
    }
    GUIControl::AddTargetActionForControlEvent(pGVar22,this,&local_b0,0x40);
    if (((local_b0 != (long *)0x0) && (((ulong)local_b0 & 1) == 0)) &&
       (*(code **)((ulong)local_b0 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_b0 & 0xfffffffffffffffe))(&uStack_a8,&uStack_a8,2);
    }
    local_b0 = *(long **)(*(GUIView **)(this + 0x268) + 0x74);
    uStack_a8 = *(long **)((long)local_f8 + 0x54);
    GUIView::SetFrame(*(GUIView **)(this + 0x268),(Rectangle *)&local_b0);
    local_104 = 0xe5e5e5e5;
    GUIButton::SetTintColor(*(GUIButton **)(this + 0x268),&local_104);
    local_b0 = *(long **)(this + 0x268);
    pcVar17 = *(code **)(*(long *)this + 0x60);
    uStack_a8 = *(long **)(this + 0x270);
    if (uStack_a8 != (long *)0x0) {
      uStack_a8[1] = uStack_a8[1] + 1;
    }
    (*pcVar17)(this,&local_b0);
    plVar21 = uStack_a8;
    if ((uStack_a8 != (long *)0x0) &&
       (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
                    /* try { // try from 004907ac to 005907bf has its CatchHandler @ 00490b0c */
    FUN_00666bb8(&local_90,"Earn achievements\nand enable cloud sync:",auStack_108);
                    /* try { // try from 004907c0 to 005907d7 has its CatchHandler @ 00490aa0 */
    local_110 = 0xff000000;
    uStack_10c = 0xffffffff;
    GameInterfaceBuilder::NormalLabel
              ((GameInterfaceBuilder *)&local_b0,&local_90,&uStack_10c,&local_110);
    if (uStack_a8 != (long *)0x0) {
                    /* try { // try from 004907e8 to 005907fb has its CatchHandler @ 00490a90 */
      uStack_a8[1] = uStack_a8[1] + 1;
    }
    plVar21 = *(long **)(this + 0x280);
    *(long **)(this + 0x278) = local_b0;
    *(long **)(this + 0x280) = uStack_a8;
                    /* try { // try from 004907fc to 00590813 has its CatchHandler @ 00490a58 */
    if ((plVar21 != (long *)0x0) &&
       (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      lVar16 = plVar21[2];
                    /* try { // try from 00490824 to 00590837 has its CatchHandler @ 00490a54 */
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
                    /* try { // try from 00490838 to 0059084f has its CatchHandler @ 00490a1c */
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    plVar21 = uStack_a8;
    if ((uStack_a8 != (long *)0x0) &&
       (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 00490860 to 00590873 has its CatchHandler @ 00490a18 */
      (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
                    /* try { // try from 00490874 to 0059088b has its CatchHandler @ 004909e0 */
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
                    /* try { // try from 0049088c to 00590b2f has its CatchHandler @ 00490670 */
    if (local_90 + -3 != (long *)puVar1) {
      plVar21 = local_90 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar19 = (int)*plVar21;
        *(int *)plVar21 = iVar19 + -1;
      }
      else {
        do {
          iVar19 = (int)*plVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = iVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar19 < 1) {
                    /* try { // try from 00491138 to 00591173 has its CatchHandler @ 00491f68 */
        operator_delete(local_90 + -3);
      }
    }
    pGVar12 = *(GUILabel **)(this + 0x278);
    *(undefined4 *)(pGVar12 + 0x130) = 0;
    GUILabel::UpdateBounds(pGVar12);
    pGVar12 = *(GUILabel **)(this + 0x278);
    pFVar13 = (FontLibrary *)FontLibrary::sharedLibrary();
    FontLibrary::SmallDefaultFont(pFVar13);
    if (local_b0 != *(long **)(pGVar12 + 0xf0)) {
      if (uStack_a8 != (long *)0x0) {
        uStack_a8[1] = uStack_a8[1] + 1;
      }
      plVar21 = *(long **)(pGVar12 + 0xf8);
      *(long **)(pGVar12 + 0xf0) = local_b0;
      *(long **)(pGVar12 + 0xf8) = uStack_a8;
      if ((plVar21 != (long *)0x0) &&
         (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0)) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        lVar16 = plVar21[2];
        plVar21[2] = lVar16 + -1;
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar21 + 0x18))(plVar21);
        }
      }
      GUILabel::UpdateText(pGVar12);
    }
    plVar21 = uStack_a8;
    if ((uStack_a8 != (long *)0x0) &&
       (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    pGVar12 = *(GUILabel **)(this + 0x278);
    if ((((pGVar12[0x108] != (GUILabel)0xc8) || (pGVar12[0x109] != (GUILabel)0xc8)) ||
        (pGVar12[0x10a] != (GUILabel)0xc8)) || (pGVar12[0x10b] != (GUILabel)0xc8)) {
      plVar21 = *(long **)(pGVar12 + 0x118);
      *(undefined4 *)(pGVar12 + 0x108) = 0xc8c8c8c8;
      *(undefined8 *)(pGVar12 + 0x110) = 0;
      *(undefined8 *)(pGVar12 + 0x118) = 0;
      if ((plVar21 != (long *)0x0) &&
         (lVar16 = plVar21[1], plVar21[1] = lVar16 + -1, lVar16 + -1 == 0)) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        lVar16 = plVar21[2];
                    /* catch() { ... } // from try @ 00490874 with catch @ 004909e0 */
        plVar21[2] = lVar16 + -1;
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar21 + 0x18))(plVar21);
        }
      }
      GUILabel::UpdateText(pGVar12);
      pGVar12 = *(GUILabel **)(this + 0x278);
    }
    pGVar12[0x140] = (GUILabel)0x1;
    *(undefined4 *)(pGVar12 + 0x141) = 0;
    *(undefined8 *)(pGVar12 + 0x148) = 0;
                    /* catch() { ... } // from try @ 00490860 with catch @ 00490a18 */
                    /* catch() { ... } // from try @ 00490838 with catch @ 00490a1c */
    GUILabel::UpdateText(pGVar12);
    local_b0 = *(long **)(this + 0x278);
    pcVar17 = *(code **)(*(long *)this + 0x60);
    uStack_a8 = *(long **)(this + 0x280);
    if (uStack_a8 != (long *)0x0) {
      uStack_a8[1] = uStack_a8[1] + 1;
    }
    (*pcVar17)(this,&local_b0);
    plVar21 = uStack_a8;
                    /* catch() { ... } // from try @ 00490824 with catch @ 00490a54 */
                    /* catch() { ... } // from try @ 004907fc with catch @ 00490a58 */
    if ((uStack_a8 != (long *)0x0) &&
       (lVar16 = uStack_a8[1], uStack_a8[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*uStack_a8 + 0x10))(uStack_a8);
      lVar16 = plVar21[2];
      plVar21[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
                    /* catch() { ... } // from try @ 004907e8 with catch @ 00490a90 */
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
                    /* catch() { ... } // from try @ 004907c0 with catch @ 00490aa0 */
    if ((local_100 != (long *)0x0) &&
       (iVar19 = (int)local_100[1] + -1, *(int *)(local_100 + 1) = iVar19, iVar19 == 0)) {
      (**(code **)(*local_100 + 8))();
    }
    if ((local_f8 != (long *)0x0) &&
       (iVar19 = (int)local_f8[1] + -1, *(int *)(local_f8 + 1) = iVar19, iVar19 == 0)) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  UpdateAudioControls(this);
  if ((local_e8 != (long *)0x0) &&
     (iVar19 = (int)local_e8[1] + -1, *(int *)(local_e8 + 1) = iVar19, iVar19 == 0)) {
                    /* catch() { ... } // from try @ 004907ac with catch @ 00490b0c */
    (**(code **)(*local_e8 + 8))();
  }
  if ((local_e0 != (long *)0x0) &&
     (iVar19 = (int)local_e0[1] + -1, *(int *)(local_e0 + 1) = iVar19, iVar19 == 0)) {
                    /* try { // try from 00490b30 to 00590c03 has its CatchHandler @ 00490c0c */
    (**(code **)(*local_e0 + 8))();
  }
  if ((local_d0 != (long *)0x0) &&
     (iVar19 = (int)local_d0[1] + -1, *(int *)(local_d0 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_d0 + 8))();
  }
  if ((local_b8 != (long *)0x0) &&
     (iVar19 = (int)local_b8[1] + -1, *(int *)(local_b8 + 1) = iVar19, iVar19 == 0)) {
    (**(code **)(*local_b8 + 8))();
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


