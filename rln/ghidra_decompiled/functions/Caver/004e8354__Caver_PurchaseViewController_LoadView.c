/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e8354
 * Function: Caver::PurchaseViewController::LoadView
 * Signature: undefined __thiscall LoadView(PurchaseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::LoadView() */

void __thiscall Caver::PurchaseViewController::LoadView(PurchaseViewController *this)

{
  undefined *puVar1;
  long lVar2;
  PurchaseView *this_00;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  GUIControl *pGVar7;
  long *plVar8;
  undefined *local_70;
  long *local_68;
  undefined8 uStack_60;
  PurchaseViewController *local_58;
  long *local_50;
  undefined8 uStack_48;
  PurchaseViewController *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = operator_new(0x148);
  PurchaseView::PurchaseView(this_00);
  boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>
            ((shared_ptr<Caver::PurchaseView> *)&local_70,this_00);
  puVar1 = *(undefined **)(this + 0x50);
  plVar3 = *(long **)(this + 0x58);
  *(undefined **)(this + 0x50) = local_70;
  *(long **)(this + 0x58) = local_68;
  local_70 = puVar1;
  local_68 = plVar3;
  if ((plVar3 != (long *)0x0) && (lVar6 = plVar3[1], plVar3[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar6 = plVar3[2];
    plVar3[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  lVar6 = *(long *)(this + 0x50);
  if (*(int *)(lVar6 + 0x70) != 0x12) {
    plVar3 = *(long **)(lVar6 + 0x58);
    *(undefined4 *)(lVar6 + 0x70) = 0x12;
    if ((plVar3 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar3 + 0x8c))) {
      (**(code **)(*plVar3 + 0x58))();
      lVar6 = *(long *)(this + 0x50);
    }
  }
  plVar3 = *(long **)(this + 0x58);
  if (plVar3 != (long *)0x0) {
    plVar3[1] = plVar3[1] + 2;
  }
  plVar8 = *(long **)(this + 0x20);
  *(long *)(this + 0x18) = lVar6;
  *(long **)(this + 0x20) = plVar3;
  if ((plVar8 != (long *)0x0) && (lVar6 = plVar8[1], plVar8[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar6 = plVar8[2];
    plVar8[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  puVar4 = *(undefined8 **)(this + 0x40);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,this);
  }
  if ((plVar3 != (long *)0x0) && (lVar6 = plVar3[1], plVar3[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar6 = plVar3[2];
    plVar3[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  puVar1 = PTR_ButtonPressed_007e5948;
  pGVar7 = *(GUIControl **)(*(long *)(this + 0x50) + 0x138);
  local_70 = (undefined *)0x0;
  uStack_48 = 0;
  local_50 = (long *)PTR_ButtonPressed_007e5948;
  local_40 = this;
  uVar5 = boost::detail::function::has_empty_target(&local_50);
  if ((uVar5 & 1) == 0) {
    local_58 = local_40;
    uStack_60 = uStack_48;
    local_68 = local_50;
    local_70 = PTR_stored_vtable_007e7fc8;
  }
  else {
    local_70 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar7,this,&local_70,0x40);
  if (((local_70 != (undefined *)0x0) && (((ulong)local_70 & 1) == 0)) &&
     (*(code **)((ulong)local_70 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_70 & 0xfffffffffffffffe))(&local_68,&local_68,2);
  }
  pGVar7 = *(GUIControl **)(*(long *)(this + 0x50) + 0x128);
  local_70 = (undefined *)0x0;
  uStack_48 = 0;
  local_50 = (long *)puVar1;
  local_40 = this;
  uVar5 = boost::detail::function::has_empty_target(&local_50);
  if ((uVar5 & 1) == 0) {
    local_58 = local_40;
    uStack_60 = uStack_48;
    local_68 = local_50;
    local_70 = PTR_stored_vtable_007e7fc8;
  }
  else {
    local_70 = (undefined *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar7,this,&local_70,0x40);
  if (local_70 != (undefined *)0x0) {
    if ((((ulong)local_70 & 1) == 0) &&
       (*(code **)((ulong)local_70 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_70 & 0xfffffffffffffffe))(&local_68,&local_68,2);
    }
    local_70 = (undefined *)0x0;
  }
  UpdateView(this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


