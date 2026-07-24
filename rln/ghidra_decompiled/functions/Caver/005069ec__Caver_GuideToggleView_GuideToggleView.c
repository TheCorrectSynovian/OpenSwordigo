/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005069ec
 * Function: Caver::GuideToggleView::GuideToggleView
 * Signature: undefined __thiscall GuideToggleView(GuideToggleView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuideToggleView::GuideToggleView() */

void __thiscall Caver::GuideToggleView::GuideToggleView(GuideToggleView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  GUILabel *this_00;
  GameInterfaceBuilder *this_01;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  GUIControl *pGVar10;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  GuideToggleView *local_80;
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined1 auStack_68 [8];
  long *local_60;
  undefined8 uStack_58;
  GuideToggleView *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar4 = PTR_vtable_007e6f00;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined **)this = puVar4 + 0x10;
  FUN_00666bb8(&local_60,"TOGGLE",auStack_68);
  local_70[0] = 0xffd2eeff;
  local_78[0] = 0xff000000;
  GameInterfaceBuilder::SmallLabel((GameInterfaceBuilder *)&local_98,&local_60,local_70,local_78);
  if (local_90 != (long *)0x0) {
    local_90[1] = local_90[1] + 1;
  }
  plVar9 = *(long **)(this + 0x100);
  *(undefined **)(this + 0xf8) = local_98;
  *(long **)(this + 0x100) = local_90;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if ((local_90 != (long *)0x0) && (lVar6 = local_90[1], local_90[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_90 + 0x10))(local_90);
    lVar6 = local_90[2];
    local_90[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_90 + 0x18))(local_90);
    }
  }
  if (local_60 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar9 = local_60 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00506de4 to 00606e0b has its CatchHandler @ 00506db4 */
      iVar8 = (int)*plVar9;
      *(int *)plVar9 = iVar8 + -1;
    }
    else {
      do {
                    /* try { // try from 00506dd0 to 00606de3 has its CatchHandler @ 00506e08 */
        iVar8 = (int)*plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *(int *)plVar9 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(local_60 + -3);
    }
  }
  this_00 = *(GUILabel **)(this + 0xf8);
  *(undefined4 *)(this_00 + 0x130) = 1;
  GUILabel::UpdateBounds(this_00);
  local_98 = *(undefined **)(this + 0xf8);
  pcVar7 = *(code **)(*(long *)this + 0x60);
  local_90 = *(long **)(this + 0x100);
  if (local_90 != (long *)0x0) {
    local_90[1] = local_90[1] + 1;
  }
  this_01 = (GameInterfaceBuilder *)(*pcVar7)(this,&local_98);
  plVar9 = local_90;
  if ((local_90 != (long *)0x0) && (lVar6 = local_90[1], local_90[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    this_01 = (GameInterfaceBuilder *)(**(code **)(*local_90 + 0x10))(local_90);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      this_01 = (GameInterfaceBuilder *)(**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  GameInterfaceBuilder::Switch(this_01);
  if (local_90 != (long *)0x0) {
    local_90[1] = local_90[1] + 1;
  }
  plVar9 = *(long **)(this + 0x110);
  *(undefined **)(this + 0x108) = local_98;
  *(long **)(this + 0x110) = local_90;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = local_90;
  if ((local_90 != (long *)0x0) && (lVar6 = local_90[1], local_90[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_90 + 0x10))(local_90);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  pGVar10 = *(GUIControl **)(this + 0x108);
  local_98 = (undefined *)0x0;
  uStack_58 = 0;
  local_60 = (long *)PTR_SwitchToggled_007e7848;
  local_50 = this;
  uVar5 = boost::detail::function::has_empty_target(&local_60);
  if ((uVar5 & 1) == 0) {
    local_80 = local_50;
    uStack_88 = uStack_58;
    local_90 = local_60;
    local_98 = PTR_stored_vtable_007e6e88;
  }
  else {
    local_98 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar10,this,&local_98,0x40);
  if (((local_98 != (undefined *)0x0) && (((ulong)local_98 & 1) == 0)) &&
     (*(code **)((ulong)local_98 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_98 & 0xfffffffffffffffe))(&local_90,&local_90,2);
  }
  local_98 = *(undefined **)(this + 0x108);
  pcVar7 = *(code **)(*(long *)this + 0x60);
  local_90 = *(long **)(this + 0x110);
  if (local_90 != (long *)0x0) {
    local_90[1] = local_90[1] + 1;
  }
  (*pcVar7)(this,&local_98);
  plVar9 = local_90;
  if ((local_90 != (long *)0x0) && (lVar6 = local_90[1], local_90[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_90 + 0x10))(local_90);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  local_98 = *(undefined **)(this + 0x74);
  local_90 = (long *)CONCAT44(*(undefined4 *)(*(long *)(this + 0x108) + 0x80),0x43700000);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_98);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00506de4 with catch @ 00506db4 */
  return;
}


