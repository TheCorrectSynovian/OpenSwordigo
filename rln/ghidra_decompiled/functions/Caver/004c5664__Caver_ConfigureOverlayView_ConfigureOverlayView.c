/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c5664
 * Function: Caver::ConfigureOverlayView::ConfigureOverlayView
 * Signature: undefined __thiscall ConfigureOverlayView(ConfigureOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ConfigureOverlayView::ConfigureOverlayView() */

void __thiscall Caver::ConfigureOverlayView::ConfigureOverlayView(ConfigureOverlayView *this)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  int iVar10;
  long *plVar11;
  GUIControl *pGVar12;
  long *plVar13;
  undefined *local_a0;
  long *plStack_98;
  undefined8 uStack_90;
  ConfigureOverlayView *local_88;
  undefined1 auStack_78 [8];
  long *local_70;
  undefined8 uStack_68;
  ConfigureOverlayView *local_60;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e5dc8 + 0x168;
  puVar2 = PTR_vtable_007e5dc8 + 0x180;
  *(undefined **)this = PTR_vtable_007e5dc8 + 0x10;
  *(undefined **)(this + 0xf8) = puVar2;
  *(undefined **)(this + 0xf0) = puVar1;
  memset(this + 0x100,0,0x70);
  FUN_00666bb8(&local_70,&DAT_006920d8,auStack_78);
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_70,false);
  if (plStack_98 != (long *)0x0) {
    plStack_98[1] = plStack_98[1] + 1;
  }
  plVar11 = *(long **)(this + 0x110);
  *(undefined **)(this + 0x108) = local_a0;
  *(long **)(this + 0x110) = plStack_98;
  if ((plVar11 != (long *)0x0) && (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  plVar11 = plStack_98;
  if ((plStack_98 != (long *)0x0) &&
     (lVar8 = plStack_98[1], plStack_98[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plStack_98 + 0x10))(plStack_98);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  puVar1 = PTR_DAT_007e5de8;
  if (local_70 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar11 = local_70 + -1;
                    /* try { // try from 004c5afc to 005c5b0b has its CatchHandler @ 004c5c60 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar11;
      *(int *)plVar11 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = (int)*plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
                    /* try { // try from 004c5b4c to 005c5b4f has its CatchHandler @ 004c5c2c */
      operator_delete(local_70 + -3);
    }
  }
  puVar2 = PTR_ButtonPressed_007e7008;
  pGVar12 = *(GUIControl **)(this + 0x108);
  local_a0 = (undefined *)0x0;
  uStack_68 = 0;
  local_70 = (long *)PTR_ButtonPressed_007e7008;
  local_60 = this;
  uVar7 = boost::detail::function::has_empty_target(&local_70);
  if ((uVar7 & 1) == 0) {
    local_88 = local_60;
    uStack_90 = uStack_68;
    plStack_98 = local_70;
    local_a0 = PTR_stored_vtable_007e5fc8;
  }
  else {
    local_a0 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar12,this,&local_a0,0x40);
  if (((local_a0 != (undefined *)0x0) && (((ulong)local_a0 & 1) == 0)) &&
     (*(code **)((ulong)local_a0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a0 & 0xfffffffffffffffe))(&plStack_98,&plStack_98,2);
  }
  plVar11 = _DAT_0068e258;
  puVar6 = _DAT_0068e250;
  plStack_98 = _DAT_0068e258;
  local_a0 = _DAT_0068e250;
  GUIView::SetFrame(*(GUIView **)(this + 0x108),(Rectangle *)&local_a0);
  local_a0 = *(undefined **)(this + 0x108);
  pcVar9 = *(code **)(*(long *)this + 0x60);
  plStack_98 = *(long **)(this + 0x110);
  if (plStack_98 != (long *)0x0) {
    plStack_98[1] = plStack_98[1] + 1;
  }
  (*pcVar9)(this,&local_a0);
  plVar13 = plStack_98;
  if ((plStack_98 != (long *)0x0) &&
     (lVar8 = plStack_98[1], plStack_98[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plStack_98 + 0x10))(plStack_98);
    lVar8 = plVar13[2];
    plVar13[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  FUN_00666bb8(&local_70,"Reset",auStack_78);
  GameInterfaceBuilder::FramedButtonWithTitle((string *)&local_70,false);
  if (plStack_98 != (long *)0x0) {
    plStack_98[1] = plStack_98[1] + 1;
  }
  plVar13 = *(long **)(this + 0x120);
  *(undefined **)(this + 0x118) = local_a0;
  *(long **)(this + 0x120) = plStack_98;
  if ((plVar13 != (long *)0x0) && (lVar8 = plVar13[1], plVar13[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar8 = plVar13[2];
    plVar13[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  plVar13 = plStack_98;
  if ((plStack_98 != (long *)0x0) &&
     (lVar8 = plStack_98[1], plStack_98[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plStack_98 + 0x10))(plStack_98);
    lVar8 = plVar13[2];
                    /* catch() { ... } // from try @ 004c5b70 with catch @ 004c5980
                       catch() { ... } // from try @ 004c5c5c with catch @ 004c5980
                       catch() { ... } // from try @ 004c5db0 with catch @ 004c5980 */
    plVar13[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if (local_70 + -3 != (long *)puVar1) {
    plVar13 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = (int)*plVar13;
      *(int *)plVar13 = iVar10 + -1;
    }
    else {
      do {
                    /* try { // try from 004c5b24 to 005c5b2b has its CatchHandler @ 004c5c30 */
        iVar10 = (int)*plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 004c5b68 to 005c5b6f has its CatchHandler @ 004c5ce4 */
    if (iVar10 < 1) {
                    /* try { // try from 004c5b70 to 005c5c53 has its CatchHandler @ 004c5980 */
      operator_delete(local_70 + -3);
    }
  }
  pGVar12 = *(GUIControl **)(this + 0x118);
  local_a0 = (undefined *)0x0;
  uStack_68 = 0;
  local_70 = (long *)puVar2;
  local_60 = this;
  uVar7 = boost::detail::function::has_empty_target(&local_70);
  if ((uVar7 & 1) == 0) {
                    /* try { // try from 004c59e0 to 005c59f3 has its CatchHandler @ 004c5d64 */
    local_88 = local_60;
    uStack_90 = uStack_68;
    plStack_98 = local_70;
    local_a0 = PTR_stored_vtable_007e5fc8;
  }
  else {
    local_a0 = (undefined *)0x0;
  }
                    /* try { // try from 004c59f4 to 005c5a07 has its CatchHandler @ 004c5cf4 */
  GUIControl::AddTargetActionForControlEvent(pGVar12,this,&local_a0,0x40);
  if (((local_a0 != (undefined *)0x0) && (((ulong)local_a0 & 1) == 0)) &&
     (*(code **)((ulong)local_a0 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* try { // try from 004c5a28 to 005c5a33 has its CatchHandler @ 004c5ce4 */
    (**(code **)((ulong)local_a0 & 0xfffffffffffffffe))(&plStack_98,&plStack_98,2);
  }
  plStack_98 = plVar11;
  local_a0 = puVar6;
                    /* try { // try from 004c5a48 to 005c5a5b has its CatchHandler @ 004c5cc8 */
  GUIView::SetFrame(*(GUIView **)(this + 0x118),(Rectangle *)&local_a0);
  local_a0 = *(undefined **)(this + 0x118);
  pcVar9 = *(code **)(*(long *)this + 0x60);
                    /* try { // try from 004c5a5c to 005c5a67 has its CatchHandler @ 004c5c64 */
  plStack_98 = *(long **)(this + 0x120);
  if (plStack_98 != (long *)0x0) {
    plStack_98[1] = plStack_98[1] + 1;
  }
                    /* try { // try from 004c5a7c to 005c5afb has its CatchHandler @ 004c5d68 */
  (*pcVar9)(this,&local_a0);
  plVar11 = plStack_98;
  if ((plStack_98 != (long *)0x0) &&
     (lVar8 = plStack_98[1], plStack_98[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plStack_98 + 0x10))(plStack_98);
    lVar8 = plVar11[2];
    plVar11[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


