/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a61cc
 * Function: Caver::GUIAnimation::ScaleAnimation
 * Signature: undefined __thiscall ScaleAnimation(GUIAnimation * this, float param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimation::ScaleAnimation(float, float, float) */

void __thiscall
Caver::GUIAnimation::ScaleAnimation(GUIAnimation *this,float param_1,float param_2,float param_3)

{
  long lVar1;
  GUIAnimation *this_00;
  GUIPropertyValue *pGVar2;
  long *in_x8;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_70;
  undefined8 local_68;
  long *local_60;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0xc0);
  GUIAnimation(this_00);
  *in_x8 = (long)this_00;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>
            ((shared_count *)(in_x8 + 1),this_00);
                    /* try { // try from 005a6224 to 006a623b has its CatchHandler @ 005a678c */
  pGVar2 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this();
  lVar5 = *in_x8;
  *(undefined4 *)(lVar5 + 0x30) = 1;
  pGVar2 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar2,param_1);
  *(undefined4 *)(lVar5 + 0x70) = local_70;
  if (local_60 != (long *)0x0) {
    local_60[1] = local_60[1] + 1;
  }
  plVar4 = *(long **)(lVar5 + 0x80);
  *(undefined8 *)(lVar5 + 0x78) = local_68;
  *(long **)(lVar5 + 0x80) = local_60;
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    pGVar2 = (GUIPropertyValue *)(**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      pGVar2 = (GUIPropertyValue *)(**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if ((local_60 != (long *)0x0) && (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    pGVar2 = (GUIPropertyValue *)(**(code **)(*local_60 + 0x10))(local_60);
    lVar5 = local_60[2];
    local_60[2] = lVar5 + -1;
                    /* try { // try from 005a62e8 to 006a62f3 has its CatchHandler @ 005a67f0 */
    if (lVar5 + -1 == 0) {
                    /* try { // try from 005a62f4 to 006a62ff has its CatchHandler @ 005a679c */
      pGVar2 = (GUIPropertyValue *)(**(code **)(*local_60 + 0x18))(local_60);
    }
  }
  lVar5 = *in_x8;
  GUIPropertyValue::ValueWithFloat(pGVar2,param_2);
                    /* try { // try from 005a6310 to 006a631b has its CatchHandler @ 005a67f8 */
  *(undefined4 *)(lVar5 + 0x88) = local_70;
  if (local_60 != (long *)0x0) {
    local_60[1] = local_60[1] + 1;
  }
  plVar4 = *(long **)(lVar5 + 0x98);
  *(undefined8 *)(lVar5 + 0x90) = local_68;
  *(long **)(lVar5 + 0x98) = local_60;
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
                    /* try { // try from 005a637c to 006a6387 has its CatchHandler @ 005a6800 */
                    /* try { // try from 005a6388 to 006a638f has its CatchHandler @ 005a6774 */
  if ((local_60 != (long *)0x0) && (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* try { // try from 005a6394 to 006a646f has its CatchHandler @ 005a6800 */
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar5 = local_60[2];
    local_60[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
  *(float *)(*in_x8 + 0x5c) = param_3;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


