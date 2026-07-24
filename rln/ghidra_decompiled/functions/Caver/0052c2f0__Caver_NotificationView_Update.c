/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052c2f0
 * Function: Caver::NotificationView::Update
 * Signature: undefined __thiscall Update(NotificationView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NotificationView::Update(float) */

void __thiscall Caver::NotificationView::Update(NotificationView *this,float param_1)

{
  long lVar1;
  GUIAnimation *pGVar2;
  GUIPropertyValue *pGVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined4 local_70;
  undefined8 local_68;
  long *local_60;
  GUIAnimation *local_58;
  long *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 0052c0e8 with catch @ 0052c2f8 */
                    /* catch() { ... } // from try @ 0052c1c0 with catch @ 0052c2fc */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(*(long *)(this + 0x118) + -0x18) - 1U <= *(ulong *)(this + 0x170)) {
    fVar6 = *(float *)(this + 0x18c);
    *(float *)(this + 0x18c) = fVar6 + param_1;
    if ((this[0x188] == (NotificationView)0x0) && (*(float *)(this + 400) < fVar6 + param_1)) {
      this[0x188] = (NotificationView)0x1;
      pGVar2 = operator_new(0xc0);
      GUIAnimation::GUIAnimation(pGVar2);
      local_58 = pGVar2;
      boost::detail::shared_count::shared_count<Caver::GUIAnimation>
                ((shared_count *)&local_50,pGVar2);
      pGVar3 = (GUIPropertyValue *)
               boost::detail::sp_enable_shared_from_this(&local_58,pGVar2,pGVar2);
      pGVar2 = local_58;
      *(undefined4 *)(local_58 + 0x30) = 2;
      pGVar3 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar3,1.0);
      *(undefined4 *)(pGVar2 + 0x70) = local_70;
      if (local_60 != (long *)0x0) {
        local_60[1] = local_60[1] + 1;
      }
      plVar5 = *(long **)(pGVar2 + 0x80);
      *(undefined8 *)(pGVar2 + 0x78) = local_68;
      *(long **)(pGVar2 + 0x80) = local_60;
      if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar5 + 0x10))(plVar5);
        lVar4 = plVar5[2];
        plVar5[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if ((local_60 != (long *)0x0) &&
         (lVar4 = local_60[1], local_60[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        pGVar3 = (GUIPropertyValue *)(**(code **)(*local_60 + 0x10))(local_60);
        lVar4 = local_60[2];
        local_60[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          pGVar3 = (GUIPropertyValue *)(**(code **)(*local_60 + 0x18))(local_60);
        }
      }
      pGVar2 = local_58;
      GUIPropertyValue::ValueWithFloat(pGVar3,0.0);
      *(undefined4 *)(pGVar2 + 0x88) = local_70;
      if (local_60 != (long *)0x0) {
        local_60[1] = local_60[1] + 1;
      }
      plVar5 = *(long **)(pGVar2 + 0x98);
      *(undefined8 *)(pGVar2 + 0x90) = local_68;
      *(long **)(pGVar2 + 0x98) = local_60;
      if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar4 = plVar5[2];
        plVar5[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if ((local_60 != (long *)0x0) &&
         (lVar4 = local_60[1], local_60[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar4 = local_60[2];
        local_60[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*local_60 + 0x18))(local_60);
        }
      }
      *(undefined4 *)(local_58 + 0x5c) = 0x3f4ccccd;
      local_58[0xb9] = (GUIAnimation)0x1;
      GUIView::AddAnimation((GUIView *)this,(shared_ptr *)&local_58);
      if ((local_50 != (long *)0x0) &&
         (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*local_50 + 0x10))(local_50);
        lVar4 = local_50[2];
        local_50[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*local_50 + 0x18))(local_50);
        }
      }
    }
  }
  if (*(long *)(this + 0x198) == 0) {
    GUITextBubble::Update((GUITextBubble *)(this + 0xf0),param_1);
  }
  else {
    GUIAnimation::Update(param_1);
    if (*(char *)(*(long *)(this + 0x198) + 0x54) != '\0') {
      plVar5 = *(long **)(this + 0x1a0);
      *(undefined8 *)(this + 0x198) = 0;
      *(undefined8 *)(this + 0x1a0) = 0;
                    /* catch() { ... } // from try @ 0052c5e0 with catch @ 0052c5b0 */
      if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 0052c5cc to 0062c5df has its CatchHandler @ 0052c604 */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar4 = plVar5[2];
        plVar5[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
                    /* try { // try from 0052c5e0 to 0062c607 has its CatchHandler @ 0052c5b0 */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
    }
  }
                    /* catch() { ... } // from try @ 0052c5cc with catch @ 0052c604 */
  GUIView::Update((GUIView *)this,param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


