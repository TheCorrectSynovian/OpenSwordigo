/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00495fd8
 * Function: Caver::OnlineMenuView::OnlineMenuView
 * Signature: undefined __thiscall OnlineMenuView(OnlineMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OnlineMenuView::OnlineMenuView() */

void __thiscall Caver::OnlineMenuView::OnlineMenuView(OnlineMenuView *this)

{
  OnlineMenuView *pOVar1;
  OnlineMenuView *pOVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  OnlineMenuView **ppOVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  GUIView *this_00;
  string *psVar10;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  OnlineMenuView *pOVar14;
  undefined8 *puVar15;
  int iVar16;
  OnlineMenuView *pOVar17;
  OnlineMenuView **ppOVar18;
  ulong uVar19;
  OnlineMenuView **ppOVar20;
  OnlineMenuView *pOVar21;
  ulong uVar22;
  vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
  *__s;
  long *plVar23;
  GUIControl *pGVar24;
  GUIButton *pGVar25;
  OnlineMenuView *pOVar26;
  OnlineMenuView *pOVar27;
  OnlineMenuView *pOVar28;
  undefined1 auStack_c8 [8];
  long *local_c0;
  OnlineMenuView *pOStack_b8;
  OnlineMenuView *local_b0;
  OnlineMenuView *local_a0;
  undefined8 uStack_98;
  OnlineMenuView *apOStack_90 [5];
  undefined8 uStack_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  GUIView::GUIView((GUIView *)this);
  __s = (vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
         *)(this + 0xf0);
  *(undefined **)this = PTR_vtable_007e7fd8 + 0x10;
                    /* try { // try from 00496028 to 00596077 has its CatchHandler @ 00496108 */
  memset(__s,0,0x58);
  FUN_00666bb8(&local_c0,"Achievements",auStack_c8);
  GameInterfaceBuilder::MainMenuButtonWithTitle((GameInterfaceBuilder *)&local_c0,extraout_x1);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  plVar23 = *(long **)(this + 0x110);
  *(OnlineMenuView **)(this + 0x108) = local_a0;
  *(long **)(this + 0x110) = uStack_98;
  if ((plVar23 != (long *)0x0) && (lVar12 = plVar23[1], plVar23[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar12 = plVar23[2];
    plVar23[2] = lVar12 + -1;
                    /* try { // try from 00496098 to 0059609b has its CatchHandler @ 004960f0 */
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  plVar23 = uStack_98;
                    /* try { // try from 004960bc to 005960bf has its CatchHandler @ 004960ec */
                    /* try { // try from 004960c0 to 0059612b has its CatchHandler @ 00495e40 */
  if ((uStack_98 != (long *)0x0) &&
     (lVar12 = uStack_98[1], uStack_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar12 = plVar23[2];
    plVar23[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* catch() { ... } // from try @ 004960bc with catch @ 004960ec */
                    /* catch() { ... } // from try @ 00496098 with catch @ 004960f0 */
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  puVar7 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 00495fb4 with catch @ 00496104 */
                    /* catch() { ... } // from try @ 00496028 with catch @ 00496108 */
  if (local_c0 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar23 = local_c0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = (int)*plVar23;
      *(int *)plVar23 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = (int)*plVar23;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete(local_c0 + -3);
    }
  }
  puVar8 = PTR_ButtonPressed_007e6f38;
  pGVar24 = *(GUIControl **)(this + 0x108);
  local_a0 = (OnlineMenuView *)0x0;
                    /* try { // try from 0049612c to 005961c3 has its CatchHandler @ 004961d8 */
  pOStack_b8 = (OnlineMenuView *)0x0;
  local_c0 = (long *)PTR_ButtonPressed_007e6f38;
  local_b0 = this;
  uVar9 = boost::detail::function::has_empty_target(&local_c0);
  if ((uVar9 & 1) == 0) {
    apOStack_90[1] = local_b0;
    apOStack_90[0] = pOStack_b8;
    uStack_98 = local_c0;
    local_a0 = (OnlineMenuView *)PTR_stored_vtable_007e7788;
  }
  else {
    local_a0 = (OnlineMenuView *)0x0;
  }
                    /* catch() { ... } // from try @ 00495fd0 with catch @ 0049615c */
                    /* catch() { ... } // from try @ 00495f14 with catch @ 00496164 */
  GUIControl::AddTargetActionForControlEvent(pGVar24,this,&local_a0,0x40);
  if (((local_a0 != (OnlineMenuView *)0x0) && (((ulong)local_a0 & 1) == 0)) &&
     (*(code **)((ulong)local_a0 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 00495e84 with catch @ 00496194 */
    (**(code **)((ulong)local_a0 & 0xfffffffffffffffe))(&uStack_98,&uStack_98,2);
  }
  local_a0 = *(OnlineMenuView **)(this + 0x108);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  uStack_98 = *(long **)(this + 0x110);
  if (uStack_98 != (long *)0x0) {
                    /* try { // try from 004961c4 to 005961db has its CatchHandler @ 00495e40 */
    uStack_98[1] = uStack_98[1] + 1;
  }
  (*pcVar13)(this,&local_a0);
  plVar23 = uStack_98;
                    /* catch() { ... } // from try @ 0049612c with catch @ 004961d8 */
  if ((uStack_98 != (long *)0x0) &&
     (lVar12 = uStack_98[1], uStack_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar12 = plVar23[2];
    plVar23[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  FUN_00666bb8(&local_c0,"Leaderboards",auStack_c8);
  GameInterfaceBuilder::MainMenuButtonWithTitle((GameInterfaceBuilder *)&local_c0,extraout_x1_00);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  plVar23 = *(long **)(this + 0x120);
  *(OnlineMenuView **)(this + 0x118) = local_a0;
  *(long **)(this + 0x120) = uStack_98;
  if ((plVar23 != (long *)0x0) && (lVar12 = plVar23[1], plVar23[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar12 = plVar23[2];
    plVar23[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  plVar23 = uStack_98;
  if ((uStack_98 != (long *)0x0) &&
     (lVar12 = uStack_98[1], uStack_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar12 = plVar23[2];
    plVar23[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
                    /* try { // try from 004962ec to 005963bf has its CatchHandler @ 004962ec
                       catch(type#1 @ 00000000) { ... } // from try @ 004962ec with catch @ 004962ec
                       catch(type#1 @ 00000000) { ... } // from try @ 004963c8 with catch @ 004962ec
                       catch(type#1 @ 00000000) { ... } // from try @ 004969e4 with catch @ 004962ec
                        */
  if (local_c0 + -3 != (long *)puVar7) {
    plVar23 = local_c0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = (int)*plVar23;
      *(int *)plVar23 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = (int)*plVar23;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004963c0 with catch @ 004969bc
                        */
      operator_delete(local_c0 + -3);
    }
  }
  pGVar24 = *(GUIControl **)(this + 0x118);
  local_a0 = (OnlineMenuView *)0x0;
  pOStack_b8 = (OnlineMenuView *)0x0;
  local_c0 = (long *)puVar8;
  local_b0 = this;
  uVar9 = boost::detail::function::has_empty_target(&local_c0);
  if ((uVar9 & 1) == 0) {
    apOStack_90[1] = local_b0;
    apOStack_90[0] = pOStack_b8;
    uStack_98 = local_c0;
    local_a0 = (OnlineMenuView *)PTR_stored_vtable_007e7788;
  }
  else {
    local_a0 = (OnlineMenuView *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar24,this,&local_a0,0x40);
  if (((local_a0 != (OnlineMenuView *)0x0) && (((ulong)local_a0 & 1) == 0)) &&
     (*(code **)((ulong)local_a0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a0 & 0xfffffffffffffffe))(&uStack_98,&uStack_98,2);
  }
  local_a0 = *(OnlineMenuView **)(this + 0x118);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  uStack_98 = *(long **)(this + 0x120);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  (*pcVar13)(this,&local_a0);
  plVar23 = uStack_98;
                    /* try { // try from 004963c0 to 005963c7 has its CatchHandler @ 004969bc */
                    /* try { // try from 004963c8 to 005969db has its CatchHandler @ 004962ec */
  if ((uStack_98 != (long *)0x0) &&
     (lVar12 = uStack_98[1], uStack_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar12 = plVar23[2];
    plVar23[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  FUN_00666bb8(&local_c0,&DAT_0068fbeb,auStack_c8);
  GameInterfaceBuilder::MainMenuButtonWithTitle((GameInterfaceBuilder *)&local_c0,extraout_x1_01);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  plVar23 = *(long **)(this + 0x140);
  *(OnlineMenuView **)(this + 0x138) = local_a0;
  *(long **)(this + 0x140) = uStack_98;
  if ((plVar23 != (long *)0x0) && (lVar12 = plVar23[1], plVar23[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    lVar12 = plVar23[2];
    plVar23[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  plVar23 = uStack_98;
  if ((uStack_98 != (long *)0x0) &&
     (lVar12 = uStack_98[1], uStack_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar12 = plVar23[2];
    plVar23[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  if (local_c0 + -3 != (long *)puVar7) {
    plVar23 = local_c0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = (int)*plVar23;
      *(int *)plVar23 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = (int)*plVar23;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
                    /* try { // try from 004969dc to 005969e3 has its CatchHandler @ 004969ec */
      operator_delete(local_c0 + -3);
                    /* try { // try from 004969e4 to 005969ef has its CatchHandler @ 004962ec */
    }
  }
  pGVar24 = *(GUIControl **)(this + 0x138);
  local_a0 = (OnlineMenuView *)0x0;
  pOStack_b8 = (OnlineMenuView *)0x0;
  local_c0 = (long *)puVar8;
  local_b0 = this;
  uVar9 = boost::detail::function::has_empty_target(&local_c0);
  if ((uVar9 & 1) == 0) {
    apOStack_90[1] = local_b0;
    apOStack_90[0] = pOStack_b8;
    uStack_98 = local_c0;
    local_a0 = (OnlineMenuView *)PTR_stored_vtable_007e7788;
  }
  else {
    local_a0 = (OnlineMenuView *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar24,this,&local_a0,0x40);
  if (((local_a0 != (OnlineMenuView *)0x0) && (((ulong)local_a0 & 1) == 0)) &&
     (*(code **)((ulong)local_a0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a0 & 0xfffffffffffffffe))(&uStack_98,&uStack_98,2);
  }
  pOVar1 = this + 0x138;
  this_00 = *(GUIView **)pOVar1;
  local_a0 = *(OnlineMenuView **)(this_00 + 0x74);
  uStack_98 = (long *)CONCAT44(*(undefined4 *)(this_00 + 0x80),*(float *)(this_00 + 0x7c) + 15.0);
  GUIView::SetFrame(this_00,(Rectangle *)&local_a0);
  pGVar25 = *(GUIButton **)pOVar1;
  psVar10 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_c0,"ui_button_arrow",auStack_c8);
  TextureLibrary::TextureForName(psVar10,SUB81(&local_c0,0));
  GUIButton::SetImage(pGVar25,(intrusive_ptr *)&local_a0);
  if ((local_a0 != (OnlineMenuView *)0x0) &&
     (iVar16 = *(int *)(local_a0 + 8), *(int *)(local_a0 + 8) = iVar16 + -1, iVar16 + -1 == 0)) {
    (**(code **)(*(long *)local_a0 + 8))();
  }
  if (local_c0 + -3 != (long *)puVar7) {
    plVar23 = local_c0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = (int)*plVar23;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004969dc with catch @ 004969ec
                        */
      *(int *)plVar23 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = (int)*plVar23;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete(local_c0 + -3);
    }
  }
  pGVar25 = *(GUIButton **)pOVar1;
  psVar10 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_c0,"ui_button_arrow_pressed",auStack_c8);
  TextureLibrary::TextureForName(psVar10,SUB81(&local_c0,0));
  GUIButton::SetHighlightedImage(pGVar25,(intrusive_ptr *)&local_a0);
  if ((local_a0 != (OnlineMenuView *)0x0) &&
     (iVar16 = *(int *)(local_a0 + 8), *(int *)(local_a0 + 8) = iVar16 + -1, iVar16 + -1 == 0)) {
    (**(code **)(*(long *)local_a0 + 8))();
  }
  if (local_c0 + -3 != (long *)puVar7) {
    plVar23 = local_c0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = (int)*plVar23;
      *(int *)plVar23 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = (int)*plVar23;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete(local_c0 + -3);
    }
  }
  pOVar14 = *(OnlineMenuView **)pOVar1;
  uStack_98 = (long *)_UNK_0068ebd8;
  local_a0 = _DAT_0068ebd0;
  apOStack_90[1] = (OnlineMenuView *)_UNK_0068ebe8;
  apOStack_90[0] = _DAT_0068ebe0;
  apOStack_90[3] = (OnlineMenuView *)_UNK_0068ebf8;
  apOStack_90[2] = (OnlineMenuView *)_DAT_0068ebf0;
  pOVar2 = pOVar14 + 0x198;
  pOVar21 = pOVar2;
  if (pOVar2 <= pOVar14 + 0x15c) {
    pOVar21 = pOVar14 + 0x15c;
  }
  uVar9 = ((ulong)(pOVar21 + (-0x159 - (long)pOVar14)) >> 2) + 1;
  uStack_68 = _UNK_00683808;
  apOStack_90[4] = (OnlineMenuView *)_DAT_00683800;
  if (uVar9 < 8) {
    pOVar17 = pOVar14 + 0x158;
    ppOVar18 = &local_a0;
LAB_00496724:
    do {
      pOVar21 = pOVar17 + 4;
      *(undefined4 *)pOVar17 = *(undefined4 *)ppOVar18;
      pOVar17 = pOVar21;
      ppOVar18 = (OnlineMenuView **)((long)ppOVar18 + 4);
    } while (pOVar21 < pOVar2);
  }
  else {
    uVar19 = uVar9 & 0x7ffffffffffffff8;
    ppOVar18 = (OnlineMenuView **)((long)&local_a0 + uVar19 * 4);
    pOVar21 = pOVar14 + 0x168;
    pOVar17 = pOVar14 + uVar19 * 4 + 0x158;
    ppOVar20 = apOStack_90;
    uVar22 = uVar19;
    do {
      ppOVar6 = ppOVar20 + -1;
      pOVar26 = ppOVar20[-2];
      pOVar28 = ppOVar20[1];
      pOVar27 = *ppOVar20;
      uVar22 = uVar22 - 8;
      ppOVar20 = ppOVar20 + 4;
      *(OnlineMenuView **)(pOVar21 + -8) = *ppOVar6;
      *(OnlineMenuView **)(pOVar21 + -0x10) = pOVar26;
      *(OnlineMenuView **)(pOVar21 + 8) = pOVar28;
      *(OnlineMenuView **)pOVar21 = pOVar27;
      pOVar21 = pOVar21 + 0x20;
    } while (uVar22 != 0);
    if (uVar9 != uVar19) goto LAB_00496724;
  }
  pcVar13 = *(code **)(*(long *)this + 0x60);
  uStack_98 = *(long **)(this + 0x140);
  if (uStack_98 != (long *)0x0) {
    uStack_98[1] = uStack_98[1] + 1;
  }
  local_a0 = pOVar14;
  (*pcVar13)(this,&local_a0);
  plVar23 = uStack_98;
  if ((uStack_98 != (long *)0x0) &&
     (lVar12 = uStack_98[1], uStack_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*uStack_98 + 0x10))(uStack_98);
    lVar12 = plVar23[2];
    plVar23[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  puVar15 = *(undefined8 **)(this + 0xf8);
  puVar11 = *(undefined8 **)(this + 0x100);
  if (puVar15 == puVar11) {
    std::
    vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
    ::_M_insert_aux(__s,puVar15,this + 0x108);
    puVar15 = *(undefined8 **)(this + 0xf8);
    puVar11 = *(undefined8 **)(this + 0x100);
    if (puVar15 != puVar11) goto LAB_004967e8;
LAB_00496860:
    std::
    vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
    ::_M_insert_aux(__s,puVar11,this + 0x118);
    puVar15 = *(undefined8 **)(this + 0xf8);
    puVar11 = *(undefined8 **)(this + 0x100);
    if (puVar15 == puVar11) {
LAB_00496878:
      std::
      vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
      ::_M_insert_aux(__s,puVar11,pOVar1);
      goto LAB_00496884;
    }
  }
  else {
    *puVar15 = *(undefined8 *)(this + 0x108);
    lVar12 = *(long *)(this + 0x110);
    puVar15[1] = lVar12;
    if (lVar12 != 0) {
      *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
    }
    puVar15 = puVar15 + 2;
    *(undefined8 **)(this + 0xf8) = puVar15;
    if (puVar15 == puVar11) goto LAB_00496860;
LAB_004967e8:
    *puVar15 = *(undefined8 *)(this + 0x118);
    lVar12 = *(long *)(this + 0x120);
    puVar15[1] = lVar12;
    if (lVar12 != 0) {
      *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
    }
    puVar15 = puVar15 + 2;
    *(undefined8 **)(this + 0xf8) = puVar15;
    if (puVar15 == puVar11) goto LAB_00496878;
  }
  *puVar15 = *(undefined8 *)(this + 0x138);
  lVar12 = *(long *)(this + 0x140);
  puVar15[1] = lVar12;
  if (lVar12 != 0) {
    *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
  }
  *(undefined8 **)(this + 0xf8) = puVar15 + 2;
LAB_00496884:
  local_a0 = *(OnlineMenuView **)(this + 0x74);
  uStack_98 = (long *)CONCAT44(0x42c80000,*(undefined4 *)(*(long *)(this + 0x118) + 0x7c));
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_a0);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


