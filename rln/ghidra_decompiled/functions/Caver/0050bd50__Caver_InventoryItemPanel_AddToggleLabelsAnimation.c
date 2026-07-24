/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050bd50
 * Function: Caver::InventoryItemPanel::AddToggleLabelsAnimation
 * Signature: undefined __thiscall AddToggleLabelsAnimation(InventoryItemPanel * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::InventoryItemPanel::AddToggleLabelsAnimation() */

void __thiscall Caver::InventoryItemPanel::AddToggleLabelsAnimation(InventoryItemPanel *this)

{
  long lVar1;
  long *plVar2;
  GUIAnimation *pGVar3;
  GUIPropertyValue *pGVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  GUIView *this_00;
  long *plVar9;
  undefined8 uVar10;
  undefined *local_b8;
  undefined8 uStack_b0;
  InventoryItemPanel *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined *local_88;
  undefined8 uStack_80;
  InventoryItemPanel *local_78;
  GUIAnimation *local_70;
  long *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  InventoryItemPanel *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pGVar3 = operator_new(0xc0);
  GUIAnimation::GUIAnimation(pGVar3);
  local_70 = pGVar3;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_68,pGVar3);
  pGVar4 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_70,pGVar3,pGVar3);
  pGVar3 = local_70;
  *(undefined4 *)(local_70 + 0x30) = 2;
  pGVar4 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar4,1.0);
  *(undefined4 *)(pGVar3 + 0x70) = (undefined4)local_a0;
  if (local_90 != (long *)0x0) {
    local_90[1] = local_90[1] + 1;
  }
  plVar9 = *(long **)(pGVar3 + 0x80);
  *(long **)(pGVar3 + 0x78) = local_98;
  *(long **)(pGVar3 + 0x80) = local_90;
  if ((plVar9 != (long *)0x0) && (lVar7 = plVar9[1], plVar9[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar9 + 0x10))(plVar9);
    lVar7 = plVar9[2];
    plVar9[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = local_90;
  if ((local_90 != (long *)0x0) && (lVar7 = local_90[1], local_90[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    pGVar4 = (GUIPropertyValue *)(**(code **)(*local_90 + 0x10))(local_90);
    lVar7 = plVar9[2];
    plVar9[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  pGVar3 = local_70;
  GUIPropertyValue::ValueWithFloat(pGVar4,0.0);
  *(undefined4 *)(pGVar3 + 0x88) = (undefined4)local_a0;
  if (local_90 != (long *)0x0) {
    local_90[1] = local_90[1] + 1;
  }
  plVar9 = *(long **)(pGVar3 + 0x98);
  *(long **)(pGVar3 + 0x90) = local_98;
  *(long **)(pGVar3 + 0x98) = local_90;
  if ((plVar9 != (long *)0x0) && (lVar7 = plVar9[1], plVar9[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar7 = plVar9[2];
    plVar9[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = local_90;
  if ((local_90 != (long *)0x0) && (lVar7 = local_90[1], local_90[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_90 + 0x10))(local_90);
    lVar7 = plVar9[2];
    plVar9[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  pGVar3 = local_70;
  uVar10 = _DAT_00693eb8;
  local_70[0xb8] = (GUIAnimation)0x0;
  *(undefined8 *)(local_70 + 0x58) = uVar10;
  local_60 = PTR_ToggleLabelsFadeOutAnimationFinished_007e5288;
  plVar9 = *(long **)(this + 0x10);
  if ((plVar9 == (long *)0x0) || (plVar9[1] == 0)) {
    local_60 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_60);
  }
  else {
    uVar10 = *(undefined8 *)(this + 8);
                    /* try { // try from 0050bf68 to 0060bf6b has its CatchHandler @ 0050c59c */
                    /* try { // try from 0050bf6c to 0060c07f has its CatchHandler @ 0050bce0 */
    plVar9[1] = plVar9[1] + 2;
    uStack_58 = 0;
    local_50 = this;
    uVar5 = boost::detail::function::has_empty_target(&local_60);
    if ((uVar5 & 1) == 0) {
      local_a8 = local_50;
      uStack_b0 = uStack_58;
      local_b8 = local_60;
      plVar8 = (long *)PTR_stored_vtable_007e4ae0;
    }
    else {
      plVar8 = (long *)0x0;
    }
    plVar9[2] = plVar9[2] + 1;
    local_90 = (long *)0x0;
    local_a0 = uVar10;
    local_98 = plVar9;
    if (plVar8 != (long *)0x0) {
      local_90 = plVar8;
      if (((ulong)plVar8 & 1) == 0) {
        (**(code **)((ulong)plVar8 & 0xfffffffffffffffe))(&local_b8,&local_88,0);
      }
      else {
        local_78 = local_a8;
        uStack_80 = uStack_b0;
        local_88 = local_b8;
      }
    }
    plVar2 = local_98;
    plVar6 = *(long **)(pGVar3 + 8);
    *(undefined8 *)pGVar3 = local_a0;
    if (local_98 != plVar6) {
      if (local_98 != (long *)0x0) {
        local_98[2] = local_98[2] + 1;
      }
      if ((plVar6 != (long *)0x0) && (lVar7 = plVar6[2], plVar6[2] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *(long **)(pGVar3 + 8) = plVar2;
    }
    boost::function<void(void*,Caver::GUIEvent*)>::operator=
              ((function<void(void*,Caver::GUIEvent*)> *)(pGVar3 + 0x10),(function *)&local_90);
    if (local_90 != (long *)0x0) {
      if ((((ulong)local_90 & 1) == 0) &&
         (*(code **)((ulong)local_90 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* try { // try from 0050c080 to 0060c083 has its CatchHandler @ 0050c598 */
                    /* try { // try from 0050c084 to 0060c1b3 has its CatchHandler @ 0050bce0 */
        (**(code **)((ulong)local_90 & 0xfffffffffffffffe))(&local_88,&local_88,2);
      }
      local_90 = (long *)0x0;
    }
    if ((local_98 != (long *)0x0) &&
       (lVar7 = local_98[2], local_98[2] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_98 + 0x18))();
    }
    if (((plVar8 != (long *)0x0) && (((ulong)plVar8 & 1) == 0)) &&
       (*(code **)((ulong)plVar8 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)plVar8 & 0xfffffffffffffffe))(&local_b8,&local_b8,2);
    }
    lVar7 = plVar9[1];
    plVar9[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    lVar7 = plVar9[1];
    plVar9[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    this_00 = *(GUIView **)(this + 0x140);
    GUIView::RemoveAllAnimations(this_00);
    GUIView::AddAnimation(this_00,(shared_ptr *)&local_70);
    if ((local_68 != (long *)0x0) &&
       (lVar7 = local_68[1], local_68[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar7 = local_68[2];
      local_68[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
                    /* try { // try from 0050c1b4 to 0060c1b7 has its CatchHandler @ 0050c594 */
                    /* try { // try from 0050c1b8 to 0060c5af has its CatchHandler @ 0050bce0 */
        (**(code **)(*local_68 + 0x18))(local_68);
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


