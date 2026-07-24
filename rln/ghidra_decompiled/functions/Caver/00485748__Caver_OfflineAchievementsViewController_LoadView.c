/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00485748
 * Function: Caver::OfflineAchievementsViewController::LoadView
 * Signature: undefined __thiscall LoadView(OfflineAchievementsViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsViewController::LoadView() */

void __thiscall
Caver::OfflineAchievementsViewController::LoadView(OfflineAchievementsViewController *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  OfflineAchievementsView *this_00;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  GUIControl *pGVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined *local_c8;
  long *plStack_c0;
  OfflineAchievementsViewController *local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined *local_a0;
  undefined *local_98;
  long *plStack_90;
  OfflineAchievementsViewController *local_88;
  undefined *local_80;
  long *plStack_78;
  OfflineAchievementsViewController *local_70;
  OfflineAchievementsViewController *local_68;
  long *local_60;
  OfflineAchievementsViewController *pOStack_58;
  OfflineAchievementsViewController *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00485728 with catch @ 00485778 */
  if ((*(long *)(this + 0x48) == 0) &&
     (lVar2 = ProfileManager::sharedManager(), *(char *)(lVar2 + 0x78) == '\0')) {
    plVar3 = (long *)ProfileManager::sharedManager();
    (**(code **)(*plVar3 + 0x18))(plVar3,0);
  }
  this_00 = operator_new(0x168);
  OfflineAchievementsView::OfflineAchievementsView(this_00,(shared_ptr *)(this + 0x48));
  boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>
            ((shared_ptr<Caver::OfflineAchievementsView> *)&local_80,this_00);
  puVar6 = *(undefined **)(this + 0x58);
  plVar3 = *(long **)(this + 0x60);
  *(undefined **)(this + 0x58) = local_80;
  *(long **)(this + 0x60) = plStack_78;
  local_80 = puVar6;
  plStack_78 = plVar3;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 0048583c with catch @ 0048580c */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  lVar2 = *(long *)(this + 0x58);
  if (*(int *)(lVar2 + 0x70) != 0x12) {
                    /* try { // try from 00485828 to 0058583b has its CatchHandler @ 00485860 */
    plVar3 = *(long **)(lVar2 + 0x58);
    *(undefined4 *)(lVar2 + 0x70) = 0x12;
                    /* try { // try from 0048583c to 00585863 has its CatchHandler @ 0048580c */
    if ((plVar3 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar3 + 0x8c))) {
      (**(code **)(*plVar3 + 0x58))();
      lVar2 = *(long *)(this + 0x58);
    }
  }
  puVar6 = PTR_ButtonPressed_007e6b90;
  pGVar7 = *(GUIControl **)(lVar2 + 0xf0);
                    /* catch() { ... } // from try @ 00485828 with catch @ 00485860 */
  local_80 = (undefined *)0x0;
  pOStack_58 = (OfflineAchievementsViewController *)0x0;
  local_60 = (long *)PTR_ButtonPressed_007e6b90;
  local_50 = this;
  uVar4 = boost::detail::function::has_empty_target(&local_60);
  if ((uVar4 & 1) == 0) {
    local_68 = local_50;
    local_70 = pOStack_58;
    plStack_78 = local_60;
    local_80 = PTR_stored_vtable_007e4de8;
  }
  else {
    local_80 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar7,this,&local_80,0x40);
  if (local_80 != (undefined *)0x0) {
    if ((((ulong)local_80 & 1) == 0) &&
       (*(code **)((ulong)local_80 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_80 & 0xfffffffffffffffe))(&plStack_78,&plStack_78,2);
    }
    local_80 = (undefined *)0x0;
  }
  lVar2 = *(long *)(this + 0x58);
  pGVar7 = *(GUIControl **)(lVar2 + 0x148);
  if (pGVar7 != (GUIControl *)0x0) {
    local_80 = (undefined *)0x0;
    pOStack_58 = (OfflineAchievementsViewController *)0x0;
    local_60 = (long *)puVar6;
    local_50 = this;
    uVar4 = boost::detail::function::has_empty_target(&local_60);
    if ((uVar4 & 1) == 0) {
      local_68 = local_50;
      local_70 = pOStack_58;
      plStack_78 = local_60;
      local_80 = PTR_stored_vtable_007e4de8;
    }
    else {
      local_80 = (undefined *)0x0;
    }
    GUIControl::AddTargetActionForControlEvent(pGVar7,this,&local_80,0x40);
    if (local_80 != (undefined *)0x0) {
      if ((((ulong)local_80 & 1) == 0) &&
         (*(code **)((ulong)local_80 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_80 & 0xfffffffffffffffe))(&plStack_78,&plStack_78,2);
      }
      local_80 = (undefined *)0x0;
    }
    lVar2 = *(long *)(this + 0x58);
  }
  pGVar7 = *(GUIControl **)(lVar2 + 0x158);
                    /* try { // try from 0048598c to 005859f7 has its CatchHandler @ 0048598c
                       catch() { ... } // from try @ 0048598c with catch @ 0048598c
                       catch() { ... } // from try @ 004859fc with catch @ 0048598c */
  if (pGVar7 != (GUIControl *)0x0) {
    local_80 = (undefined *)0x0;
    pOStack_58 = (OfflineAchievementsViewController *)0x0;
    local_60 = (long *)puVar6;
    local_50 = this;
    uVar4 = boost::detail::function::has_empty_target(&local_60);
    if ((uVar4 & 1) == 0) {
      local_68 = local_50;
      local_70 = pOStack_58;
      plStack_78 = local_60;
      local_80 = PTR_stored_vtable_007e4de8;
    }
    else {
      local_80 = (undefined *)0x0;
    }
    GUIControl::AddTargetActionForControlEvent(pGVar7,this,&local_80,0x40);
    if (local_80 != (undefined *)0x0) {
                    /* try { // try from 004859f8 to 005859fb has its CatchHandler @ 00485a18 */
                    /* try { // try from 004859fc to 00585a2b has its CatchHandler @ 0048598c */
      if ((((ulong)local_80 & 1) == 0) &&
         (*(code **)((ulong)local_80 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_80 & 0xfffffffffffffffe))(&plStack_78,&plStack_78,2);
      }
      local_80 = (undefined *)0x0;
    }
                    /* catch() { ... } // from try @ 004859f8 with catch @ 00485a18 */
    lVar2 = *(long *)(this + 0x58);
  }
  plVar3 = *(long **)(this + 0x60);
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 00485a2c to 00585a57 has its CatchHandler @ 00485a2c
                       catch() { ... } // from try @ 00485a2c with catch @ 00485a2c
                       catch() { ... } // from try @ 00485aec with catch @ 00485a2c */
    plVar3[1] = plVar3[1] + 2;
  }
  plVar8 = *(long **)(this + 0x20);
  *(long *)(this + 0x18) = lVar2;
  *(long **)(this + 0x20) = plVar3;
  if ((plVar8 != (long *)0x0) && (lVar2 = plVar8[1], plVar8[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 00485a58 to 00585a6b has its CatchHandler @ 00485c98 */
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar2 = plVar8[2];
    plVar8[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
                    /* try { // try from 00485a7c to 00585a87 has its CatchHandler @ 00485c2c */
  puVar5 = *(undefined8 **)(this + 0x40);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,this);
  }
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 00485ab0 to 00585aeb has its CatchHandler @ 00485bc8 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = (long *)OnlineController::SharedController();
  plVar8 = *(long **)(this + 0x10);
                    /* try { // try from 00485aec to 00585c9b has its CatchHandler @ 00485a2c */
  if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
    local_80 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_80);
  }
  else {
    uVar10 = *(undefined8 *)(this + 8);
    pcVar9 = *(code **)(*plVar3 + 0xf8);
    plVar8[1] = plVar8[1] + 2;
    plStack_78 = (long *)0x0;
    local_80 = PTR_GoogleSignInHandler_007e67e8;
    local_70 = this;
    uVar4 = boost::detail::function::has_empty_target(&local_80);
    if ((uVar4 & 1) == 0) {
      local_b8 = local_70;
      plStack_c0 = plStack_78;
      local_c8 = local_80;
      puVar6 = PTR_stored_vtable_007e5608;
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    plVar8[2] = plVar8[2] + 1;
    local_a0 = (undefined *)0x0;
    local_b0 = uVar10;
    local_a8 = plVar8;
    if (puVar6 != (undefined *)0x0) {
      local_a0 = puVar6;
      if (((ulong)puVar6 & 1) == 0) {
        (**(code **)((ulong)puVar6 & 0xfffffffffffffffe))(&local_c8,&local_98,0);
      }
      else {
        local_88 = local_b8;
        plStack_90 = plStack_c0;
        local_98 = local_c8;
      }
    }
    (*pcVar9)(plVar3,&local_b0);
    if (local_a0 != (undefined *)0x0) {
      if ((((ulong)local_a0 & 1) == 0) &&
         (*(code **)((ulong)local_a0 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 00485ab0 with catch @ 00485bc8 */
        (**(code **)((ulong)local_a0 & 0xfffffffffffffffe))(&local_98,&local_98,2);
      }
      local_a0 = (undefined *)0x0;
    }
    if ((local_a8 != (long *)0x0) &&
       (lVar2 = local_a8[2], local_a8[2] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_a8 + 0x18))();
    }
    if (((puVar6 != (undefined *)0x0) && (((ulong)puVar6 & 1) == 0)) &&
       (*(code **)((ulong)puVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* catch() { ... } // from try @ 00485a7c with catch @ 00485c2c */
      (**(code **)((ulong)puVar6 & 0xfffffffffffffffe))(&local_c8,&local_c8,2);
    }
    lVar2 = plVar8[1];
    plVar8[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar2 = plVar8[2];
      plVar8[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    lVar2 = plVar8[1];
    plVar8[1] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar2 = plVar8[2];
                    /* catch() { ... } // from try @ 00485a58 with catch @ 00485c98 */
      plVar8[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


