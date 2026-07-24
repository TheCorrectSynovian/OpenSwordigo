/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c7dbc
 * Function: Caver::ConfigureOverlayView::AddTransitionAnimations
 * Signature: undefined __thiscall AddTransitionAnimations(ConfigureOverlayView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayView::AddTransitionAnimations(bool) */

void __thiscall
Caver::ConfigureOverlayView::AddTransitionAnimations(ConfigureOverlayView *this,bool param_1)

{
  long lVar1;
  GUIAnimation *pGVar2;
  GUIPropertyValue *pGVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_60;
  undefined8 local_58;
  long *local_50;
  GUIAnimation *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1) {
    pGVar2 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar2);
    local_48 = pGVar2;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_40,pGVar2)
    ;
    pGVar3 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_48,pGVar2,pGVar2);
    pGVar2 = local_48;
    *(undefined4 *)(local_48 + 0x30) = 2;
    pGVar3 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar3,1.0);
    *(undefined4 *)(pGVar2 + 0x70) = local_60;
    if (local_50 != (long *)0x0) {
      local_50[1] = local_50[1] + 1;
    }
    plVar5 = *(long **)(pGVar2 + 0x80);
    *(undefined8 *)(pGVar2 + 0x78) = local_58;
    *(long **)(pGVar2 + 0x80) = local_50;
    if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
                    /* try { // try from 004c7ea8 to 005c7ed7 has its CatchHandler @ 004c7ea8
                       catch() { ... } // from try @ 004c7ea8 with catch @ 004c7ea8
                       catch() { ... } // from try @ 004c801c with catch @ 004c7ea8 */
    if ((local_50 != (long *)0x0) &&
       (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      pGVar3 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x10))(local_50);
      lVar4 = local_50[2];
      local_50[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
                    /* try { // try from 004c7ed8 to 005c7eeb has its CatchHandler @ 004c82e4 */
        pGVar3 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x18))(local_50);
      }
    }
    pGVar2 = local_48;
    GUIPropertyValue::ValueWithFloat(pGVar3,0.0);
    *(undefined4 *)(pGVar2 + 0x88) = local_60;
                    /* try { // try from 004c7efc to 005c7f07 has its CatchHandler @ 004c8278 */
    if (local_50 != (long *)0x0) {
      local_50[1] = local_50[1] + 1;
    }
    plVar5 = *(long **)(pGVar2 + 0x98);
    *(undefined8 *)(pGVar2 + 0x90) = local_58;
    *(long **)(pGVar2 + 0x98) = local_50;
    if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 004c7f2c to 005c7f67 has its CatchHandler @ 004c8214 */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    if ((local_50 != (long *)0x0) &&
       (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar4 = local_50[2];
      local_50[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
                    /* try { // try from 004c7f90 to 005c7fa3 has its CatchHandler @ 004c8210 */
        (**(code **)(*local_50 + 0x18))(local_50);
      }
    }
    *(undefined4 *)(local_48 + 0x5c) = 0x3e800000;
    local_48[0xb8] = (GUIAnimation)0x0;
                    /* try { // try from 004c7fb4 to 005c7fbf has its CatchHandler @ 004c81d8 */
    GUIView::RemoveAllAnimations((GUIView *)this);
    GUIView::AddAnimation((GUIView *)this,(shared_ptr *)&local_48);
    if ((local_40 != (long *)0x0) &&
       (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 004c7fe0 to 005c801b has its CatchHandler @ 004c817c */
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar4 = local_40[2];
      local_40[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 004c801c to 005c82e7 has its CatchHandler @ 004c7ea8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


