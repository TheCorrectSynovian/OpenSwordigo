/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050c508
 * Function: Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished
 * Signature: undefined __cdecl ToggleLabelsFadeOutAnimationFinished(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished(void*, Caver::GUIEvent*) */

void Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished
               (void *param_1,GUIEvent *param_2)

{
  long lVar1;
  long *plVar2;
  GUIAnimation *pGVar3;
  GUIPropertyValue *pGVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  GUIView *this;
  long *plVar10;
  undefined8 uVar11;
  undefined *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined *local_88;
  undefined8 uStack_80;
  void *local_78;
  GUIAnimation *local_70;
  long *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)((long)param_1 + 0x140);
  *(undefined1 *)(lVar9 + 0xe4) = 1;
  lVar7 = *(long *)((long)param_1 + 0x150);
  if (lVar9 == lVar7) {
    uVar11 = *(undefined8 *)((long)param_1 + 0x160);
    lVar7 = *(long *)((long)param_1 + 0x168);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
    }
    plVar10 = *(long **)((long)param_1 + 0x148);
    *(undefined8 *)((long)param_1 + 0x140) = uVar11;
    *(long *)((long)param_1 + 0x148) = lVar7;
  }
  else {
    lVar9 = *(long *)((long)param_1 + 0x158);
    if (lVar9 != 0) {
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
    }
    plVar10 = *(long **)((long)param_1 + 0x148);
    *(long *)((long)param_1 + 0x140) = lVar7;
    *(long *)((long)param_1 + 0x148) = lVar9;
  }
                    /* catch() { ... } // from try @ 0050c1b4 with catch @ 0050c594 */
                    /* catch() { ... } // from try @ 0050c080 with catch @ 0050c598 */
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0050bf68 with catch @ 0050c59c */
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  *(undefined1 *)(*(long *)((long)param_1 + 0x140) + 0xe4) = 0;
  pGVar3 = operator_new(0xc0);
  GUIAnimation::GUIAnimation(pGVar3);
  local_70 = pGVar3;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_68,pGVar3);
  pGVar4 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_70,pGVar3,pGVar3);
  pGVar3 = local_70;
  *(undefined4 *)(local_70 + 0x30) = 2;
  pGVar4 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar4,0.0);
  *(undefined4 *)(pGVar3 + 0x70) = (undefined4)local_a0;
  if (local_90 != (long *)0x0) {
    local_90[1] = local_90[1] + 1;
  }
  plVar10 = *(long **)(pGVar3 + 0x80);
  *(long **)(pGVar3 + 0x78) = local_98;
  *(long **)(pGVar3 + 0x80) = local_90;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = local_90;
  if ((local_90 != (long *)0x0) && (lVar7 = local_90[1], local_90[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    pGVar4 = (GUIPropertyValue *)(**(code **)(*local_90 + 0x10))(local_90);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  pGVar3 = local_70;
  GUIPropertyValue::ValueWithFloat(pGVar4,1.0);
  *(undefined4 *)(pGVar3 + 0x88) = (undefined4)local_a0;
  if (local_90 != (long *)0x0) {
    local_90[1] = local_90[1] + 1;
  }
  plVar10 = *(long **)(pGVar3 + 0x98);
  *(long **)(pGVar3 + 0x90) = local_98;
  *(long **)(pGVar3 + 0x98) = local_90;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = local_90;
  if ((local_90 != (long *)0x0) && (lVar7 = local_90[1], local_90[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_90 + 0x10))(local_90);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  pGVar3 = local_70;
  *(undefined4 *)(local_70 + 0x5c) = 0x3e800000;
  local_70[0xb8] = (GUIAnimation)0x0;
  local_60 = PTR_ToggleLabelsFadeInAnimationFinished_007e5630;
  plVar10 = *(long **)((long)param_1 + 0x10);
  if ((plVar10 == (long *)0x0) || (plVar10[1] == 0)) {
    local_60 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_60);
  }
  else {
    uVar11 = *(undefined8 *)((long)param_1 + 8);
    plVar10[1] = plVar10[1] + 2;
    uStack_58 = 0;
    local_50 = param_1;
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
    plVar10[2] = plVar10[2] + 1;
    local_90 = (long *)0x0;
    local_a0 = uVar11;
    local_98 = plVar10;
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
    lVar7 = plVar10[1];
    plVar10[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    lVar7 = plVar10[1];
    plVar10[1] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    this = *(GUIView **)((long)param_1 + 0x140);
    GUIView::RemoveAllAnimations(this);
    GUIView::AddAnimation(this,(shared_ptr *)&local_70);
    if ((local_68 != (long *)0x0) &&
       (lVar7 = local_68[1], local_68[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar7 = local_68[2];
      local_68[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
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


