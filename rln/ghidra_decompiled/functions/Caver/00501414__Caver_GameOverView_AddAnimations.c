/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00501414
 * Function: Caver::GameOverView::AddAnimations
 * Signature: undefined __thiscall AddAnimations(GameOverView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverView::AddAnimations(bool) */

void __thiscall Caver::GameOverView::AddAnimations(GameOverView *this,bool param_1)

{
  long lVar1;
  GUIAnimation *pGVar2;
  Rectangle *extraout_x1;
  Rectangle *extraout_x1_00;
  Rectangle *extraout_x1_01;
  Rectangle *extraout_x1_02;
  Rectangle *extraout_x1_03;
  Rectangle *extraout_x1_04;
  Rectangle *pRVar3;
  long lVar4;
  long *plVar5;
  GUIView *this_00;
  long *plVar6;
  undefined4 uVar7;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 auStack_78 [2];
  GUIAnimation *local_68;
  long *local_60;
  long local_58;
  
                    /* try { // try from 00501428 to 00601627 has its CatchHandler @ 005013b8 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = *(GUIView **)(this + 0xf8);
  if (this_00 != (GUIView *)0x0) {
    plVar5 = *(long **)(this + 0x100);
    if (plVar5 != (long *)0x0) {
      plVar5[1] = plVar5[1] + 1;
    }
    pGVar2 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar2);
    local_68 = pGVar2;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_60,pGVar2)
    ;
    boost::detail::sp_enable_shared_from_this(&local_68,pGVar2,pGVar2);
    pGVar2 = local_68;
    *(undefined4 *)(local_68 + 0x30) = 3;
    local_80 = (ulong)(uint)((*(float *)(this + 0x88) + *(float *)(this + 0x90)) -
                            *(float *)(this_00 + 0x78)) << 0x20;
    Rectangle::TranslatedRectangle((Vector2 *)(this_00 + 0x74));
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)auStack_78,extraout_x1);
    *(undefined4 *)(pGVar2 + 0x70) = local_a0;
    if (local_90 != (long *)0x0) {
      local_90[1] = local_90[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x80);
    *(undefined8 *)(pGVar2 + 0x78) = uStack_98;
    *(long **)(pGVar2 + 0x80) = local_90;
    pRVar3 = extraout_x1_00;
    if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar4 = plVar6[2];
      plVar6[2] = lVar4 + -1;
      pRVar3 = extraout_x1_01;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pRVar3 = extraout_x1_02;
      }
    }
    plVar6 = local_90;
    if ((local_90 != (long *)0x0) &&
       (lVar4 = local_90[1], local_90[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_90 + 0x10))(local_90);
      lVar4 = plVar6[2];
      plVar6[2] = lVar4 + -1;
      pRVar3 = extraout_x1_03;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pRVar3 = extraout_x1_04;
      }
    }
    pGVar2 = local_68;
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)(this_00 + 0x74),pRVar3);
    *(undefined4 *)(pGVar2 + 0x88) = local_a0;
    if (local_90 != (long *)0x0) {
      local_90[1] = local_90[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x98);
    *(undefined8 *)(pGVar2 + 0x90) = uStack_98;
    *(long **)(pGVar2 + 0x98) = local_90;
    if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar4 = plVar6[2];
      plVar6[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    plVar6 = local_90;
    if ((local_90 != (long *)0x0) &&
       (lVar4 = local_90[1], local_90[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 00501628 to 0060162b has its CatchHandler @ 005016e0 */
                    /* try { // try from 0050162c to 0060167b has its CatchHandler @ 005013b8 */
      (**(code **)(*local_90 + 0x10))(local_90);
      lVar4 = plVar6[2];
      plVar6[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    pGVar2 = local_68;
    local_80 = DAT_00692060;
    auStack_78[0] = DAT_00692290;
    GUIAnimationCurve::GUIAnimationCurve
              ((GUIAnimationCurve *)&local_a0,(Vector2 *)auStack_78,(Vector2 *)&local_80);
                    /* try { // try from 0050167c to 0060167f has its CatchHandler @ 005016dc */
    *(undefined8 *)(pGVar2 + 0x3c) = uStack_98;
    *(ulong *)(pGVar2 + 0x34) = CONCAT44(uStack_9c,local_a0);
                    /* try { // try from 00501680 to 006016f7 has its CatchHandler @ 005013b8 */
    *(undefined8 *)(pGVar2 + 0x4c) = uStack_88;
    *(long **)(pGVar2 + 0x44) = local_90;
    uVar7 = DAT_00683f68;
    if (param_1) {
      uVar7 = 0x3e800000;
      local_68[0xb8] = (GUIAnimation)0x0;
      local_68[100] = (GUIAnimation)0x1;
    }
    else {
      *(undefined4 *)(local_68 + 0x58) = 0x3e99999a;
    }
    *(undefined4 *)(local_68 + 0x5c) = uVar7;
    GUIView::RemoveAllAnimations(this_00);
    GUIView::AddAnimation(this_00,(shared_ptr *)&local_68);
                    /* catch() { ... } // from try @ 0050167c with catch @ 005016dc */
                    /* catch() { ... } // from try @ 00501628 with catch @ 005016e0 */
    if ((local_60 != (long *)0x0) &&
       (lVar4 = local_60[1], local_60[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0050140c with catch @ 005016f4 */
      (**(code **)(*local_60 + 0x10))(local_60);
                    /* try { // try from 005016f8 to 006016ff has its CatchHandler @ 00501708 */
      lVar4 = local_60[2];
                    /* try { // try from 00501700 to 0060170b has its CatchHandler @ 005013b8 */
      local_60[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
                    /* catch() { ... } // from try @ 005016f8 with catch @ 00501708 */
                    /* catch() { ... } // from try @ 00501800 with catch @ 0050170c
                       catch() { ... } // from try @ 005018a8 with catch @ 0050170c */
        (**(code **)(*local_60 + 0x18))(local_60);
      }
    }
    if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
                    /* try { // try from 00501754 to 0060177f has its CatchHandler @ 0050183c */
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


