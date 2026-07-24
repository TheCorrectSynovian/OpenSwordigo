/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059ff3c
 * Function: Caver::GUIView::AddPopupAnimation
 * Signature: undefined __thiscall AddPopupAnimation(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::AddPopupAnimation() */

void __thiscall Caver::GUIView::AddPopupAnimation(GUIView *this)

{
  long lVar1;
  GUIView *pGVar2;
  GUIAnimation *pGVar3;
  void *pvVar4;
  Vector2 *extraout_x1;
  Vector2 *extraout_x1_00;
  Vector2 *extraout_x1_01;
  Vector2 *extraout_x1_02;
  Vector2 *extraout_x1_03;
  Vector2 *extraout_x1_04;
  Vector2 *pVVar5;
  long lVar6;
  long *plVar7;
  GUIView *pGVar8;
  GUIView *pGVar9;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  GUIAnimation *local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 0059ff50 to 0069ff57 has its CatchHandler @ 005a0528 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0059ff60 to 0069ff73 has its CatchHandler @ 005a051c */
  pGVar8 = this + 0x60;
  pGVar2 = *(GUIView **)pGVar8;
  while (pGVar2 != pGVar8) {
                    /* try { // try from 0059ff74 to 0069ff7f has its CatchHandler @ 005a04b8 */
    plVar7 = *(long **)(pGVar2 + 0x18);
    pGVar9 = *(GUIView **)pGVar2;
    if ((plVar7 != (long *)0x0) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar6 = plVar7[2];
      plVar7[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    operator_delete(pGVar2);
    pGVar2 = pGVar9;
  }
  *(GUIView **)(this + 0x60) = pGVar8;
  *(GUIView **)(this + 0x68) = pGVar8;
                    /* try { // try from 0059ffdc to 0069ffff has its CatchHandler @ 005a0528 */
  pGVar3 = operator_new(0xc0);
  GUIAnimation::GUIAnimation(pGVar3);
  local_58 = pGVar3;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)&local_50,pGVar3);
  boost::detail::sp_enable_shared_from_this(&local_58,pGVar3,pGVar3);
  pGVar3 = local_58;
                    /* try { // try from 005a001c to 006a002f has its CatchHandler @ 005a02a0 */
  *(undefined4 *)(local_58 + 0x30) = 1;
  local_60 = 0x3d4ccccd3d4ccccd;
                    /* try { // try from 005a0030 to 006a003f has its CatchHandler @ 005a0240 */
  GUIPropertyValue::ValueWithVector2((GUIPropertyValue *)&local_60,extraout_x1);
  *(undefined4 *)(pGVar3 + 0x70) = local_80;
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  plVar7 = *(long **)(pGVar3 + 0x80);
  *(undefined8 *)(pGVar3 + 0x78) = uStack_78;
  *(long **)(pGVar3 + 0x80) = local_70;
  pVVar5 = extraout_x1_00;
  if ((plVar7 != (long *)0x0) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 005a006c to 006a0093 has its CatchHandler @ 005a02ec */
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar6 = plVar7[2];
    plVar7[2] = lVar6 + -1;
    pVVar5 = extraout_x1_01;
    if (lVar6 + -1 == 0) {
                    /* try { // try from 005a0094 to 006a02bf has its CatchHandler @ 0059fb4c */
      (**(code **)(*plVar7 + 0x18))(plVar7);
      pVVar5 = extraout_x1_02;
    }
  }
  plVar7 = local_70;
  if ((local_70 != (long *)0x0) && (lVar6 = local_70[1], local_70[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar6 = plVar7[2];
    plVar7[2] = lVar6 + -1;
    pVVar5 = extraout_x1_03;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      pVVar5 = extraout_x1_04;
    }
  }
  pGVar3 = local_58;
  local_60 = NEON_fmov(0x3f800000,4);
  GUIPropertyValue::ValueWithVector2((GUIPropertyValue *)&local_60,pVVar5);
  *(undefined4 *)(pGVar3 + 0x88) = local_80;
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  plVar7 = *(long **)(pGVar3 + 0x98);
  *(undefined8 *)(pGVar3 + 0x90) = uStack_78;
  *(long **)(pGVar3 + 0x98) = local_70;
  if ((plVar7 != (long *)0x0) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar6 = plVar7[2];
    plVar7[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  plVar7 = local_70;
  if ((local_70 != (long *)0x0) && (lVar6 = local_70[1], local_70[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar6 = plVar7[2];
    plVar7[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  pGVar3 = local_58;
  local_60 = DAT_00692290;
  local_88 = DAT_00692060;
  GUIAnimationCurve::GUIAnimationCurve
            ((GUIAnimationCurve *)&local_80,(Vector2 *)&local_60,(Vector2 *)&local_88);
  *(undefined8 *)(pGVar3 + 0x3c) = uStack_78;
  *(ulong *)(pGVar3 + 0x34) = CONCAT44(uStack_7c,local_80);
  *(undefined8 *)(pGVar3 + 0x4c) = uStack_68;
  *(long **)(pGVar3 + 0x44) = local_70;
  *(undefined4 *)(local_58 + 0x5c) = 0x3e99999a;
  pvVar4 = operator_new(0x20);
  *(GUIAnimation **)((long)pvVar4 + 0x10) = local_58;
  *(long **)((long)pvVar4 + 0x18) = local_50;
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  FUN_0062a9ac(pvVar4,this + 0x60);
  GUIAnimation::Update(0.0);
                    /* catch() { ... } // from try @ 005a0030 with catch @ 005a0240 */
  if ((local_50 != (long *)0x0) && (lVar6 = local_50[1], local_50[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar6 = local_50[2];
    local_50[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


