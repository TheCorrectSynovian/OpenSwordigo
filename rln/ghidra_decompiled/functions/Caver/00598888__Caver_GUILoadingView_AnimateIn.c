/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00598888
 * Function: Caver::GUILoadingView::AnimateIn
 * Signature: undefined __cdecl AnimateIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILoadingView::AnimateIn() */

void Caver::GUILoadingView::AnimateIn(void)

{
  long lVar1;
  GUIView *in_x0;
  GUIAnimation *this;
  GUIPropertyValue *pGVar2;
  shared_ptr *in_x8;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_60;
  undefined8 local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 005988a4 to 006988b7 has its CatchHandler @ 0059a674 */
  lVar3 = *(long *)(lVar1 + 0x28);
  this = operator_new(0xc0);
  GUIAnimation::GUIAnimation(this);
  *(GUIAnimation **)in_x8 = this;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)(in_x8 + 8),this);
  pGVar2 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this();
  lVar5 = *(long *)in_x8;
  *(undefined4 *)(lVar5 + 0x30) = 2;
                    /* try { // try from 005988f0 to 00698917 has its CatchHandler @ 00599ce8 */
  pGVar2 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar2,0.0);
  *(undefined4 *)(lVar5 + 0x70) = local_60;
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar4 = *(long **)(lVar5 + 0x80);
  *(undefined8 *)(lVar5 + 0x78) = local_58;
  *(long **)(lVar5 + 0x80) = local_50;
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 00598938 to 0069895f has its CatchHandler @ 0059a674 */
    pGVar2 = (GUIPropertyValue *)(**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      pGVar2 = (GUIPropertyValue *)(**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* try { // try from 0059897c to 0069899b has its CatchHandler @ 0059a860 */
    pGVar2 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = local_50[2];
    local_50[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      pGVar2 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  lVar5 = *(long *)in_x8;
  GUIPropertyValue::ValueWithFloat(pGVar2,1.0);
                    /* try { // try from 005989c0 to 006989cb has its CatchHandler @ 0059a208 */
  *(undefined4 *)(lVar5 + 0x88) = local_60;
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar4 = *(long **)(lVar5 + 0x98);
  *(undefined8 *)(lVar5 + 0x90) = local_58;
  *(long **)(lVar5 + 0x98) = local_50;
                    /* try { // try from 005989ec to 00698a13 has its CatchHandler @ 00599ce4 */
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 00598a14 to 00698a27 has its CatchHandler @ 0059a204 */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
                    /* try { // try from 00598a34 to 00698a47 has its CatchHandler @ 0059a63c */
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = local_50[2];
    local_50[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  *(undefined4 *)(*(long *)in_x8 + 0x5c) = *(undefined4 *)(in_x0 + 0xf0);
  GUIView::RemoveAllAnimations(in_x0);
                    /* try { // try from 00598a80 to 00698aa7 has its CatchHandler @ 00599c94 */
  GUIView::AddAnimation(in_x0,in_x8);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


