/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a5e88
 * Function: Caver::GUIAnimation::AlphaAnimation
 * Signature: undefined __thiscall AlphaAnimation(GUIAnimation * this, float param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimation::AlphaAnimation(float, float, float) */

void __thiscall
Caver::GUIAnimation::AlphaAnimation(GUIAnimation *this,float param_1,float param_2,float param_3)

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
  pGVar2 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this();
  lVar5 = *in_x8;
  *(undefined4 *)(lVar5 + 0x30) = 2;
  pGVar2 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar2,param_1);
                    /* catch() { ... } // from try @ 005a6010 with catch @ 005a5f0c
                       catch() { ... } // from try @ 005a60c4 with catch @ 005a5f0c */
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
                    /* try { // try from 005a5f88 to 006a5faf has its CatchHandler @ 005a6060 */
    pGVar2 = (GUIPropertyValue *)(**(code **)(*local_60 + 0x10))(local_60);
    lVar5 = local_60[2];
    local_60[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      pGVar2 = (GUIPropertyValue *)(**(code **)(*local_60 + 0x18))(local_60);
    }
  }
  lVar5 = *in_x8;
                    /* try { // try from 005a5fc0 to 006a5fc7 has its CatchHandler @ 005a6050 */
  GUIPropertyValue::ValueWithFloat(pGVar2,param_2);
  *(undefined4 *)(lVar5 + 0x88) = local_70;
  if (local_60 != (long *)0x0) {
    local_60[1] = local_60[1] + 1;
  }
  plVar4 = *(long **)(lVar5 + 0x98);
                    /* try { // try from 005a5fe8 to 006a600f has its CatchHandler @ 005a6048 */
  *(undefined8 *)(lVar5 + 0x90) = local_68;
  *(long **)(lVar5 + 0x98) = local_60;
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* try { // try from 005a6010 to 006a6067 has its CatchHandler @ 005a5f0c */
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if ((local_60 != (long *)0x0) && (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 005a5fe8 with catch @ 005a6048 */
                    /* catch() { ... } // from try @ 005a5fc0 with catch @ 005a6050 */
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar5 = local_60[2];
                    /* catch() { ... } // from try @ 005a5f88 with catch @ 005a6060 */
    local_60[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 005a6068 to 006a60c3 has its CatchHandler @ 005a60cc */
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


