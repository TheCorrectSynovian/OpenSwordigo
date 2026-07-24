/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005409dc
 * Function: Caver::TabbedMenuView::AddAnimations
 * Signature: undefined __cdecl AddAnimations(bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::AddAnimations(bool) */

void Caver::TabbedMenuView::AddAnimations(bool param_1)

{
  long lVar1;
  GUIAnimation *pGVar2;
  GUIAnimation *pGVar3;
  ulong in_x1;
  Rectangle *extraout_x1;
  Rectangle *extraout_x1_00;
  Rectangle *extraout_x1_01;
  Rectangle *extraout_x1_02;
  Rectangle *extraout_x1_03;
  Rectangle *extraout_x1_04;
  Rectangle *extraout_x1_05;
  Rectangle *extraout_x1_06;
  Rectangle *extraout_x1_07;
  Rectangle *extraout_x1_08;
  Rectangle *extraout_x1_09;
  Rectangle *extraout_x1_10;
  Rectangle *pRVar4;
  Rectangle *in_x2;
  long lVar5;
  long *plVar6;
  GUIView *pGVar7;
  Vector2 *pVVar8;
  long *plVar9;
  float local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  long *local_78;
  long *local_70;
  GUIAnimation *local_68;
  long *local_60;
  long local_58;
  
  pGVar2 = (GUIAnimation *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pGVar7 = *(GUIView **)(pGVar2 + 0x158);
  pGVar3 = pGVar2;
  if (pGVar7 == (GUIView *)0x0) {
LAB_00540b14:
    if (*(long *)(pGVar2 + 0x148) == 0) goto LAB_00540bc8;
LAB_00540b1c:
    GUIAnimation::AlphaAnimation(pGVar3,0.0,1.0,0.25);
    if ((in_x1 & 1) != 0) {
      *(undefined1 *)(CONCAT44(uStack_7c,local_80) + 100) = 1;
      *(undefined1 *)(CONCAT44(uStack_7c,local_80) + 0xb8) = 0;
    }
    pGVar7 = *(GUIView **)(pGVar2 + 0x148);
    GUIView::RemoveAllAnimations(pGVar7);
    pGVar3 = (GUIAnimation *)GUIView::AddAnimation(pGVar7,(shared_ptr *)&local_80);
    plVar6 = local_78;
                    /* try { // try from 00540b5c to 00640b63 has its CatchHandler @ 00540f64 */
    if ((local_78 == (long *)0x0) ||
       (lVar5 = local_78[1], local_78[1] = lVar5 + -1, lVar5 + -1 != 0)) goto LAB_00540bc8;
    pGVar3 = (GUIAnimation *)(**(code **)(*local_78 + 0x10))(local_78);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_00540bc8;
    pGVar3 = (GUIAnimation *)(**(code **)(*plVar6 + 0x18))(plVar6);
    pGVar7 = *(GUIView **)(pGVar2 + 0x100);
    if (pGVar7 != (GUIView *)0x0) goto LAB_00540bd0;
LAB_00540e80:
    pGVar7 = *(GUIView **)(pGVar2 + 0x110);
  }
  else {
    plVar6 = *(long **)(pGVar2 + 0x160);
                    /* try { // try from 00540a18 to 00640a47 has its CatchHandler @ 00540e58 */
    if (plVar6 != (long *)0x0) {
      plVar6[1] = plVar6[1] + 1;
    }
    pVVar8 = (Vector2 *)(pGVar7 + 0x74);
    local_8c = 0;
    local_90 = *(float *)(*(long *)(pGVar7 + 0x58) + 0x84) -
               (*(float *)pVVar8 + *(float *)(pGVar7 + 0x7c));
    Rectangle::TranslatedRectangle(pVVar8);
                    /* try { // try from 00540a68 to 00640a8f has its CatchHandler @ 00540f68 */
    GUIAnimation::FrameAnimation((GUIAnimation *)&local_68,(Rectangle *)pVVar8,in_x2,0.25);
    if ((in_x1 & 1) != 0) {
      *(undefined1 *)(CONCAT44(uStack_7c,local_80) + 100) = 1;
      *(undefined1 *)(CONCAT44(uStack_7c,local_80) + 0xb8) = 0;
    }
    GUIView::RemoveAllAnimations(pGVar7);
    pGVar3 = (GUIAnimation *)GUIView::AddAnimation(pGVar7,(shared_ptr *)&local_80);
    plVar9 = local_78;
    if ((local_78 != (long *)0x0) &&
       (lVar5 = local_78[1], local_78[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      pGVar3 = (GUIAnimation *)(**(code **)(*local_78 + 0x10))(local_78);
      lVar5 = plVar9[2];
      plVar9[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        pGVar3 = (GUIAnimation *)(**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    if ((plVar6 == (long *)0x0) || (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 != 0))
    goto LAB_00540b14;
                    /* try { // try from 00540af4 to 00640b53 has its CatchHandler @ 00540f6c */
    pGVar3 = (GUIAnimation *)(**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_00540b14;
    pGVar3 = (GUIAnimation *)(**(code **)(*plVar6 + 0x18))(plVar6);
    if (*(long *)(pGVar2 + 0x148) != 0) goto LAB_00540b1c;
LAB_00540bc8:
    pGVar7 = *(GUIView **)(pGVar2 + 0x100);
    if (pGVar7 == (GUIView *)0x0) goto LAB_00540e80;
LAB_00540bd0:
    plVar6 = *(long **)(pGVar2 + 0x108);
    if (plVar6 != (long *)0x0) {
      plVar6[1] = plVar6[1] + 1;
    }
    pGVar3 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar3);
                    /* try { // try from 00540bfc to 00640c23 has its CatchHandler @ 00540f64 */
    local_68 = pGVar3;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_60,pGVar3)
    ;
    boost::detail::sp_enable_shared_from_this(&local_68,pGVar3,pGVar3);
    pGVar3 = local_68;
    *(undefined4 *)(local_68 + 0x30) = 3;
    Rectangle::TranslatedRectangle((Vector2 *)(pGVar7 + 0x74));
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)&local_90,extraout_x1);
    *(undefined4 *)(pGVar3 + 0x70) = local_80;
    if (local_70 != (long *)0x0) {
      local_70[1] = local_70[1] + 1;
    }
    plVar9 = *(long **)(pGVar3 + 0x80);
    *(long **)(pGVar3 + 0x78) = local_78;
    *(long **)(pGVar3 + 0x80) = local_70;
                    /* try { // try from 00540c88 to 00640cfb has its CatchHandler @ 00540f6c */
    pRVar4 = extraout_x1_00;
    if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar5 = plVar9[2];
      plVar9[2] = lVar5 + -1;
      pRVar4 = extraout_x1_01;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        pRVar4 = extraout_x1_02;
      }
    }
    plVar9 = local_70;
    if ((local_70 != (long *)0x0) &&
       (lVar5 = local_70[1], local_70[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      lVar5 = plVar9[2];
      plVar9[2] = lVar5 + -1;
      pRVar4 = extraout_x1_03;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        pRVar4 = extraout_x1_04;
      }
    }
    pGVar3 = local_68;
                    /* try { // try from 00540d18 to 00640d23 has its CatchHandler @ 00540fc8 */
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)(pGVar7 + 0x74),pRVar4);
                    /* try { // try from 00540d28 to 00640d2f has its CatchHandler @ 00540f70 */
    *(undefined4 *)(pGVar3 + 0x88) = local_80;
    if (local_70 != (long *)0x0) {
      local_70[1] = local_70[1] + 1;
    }
    plVar9 = *(long **)(pGVar3 + 0x98);
    *(long **)(pGVar3 + 0x90) = local_78;
    *(long **)(pGVar3 + 0x98) = local_70;
                    /* try { // try from 00540d50 to 00640d77 has its CatchHandler @ 00540fc8 */
    if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar5 = plVar9[2];
      plVar9[2] = lVar5 + -1;
                    /* try { // try from 00540d78 to 00640e2b has its CatchHandler @ 005408e0 */
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    plVar9 = local_70;
    if ((local_70 != (long *)0x0) &&
       (lVar5 = local_70[1], local_70[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      lVar5 = plVar9[2];
      plVar9[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    if ((in_x1 & 1) != 0) {
      local_68[100] = (GUIAnimation)0x1;
      local_68[0xb8] = (GUIAnimation)0x0;
    }
    *(undefined4 *)(local_68 + 0x5c) = 0x3e800000;
    GUIView::RemoveAllAnimations(pGVar7);
    pGVar3 = (GUIAnimation *)GUIView::AddAnimation(pGVar7,(shared_ptr *)&local_68);
    plVar9 = local_60;
                    /* catch() { ... } // from try @ 00540bac with catch @ 00540e08 */
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      pGVar3 = (GUIAnimation *)(**(code **)(*local_60 + 0x10))(local_60);
                    /* try { // try from 00540e2c to 00640ed3 has its CatchHandler @ 0054101c */
      lVar5 = plVar9[2];
      plVar9[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        pGVar3 = (GUIAnimation *)(**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
                    /* catch() { ... } // from try @ 00540a18 with catch @ 00540e58 */
    if ((plVar6 == (long *)0x0) || (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 != 0))
    goto LAB_00540e80;
    pGVar3 = (GUIAnimation *)(**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_00540e80;
                    /* try { // try from 00541154 to 00641167 has its CatchHandler @ 0054163c */
    pGVar3 = (GUIAnimation *)(**(code **)(*plVar6 + 0x18))(plVar6);
    pGVar7 = *(GUIView **)(pGVar2 + 0x110);
  }
  if (pGVar7 != (GUIView *)0x0) {
    plVar6 = *(long **)(pGVar2 + 0x118);
    if (plVar6 != (long *)0x0) {
      plVar6[1] = plVar6[1] + 1;
    }
    pGVar3 = operator_new(0xc0);
                    /* catch() { ... } // from try @ 00540974 with catch @ 00540ea8 */
    GUIAnimation::GUIAnimation(pGVar3);
    local_68 = pGVar3;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_60,pGVar3)
    ;
    boost::detail::sp_enable_shared_from_this(&local_68,pGVar3,pGVar3);
    pGVar3 = local_68;
                    /* try { // try from 00540ed4 to 00640f93 has its CatchHandler @ 005408e0 */
                    /* catch() { ... } // from try @ 0054094c with catch @ 00540ed8 */
                    /* catch() { ... } // from try @ 00540944 with catch @ 00540edc */
                    /* catch() { ... } // from try @ 00540930 with catch @ 00540ee0 */
    *(undefined4 *)(local_68 + 0x30) = 3;
                    /* catch() { ... } // from try @ 00540960 with catch @ 00540ef4
                       catch() { ... } // from try @ 005409a4 with catch @ 00540ef4 */
    Rectangle::TranslatedRectangle((Vector2 *)(pGVar7 + 0x74));
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)&local_90,extraout_x1_05);
    *(undefined4 *)(pGVar3 + 0x70) = local_80;
    if (local_70 != (long *)0x0) {
      local_70[1] = local_70[1] + 1;
    }
    plVar9 = *(long **)(pGVar3 + 0x80);
    *(long **)(pGVar3 + 0x78) = local_78;
    *(long **)(pGVar3 + 0x80) = local_70;
    pRVar4 = extraout_x1_06;
    if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* catch() { ... } // from try @ 00540b5c with catch @ 00540f64
                       catch() { ... } // from try @ 00540bfc with catch @ 00540f64 */
      lVar5 = plVar9[2];
                    /* catch() { ... } // from try @ 005409c8 with catch @ 00540f68
                       catch() { ... } // from try @ 00540a68 with catch @ 00540f68 */
                    /* catch() { ... } // from try @ 00540af4 with catch @ 00540f6c
                       catch() { ... } // from try @ 00540c88 with catch @ 00540f6c */
      plVar9[2] = lVar5 + -1;
      pRVar4 = extraout_x1_07;
                    /* catch() { ... } // from try @ 00540d28 with catch @ 00540f70 */
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        pRVar4 = extraout_x1_08;
      }
    }
    plVar9 = local_70;
                    /* try { // try from 00540f94 to 00641013 has its CatchHandler @ 0054101c */
    if ((local_70 != (long *)0x0) &&
       (lVar5 = local_70[1], local_70[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      lVar5 = plVar9[2];
      plVar9[2] = lVar5 + -1;
      pRVar4 = extraout_x1_09;
      if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 00540d18 with catch @ 00540fc8
                       catch() { ... } // from try @ 00540d50 with catch @ 00540fc8 */
        (**(code **)(*plVar9 + 0x18))(plVar9);
        pRVar4 = extraout_x1_10;
      }
    }
    pGVar3 = local_68;
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)(pGVar7 + 0x74),pRVar4);
    *(undefined4 *)(pGVar3 + 0x88) = local_80;
    if (local_70 != (long *)0x0) {
      local_70[1] = local_70[1] + 1;
    }
    plVar9 = *(long **)(pGVar3 + 0x98);
    *(long **)(pGVar3 + 0x90) = local_78;
    *(long **)(pGVar3 + 0x98) = local_70;
    if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 00541014 to 0064101f has its CatchHandler @ 005408e0 */
                    /* catch() { ... } // from try @ 00540e2c with catch @ 0054101c
                       catch() { ... } // from try @ 00540f94 with catch @ 0054101c */
                    /* catch() { ... } // from try @ 005410d0 with catch @ 00541020 */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar5 = plVar9[2];
      plVar9[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 00541038 to 0064103f has its CatchHandler @ 005410dc */
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    if ((local_70 != (long *)0x0) &&
       (lVar5 = local_70[1], local_70[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
                    /* try { // try from 0054106c to 00641077 has its CatchHandler @ 00541084 */
      lVar5 = local_70[2];
      local_70[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 0054106c with catch @ 00541084 */
        (**(code **)(*local_70 + 0x18))(local_70);
      }
    }
    if ((in_x1 & 1) != 0) {
      local_68[100] = (GUIAnimation)0x1;
      local_68[0xb8] = (GUIAnimation)0x0;
    }
    *(undefined4 *)(local_68 + 0x5c) = 0x3e800000;
                    /* try { // try from 005410a8 to 006410cf has its CatchHandler @ 005410d8 */
    GUIView::RemoveAllAnimations(pGVar7);
    pGVar3 = (GUIAnimation *)GUIView::AddAnimation(pGVar7,(shared_ptr *)&local_68);
                    /* try { // try from 005410d0 to 006410eb has its CatchHandler @ 00541020 */
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005410a8 with catch @ 005410d8 */
                    /* catch() { ... } // from try @ 00541038 with catch @ 005410dc */
      pGVar3 = (GUIAnimation *)(**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = local_60[2];
                    /* try { // try from 005410ec to 006410f7 has its CatchHandler @ 005410f8 */
      local_60[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 005410ec with catch @ 005410f8 */
                    /* try { // try from 005410fc to 006410ff has its CatchHandler @ 00541104 */
        pGVar3 = (GUIAnimation *)(**(code **)(*local_60 + 0x18))(local_60);
      }
    }
                    /* catch() { ... } // from try @ 005410fc with catch @ 00541104 */
                    /* try { // try from 00541108 to 0064113f has its CatchHandler @ 00541108
                       catch() { ... } // from try @ 00541108 with catch @ 00541108
                       catch() { ... } // from try @ 00541420 with catch @ 00541108
                       catch() { ... } // from try @ 00541798 with catch @ 00541108 */
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      pGVar3 = (GUIAnimation *)(**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 00541140 to 00641153 has its CatchHandler @ 005416ac */
        pGVar3 = (GUIAnimation *)(**(code **)(*plVar6 + 0x18))(plVar6);
        pGVar7 = *(GUIView **)(pGVar2 + 0x138);
        goto joined_r0x0054114c;
      }
    }
  }
  pGVar7 = *(GUIView **)(pGVar2 + 0x138);
joined_r0x0054114c:
  if ((pGVar7 != (GUIView *)0x0) && ((in_x1 & 1) != 0)) {
    plVar6 = *(long **)(pGVar2 + 0x140);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 00541180 to 00641187 has its CatchHandler @ 005416c0 */
                    /* try { // try from 00541188 to 0064119b has its CatchHandler @ 00541638 */
      plVar6[1] = plVar6[1] + 1;
    }
                    /* try { // try from 0054119c to 006411af has its CatchHandler @ 005415cc */
    GUIAnimation::AlphaAnimation(pGVar3,1.0,0.0,0.25);
    *(undefined1 *)(CONCAT44(uStack_7c,local_80) + 0xb8) = 0;
    GUIView::RemoveAllAnimations(pGVar7);
    GUIView::AddAnimation(pGVar7,(shared_ptr *)&local_80);
                    /* try { // try from 005411c0 to 006411c7 has its CatchHandler @ 005416b0 */
                    /* try { // try from 005411c8 to 006411db has its CatchHandler @ 005415c8 */
    if ((local_78 != (long *)0x0) &&
       (lVar5 = local_78[1], local_78[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 005411dc to 006411ef has its CatchHandler @ 0054155c */
      (**(code **)(*local_78 + 0x10))(local_78);
      lVar5 = local_78[2];
      local_78[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 00541200 to 0064120b has its CatchHandler @ 005416d0 */
        (**(code **)(*local_78 + 0x18))(local_78);
      }
    }
                    /* try { // try from 0054120c to 00641213 has its CatchHandler @ 00541540 */
                    /* try { // try from 00541214 to 0064121f has its CatchHandler @ 005416d0 */
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 00541224 to 00641243 has its CatchHandler @ 005416e0 */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


