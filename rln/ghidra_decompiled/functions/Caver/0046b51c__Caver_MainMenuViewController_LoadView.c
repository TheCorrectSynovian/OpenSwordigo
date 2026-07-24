/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046b51c
 * Function: Caver::MainMenuViewController::LoadView
 * Signature: undefined __thiscall LoadView(MainMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::LoadView() */

void __thiscall Caver::MainMenuViewController::LoadView(MainMenuViewController *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  MainMenuView *this_00;
  Scene *pSVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined *local_f0;
  long *plStack_e8;
  MainMenuViewController *local_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  long *plStack_b8;
  MainMenuViewController *local_b0;
  undefined1 auStack_a8 [8];
  long local_a0;
  undefined1 auStack_98 [8];
  long local_90;
  Scene *local_88;
  long *local_80;
  undefined *local_70;
  long *plStack_68;
  MainMenuViewController *local_60;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0046b54c to 0056b557 has its CatchHandler @ 0046b6d4 */
  this_00 = operator_new(0x298);
  MainMenuView::MainMenuView(this_00);
                    /* try { // try from 0046b558 to 0056b6f3 has its CatchHandler @ 0046b4e0 */
  boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>
            ((shared_ptr<Caver::MainMenuView> *)&local_70,this_00);
  puVar9 = *(undefined **)(this + 0x70);
  plVar12 = *(long **)(this + 0x78);
  *(undefined **)(this + 0x70) = local_70;
  *(long **)(this + 0x78) = plStack_68;
  local_70 = puVar9;
  plStack_68 = plVar12;
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  pSVar4 = operator_new(0x408);
  Scene::Scene(pSVar4);
  boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>
            ((shared_ptr<Caver::Scene> *)&local_88,pSVar4);
  pSVar4 = local_88;
  FUN_00666bb8(&local_90,"menu",auStack_98);
  FUN_00666bb8(&local_a0,"scene",auStack_a8);
  PathForResourceOfType((string *)&local_90,(string *)&local_a0);
  Scene::LoadFromFile(pSVar4,(string *)&local_70);
  puVar9 = PTR_DAT_007e5de8;
  if (local_70 + -0x18 != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_70 + -0x18);
                    /* try { // try from 0046ba38 to 0056ba3f has its CatchHandler @ 0046bab8 */
    }
  }
  if ((undefined *)(local_a0 + -0x18) != puVar9) {
                    /* try { // try from 0046b9d8 to 0056b9e7 has its CatchHandler @ 0046baec */
    piVar10 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  if ((undefined *)(local_90 + -0x18) != puVar9) {
    piVar10 = (int *)(local_90 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0046ba5c to 0056ba63 has its CatchHandler @ 0046bab4 */
      iVar11 = *piVar10;
                    /* try { // try from 0046ba64 to 0056bae3 has its CatchHandler @ 0046b848 */
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
                    /* try { // try from 0046ba08 to 0056ba0b has its CatchHandler @ 0046bab0 */
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_90 + -0x18));
    }
  }
  SceneView::InitWithScene(*(SceneView **)(*(long *)(this + 0x70) + 0xf8),(shared_ptr *)&local_88);
  Scene::FinishLoad(local_88);
  lVar8 = *(long *)(this + 0x70);
  *(MainMenuViewController **)(lVar8 + 0xf0) = this + 0x50;
  plVar12 = *(long **)(this + 0x78);
  if (plVar12 != (long *)0x0) {
    plVar12[1] = plVar12[1] + 2;
  }
  plVar13 = *(long **)(this + 0x20);
  *(long *)(this + 0x18) = lVar8;
  *(long **)(this + 0x20) = plVar12;
  if ((plVar13 != (long *)0x0) && (lVar8 = plVar13[1], plVar13[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar8 = plVar13[2];
    plVar13[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046b54c with catch @ 0046b6d4
                        */
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  puVar5 = *(undefined8 **)(this + 0x40);
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0046b6f4 to 0056b6fb has its CatchHandler @ 0046b704 */
    (**(code **)*puVar5)(puVar5,this);
  }
                    /* try { // try from 0046b6fc to 0056b707 has its CatchHandler @ 0046b4e0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046b6f4 with catch @ 0046b704
                        */
                    /* catch() { ... } // from try @ 0046b754 with catch @ 0046b708 */
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* try { // try from 0046b72c to 0056b73f has its CatchHandler @ 0046b844 */
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = (long *)OnlineController::SharedController();
                    /* try { // try from 0046b744 to 0056b753 has its CatchHandler @ 0046b7d4 */
  uVar6 = (**(code **)(*plVar12 + 0xf0))();
  if ((uVar6 & 1) != 0) {
                    /* try { // try from 0046b754 to 0056b847 has its CatchHandler @ 0046b708 */
    MainMenuView::SetGoogleSignInVisible(*(MainMenuView **)(this + 0x70),false);
  }
  plVar12 = (long *)OnlineController::SharedController();
  plVar13 = *(long **)(this + 0x10);
  if ((plVar13 == (long *)0x0) || (plVar13[1] == 0)) {
    local_70 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_70);
  }
  else {
    uVar15 = *(undefined8 *)(this + 8);
    pcVar14 = *(code **)(*plVar12 + 0xf8);
    plVar13[1] = plVar13[1] + 2;
    plStack_68 = (long *)0x0;
    local_70 = PTR_GoogleSignInCompletion_007e6448;
    local_60 = this;
    uVar6 = boost::detail::function::has_empty_target(&local_70);
    if ((uVar6 & 1) == 0) {
      local_e0 = local_60;
      plStack_e8 = plStack_68;
      local_f0 = local_70;
      puVar9 = PTR_stored_vtable_007e5578;
    }
    else {
      puVar9 = (undefined *)0x0;
    }
                    /* catch() { ... } // from try @ 0046b744 with catch @ 0046b7d4 */
    plVar13[2] = plVar13[2] + 1;
    local_c8 = (undefined *)0x0;
    local_d8 = uVar15;
    local_d0 = plVar13;
    if (puVar9 != (undefined *)0x0) {
      local_c8 = puVar9;
      if (((ulong)puVar9 & 1) == 0) {
        (**(code **)((ulong)puVar9 & 0xfffffffffffffffe))(&local_f0,&local_c0,0);
      }
      else {
        local_b0 = local_e0;
        plStack_b8 = plStack_e8;
        local_c0 = local_f0;
      }
    }
    (*pcVar14)(plVar12,&local_d8);
    if (local_c8 != (undefined *)0x0) {
                    /* catch() { ... } // from try @ 0046b72c with catch @ 0046b844 */
                    /* catch() { ... } // from try @ 0046ba64 with catch @ 0046b848
                       catch() { ... } // from try @ 0046bb48 with catch @ 0046b848 */
      if ((((ulong)local_c8 & 1) == 0) &&
         (*(code **)((ulong)local_c8 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_c8 & 0xfffffffffffffffe))(&local_c0,&local_c0,2);
      }
      local_c8 = (undefined *)0x0;
    }
    if ((local_d0 != (long *)0x0) &&
       (lVar8 = local_d0[2], local_d0[2] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_d0 + 0x18))();
    }
    if (((puVar9 != (undefined *)0x0) && (((ulong)puVar9 & 1) == 0)) &&
       (*(code **)((ulong)puVar9 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)puVar9 & 0xfffffffffffffffe))(&local_f0,&local_f0,2);
    }
                    /* try { // try from 0046b8bc to 0056b937 has its CatchHandler @ 0046bb20 */
    lVar8 = plVar13[1];
    plVar13[1] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar8 = plVar13[2];
      plVar13[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    lVar8 = plVar13[1];
    plVar13[1] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar8 = plVar13[2];
      plVar13[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
                    /* try { // try from 0046b944 to 0056b96f has its CatchHandler @ 0046bb1c */
    if ((local_80 != (long *)0x0) &&
       (lVar8 = local_80[1], local_80[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_80 + 0x10))(local_80);
      lVar8 = local_80[2];
      local_80[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_80 + 0x18))(local_80);
      }
    }
    if (*(long *)(lVar3 + 0x28) == lVar7) {
                    /* try { // try from 0046b9ac to 0056b9b3 has its CatchHandler @ 0046bb20 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


