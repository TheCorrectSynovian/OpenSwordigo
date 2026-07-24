/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a6510
 * Function: Caver::GUIAnimation::FrameAnimation
 * Signature: undefined __thiscall FrameAnimation(GUIAnimation * this, Rectangle * param_1, Rectangle * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&, Caver::Rectangle const&, float) */

void __thiscall
Caver::GUIAnimation::FrameAnimation
          (GUIAnimation *this,Rectangle *param_1,Rectangle *param_2,float param_3)

{
  long lVar1;
  GUIAnimation *this_00;
  Rectangle *extraout_x1;
  Rectangle *extraout_x1_00;
  Rectangle *extraout_x1_01;
  Rectangle *extraout_x1_02;
  Rectangle *extraout_x1_03;
  Rectangle *extraout_x1_04;
  Rectangle *pRVar2;
  long *in_x8;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_60;
  undefined8 local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 005a6530 to 006a6823 has its CatchHandler @ 005a60d0 */
  lVar3 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0xc0);
  GUIAnimation(this_00);
  *in_x8 = (long)this_00;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>
            ((shared_count *)(in_x8 + 1),this_00);
  boost::detail::sp_enable_shared_from_this();
  lVar5 = *in_x8;
  *(undefined4 *)(lVar5 + 0x30) = 3;
  GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)this,extraout_x1);
  *(undefined4 *)(lVar5 + 0x70) = local_60;
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar4 = *(long **)(lVar5 + 0x80);
  *(undefined8 *)(lVar5 + 0x78) = local_58;
  *(long **)(lVar5 + 0x80) = local_50;
  pRVar2 = extraout_x1_00;
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    pRVar2 = extraout_x1_01;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      pRVar2 = extraout_x1_02;
    }
  }
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = local_50[2];
    local_50[2] = lVar5 + -1;
    pRVar2 = extraout_x1_03;
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
      pRVar2 = extraout_x1_04;
    }
  }
  lVar5 = *in_x8;
  GUIPropertyValue::ValueWithRectangle((GUIPropertyValue *)param_1,pRVar2);
  *(undefined4 *)(lVar5 + 0x88) = local_60;
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar4 = *(long **)(lVar5 + 0x98);
  *(undefined8 *)(lVar5 + 0x90) = local_58;
  *(long **)(lVar5 + 0x98) = local_50;
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005a6128 with catch @ 005a6694 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = local_50[2];
    local_50[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 005a6120 with catch @ 005a66f8 */
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  *(float *)(*in_x8 + 0x5c) = param_3;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


