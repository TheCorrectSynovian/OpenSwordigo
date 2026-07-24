/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058f638
 * Function: Caver::GUIAlertView::AddAnimations
 * Signature: undefined __thiscall AddAnimations(GUIAlertView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::AddAnimations(bool) */

void __thiscall Caver::GUIAlertView::AddAnimations(GUIAlertView *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  GUIAnimation *pGVar3;
  GUIPropertyValue *pGVar4;
  ulong uVar5;
  long *plVar6;
  Rectangle *extraout_x1;
  Rectangle *extraout_x1_00;
  Rectangle *extraout_x1_01;
  Rectangle *extraout_x1_02;
  Rectangle *extraout_x1_03;
  Rectangle *extraout_x1_04;
  Rectangle *pRVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *local_c0;
  undefined8 uStack_b8;
  GUIAlertView *local_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  undefined *local_90;
  undefined8 uStack_88;
  GUIAlertView *local_80;
  undefined4 local_78;
  float local_74;
  GUIAnimation *local_70;
  long *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  GUIAlertView *local_50;
  long local_48;
  
                    /* try { // try from 0058f648 to 0068f64f has its CatchHandler @ 00591f08 */
                    /* try { // try from 0058f650 to 0068f663 has its CatchHandler @ 00591f04 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0058f664 to 0068f677 has its CatchHandler @ 0059248c */
  pGVar3 = operator_new(0xc0);
  GUIAnimation::GUIAnimation(pGVar3);
                    /* try { // try from 0058f678 to 0068f687 has its CatchHandler @ 00591ed4 */
  local_70 = pGVar3;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_68,pGVar3);
  pGVar4 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this(&local_70,pGVar3,pGVar3);
  pGVar3 = local_70;
  if (param_1) {
    *(undefined4 *)(local_70 + 0x30) = 2;
                    /* try { // try from 0058f6a8 to 0068f6ab has its CatchHandler @ 0059248c */
    pGVar4 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar4,1.0);
    *(undefined4 *)(pGVar3 + 0x70) = (undefined4)local_a8;
                    /* try { // try from 0058f6c0 to 0068f6c7 has its CatchHandler @ 00591ed0 */
    if (local_98 != (long *)0x0) {
                    /* try { // try from 0058f6c8 to 0068f6db has its CatchHandler @ 00591ecc */
      local_98[1] = local_98[1] + 1;
    }
    plVar10 = *(long **)(pGVar3 + 0x80);
    *(long **)(pGVar3 + 0x78) = local_a0;
    *(long **)(pGVar3 + 0x80) = local_98;
                    /* try { // try from 0058f6dc to 0068f6ef has its CatchHandler @ 00592454 */
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
                    /* try { // try from 0058f6f0 to 0068f6ff has its CatchHandler @ 00591e9c */
      pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    plVar10 = local_98;
                    /* try { // try from 0058f720 to 0068f723 has its CatchHandler @ 00592454 */
    if ((local_98 != (long *)0x0) &&
       (lVar8 = local_98[1], local_98[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 0058f738 to 0068f73f has its CatchHandler @ 00592968 */
                    /* try { // try from 0058f740 to 0068f74b has its CatchHandler @ 005928bc */
      pGVar4 = (GUIPropertyValue *)(**(code **)(*local_98 + 0x10))(local_98);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    pGVar3 = local_70;
    GUIPropertyValue::ValueWithFloat(pGVar4,0.0);
    *(undefined4 *)(pGVar3 + 0x88) = (undefined4)local_a8;
    if (local_98 != (long *)0x0) {
      local_98[1] = local_98[1] + 1;
    }
    plVar10 = *(long **)(pGVar3 + 0x98);
                    /* try { // try from 0058f794 to 0068f7c3 has its CatchHandler @ 005919bc */
    *(long **)(pGVar3 + 0x90) = local_a0;
    *(long **)(pGVar3 + 0x98) = local_98;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    plVar10 = local_98;
                    /* try { // try from 0058f7e4 to 0068f80b has its CatchHandler @ 005928bc */
    if ((local_98 != (long *)0x0) &&
       (lVar8 = local_98[1], local_98[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_98 + 0x10))(local_98);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    *(undefined4 *)(local_70 + 0x5c) = 0x3e800000;
    local_70[0xb8] = (GUIAnimation)0x0;
  }
  else {
    *(undefined4 *)(local_70 + 0x30) = 3;
                    /* try { // try from 0058f854 to 0068f867 has its CatchHandler @ 00591e68 */
    local_78 = 0;
    local_74 = (*(float *)(*(long *)(this + 0x58) + 0x88) +
               *(float *)(*(long *)(this + 0x58) + 0x90)) - *(float *)(this + 0x78);
    Rectangle::TranslatedRectangle((Vector2 *)(this + 0x74));
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)&local_60,extraout_x1);
    *(undefined4 *)(pGVar3 + 0x70) = (undefined4)local_a8;
                    /* try { // try from 0058f888 to 0068f893 has its CatchHandler @ 005911fc */
    if (local_98 != (long *)0x0) {
      local_98[1] = local_98[1] + 1;
    }
    plVar10 = *(long **)(pGVar3 + 0x80);
    *(long **)(pGVar3 + 0x78) = local_a0;
    *(long **)(pGVar3 + 0x80) = local_98;
    pRVar7 = extraout_x1_00;
                    /* try { // try from 0058f8b0 to 0068f8b7 has its CatchHandler @ 00591e64 */
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      pRVar7 = extraout_x1_01;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 0058f8e0 to 0068f8eb has its CatchHandler @ 00591e14 */
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pRVar7 = extraout_x1_02;
      }
    }
    plVar10 = local_98;
    if ((local_98 != (long *)0x0) &&
       (lVar8 = local_98[1], local_98[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 0058f90c to 0068f933 has its CatchHandler @ 00591468 */
      (**(code **)(*local_98 + 0x10))(local_98);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      pRVar7 = extraout_x1_03;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pRVar7 = extraout_x1_04;
      }
    }
    pGVar3 = local_70;
                    /* try { // try from 0058f934 to 0068f947 has its CatchHandler @ 00591e10 */
    GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)(this + 0x74),pRVar7);
    *(undefined4 *)(pGVar3 + 0x88) = (undefined4)local_a8;
    if (local_98 != (long *)0x0) {
                    /* try { // try from 0058f954 to 0068f967 has its CatchHandler @ 00592648 */
      local_98[1] = local_98[1] + 1;
    }
    plVar10 = *(long **)(pGVar3 + 0x98);
    *(long **)(pGVar3 + 0x90) = local_a0;
    *(long **)(pGVar3 + 0x98) = local_98;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 0058f9a4 to 0068f9cb has its CatchHandler @ 00591418 */
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    plVar10 = local_98;
    if ((local_98 != (long *)0x0) &&
       (lVar8 = local_98[1], local_98[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_98 + 0x10))(local_98);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 0058f9ec to 0068fa13 has its CatchHandler @ 00592648 */
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    pGVar3 = local_70;
    *(undefined4 *)(local_70 + 0x5c) = 0x3e800000;
    local_60 = PTR_PresentAnimationDidFinish_007e5990;
    plVar10 = *(long **)(this + 0x10);
    if ((plVar10 == (long *)0x0) || (plVar10[1] == 0)) {
      local_60 = PTR_vtable_007e6120 + 0x10;
      boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_60);
      goto LAB_0058fcb4;
    }
    uVar11 = *(undefined8 *)(this + 8);
                    /* try { // try from 0058fa28 to 0068fa33 has its CatchHandler @ 005928b8 */
    plVar10[1] = plVar10[1] + 2;
    uStack_58 = 0;
    local_50 = this;
    uVar5 = boost::detail::function::has_empty_target(&local_60);
    if ((uVar5 & 1) == 0) {
      local_b0 = local_50;
      uStack_b8 = uStack_58;
      local_c0 = local_60;
      plVar9 = (long *)PTR_stored_vtable_007e5160;
    }
    else {
      plVar9 = (long *)0x0;
    }
    plVar10[2] = plVar10[2] + 1;
    local_98 = (long *)0x0;
    local_a8 = uVar11;
    local_a0 = plVar10;
    if (plVar9 != (long *)0x0) {
                    /* try { // try from 0058fa7c to 0068faab has its CatchHandler @ 0059196c */
      local_98 = plVar9;
      if (((ulong)plVar9 & 1) == 0) {
        (**(code **)((ulong)plVar9 & 0xfffffffffffffffe))(&local_c0,&local_90,0);
      }
      else {
        local_80 = local_b0;
        uStack_88 = uStack_b8;
        local_90 = local_c0;
      }
    }
    plVar2 = local_a0;
    plVar6 = *(long **)(pGVar3 + 8);
    *(undefined8 *)pGVar3 = local_a8;
                    /* try { // try from 0058facc to 0068faf3 has its CatchHandler @ 005928b8 */
    if (local_a0 != plVar6) {
      if (local_a0 != (long *)0x0) {
        local_a0[2] = local_a0[2] + 1;
      }
      if ((plVar6 != (long *)0x0) && (lVar8 = plVar6[2], plVar6[2] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *(long **)(pGVar3 + 8) = plVar2;
    }
    boost::function<void(void*,Caver::GUIEvent*)>::operator=
              ((function<void(void*,Caver::GUIEvent*)> *)(pGVar3 + 0x10),(function *)&local_98);
    if (local_98 != (long *)0x0) {
      if ((((ulong)local_98 & 1) == 0) &&
         (*(code **)((ulong)local_98 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_98 & 0xfffffffffffffffe))(&local_90,&local_90,2);
      }
      local_98 = (long *)0x0;
    }
                    /* try { // try from 0058fb58 to 0068fb87 has its CatchHandler @ 00592968 */
    if ((local_a0 != (long *)0x0) &&
       (lVar8 = local_a0[2], local_a0[2] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_a0 + 0x18))();
    }
    if (((plVar9 != (long *)0x0) && (((ulong)plVar9 & 1) == 0)) &&
       (*(code **)((ulong)plVar9 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)plVar9 & 0xfffffffffffffffe))(&local_c0,&local_c0,2);
    }
    lVar8 = plVar10[1];
                    /* try { // try from 0058fba0 to 0068fba7 has its CatchHandler @ 00591e0c */
    plVar10[1] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 0058fbd0 to 0068fbdb has its CatchHandler @ 00591dbc */
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    lVar8 = plVar10[1];
    plVar10[1] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
                    /* try { // try from 0058fbfc to 0068fc23 has its CatchHandler @ 00591414 */
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  GUIView::RemoveAllAnimations((GUIView *)this);
  GUIView::AddAnimation((GUIView *)this,(shared_ptr *)&local_70);
                    /* try { // try from 0058fc38 to 0068fc3f has its CatchHandler @ 00592450 */
                    /* try { // try from 0058fc40 to 0068fc53 has its CatchHandler @ 00591db8 */
  if ((local_68 != (long *)0x0) && (lVar8 = local_68[1], local_68[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_68 + 0x10))(local_68);
                    /* try { // try from 0058fc54 to 0068fc67 has its CatchHandler @ 00591d60 */
    lVar8 = local_68[2];
    local_68[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))(local_68);
    }
  }
                    /* try { // try from 0058fc78 to 0068fc7f has its CatchHandler @ 00592440 */
                    /* try { // try from 0058fc80 to 0068fc93 has its CatchHandler @ 00591d5c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0058fc94 to 0068fca7 has its CatchHandler @ 00591cf8 */
    return;
  }
LAB_0058fcb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


