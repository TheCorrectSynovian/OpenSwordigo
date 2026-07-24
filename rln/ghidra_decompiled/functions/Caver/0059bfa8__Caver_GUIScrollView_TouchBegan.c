/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059bfa8
 * Function: Caver::GUIScrollView::TouchBegan
 * Signature: undefined __thiscall TouchBegan(GUIScrollView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::GUIScrollView::TouchBegan(GUIScrollView *this,FWTouch *param_1)

{
  long lVar1;
  byte bVar2;
  GUIScrollView *pGVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0059bfcc to 0069c07f has its CatchHandler @ 0059ac98 */
                    /* catch() { ... } // from try @ 0059b13c with catch @ 0059bfd0 */
                    /* catch() { ... } // from try @ 0059ae9c with catch @ 0059bfd4 */
  if (this[0x1b1] != (GUIScrollView)0x0) goto LAB_0059c168;
                    /* catch() { ... } // from try @ 0059adb0 with catch @ 0059bfdc */
  if (this[0x1b2] != (GUIScrollView)0x0) {
                    /* catch() { ... } // from try @ 0059bbd8 with catch @ 0059bfe0 */
    FWTouch::LocationInView(param_1,(GUIView *)this);
                    /* catch() { ... } // from try @ 0059bbc0 with catch @ 0059bff0 */
    GUIView::HitTest((Vector2 *)this);
    if (local_40 != (long *)0x0) {
      local_40[1] = local_40[1] + 1;
    }
    plVar6 = *(long **)(this + 0x1a8);
    *(undefined8 *)(this + 0x1a0) = local_48;
    *(long **)(this + 0x1a8) = local_40;
    if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 0059bbb4 with catch @ 0059c05c */
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    if ((local_40 != (long *)0x0) &&
       (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 0059c080 to 0069c433 has its CatchHandler @ 0059c954 */
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar5 = local_40[2];
      local_40[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
    pGVar3 = *(GUIScrollView **)(this + 0x1a0);
                    /* catch() { ... } // from try @ 0059bb80 with catch @ 0059c0ac */
    this[0x1b0] = (GUIScrollView)0x0;
                    /* catch() { ... } // from try @ 0059b664 with catch @ 0059c0b0 */
    if (pGVar3 == this) {
                    /* catch() { ... } // from try @ 0059b64c with catch @ 0059c0c0 */
      plVar6 = *(long **)(this + 0x1a8);
      *(undefined8 *)(this + 0x1a0) = 0;
      *(undefined8 *)(this + 0x1a8) = 0;
      if (plVar6 == (long *)0x0) goto LAB_0059c12c;
      lVar5 = plVar6[1];
      plVar6[1] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        lVar5 = plVar6[2];
        plVar6[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
      pGVar3 = *(GUIScrollView **)(this + 0x1a0);
    }
    if (pGVar3 != (GUIScrollView *)0x0) {
      bVar2 = (**(code **)(*(long *)pGVar3 + 0xd8))(pGVar3,pGVar3);
      this[0x1b3] = (GUIScrollView)(bVar2 & 1);
    }
  }
LAB_0059c12c:
                    /* catch() { ... } // from try @ 0059b640 with catch @ 0059c12c */
  *(undefined8 *)(this + 0x158) = *(undefined8 *)param_1;
  *(undefined2 *)(this + 0x162) = 1;
  FWTouch::LocationInView(param_1,(GUIView *)this);
  *(undefined8 *)(this + 0x1e4) = local_48;
  FWTouch::operator=((FWTouch *)(this + 0x1b8),param_1);
  *(undefined4 *)(this + 0x1e0) = 0;
LAB_0059c168:
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0059b60c with catch @ 0059c17c */
                    /* catch() { ... } // from try @ 0059b588 with catch @ 0059c180 */
  return;
}


