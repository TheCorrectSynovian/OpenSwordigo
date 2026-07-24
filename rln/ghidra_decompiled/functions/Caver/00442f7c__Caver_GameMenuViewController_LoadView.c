/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00442f7c
 * Function: Caver::GameMenuViewController::LoadView
 * Signature: undefined __thiscall LoadView(GameMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::LoadView() */

void __thiscall Caver::GameMenuViewController::LoadView(GameMenuViewController *this)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  TabbedMenuView *pTVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  undefined1 auStack_68 [8];
  long local_60;
  long *local_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pTVar6 = operator_new(0x188);
  TabbedMenuView::TabbedMenuView(pTVar6);
  boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>
            ((shared_ptr<Caver::TabbedMenuView> *)&local_60,pTVar6);
  lVar9 = *(long *)(this + 0x98);
  plVar7 = *(long **)(this + 0xa0);
  *(long *)(this + 0x98) = local_60;
  *(long **)(this + 0xa0) = local_58;
  local_60 = lVar9;
  local_58 = plVar7;
  if ((plVar7 != (long *)0x0) && (lVar9 = plVar7[1], plVar7[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 00442ff4 to 0054301b has its CatchHandler @ 004430e0 */
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar9 = plVar7[2];
    plVar7[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
                    /* try { // try from 0044301c to 00543103 has its CatchHandler @ 00442e98 */
  pTVar6 = *(TabbedMenuView **)(this + 0x98);
  if (*(int *)(pTVar6 + 0x70) != 0x12) {
    plVar7 = *(long **)(pTVar6 + 0x58);
    *(undefined4 *)(pTVar6 + 0x70) = 0x12;
    if ((plVar7 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar7 + 0x8c))) {
      (**(code **)(*plVar7 + 0x58))();
      pTVar6 = *(TabbedMenuView **)(this + 0x98);
    }
  }
  *(GameMenuViewController **)(pTVar6 + 0xf8) = this + 0x58;
  FUN_00666bb8(&local_60,"close",auStack_68);
  TabbedMenuView::AddTab(pTVar6,(string *)&local_60);
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  pTVar6 = *(TabbedMenuView **)(this + 0x98);
  FUN_00666bb8(&local_60,"settings",auStack_68);
  TabbedMenuView::AddTab(pTVar6,(string *)&local_60);
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar10 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  pTVar6 = *(TabbedMenuView **)(this + 0x98);
                    /* catch() { ... } // from try @ 00442ff4 with catch @ 004430e0 */
  FUN_00666bb8(&local_60,"quests",auStack_68);
  TabbedMenuView::AddTab(pTVar6,(string *)&local_60);
                    /* try { // try from 00443104 to 0054312b has its CatchHandler @ 00443130 */
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar10 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
                    /* catch() { ... } // from try @ 00443410 with catch @ 00443380 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  pTVar6 = *(TabbedMenuView **)(this + 0x98);
  FUN_00666bb8(&local_60,&DAT_00691f83,auStack_68);
  TabbedMenuView::AddTab(pTVar6,(string *)&local_60);
                    /* catch() { ... } // from try @ 00443104 with catch @ 00443130 */
                    /* catch() { ... } // from try @ 00442ee8 with catch @ 00443134 */
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar10 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  pTVar6 = *(TabbedMenuView **)(this + 0x98);
                    /* catch() { ... } // from try @ 00442ef8 with catch @ 00443144 */
  FUN_00666bb8(&local_60,"inventory",auStack_68);
  TabbedMenuView::AddTab(pTVar6,(string *)&local_60);
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar10 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
                    /* catch() { ... } // from try @ 004433d4 with catch @ 004434a8 */
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  pTVar6 = *(TabbedMenuView **)(this + 0x98);
  FUN_00666bb8(&local_60,&DAT_0068e4f6,auStack_68);
  TabbedMenuView::AddTab(pTVar6,(string *)&local_60);
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar10 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  pTVar6 = *(TabbedMenuView **)(this + 0x98);
  lVar9 = *(long *)(*(long *)(this + 0x88) + 0x80);
  plVar7 = *(long **)(*(long *)(this + 0x88) + 0x88);
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 004431b4 to 005431db has its CatchHandler @ 00443250 */
    plVar7[1] = plVar7[1] + 1;
  }
  FUN_0066a528(&local_60,lVar9 + 400);
  TabbedMenuView::SetSelectedTab(pTVar6,(string *)&local_60);
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar10 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
                    /* try { // try from 00443410 to 0054350f has its CatchHandler @ 00443380 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  if ((plVar7 != (long *)0x0) && (lVar9 = plVar7[1], plVar7[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 004431fc to 00543223 has its CatchHandler @ 00443244 */
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar9 = plVar7[2];
    plVar7[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* try { // try from 00443224 to 00543273 has its CatchHandler @ 00442e98 */
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  (**(code **)(*(long *)this + 0x58))(this,*(undefined8 *)(this + 0x98));
  uVar1 = *(undefined8 *)(this + 0x98);
  plVar7 = *(long **)(this + 0xa0);
                    /* catch() { ... } // from try @ 004431fc with catch @ 00443244 */
  if (plVar7 != (long *)0x0) {
                    /* catch() { ... } // from try @ 004431b4 with catch @ 00443250 */
    plVar7[1] = plVar7[1] + 2;
  }
  plVar12 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(long **)(this + 0x20) = plVar7;
  if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* try { // try from 00443274 to 0054329b has its CatchHandler @ 004432a4 */
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar9 = plVar12[2];
    plVar12[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  puVar8 = *(undefined8 **)(this + 0x40);
                    /* catch() { ... } // from try @ 00443274 with catch @ 004432a4 */
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,this);
  }
  if ((plVar7 != (long *)0x0) && (lVar9 = plVar7[1], plVar7[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar9 = plVar7[2];
    plVar7[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


