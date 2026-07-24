/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e4378
 * Function: Caver::TargetFrame::Update
 * Signature: undefined __thiscall Update(TargetFrame * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TargetFrame::Update(float) */

void __thiscall Caver::TargetFrame::Update(TargetFrame *this,float param_1)

{
  shared_ptr *psVar1;
  long lVar2;
  long *plVar3;
  GUIAnimation *pGVar4;
  GUIPropertyValue *pGVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 extraout_x0;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined *local_b8;
  undefined8 uStack_b0;
  TargetFrame *local_a8;
  GUIAnimation *local_a0;
  long *local_98;
  long *local_90;
  undefined *local_88;
  undefined8 uStack_80;
  TargetFrame *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  TargetFrame *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  fVar12 = *(float *)(this + 0xec);
  *(float *)(this + 0xec) = fVar12 + param_1;
  if (fVar12 + param_1 <= 3.0) {
    if (this[0x10c] != (TargetFrame)0x0) goto LAB_004e484c;
  }
  else {
    this[0x10c] = (TargetFrame)0x0;
  }
                    /* catch() { ... } // from try @ 004e43f8 with catch @ 004e43e4 */
  if ((*(char *)(*(long *)(this + 0x110) + 0x130) == '\0') && (*(long *)(this + 0x300) == 0)) {
    pGVar4 = operator_new(0xc0);
                    /* try { // try from 004e43f4 to 005e43f7 has its CatchHandler @ 004e4408 */
    GUIAnimation::GUIAnimation(pGVar4);
                    /* try { // try from 004e43f8 to 005e441b has its CatchHandler @ 004e43e4 */
    psVar1 = (shared_ptr *)(this + 0x300);
    local_a0 = pGVar4;
                    /* catch() { ... } // from try @ 004e43f4 with catch @ 004e4408 */
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_98,pGVar4)
    ;
    pGVar5 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_a0,pGVar4,pGVar4);
    pGVar4 = *(GUIAnimation **)(this + 0x300);
    *(GUIAnimation **)(this + 0x300) = local_a0;
    plVar10 = *(long **)(this + 0x308);
    *(long **)(this + 0x308) = local_98;
    local_a0 = pGVar4;
    local_98 = plVar10;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      pGVar5 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        pGVar5 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    lVar8 = *(long *)psVar1;
    *(undefined4 *)(lVar8 + 0x30) = 2;
    pGVar5 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar5,1.0);
    *(undefined4 *)(lVar8 + 0x70) = local_a0._0_4_;
    if (local_90 != (long *)0x0) {
      local_90[1] = local_90[1] + 1;
    }
    plVar10 = *(long **)(lVar8 + 0x80);
    *(long **)(lVar8 + 0x78) = local_98;
    *(long **)(lVar8 + 0x80) = local_90;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      pGVar5 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        pGVar5 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    plVar10 = local_90;
    if ((local_90 != (long *)0x0) &&
       (lVar8 = local_90[1], local_90[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      pGVar5 = (GUIPropertyValue *)(**(code **)(*local_90 + 0x10))(local_90);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        pGVar5 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    lVar8 = *(long *)psVar1;
    GUIPropertyValue::ValueWithFloat(pGVar5,0.0);
    *(undefined4 *)(lVar8 + 0x88) = local_a0._0_4_;
    if (local_90 != (long *)0x0) {
      local_90[1] = local_90[1] + 1;
    }
    plVar10 = *(long **)(lVar8 + 0x98);
    *(long **)(lVar8 + 0x90) = local_98;
    *(long **)(lVar8 + 0x98) = local_90;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    if ((local_90 != (long *)0x0) &&
       (lVar8 = local_90[1], local_90[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_90 + 0x10))(local_90);
      lVar8 = local_90[2];
      local_90[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_90 + 0x18))(local_90);
      }
    }
    puVar11 = *(undefined8 **)(this + 0x300);
    *(undefined4 *)((long)puVar11 + 0x5c) = 0x3ecccccd;
    local_70 = PTR_HideAnimationFinished_007e6998;
    plVar10 = *(long **)(this + 0x10);
    if ((plVar10 == (long *)0x0) || (plVar10[1] == 0)) {
      local_70 = PTR_vtable_007e6120 + 0x10;
      boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_70);
      std::exception::~exception((exception *)&local_70);
                    /* WARNING: Subroutine does not return */
      FUN_006818c4(extraout_x0);
    }
    pGVar4 = *(GUIAnimation **)(this + 8);
    plVar10[1] = plVar10[1] + 2;
    uStack_68 = 0;
    local_60 = this;
    uVar6 = boost::detail::function::has_empty_target(&local_70);
    if ((uVar6 & 1) == 0) {
      local_a8 = local_60;
      uStack_b0 = uStack_68;
      local_b8 = local_70;
      plVar9 = (long *)PTR_stored_vtable_007e57b0;
    }
    else {
      plVar9 = (long *)0x0;
    }
    plVar10[2] = plVar10[2] + 1;
    local_90 = (long *)0x0;
    local_a0 = pGVar4;
    local_98 = plVar10;
    if (plVar9 != (long *)0x0) {
      local_90 = plVar9;
      if (((ulong)plVar9 & 1) == 0) {
        (**(code **)((ulong)plVar9 & 0xfffffffffffffffe))(&local_b8,&local_88,0);
      }
      else {
        local_78 = local_a8;
        uStack_80 = uStack_b0;
        local_88 = local_b8;
      }
    }
    plVar3 = local_98;
    plVar7 = (long *)puVar11[1];
    *puVar11 = local_a0;
    if (local_98 != plVar7) {
      if (local_98 != (long *)0x0) {
        local_98[2] = local_98[2] + 1;
      }
      if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[2], plVar7[2] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar7 + 0x18))();
      }
      puVar11[1] = plVar3;
    }
    boost::function<void(void*,Caver::GUIEvent*)>::operator=
              ((function<void(void*,Caver::GUIEvent*)> *)(puVar11 + 2),(function *)&local_90);
    if (local_90 != (long *)0x0) {
      if ((((ulong)local_90 & 1) == 0) &&
         (*(code **)((ulong)local_90 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_90 & 0xfffffffffffffffe))(&local_88,&local_88,2);
      }
      local_90 = (long *)0x0;
    }
    if ((local_98 != (long *)0x0) &&
       (lVar8 = local_98[2], local_98[2] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_98 + 0x18))();
    }
    if (((plVar9 != (long *)0x0) && (((ulong)plVar9 & 1) == 0)) &&
       (*(code **)((ulong)plVar9 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)plVar9 & 0xfffffffffffffffe))(&local_b8,&local_b8,2);
    }
    lVar8 = plVar10[1];
    plVar10[1] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    lVar8 = plVar10[1];
    plVar10[1] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    GUIView::RemoveAllAnimations((GUIView *)this);
    GUIView::AddAnimation((GUIView *)this,psVar1);
  }
LAB_004e484c:
  GUIView::Update((GUIView *)this,param_1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


