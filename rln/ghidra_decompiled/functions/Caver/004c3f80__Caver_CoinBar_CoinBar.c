/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3f80
 * Function: Caver::CoinBar::CoinBar
 * Signature: undefined __thiscall CoinBar(CoinBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CoinBar::CoinBar() */

void __thiscall Caver::CoinBar::CoinBar(CoinBar *this)

{
  undefined *puVar1;
  CoinBar *pCVar2;
  shared_ptr *psVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  GUILabel *pGVar7;
  FontLibrary *this_00;
  FloatColor *pFVar8;
  GradientColor *this_01;
  GUIAnimation *pGVar9;
  GUIPropertyValue *pGVar10;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *extraout_x1_01;
  FloatColor *extraout_x1_02;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  GUIView *this_02;
  GUIAnimation *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0 [2];
  GradientColor *local_90;
  long *local_88;
  Color aCStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e5b10 + 0x10;
  *(undefined4 *)(this + 0xf4) = 0x7f7fffff;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0xec) = 0xffffffff00000000;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  this[0x148] = (CoinBar)0x0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x160) = 0x3f800000;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  pGVar7 = operator_new(0x150);
  GUILabel::GUILabel(pGVar7);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_d0,pGVar7);
  pGVar9 = *(GUIAnimation **)(this + 0x150);
  plVar13 = *(long **)(this + 0x158);
  *(GUIAnimation **)(this + 0x150) = local_d0;
  *(long **)(this + 0x158) = uStack_c8;
  local_d0 = pGVar9;
  uStack_c8 = plVar13;
  if ((plVar13 != (long *)0x0) && (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar11 = plVar13[2];
    plVar13[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  pCVar2 = this + 0x150;
  pGVar7 = *(GUILabel **)pCVar2;
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::LargeDefaultFont(this_00);
  if (local_d0 != *(GUIAnimation **)(pGVar7 + 0xf0)) {
    if (uStack_c8 != (long *)0x0) {
      uStack_c8[1] = uStack_c8[1] + 1;
    }
    plVar13 = *(long **)(pGVar7 + 0xf8);
    *(GUIAnimation **)(pGVar7 + 0xf0) = local_d0;
    *(long **)(pGVar7 + 0xf8) = uStack_c8;
    if ((plVar13 != (long *)0x0) &&
       (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar11 = plVar13[2];
      plVar13[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    GUILabel::UpdateText(pGVar7);
  }
  plVar13 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar11 = uStack_c8[1], uStack_c8[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar11 = plVar13[2];
    plVar13[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  pGVar7 = *(GUILabel **)pCVar2;
  if ((((pGVar7[0x108] != (GUILabel)0xff) || (pGVar7[0x109] != (GUILabel)0xff)) ||
      (pGVar7[0x10a] != (GUILabel)0xff)) || (pGVar7[0x10b] != (GUILabel)0xff)) {
    plVar13 = *(long **)(pGVar7 + 0x118);
    *(undefined4 *)(pGVar7 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar7 + 0x110) = 0;
    *(undefined8 *)(pGVar7 + 0x118) = 0;
    if ((plVar13 != (long *)0x0) &&
       (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar11 = plVar13[2];
      plVar13[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    GUILabel::UpdateText(pGVar7);
    pGVar7 = *(GUILabel **)pCVar2;
  }
  uVar5 = DAT_00683728;
  pGVar7[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar7 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar7 + 0x148) = uVar5;
  GUILabel::UpdateText(pGVar7);
  local_d0 = *(GUIAnimation **)(this + 0x150);
  pcVar12 = *(code **)(*(long *)this + 0x60);
  uStack_c8 = *(long **)(this + 0x158);
  if (uStack_c8 != (long *)0x0) {
    uStack_c8[1] = uStack_c8[1] + 1;
  }
  pFVar8 = (FloatColor *)(*pcVar12)(this,&local_d0);
  plVar13 = uStack_c8;
  if ((uStack_c8 != (long *)0x0) &&
     (lVar11 = uStack_c8[1], uStack_c8[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    pFVar8 = (FloatColor *)(**(code **)(*uStack_c8 + 0x10))(uStack_c8);
    lVar11 = plVar13[2];
    plVar13[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      pFVar8 = (FloatColor *)(**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  fVar6 = DAT_00692070;
  uStack_68 = _UNK_006886c4;
  local_70 = _DAT_006886bc;
  FloatColor::FromHSLA(pFVar8,DAT_00692070,1.0,_DAT_006846d0,1.0);
                    /* try { // try from 004c42cc to 005c4363 has its CatchHandler @ 004c42cc
                       catch() { ... } // from try @ 004c42cc with catch @ 004c42cc
                       catch() { ... } // from try @ 004c4368 with catch @ 004c42cc */
  pFVar8 = (FloatColor *)Color::FromFloatColor((Color *)&local_d0,extraout_x1);
  FloatColor::FromHSLA(pFVar8,DAT_00687988,DAT_00692074,DAT_00687828,1.0);
  pFVar8 = (FloatColor *)Color::FromFloatColor((Color *)&local_90,extraout_x1_00);
  FloatColor::FromHSLA(pFVar8,fVar6,DAT_00692078,DAT_006846c8,1.0);
  pFVar8 = (FloatColor *)Color::FromFloatColor((Color *)local_a0,extraout_x1_01);
  FloatColor::FromHSLA(pFVar8,DAT_0069207c,DAT_00692080,1.0,1.0);
  Color::FromFloatColor((Color *)local_b0,extraout_x1_02);
                    /* try { // try from 004c4364 to 005c4367 has its CatchHandler @ 004c43f8 */
                    /* try { // try from 004c4368 to 005c440b has its CatchHandler @ 004c42cc */
  this_01 = operator_new(0x18);
  GradientColor::GradientColor(this_01,4,(float *)&local_70,aCStack_80);
  local_90 = this_01;
  boost::detail::shared_count::shared_count<Caver::GradientColor>((shared_count *)&local_88,this_01)
  ;
  boost::detail::sp_enable_shared_from_this(&local_90,this_01,this_01);
  pGVar7 = *(GUILabel **)pCVar2;
  if (local_88 != (long *)0x0) {
    local_88[1] = local_88[1] + 1;
  }
  plVar13 = *(long **)(pGVar7 + 0x118);
  *(GradientColor **)(pGVar7 + 0x110) = local_90;
  *(long **)(pGVar7 + 0x118) = local_88;
  if ((plVar13 != (long *)0x0) && (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar11 = plVar13[2];
    plVar13[2] = lVar11 + -1;
                    /* catch() { ... } // from try @ 004c4364 with catch @ 004c43f8 */
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  GUILabel::UpdateText(pGVar7);
                    /* try { // try from 004c4414 to 005c4443 has its CatchHandler @ 004c4414
                       catch() { ... } // from try @ 004c4414 with catch @ 004c4414
                       catch() { ... } // from try @ 004c4798 with catch @ 004c4414 */
  local_d0 = (GUIAnimation *)0x0;
  uStack_c8 = (long *)CONCAT44(*(undefined4 *)(*(long *)(*(long *)(this + 0x150) + 0xf0) + 0x48),
                               0x42480000);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_d0);
  pGVar9 = operator_new(0xc0);
                    /* try { // try from 004c4444 to 005c4457 has its CatchHandler @ 004c4dc0 */
  GUIAnimation::GUIAnimation(pGVar9);
  local_d0 = pGVar9;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&uStack_c8,pGVar9);
                    /* try { // try from 004c4468 to 005c4473 has its CatchHandler @ 004c4d54 */
  pGVar10 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_d0,pGVar9,pGVar9);
  pGVar9 = *(GUIAnimation **)(this + 0x168);
  plVar13 = *(long **)(this + 0x170);
  *(GUIAnimation **)(this + 0x168) = local_d0;
  *(long **)(this + 0x170) = uStack_c8;
  local_d0 = pGVar9;
  uStack_c8 = plVar13;
  if ((plVar13 != (long *)0x0) && (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
                    /* try { // try from 004c449c to 005c44d7 has its CatchHandler @ 004c4cf0 */
    pGVar10 = (GUIPropertyValue *)(**(code **)(*plVar13 + 0x10))(plVar13);
    lVar11 = plVar13[2];
    plVar13[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      pGVar10 = (GUIPropertyValue *)(**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  psVar3 = (shared_ptr *)(this + 0x168);
  lVar11 = *(long *)psVar3;
  *(undefined4 *)(lVar11 + 0x30) = 1;
  pGVar10 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar10,0.0);
  *(undefined4 *)(lVar11 + 0x70) = local_d0._0_4_;
  if (local_c0 != (long *)0x0) {
                    /* try { // try from 004c4500 to 005c4513 has its CatchHandler @ 004c4cec */
    local_c0[1] = local_c0[1] + 1;
  }
  plVar13 = *(long **)(lVar11 + 0x80);
  *(long **)(lVar11 + 0x78) = uStack_c8;
  *(long **)(lVar11 + 0x80) = local_c0;
  if ((plVar13 != (long *)0x0) && (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
                    /* try { // try from 004c4524 to 005c452f has its CatchHandler @ 004c4cb4 */
    pGVar10 = (GUIPropertyValue *)(**(code **)(*plVar13 + 0x10))(plVar13);
    lVar11 = plVar13[2];
    plVar13[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      pGVar10 = (GUIPropertyValue *)(**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
                    /* try { // try from 004c4550 to 005c458b has its CatchHandler @ 004c4c58 */
  plVar13 = local_c0;
  if ((local_c0 != (long *)0x0) &&
     (lVar11 = local_c0[1], local_c0[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    pGVar10 = (GUIPropertyValue *)(**(code **)(*local_c0 + 0x10))(local_c0);
    lVar11 = plVar13[2];
    plVar13[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      pGVar10 = (GUIPropertyValue *)(**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  lVar11 = *(long *)psVar3;
  GUIPropertyValue::ValueWithFloat(pGVar10,1.0);
                    /* try { // try from 004c45ac to 005c45bf has its CatchHandler @ 004c4c54 */
  *(undefined4 *)(lVar11 + 0x88) = local_d0._0_4_;
  if (local_c0 != (long *)0x0) {
    local_c0[1] = local_c0[1] + 1;
  }
  plVar13 = *(long **)(lVar11 + 0x98);
  *(long **)(lVar11 + 0x90) = uStack_c8;
  *(long **)(lVar11 + 0x98) = local_c0;
                    /* try { // try from 004c45d0 to 005c45db has its CatchHandler @ 004c4c1c */
  if ((plVar13 != (long *)0x0) && (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar11 = plVar13[2];
    plVar13[2] = lVar11 + -1;
                    /* try { // try from 004c45fc to 005c4637 has its CatchHandler @ 004c4bc0 */
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  plVar13 = local_c0;
  if ((local_c0 != (long *)0x0) &&
     (lVar11 = local_c0[1], local_c0[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_c0 + 0x10))(local_c0);
    lVar11 = plVar13[2];
    plVar13[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
                    /* try { // try from 004c4658 to 005c466b has its CatchHandler @ 004c4bbc */
  lVar11 = *(long *)psVar3;
  local_a0[0] = DAT_00692058;
  local_b0[0] = DAT_00692060;
                    /* try { // try from 004c467c to 005c4687 has its CatchHandler @ 004c4b84 */
  GUIAnimationCurve::GUIAnimationCurve
            ((GUIAnimationCurve *)&local_d0,(Vector2 *)local_a0,(Vector2 *)local_b0);
  *(long **)(lVar11 + 0x3c) = uStack_c8;
  *(GUIAnimation **)(lVar11 + 0x34) = local_d0;
  *(undefined8 *)(lVar11 + 0x4c) = uStack_b8;
  *(long **)(lVar11 + 0x44) = local_c0;
  uVar5 = DAT_00692068;
  lVar11 = *(long *)psVar3;
  *(undefined4 *)(lVar11 + 0x5c) = 0x3e4ccccd;
  *(undefined1 *)(lVar11 + 0xb8) = 0;
                    /* try { // try from 004c46b0 to 005c46eb has its CatchHandler @ 004c4b28 */
  *(undefined8 *)(lVar11 + 0x68) = uVar5;
  this_02 = *(GUIView **)pCVar2;
  GUIView::RemoveAllAnimations(this_02);
  GUIView::AddAnimation(this_02,psVar3);
  if ((local_88 != (long *)0x0) &&
     (lVar11 = local_88[1], local_88[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_88 + 0x10))(local_88);
    lVar11 = local_88[2];
    local_88[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
                    /* try { // try from 004c470c to 005c471f has its CatchHandler @ 004c4b24 */
      (**(code **)(*local_88 + 0x18))(local_88);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 004c4730 to 005c473b has its CatchHandler @ 004c4aec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


