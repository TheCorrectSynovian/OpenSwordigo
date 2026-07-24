/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00590bf4
 * Function: Caver::GUIAlertView::AddButton
 * Signature: undefined __thiscall AddButton(GUIAlertView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::AddButton(boost::shared_ptr<Caver::GUIButton> const&) */

void __thiscall Caver::GUIAlertView::AddButton(GUIAlertView *this,shared_ptr *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  GUIControl *pGVar7;
  undefined *local_70;
  long *local_68;
  undefined8 uStack_60;
  GUIAlertView *local_58;
  long *local_50;
  undefined8 uStack_48;
  GUIAlertView *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_70 = *(undefined **)param_1;
  pcVar5 = *(code **)(*(long *)this + 0x60);
  local_68 = *(long **)(param_1 + 8);
  if (local_68 != (long *)0x0) {
    local_68[1] = local_68[1] + 1;
  }
  (*pcVar5)(this,&local_70);
  plVar3 = local_68;
  if ((local_68 != (long *)0x0) && (lVar6 = local_68[1], local_68[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar6 = plVar3[2];
    plVar3[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  puVar1 = *(undefined8 **)(this + 0x160);
  if (puVar1 == *(undefined8 **)(this + 0x168)) {
    std::
    vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
    ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
                     *)(this + 0x158),puVar1,param_1);
  }
  else {
    *puVar1 = *(undefined8 *)param_1;
    lVar6 = *(long *)(param_1 + 8);
    puVar1[1] = lVar6;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
    }
    *(undefined8 **)(this + 0x160) = puVar1 + 2;
  }
  pGVar7 = *(GUIControl **)param_1;
  local_70 = (undefined *)0x0;
  uStack_48 = 0;
  local_50 = (long *)PTR_ButtonPressed_007e6a40;
  local_40 = this;
  uVar4 = boost::detail::function::has_empty_target(&local_50);
  if ((uVar4 & 1) == 0) {
    local_58 = local_40;
    uStack_60 = uStack_48;
    local_68 = local_50;
    local_70 = PTR_stored_vtable_007e5160;
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
  UpdateLayout(this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


