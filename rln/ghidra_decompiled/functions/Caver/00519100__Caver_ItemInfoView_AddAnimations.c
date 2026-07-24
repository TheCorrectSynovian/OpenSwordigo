/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00519100
 * Function: Caver::ItemInfoView::AddAnimations
 * Signature: undefined __thiscall AddAnimations(ItemInfoView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemInfoView::AddAnimations(bool) */

void __thiscall Caver::ItemInfoView::AddAnimations(ItemInfoView *this,bool param_1)

{
  long lVar1;
  GUIAnimation *pGVar2;
  GUIPropertyValue *pGVar3;
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
  Rectangle *pRVar4;
  long lVar5;
  long *plVar6;
  GUIView *pGVar7;
  undefined4 uVar8;
  GUIPropertyValue aGStack_80 [16];
  undefined4 local_70;
  undefined8 local_68;
  long *local_60;
  GUIAnimation *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xf0) == 0) {
LAB_0051936c:
    if (*(long *)(this + 0x110) == 0) goto LAB_0051960c;
LAB_00519374:
    pGVar2 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar2);
    local_58 = pGVar2;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_50,pGVar2)
    ;
    boost::detail::sp_enable_shared_from_this(&local_58,pGVar2,pGVar2);
    pGVar2 = local_58;
    *(undefined4 *)(local_58 + 0x30) = 3;
    Rectangle::TranslatedRectangle((Vector2 *)(*(long *)(this + 0x110) + 0x74));
    GUIPropertyValue::ValueWithRectangle(aGStack_80,extraout_x1);
    *(undefined4 *)(pGVar2 + 0x70) = local_70;
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x80);
    *(undefined8 *)(pGVar2 + 0x78) = local_68;
    *(long **)(pGVar2 + 0x80) = local_60;
    pRVar4 = extraout_x1_00;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      pRVar4 = extraout_x1_01;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pRVar4 = extraout_x1_02;
      }
    }
    plVar6 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      pRVar4 = extraout_x1_03;
      if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 00519288 with catch @ 0051948c */
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pRVar4 = extraout_x1_04;
      }
    }
    pGVar2 = local_58;
    GUIPropertyValue::ValueWithRectangle
              ((GUIPropertyValue *)(*(long *)(this + 0x110) + 0x74),pRVar4);
    *(undefined4 *)(pGVar2 + 0x88) = local_70;
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x98);
    *(undefined8 *)(pGVar2 + 0x90) = local_68;
    *(long **)(pGVar2 + 0x98) = local_60;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    plVar6 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    uVar8 = DAT_00683f68;
    if (param_1) {
      local_58[0xb8] = (GUIAnimation)0x0;
      local_58[100] = (GUIAnimation)0x1;
      uVar8 = 0x3e800000;
    }
    *(undefined4 *)(local_58 + 0x5c) = uVar8;
    pGVar7 = *(GUIView **)(this + 0x110);
    GUIView::RemoveAllAnimations(pGVar7);
    GUIView::AddAnimation(pGVar7,(shared_ptr *)&local_58);
    plVar6 = local_50;
    if ((local_50 == (long *)0x0) ||
       (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 != 0)) goto LAB_0051960c;
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_0051960c;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (*(long *)(this + 0x120) != 0) goto LAB_00519614;
LAB_00519884:
                    /* try { // try from 00519884 to 0061989f has its CatchHandler @ 005199d0 */
    lVar5 = *(long *)(this + 0x150);
  }
  else {
                    /* try { // try from 00519134 to 00619287 has its CatchHandler @ 00519134
                       catch() { ... } // from try @ 00519134 with catch @ 00519134
                       catch() { ... } // from try @ 0051928c with catch @ 00519134 */
    pGVar2 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar2);
    local_58 = pGVar2;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_50,pGVar2)
    ;
    pGVar3 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_58,pGVar2,pGVar2);
    pGVar2 = local_58;
    *(undefined4 *)(local_58 + 0x30) = 1;
    pGVar3 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar3,DAT_00683944);
    *(undefined4 *)(pGVar2 + 0x70) = local_70;
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x80);
    *(undefined8 *)(pGVar2 + 0x78) = local_68;
    *(long **)(pGVar2 + 0x80) = local_60;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    plVar6 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      pGVar3 = (GUIPropertyValue *)(**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    pGVar2 = local_58;
    GUIPropertyValue::ValueWithFloat(pGVar3,1.0);
    *(undefined4 *)(pGVar2 + 0x88) = local_70;
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x98);
    *(undefined8 *)(pGVar2 + 0x90) = local_68;
    *(long **)(pGVar2 + 0x98) = local_60;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 00519288 to 0061928b has its CatchHandler @ 0051948c */
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* try { // try from 0051928c to 0061949f has its CatchHandler @ 00519134 */
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    plVar6 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    if (param_1) {
      local_58[100] = (GUIAnimation)0x1;
      local_58[0xb8] = (GUIAnimation)0x0;
    }
    else {
      *(undefined4 *)(local_58 + 0x58) = 0x3f000000;
    }
    *(undefined4 *)(local_58 + 0x5c) = 0x3e800000;
    pGVar7 = *(GUIView **)(this + 0xf0);
    GUIView::RemoveAllAnimations(pGVar7);
    GUIView::AddAnimation(pGVar7,(shared_ptr *)&local_58);
    plVar6 = local_50;
    if ((local_50 == (long *)0x0) ||
       (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 != 0)) goto LAB_0051936c;
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_0051936c;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (*(long *)(this + 0x110) != 0) goto LAB_00519374;
LAB_0051960c:
    if (*(long *)(this + 0x120) == 0) goto LAB_00519884;
LAB_00519614:
    pGVar2 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar2);
    local_58 = pGVar2;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_50,pGVar2)
    ;
    boost::detail::sp_enable_shared_from_this(&local_58,pGVar2,pGVar2);
    pGVar2 = local_58;
    *(undefined4 *)(local_58 + 0x30) = 3;
    Rectangle::TranslatedRectangle((Vector2 *)(*(long *)(this + 0x120) + 0x74));
    GUIPropertyValue::ValueWithRectangle(aGStack_80,extraout_x1_05);
    *(undefined4 *)(pGVar2 + 0x70) = local_70;
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x80);
    *(undefined8 *)(pGVar2 + 0x78) = local_68;
    *(long **)(pGVar2 + 0x80) = local_60;
    pRVar4 = extraout_x1_06;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      pRVar4 = extraout_x1_07;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pRVar4 = extraout_x1_08;
      }
    }
    plVar6 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      pRVar4 = extraout_x1_09;
      if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 00519764 with catch @ 00519734 */
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pRVar4 = extraout_x1_10;
      }
    }
    pGVar2 = local_58;
    GUIPropertyValue::ValueWithRectangle
              ((GUIPropertyValue *)(*(long *)(this + 0x120) + 0x74),pRVar4);
                    /* try { // try from 00519750 to 00619763 has its CatchHandler @ 00519788 */
    *(undefined4 *)(pGVar2 + 0x88) = local_70;
    if (local_60 != (long *)0x0) {
                    /* try { // try from 00519764 to 0061978b has its CatchHandler @ 00519734 */
      local_60[1] = local_60[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x98);
    *(undefined8 *)(pGVar2 + 0x90) = local_68;
    *(long **)(pGVar2 + 0x98) = local_60;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00519750 with catch @ 00519788 */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    plVar6 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
                    /* catch() { ... } // from try @ 00519830 with catch @ 005197e0 */
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    uVar8 = DAT_00683f68;
    if (param_1) {
      local_58[0xb8] = (GUIAnimation)0x0;
                    /* try { // try from 00519814 to 00619817 has its CatchHandler @ 00519824 */
      local_58[100] = (GUIAnimation)0x1;
      uVar8 = 0x3e800000;
    }
                    /* catch() { ... } // from try @ 00519814 with catch @ 00519824 */
                    /* try { // try from 00519828 to 0061982f has its CatchHandler @ 00519838 */
    *(undefined4 *)(local_58 + 0x5c) = uVar8;
                    /* try { // try from 00519830 to 0061983b has its CatchHandler @ 005197e0 */
    *(undefined4 *)(local_58 + 0x58) = 0x3d4ccccd;
    pGVar7 = *(GUIView **)(this + 0x120);
                    /* catch() { ... } // from try @ 00519828 with catch @ 00519838 */
                    /* try { // try from 0051983c to 00619883 has its CatchHandler @ 0051983c
                       catch(type#1 @ 00000000) { ... } // from try @ 0051983c with catch @ 0051983c
                       catch(type#1 @ 00000000) { ... } // from try @ 005198a0 with catch @ 0051983c
                       catch(type#1 @ 00000000) { ... } // from try @ 005199dc with catch @ 0051983c
                        */
    GUIView::RemoveAllAnimations(pGVar7);
    GUIView::AddAnimation(pGVar7,(shared_ptr *)&local_58);
    plVar6 = local_50;
    if ((local_50 == (long *)0x0) ||
       (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 != 0)) goto LAB_00519884;
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_00519884;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar5 = *(long *)(this + 0x150);
  }
  if (lVar5 != 0) {
    pGVar2 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar2);
                    /* try { // try from 005198a0 to 006199d3 has its CatchHandler @ 0051983c */
    local_58 = pGVar2;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_50,pGVar2)
    ;
    boost::detail::sp_enable_shared_from_this(&local_58,pGVar2,pGVar2);
    pGVar2 = local_58;
    *(undefined4 *)(local_58 + 0x30) = 3;
    Rectangle::TranslatedRectangle((Vector2 *)(*(long *)(this + 0x150) + 0x74));
    GUIPropertyValue::ValueWithRectangle(aGStack_80,extraout_x1_11);
    *(undefined4 *)(pGVar2 + 0x70) = local_70;
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x80);
    *(undefined8 *)(pGVar2 + 0x78) = local_68;
    *(long **)(pGVar2 + 0x80) = local_60;
    pRVar4 = extraout_x1_12;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      pRVar4 = extraout_x1_13;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pRVar4 = extraout_x1_14;
      }
    }
    plVar6 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      pRVar4 = extraout_x1_15;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pRVar4 = extraout_x1_16;
      }
    }
    pGVar2 = local_58;
    GUIPropertyValue::ValueWithRectangle
              ((GUIPropertyValue *)(*(long *)(this + 0x150) + 0x74),pRVar4);
    *(undefined4 *)(pGVar2 + 0x88) = local_70;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00519884 with catch @ 005199d0
                        */
                    /* try { // try from 005199d4 to 006199db has its CatchHandler @ 005199e4 */
    if (local_60 != (long *)0x0) {
                    /* try { // try from 005199dc to 006199e7 has its CatchHandler @ 0051983c */
      local_60[1] = local_60[1] + 1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005199d4 with catch @ 005199e4
                        */
    plVar6 = *(long **)(pGVar2 + 0x98);
    *(undefined8 *)(pGVar2 + 0x90) = local_68;
    *(long **)(pGVar2 + 0x98) = local_60;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00519a24 with catch @ 00519a00 */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 00519a20 to 00619a23 has its CatchHandler @ 00519a34 */
                    /* try { // try from 00519a24 to 00619a47 has its CatchHandler @ 00519a00 */
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    plVar6 = local_60;
                    /* catch() { ... } // from try @ 00519a20 with catch @ 00519a34 */
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    uVar8 = DAT_00683f68;
    if (param_1) {
      local_58[0xb8] = (GUIAnimation)0x0;
      local_58[100] = (GUIAnimation)0x1;
      uVar8 = 0x3e800000;
    }
    *(undefined4 *)(local_58 + 0x5c) = uVar8;
    *(undefined4 *)(local_58 + 0x58) = 0x3dcccccd;
    pGVar7 = *(GUIView **)(this + 0x150);
    GUIView::RemoveAllAnimations(pGVar7);
    GUIView::AddAnimation(pGVar7,(shared_ptr *)&local_58);
    plVar6 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar5 = *(long *)(this + 0x160);
        goto joined_r0x00519b10;
      }
    }
  }
  lVar5 = *(long *)(this + 0x160);
joined_r0x00519b10:
  if (lVar5 != 0) {
    pGVar2 = operator_new(0xc0);
    GUIAnimation::GUIAnimation(pGVar2);
    local_58 = pGVar2;
    boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_50,pGVar2)
    ;
    pGVar3 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_58,pGVar2,pGVar2);
    pGVar2 = local_58;
    *(undefined4 *)(local_58 + 0x30) = 1;
    pGVar3 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar3,DAT_00683944);
    *(undefined4 *)(pGVar2 + 0x70) = local_70;
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x80);
    *(undefined8 *)(pGVar2 + 0x78) = local_68;
    *(long **)(pGVar2 + 0x80) = local_60;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    plVar6 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      pGVar3 = (GUIPropertyValue *)(**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    pGVar2 = local_58;
    GUIPropertyValue::ValueWithFloat(pGVar3,1.0);
    *(undefined4 *)(pGVar2 + 0x88) = local_70;
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar6 = *(long **)(pGVar2 + 0x98);
    *(undefined8 *)(pGVar2 + 0x90) = local_68;
    *(long **)(pGVar2 + 0x98) = local_60;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    if ((local_60 != (long *)0x0) &&
       (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar5 = local_60[2];
      local_60[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))(local_60);
      }
    }
    if (param_1) {
      local_58[100] = (GUIAnimation)0x1;
      local_58[0xb8] = (GUIAnimation)0x0;
    }
    else {
      *(undefined4 *)(local_58 + 0x58) = 0x3e99999a;
    }
    *(undefined4 *)(local_58 + 0x5c) = 0x3e800000;
    pGVar7 = *(GUIView **)(this + 0x160);
    GUIView::RemoveAllAnimations(pGVar7);
    GUIView::AddAnimation(pGVar7,(shared_ptr *)&local_58);
    if ((local_50 != (long *)0x0) &&
       (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar5 = local_50[2];
      local_50[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_50 + 0x18))(local_50);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


