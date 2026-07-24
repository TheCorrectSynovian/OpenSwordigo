/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00598bcc
 * Function: Caver::GUILoadingView::AnimateOut
 * Signature: undefined __cdecl AnimateOut(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILoadingView::AnimateOut() */

void Caver::GUILoadingView::AnimateOut(void)

{
  undefined4 uVar1;
  long lVar2;
  GUIView *in_x0;
  GUIAnimation *this;
  GUIPropertyValue *pGVar3;
  shared_ptr *in_x8;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_60;
  undefined8 local_58;
  long *local_50;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 00598be8 to 00698c0f has its CatchHandler @ 00599c40 */
  lVar4 = *(long *)(lVar2 + 0x28);
  this = operator_new(0xc0);
  GUIAnimation::GUIAnimation(this);
  *(GUIAnimation **)in_x8 = this;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>((shared_count *)(in_x8 + 8),this);
  pGVar3 = (GUIPropertyValue *)boost::detail::sp_enable_shared_from_this();
  lVar6 = *(long *)in_x8;
                    /* try { // try from 00598c30 to 00698c57 has its CatchHandler @ 0059a604 */
  *(undefined4 *)(lVar6 + 0x30) = 2;
  pGVar3 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar3,1.0);
  *(undefined4 *)(lVar6 + 0x70) = local_60;
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  plVar5 = *(long **)(lVar6 + 0x80);
  *(undefined8 *)(lVar6 + 0x78) = local_58;
  *(long **)(lVar6 + 0x80) = local_50;
                    /* try { // try from 00598c6c to 00698c77 has its CatchHandler @ 0059a850 */
  if ((plVar5 != (long *)0x0) && (lVar6 = plVar5[1], plVar5[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar5 + 0x10))(plVar5);
    lVar6 = plVar5[2];
    plVar5[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      pGVar3 = (GUIPropertyValue *)(**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((local_50 != (long *)0x0) && (lVar6 = local_50[1], local_50[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
                    /* try { // try from 00598cc0 to 00698cef has its CatchHandler @ 00599e30 */
    pGVar3 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x10))(local_50);
    lVar6 = local_50[2];
    local_50[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      pGVar3 = (GUIPropertyValue *)(**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  lVar6 = *(long *)in_x8;
  GUIPropertyValue::ValueWithFloat(pGVar3,0.0);
  *(undefined4 *)(lVar6 + 0x88) = local_60;
  if (local_50 != (long *)0x0) {
                    /* try { // try from 00598d10 to 00698d37 has its CatchHandler @ 0059a850 */
    local_50[1] = local_50[1] + 1;
  }
  plVar5 = *(long **)(lVar6 + 0x98);
  *(undefined8 *)(lVar6 + 0x90) = local_58;
  *(long **)(lVar6 + 0x98) = local_50;
  if ((plVar5 != (long *)0x0) && (lVar6 = plVar5[1], plVar5[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar6 = plVar5[2];
    plVar5[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* try { // try from 00598d60 to 00698d6b has its CatchHandler @ 0059a160 */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((local_50 != (long *)0x0) && (lVar6 = local_50[1], local_50[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
                    /* try { // try from 00598d8c to 00698db3 has its CatchHandler @ 00599c3c */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar6 = local_50[2];
    local_50[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  lVar6 = *(long *)in_x8;
                    /* try { // try from 00598db4 to 00698dc7 has its CatchHandler @ 0059a15c */
  uVar1 = *(undefined4 *)(in_x0 + 0xf4);
  *(undefined1 *)(lVar6 + 0xb9) = 1;
  *(undefined4 *)(lVar6 + 0x5c) = uVar1;
  GUIView::RemoveAllAnimations(in_x0);
                    /* try { // try from 00598dd4 to 00698de7 has its CatchHandler @ 0059a5cc */
  GUIView::AddAnimation(in_x0,in_x8);
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


