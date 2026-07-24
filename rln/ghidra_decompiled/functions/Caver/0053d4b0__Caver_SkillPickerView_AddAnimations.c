/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053d4b0
 * Function: Caver::SkillPickerView::AddAnimations
 * Signature: undefined __cdecl AddAnimations(bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::AddAnimations(bool) */

void Caver::SkillPickerView::AddAnimations(bool param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  GUIAnimation *pGVar4;
  GUIAnimation *pGVar5;
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
  Rectangle *pRVar6;
  GUIAnimation *in_x2;
  long lVar7;
  long lVar8;
  long *plVar9;
  GUIView *pGVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  GUIPropertyValue aGStack_c0 [16];
  undefined4 local_b0;
  undefined4 uStack_ac;
  long *local_a8;
  long *local_a0;
  GUIAnimation *local_98;
  long *local_90;
  long local_88;
  
  pGVar4 = (GUIAnimation *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  pGVar10 = *(GUIView **)(pGVar4 + 0x110);
  pGVar5 = pGVar4;
  if (pGVar10 != (GUIView *)0x0) {
    plVar9 = *(long **)(pGVar4 + 0x118);
    if (plVar9 != (long *)0x0) {
      plVar9[1] = plVar9[1] + 1;
    }
    in_x2 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(in_x2);
    local_98 = in_x2;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_90,in_x2);
    boost::detail::sp_enable_shared_from_this(&local_98,in_x2);
    pGVar5 = local_98;
    *(undefined4 *)(local_98 + 0x30) = 3;
    Rectangle::TranslatedRectangle((Vector2 *)(pGVar10 + 0x74));
    GUIPropertyValue::ValueWithRectangle(aGStack_c0,extraout_x1);
    *(undefined4 *)(pGVar5 + 0x70) = local_b0;
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar11 = *(long **)(pGVar5 + 0x80);
    *(long **)(pGVar5 + 0x78) = local_a8;
    *(long **)(pGVar5 + 0x80) = local_a0;
    pRVar6 = extraout_x1_00;
    if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar7 = plVar11[2];
      plVar11[2] = lVar7 + -1;
      pRVar6 = extraout_x1_01;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
        pRVar6 = extraout_x1_02;
      }
    }
    plVar11 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar7 = local_a0[1], local_a0[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      lVar7 = plVar11[2];
      plVar11[2] = lVar7 + -1;
      pRVar6 = extraout_x1_03;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
        pRVar6 = extraout_x1_04;
      }
    }
    pGVar5 = local_98;
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)(pGVar10 + 0x74),pRVar6);
    *(undefined4 *)(pGVar5 + 0x88) = local_b0;
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar11 = *(long **)(pGVar5 + 0x98);
    *(long **)(pGVar5 + 0x90) = local_a8;
    *(long **)(pGVar5 + 0x98) = local_a0;
    if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar7 = plVar11[2];
      plVar11[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    plVar11 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar7 = local_a0[1], local_a0[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      lVar7 = plVar11[2];
      plVar11[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    uVar13 = DAT_00683f68;
    if ((in_x1 & 1) == 0) {
      *(undefined4 *)(local_98 + 0x58) = 0x3e800000;
      uVar13 = 0x3e800000;
    }
    else {
      local_98[100] = (GUIAnimation)0x1;
      local_98[0xb8] = (GUIAnimation)0x0;
    }
    *(undefined4 *)(local_98 + 0x5c) = uVar13;
    GUIView::RemoveAllAnimations(pGVar10);
    pGVar5 = (GUIAnimation *)GUIView::AddAnimation(pGVar10,(shared_ptr *)&local_98);
    plVar11 = local_90;
    if ((local_90 != (long *)0x0) &&
       (lVar7 = local_90[1], local_90[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      pGVar5 = (GUIAnimation *)(**(code **)(*local_90 + 0x10))(local_90);
      lVar7 = plVar11[2];
      plVar11[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 0053d7ac with catch @ 0053d77c */
        pGVar5 = (GUIAnimation *)(**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    if ((plVar9 != (long *)0x0) && (lVar7 = plVar9[1], plVar9[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 0053d798 to 0063d7ab has its CatchHandler @ 0053d7d0 */
      pGVar5 = (GUIAnimation *)(**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
                    /* try { // try from 0053d7ac to 0063d7d3 has its CatchHandler @ 0053d77c */
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        pGVar5 = (GUIAnimation *)(**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
  }
  fVar3 = DAT_0068798c;
  fVar2 = DAT_00684318;
                    /* catch() { ... } // from try @ 0053d798 with catch @ 0053d7d0 */
  if (0 < *(int *)(pGVar4 + 0x120)) {
    lVar12 = 0;
    lVar7 = 0;
    do {
      pGVar10 = *(GUIView **)(*(long *)(pGVar4 + 0x138) + lVar12);
      plVar9 = (long *)((undefined8 *)(*(long *)(pGVar4 + 0x138) + lVar12))[1];
      if (plVar9 != (long *)0x0) {
        plVar9[1] = plVar9[1] + 1;
      }
      if ((in_x1 & 1) == 0) {
        in_x2 = operator_new(0xc0);
        GUIAnimation::GUIAnimation(in_x2);
        local_98 = in_x2;
        boost::detail::shared_count::shared_count<Caver::GUIAnimation>
                  ((shared_count *)&local_90,in_x2);
        boost::detail::sp_enable_shared_from_this(&local_98,in_x2);
        pGVar5 = local_98;
        *(undefined4 *)(local_98 + 0x30) = 3;
        Rectangle::TranslatedRectangle((Vector2 *)(pGVar10 + 0x74));
        GUIPropertyValue::ValueWithRectangle(aGStack_c0,extraout_x1_05);
        *(undefined4 *)(pGVar5 + 0x70) = local_b0;
        if (local_a0 != (long *)0x0) {
          local_a0[1] = local_a0[1] + 1;
        }
        plVar11 = *(long **)(pGVar5 + 0x80);
        *(long **)(pGVar5 + 0x78) = local_a8;
        *(long **)(pGVar5 + 0x80) = local_a0;
        pRVar6 = extraout_x1_06;
        if ((plVar11 != (long *)0x0) &&
           (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          lVar8 = plVar11[2];
          plVar11[2] = lVar8 + -1;
          pRVar6 = extraout_x1_07;
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
            pRVar6 = extraout_x1_08;
          }
        }
        plVar11 = local_a0;
        if ((local_a0 != (long *)0x0) &&
           (lVar8 = local_a0[1], local_a0[1] = lVar8 + -1, lVar8 + -1 == 0)) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
          lVar8 = plVar11[2];
          plVar11[2] = lVar8 + -1;
          pRVar6 = extraout_x1_09;
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
            pRVar6 = extraout_x1_10;
          }
        }
        pGVar5 = local_98;
        GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)(pGVar10 + 0x74),pRVar6);
        *(undefined4 *)(pGVar5 + 0x88) = local_b0;
        if (local_a0 != (long *)0x0) {
          local_a0[1] = local_a0[1] + 1;
        }
        plVar11 = *(long **)(pGVar5 + 0x98);
        *(long **)(pGVar5 + 0x90) = local_a8;
        *(long **)(pGVar5 + 0x98) = local_a0;
        if ((plVar11 != (long *)0x0) &&
           (lVar8 = plVar11[1], plVar11[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 0053dac4 to 0063db37 has its CatchHandler @ 0053dac4
                       catch() { ... } // from try @ 0053dac4 with catch @ 0053dac4
                       catch() { ... } // from try @ 0053db90 with catch @ 0053dac4 */
          (**(code **)(*plVar11 + 0x10))(plVar11);
          lVar8 = plVar11[2];
          plVar11[2] = lVar8 + -1;
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
        plVar11 = local_a0;
        if ((local_a0 != (long *)0x0) &&
           (lVar8 = local_a0[1], local_a0[1] = lVar8 + -1, lVar8 + -1 == 0)) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
          lVar8 = plVar11[2];
          plVar11[2] = lVar8 + -1;
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
                    /* try { // try from 0053db38 to 0063db3b has its CatchHandler @ 0053db84 */
        *(undefined4 *)(local_98 + 0x5c) = 0x3e19999a;
        *(float *)(local_98 + 0x58) = (float)(int)lVar7 * fVar3;
        GUIView::RemoveAllAnimations(pGVar10);
        pGVar5 = (GUIAnimation *)GUIView::AddAnimation(pGVar10,(shared_ptr *)&local_98);
        plVar11 = local_90;
        if ((local_90 != (long *)0x0) &&
           (lVar8 = local_90[1], local_90[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0053db38 with catch @ 0053db84 */
                    /* try { // try from 0053db88 to 0063db8f has its CatchHandler @ 0053dba0 */
                    /* try { // try from 0053db90 to 0063dba3 has its CatchHandler @ 0053dac4 */
          pGVar5 = (GUIAnimation *)(**(code **)(*local_90 + 0x10))(local_90);
          lVar8 = plVar11[2];
          plVar11[2] = lVar8 + -1;
                    /* catch() { ... } // from try @ 0053db88 with catch @ 0053dba0 */
          if (lVar8 + -1 == 0) {
            pGVar5 = (GUIAnimation *)(**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
      }
      else {
        GUIAnimation::AlphaAnimation(pGVar5,1.0,0.0,fVar2);
        *(undefined1 *)(CONCAT44(uStack_ac,local_b0) + 0xb8) = 0;
        *(undefined4 *)(CONCAT44(uStack_ac,local_b0) + 0x58) = 0x3dcccccd;
        GUIView::RemoveAllAnimations(pGVar10);
        GUIView::AddAnimation(pGVar10,(shared_ptr *)&local_b0);
        Rectangle::TranslatedRectangle((Vector2 *)(pGVar10 + 0x74));
        GUIAnimation::FrameAnimation
                  ((GUIAnimation *)(pGVar10 + 0x74),(Rectangle *)aGStack_c0,(Rectangle *)in_x2,fVar2
                  );
        local_98[0xb8] = (GUIAnimation)0x0;
        *(undefined4 *)(local_98 + 0x58) = 0x3dcccccd;
        pGVar5 = (GUIAnimation *)GUIView::AddAnimation(pGVar10,(shared_ptr *)&local_98);
        plVar11 = local_90;
        if ((local_90 != (long *)0x0) &&
           (lVar8 = local_90[1], local_90[1] = lVar8 + -1, lVar8 + -1 == 0)) {
          pGVar5 = (GUIAnimation *)(**(code **)(*local_90 + 0x10))(local_90);
          lVar8 = plVar11[2];
          plVar11[2] = lVar8 + -1;
          if (lVar8 + -1 == 0) {
            pGVar5 = (GUIAnimation *)(**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
        plVar11 = local_a8;
        if ((local_a8 != (long *)0x0) &&
           (lVar8 = local_a8[1], local_a8[1] = lVar8 + -1, lVar8 + -1 == 0)) {
          pGVar5 = (GUIAnimation *)(**(code **)(*local_a8 + 0x10))(local_a8);
          lVar8 = plVar11[2];
          plVar11[2] = lVar8 + -1;
          if (lVar8 + -1 == 0) {
            pGVar5 = (GUIAnimation *)(**(code **)(*plVar11 + 0x18))(plVar11);
          }
        }
      }
      if ((plVar9 != (long *)0x0) && (lVar8 = plVar9[1], plVar9[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        pGVar5 = (GUIAnimation *)(**(code **)(*plVar9 + 0x10))(plVar9);
        lVar8 = plVar9[2];
        plVar9[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          pGVar5 = (GUIAnimation *)(**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      lVar7 = lVar7 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar7 < *(int *)(pGVar4 + 0x120));
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


