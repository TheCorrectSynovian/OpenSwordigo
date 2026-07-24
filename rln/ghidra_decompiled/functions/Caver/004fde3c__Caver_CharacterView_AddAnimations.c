/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004fde3c
 * Function: Caver::CharacterView::AddAnimations
 * Signature: undefined __thiscall AddAnimations(CharacterView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterView::AddAnimations(bool) */

void __thiscall Caver::CharacterView::AddAnimations(CharacterView *this,bool param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  GUIAnimation *pGVar5;
  GUIPropertyValue *pGVar6;
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
  Rectangle *extraout_x1_11;
  Rectangle *extraout_x1_12;
  Rectangle *extraout_x1_13;
  Rectangle *extraout_x1_14;
  Rectangle *extraout_x1_15;
  Rectangle *extraout_x1_16;
  Rectangle *pRVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  GUIView *pGVar11;
  long lVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  GUIPropertyValue aGStack_c0 [16];
  undefined4 local_b0;
  undefined8 local_a8;
  long *local_a0;
  GUIAnimation *local_98;
  long *local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x118) == 0) {
LAB_004fe0b8:
    lVar8 = *(long *)(this + 0x128);
  }
  else {
    pGVar5 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar5);
    local_98 = pGVar5;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_90,pGVar5)
    ;
    pGVar6 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_98,pGVar5,pGVar5);
    pGVar5 = local_98;
    *(undefined4 *)(local_98 + 0x30) = 1;
    pGVar6 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar6,DAT_00683944);
    *(undefined4 *)(pGVar5 + 0x70) = local_b0;
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar10 = *(long **)(pGVar5 + 0x80);
    *(undefined8 *)(pGVar5 + 0x78) = local_a8;
    *(long **)(pGVar5 + 0x80) = local_a0;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      pGVar6 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        pGVar6 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    plVar10 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar8 = local_a0[1], local_a0[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      pGVar6 = (GUIPropertyValue *)(**(code **)(*local_a0 + 0x10))(local_a0);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        pGVar6 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    pGVar5 = local_98;
    GUIPropertyValue::ValueWithFloat(pGVar6,1.0);
    *(undefined4 *)(pGVar5 + 0x88) = local_b0;
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar10 = *(long **)(pGVar5 + 0x98);
    *(undefined8 *)(pGVar5 + 0x90) = local_a8;
    *(long **)(pGVar5 + 0x98) = local_a0;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    plVar10 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar8 = local_a0[1], local_a0[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    if (param_1) {
                    /* catch() { ... } // from try @ 004fe07c with catch @ 004fe04c */
      local_98[100] = (GUIAnimation)0x1;
      local_98[0xb8] = (GUIAnimation)0x0;
    }
    else {
      *(undefined4 *)(local_98 + 0x58) = 0x3f000000;
    }
    *(undefined4 *)(local_98 + 0x5c) = 0x3e800000;
                    /* try { // try from 004fe068 to 005fe07b has its CatchHandler @ 004fe0a0 */
    pGVar11 = *(GUIView **)(this + 0x118);
    GUIView::RemoveAllAnimations(pGVar11);
                    /* try { // try from 004fe07c to 005fe0a3 has its CatchHandler @ 004fe04c */
    GUIView::AddAnimation(pGVar11,(shared_ptr *)&local_98);
    plVar10 = local_90;
    if ((local_90 == (long *)0x0) ||
       (lVar8 = local_90[1], local_90[1] = lVar8 + -1, lVar8 + -1 != 0)) goto LAB_004fe0b8;
                    /* catch() { ... } // from try @ 004fe068 with catch @ 004fe0a0 */
    (**(code **)(*local_90 + 0x10))(local_90);
    lVar8 = plVar10[2];
    plVar10[2] = lVar8 + -1;
    if (lVar8 + -1 != 0) goto LAB_004fe0b8;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    lVar8 = *(long *)(this + 0x128);
                    /* catch() { ... } // from try @ 004fe2f4 with catch @ 004fe328 */
  }
  if (lVar8 != 0) {
    pGVar5 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar5);
    local_98 = pGVar5;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_90,pGVar5)
    ;
    pGVar6 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_98,pGVar5,pGVar5);
    pGVar5 = local_98;
    *(undefined4 *)(local_98 + 0x30) = 1;
    pGVar6 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar6,DAT_00683944);
    *(undefined4 *)(pGVar5 + 0x70) = local_b0;
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar10 = *(long **)(pGVar5 + 0x80);
    *(undefined8 *)(pGVar5 + 0x78) = local_a8;
    *(long **)(pGVar5 + 0x80) = local_a0;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
                    /* catch() { ... } // from try @ 004fe22c with catch @ 004fe148 */
      pGVar6 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        pGVar6 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    plVar10 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar8 = local_a0[1], local_a0[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      pGVar6 = (GUIPropertyValue *)(**(code **)(*local_a0 + 0x10))(local_a0);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 004fe1bc to 005fe1bf has its CatchHandler @ 004fe1d0 */
        pGVar6 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    pGVar5 = local_98;
    GUIPropertyValue::ValueWithFloat(pGVar6,1.0);
                    /* catch() { ... } // from try @ 004fe1bc with catch @ 004fe1d0 */
    *(undefined4 *)(pGVar5 + 0x88) = local_b0;
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar10 = *(long **)(pGVar5 + 0x98);
    *(undefined8 *)(pGVar5 + 0x90) = local_a8;
    *(long **)(pGVar5 + 0x98) = local_a0;
                    /* try { // try from 004fe1f8 to 005fe1fb has its CatchHandler @ 004fe238 */
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
                    /* try { // try from 004fe224 to 005fe22b has its CatchHandler @ 004fe234 */
      if (lVar8 + -1 == 0) {
                    /* try { // try from 004fe22c to 005fe23b has its CatchHandler @ 004fe148 */
                    /* catch() { ... } // from try @ 004fe224 with catch @ 004fe234 */
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
                    /* catch() { ... } // from try @ 004fe1f8 with catch @ 004fe238 */
    plVar10 = local_a0;
                    /* catch() { ... } // from try @ 004fe290 with catch @ 004fe23c
                       catch() { ... } // from try @ 004fe338 with catch @ 004fe23c */
    if ((local_a0 != (long *)0x0) &&
       (lVar8 = local_a0[1], local_a0[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
                    /* try { // try from 004fe260 to 005fe263 has its CatchHandler @ 004fe2cc */
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    if (param_1) {
                    /* try { // try from 004fe288 to 005fe28f has its CatchHandler @ 004fe32c */
      local_98[100] = (GUIAnimation)0x1;
                    /* try { // try from 004fe290 to 005fe2f3 has its CatchHandler @ 004fe23c */
      local_98[0xb8] = (GUIAnimation)0x0;
    }
    else {
      *(undefined4 *)(local_98 + 0x58) = 0x3f000000;
    }
    *(undefined4 *)(local_98 + 0x5c) = 0x3e800000;
    pGVar11 = *(GUIView **)(this + 0x128);
    GUIView::RemoveAllAnimations(pGVar11);
    GUIView::AddAnimation(pGVar11,(shared_ptr *)&local_98);
    plVar10 = local_90;
                    /* catch() { ... } // from try @ 004fe260 with catch @ 004fe2cc */
    if ((local_90 != (long *)0x0) &&
       (lVar8 = local_90[1], local_90[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_90 + 0x10))(local_90);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
                    /* try { // try from 004fe2f4 to 005fe2f7 has its CatchHandler @ 004fe328 */
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        lVar8 = *(long *)(this + 0x138);
        goto joined_r0x004fe30c;
      }
    }
  }
                    /* catch() { ... } // from try @ 004fe288 with catch @ 004fe32c */
  lVar8 = *(long *)(this + 0x138);
                    /* try { // try from 004fe330 to 005fe337 has its CatchHandler @ 004fe340 */
joined_r0x004fe30c:
  if (lVar8 != 0) {
                    /* try { // try from 004fe338 to 005fe343 has its CatchHandler @ 004fe23c */
    pGVar5 = operator_new(0xc0);
                    /* catch() { ... } // from try @ 004fe330 with catch @ 004fe340 */
    GUIAnimation::GUIAnimation(pGVar5);
    local_98 = pGVar5;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_90,pGVar5)
    ;
    boost::detail::sp_enable_shared_from_this(&local_98,pGVar5,pGVar5);
    pGVar5 = local_98;
    *(undefined4 *)(local_98 + 0x30) = 3;
    Rectangle::TranslatedRectangle((Vector2 *)(*(long *)(this + 0x138) + 0x74));
    GUIPropertyValue::ValueWithRectangle(aGStack_c0,extraout_x1);
    *(undefined4 *)(pGVar5 + 0x70) = local_b0;
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar10 = *(long **)(pGVar5 + 0x80);
    *(undefined8 *)(pGVar5 + 0x78) = local_a8;
    *(long **)(pGVar5 + 0x80) = local_a0;
    pRVar7 = extraout_x1_00;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      pRVar7 = extraout_x1_01;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pRVar7 = extraout_x1_02;
      }
    }
    plVar10 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar8 = local_a0[1], local_a0[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      pRVar7 = extraout_x1_03;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pRVar7 = extraout_x1_04;
      }
    }
    pGVar5 = local_98;
    GUIPropertyValue::ValueWithRectangle
              ((GUIPropertyValue *)(*(long *)(this + 0x138) + 0x74),pRVar7);
    *(undefined4 *)(pGVar5 + 0x88) = local_b0;
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar10 = *(long **)(pGVar5 + 0x98);
    *(undefined8 *)(pGVar5 + 0x90) = local_a8;
    *(long **)(pGVar5 + 0x98) = local_a0;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    plVar10 = local_a0;
                    /* catch() { ... } // from try @ 004fe4f4 with catch @ 004fe4e0 */
    if ((local_a0 != (long *)0x0) &&
       (lVar8 = local_a0[1], local_a0[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 004fe4f0 to 005fe4f3 has its CatchHandler @ 004fe504 */
                    /* try { // try from 004fe4f4 to 005fe517 has its CatchHandler @ 004fe4e0 */
      (**(code **)(*local_a0 + 0x10))(local_a0);
      lVar8 = plVar10[2];
                    /* catch() { ... } // from try @ 004fe4f0 with catch @ 004fe504 */
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    uVar14 = DAT_00683f68;
    if (param_1) {
      local_98[0xb8] = (GUIAnimation)0x0;
      local_98[100] = (GUIAnimation)0x1;
      uVar14 = 0x3e800000;
    }
    *(undefined4 *)(local_98 + 0x5c) = uVar14;
    pGVar11 = *(GUIView **)(this + 0x138);
    GUIView::RemoveAllAnimations(pGVar11);
    GUIView::AddAnimation(pGVar11,(shared_ptr *)&local_98);
    plVar10 = local_90;
    if ((local_90 != (long *)0x0) &&
       (lVar8 = local_90[1], local_90[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_90 + 0x10))(local_90);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 004fe598 to 005fe8df has its CatchHandler @ 004fe598
                       catch() { ... } // from try @ 004fe598 with catch @ 004fe598
                       catch() { ... } // from try @ 004fe8e4 with catch @ 004fe598
                       catch() { ... } // from try @ 004fea84 with catch @ 004fe598
                       catch() { ... } // from try @ 004febac with catch @ 004fe598 */
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  fVar4 = DAT_00688c8c;
  fVar3 = DAT_0068798c;
  uVar2 = DAT_00684318;
  uVar14 = DAT_00683f68;
  if (0 < *(int *)(this + 0x188)) {
    lVar12 = 0;
    lVar8 = 0;
    do {
      pGVar5 = operator_new(0xc0);
      GUIAnimation::GUIAnimation(pGVar5);
      local_98 = pGVar5;
      boost::detail::shared_count::shared_count<Caver::GUIAnimation>
                ((shared_count *)&local_90,pGVar5);
      boost::detail::sp_enable_shared_from_this(&local_98,pGVar5,pGVar5);
      pGVar5 = local_98;
      *(undefined4 *)(local_98 + 0x30) = 3;
      Rectangle::TranslatedRectangle((Vector2 *)(*(long *)(*(long *)(this + 400) + lVar12) + 0x74));
      GUIPropertyValue::ValueWithRectangle(aGStack_c0,extraout_x1_05);
      *(undefined4 *)(pGVar5 + 0x70) = local_b0;
      if (local_a0 != (long *)0x0) {
        local_a0[1] = local_a0[1] + 1;
      }
      plVar10 = *(long **)(pGVar5 + 0x80);
      *(undefined8 *)(pGVar5 + 0x78) = local_a8;
      *(long **)(pGVar5 + 0x80) = local_a0;
      pRVar7 = extraout_x1_06;
      if ((plVar10 != (long *)0x0) && (lVar9 = plVar10[1], plVar10[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar9 = plVar10[2];
        plVar10[2] = lVar9 + -1;
        pRVar7 = extraout_x1_07;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
          pRVar7 = extraout_x1_08;
        }
      }
      plVar10 = local_a0;
      if ((local_a0 != (long *)0x0) &&
         (lVar9 = local_a0[1], local_a0[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
        lVar9 = plVar10[2];
        plVar10[2] = lVar9 + -1;
        pRVar7 = extraout_x1_09;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
          pRVar7 = extraout_x1_10;
        }
      }
      pGVar5 = local_98;
      GUIPropertyValue::ValueWithRectangle
                ((GUIPropertyValue *)(*(long *)(*(long *)(this + 400) + lVar12) + 0x74),pRVar7);
      *(undefined4 *)(pGVar5 + 0x88) = local_b0;
      if (local_a0 != (long *)0x0) {
        local_a0[1] = local_a0[1] + 1;
      }
      plVar10 = *(long **)(pGVar5 + 0x98);
      *(undefined8 *)(pGVar5 + 0x90) = local_a8;
      *(long **)(pGVar5 + 0x98) = local_a0;
      if ((plVar10 != (long *)0x0) && (lVar9 = plVar10[1], plVar10[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar9 = plVar10[2];
        plVar10[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      plVar10 = local_a0;
      if ((local_a0 != (long *)0x0) &&
         (lVar9 = local_a0[1], local_a0[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
        lVar9 = plVar10[2];
        plVar10[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      if (param_1) {
        fVar13 = (float)(int)lVar8 * fVar4 + fVar4;
        local_98[100] = (GUIAnimation)0x1;
        local_98[0xb8] = (GUIAnimation)0x0;
        uVar15 = uVar2;
      }
      else {
        fVar13 = (float)(int)lVar8 * fVar3 + fVar3;
        uVar15 = uVar14;
      }
      *(float *)(local_98 + 0x58) = fVar13;
      *(undefined4 *)(local_98 + 0x5c) = uVar15;
      pGVar11 = *(GUIView **)(*(long *)(this + 400) + lVar12);
      GUIView::RemoveAllAnimations(pGVar11);
      GUIView::AddAnimation(pGVar11,(shared_ptr *)&local_98);
      plVar10 = local_90;
      if ((local_90 != (long *)0x0) &&
         (lVar9 = local_90[1], local_90[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*local_90 + 0x10))(local_90);
        lVar9 = plVar10[2];
        plVar10[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      lVar8 = lVar8 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar8 < *(int *)(this + 0x188));
  }
  if (*(long *)(this + 0x1d8) != 0) {
    pGVar5 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar5);
    local_98 = pGVar5;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_90,pGVar5)
    ;
    boost::detail::sp_enable_shared_from_this(&local_98,pGVar5,pGVar5);
    pGVar5 = local_98;
    *(undefined4 *)(local_98 + 0x30) = 3;
                    /* try { // try from 004fe8e0 to 005fe8e3 has its CatchHandler @ 004feca4 */
                    /* try { // try from 004fe8e4 to 005fea7f has its CatchHandler @ 004fe598 */
    Rectangle::TranslatedRectangle((Vector2 *)(*(long *)(this + 0x1d8) + 0x74));
    GUIPropertyValue::ValueWithRectangle(aGStack_c0,extraout_x1_11);
    *(undefined4 *)(pGVar5 + 0x70) = local_b0;
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar10 = *(long **)(pGVar5 + 0x80);
    *(undefined8 *)(pGVar5 + 0x78) = local_a8;
    *(long **)(pGVar5 + 0x80) = local_a0;
    pRVar7 = extraout_x1_12;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      pRVar7 = extraout_x1_13;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pRVar7 = extraout_x1_14;
      }
    }
    plVar10 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar8 = local_a0[1], local_a0[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      pRVar7 = extraout_x1_15;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pRVar7 = extraout_x1_16;
      }
    }
    pGVar5 = local_98;
    GUIPropertyValue::ValueWithRectangle
              ((GUIPropertyValue *)(*(long *)(this + 0x1d8) + 0x74),pRVar7);
    *(undefined4 *)(pGVar5 + 0x88) = local_b0;
    if (local_a0 != (long *)0x0) {
      local_a0[1] = local_a0[1] + 1;
    }
    plVar10 = *(long **)(pGVar5 + 0x98);
    *(undefined8 *)(pGVar5 + 0x90) = local_a8;
    *(long **)(pGVar5 + 0x98) = local_a0;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    if ((local_a0 != (long *)0x0) &&
       (lVar8 = local_a0[1], local_a0[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      lVar8 = local_a0[2];
      local_a0[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 004fea80 to 005fea83 has its CatchHandler @ 004fecac */
                    /* try { // try from 004fea84 to 005feba7 has its CatchHandler @ 004fe598 */
        (**(code **)(*local_a0 + 0x18))(local_a0);
      }
    }
    uVar14 = DAT_00683f68;
    if (param_1) {
      uVar14 = 0x3e800000;
      local_98[0xb8] = (GUIAnimation)0x0;
      local_98[100] = (GUIAnimation)0x1;
    }
    else {
      *(undefined4 *)(local_98 + 0x58) = 0x3eb33333;
    }
    *(undefined4 *)(local_98 + 0x5c) = uVar14;
    pGVar11 = *(GUIView **)(this + 0x1d8);
    GUIView::RemoveAllAnimations(pGVar11);
    GUIView::AddAnimation(pGVar11,(shared_ptr *)&local_98);
    if ((local_90 != (long *)0x0) &&
       (lVar8 = local_90[1], local_90[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_90 + 0x10))(local_90);
      lVar8 = local_90[2];
      local_90[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_90 + 0x18))(local_90);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


