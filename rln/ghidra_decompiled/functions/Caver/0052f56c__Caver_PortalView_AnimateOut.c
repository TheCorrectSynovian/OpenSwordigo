/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052f56c
 * Function: Caver::PortalView::AnimateOut
 * Signature: undefined __thiscall AnimateOut(PortalView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::AnimateOut() */

void __thiscall Caver::PortalView::AnimateOut(PortalView *this)

{
  long lVar1;
  long *plVar2;
  GUIAnimation *this_00;
  long lVar3;
  GUIView *pGVar4;
  long local_48;
  long *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0052f5d0 with catch @ 0052f570 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (GUIAnimation *)this;
  if (*(long *)(this + 0x120) == 0) {
LAB_0052f604:
    lVar3 = *(long *)(this + 0x130);
  }
  else {
    GUIAnimation::ScaleAnimation((GUIAnimation *)this,1.0,0.0,0.25);
    *(undefined1 *)(local_48 + 0xb8) = 0;
                    /* try { // try from 0052f5b4 to 0062f5b7 has its CatchHandler @ 0052f5c4 */
    pGVar4 = *(GUIView **)(this + 0x120);
    GUIView::RemoveAllAnimations(pGVar4);
                    /* catch() { ... } // from try @ 0052f5b4 with catch @ 0052f5c4 */
                    /* try { // try from 0052f5c8 to 0062f5cf has its CatchHandler @ 0052f5d8 */
    this_00 = (GUIAnimation *)GUIView::AddAnimation(pGVar4,(shared_ptr *)&local_48);
    plVar2 = local_40;
                    /* try { // try from 0052f5d0 to 0062f5db has its CatchHandler @ 0052f570 */
                    /* catch() { ... } // from try @ 0052f5c8 with catch @ 0052f5d8 */
                    /* try { // try from 0052f5dc to 0062f623 has its CatchHandler @ 0052f5dc
                       catch(type#1 @ 00000000) { ... } // from try @ 0052f5dc with catch @ 0052f5dc
                       catch(type#1 @ 00000000) { ... } // from try @ 0052f640 with catch @ 0052f5dc
                       catch(type#1 @ 00000000) { ... } // from try @ 0052f784 with catch @ 0052f5dc
                        */
    if ((local_40 == (long *)0x0) ||
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 != 0)) goto LAB_0052f604;
    this_00 = (GUIAnimation *)(**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 != 0) goto LAB_0052f604;
    this_00 = (GUIAnimation *)(**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(this + 0x130);
  }
  if (lVar3 != 0) {
    GUIAnimation::ScaleAnimation(this_00,1.0,0.0,0.25);
                    /* try { // try from 0052f624 to 0062f63f has its CatchHandler @ 0052f778 */
    *(undefined1 *)(local_48 + 0xb8) = 0;
    pGVar4 = *(GUIView **)(this + 0x130);
    GUIView::RemoveAllAnimations(pGVar4);
    this_00 = (GUIAnimation *)GUIView::AddAnimation(pGVar4,(shared_ptr *)&local_48);
    plVar2 = local_40;
                    /* try { // try from 0052f640 to 0062f77b has its CatchHandler @ 0052f5dc */
    if ((local_40 != (long *)0x0) &&
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      this_00 = (GUIAnimation *)(**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        this_00 = (GUIAnimation *)(**(code **)(*plVar2 + 0x18))(plVar2);
        lVar3 = *(long *)(this + 0x140);
        goto joined_r0x0052f68c;
      }
    }
  }
  lVar3 = *(long *)(this + 0x140);
joined_r0x0052f68c:
  if (lVar3 != 0) {
    GUIAnimation::ScaleAnimation(this_00,1.0,0.0,0.25);
    *(undefined1 *)(local_48 + 0xb8) = 0;
    pGVar4 = *(GUIView **)(this + 0x140);
    GUIView::RemoveAllAnimations(pGVar4);
    this_00 = (GUIAnimation *)GUIView::AddAnimation(pGVar4,(shared_ptr *)&local_48);
    plVar2 = local_40;
    if ((local_40 != (long *)0x0) &&
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      this_00 = (GUIAnimation *)(**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        this_00 = (GUIAnimation *)(**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  GUIAnimation::AlphaAnimation(this_00,1.0,0.0,0.25);
  *(undefined1 *)(local_48 + 0xb8) = 0;
  GUIView::RemoveAllAnimations((GUIView *)this);
  GUIView::AddAnimation((GUIView *)this,(shared_ptr *)&local_48);
  if ((local_40 != (long *)0x0) && (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0052f624 with catch @ 0052f778
                        */
                    /* try { // try from 0052f77c to 0062f783 has its CatchHandler @ 0052f78c */
                    /* try { // try from 0052f784 to 0062f78f has its CatchHandler @ 0052f5dc */
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = local_40[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0052f77c with catch @ 0052f78c
                        */
                    /* catch() { ... } // from try @ 0052f7b4 with catch @ 0052f790
                       catch() { ... } // from try @ 0052f7d0 with catch @ 0052f790 */
    local_40[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
                    /* try { // try from 0052f7b0 to 0062f7b3 has its CatchHandler @ 0052f7c4 */
                    /* try { // try from 0052f7b4 to 0062f7c7 has its CatchHandler @ 0052f790 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0052f7b0 with catch @ 0052f7c4 */
                    /* try { // try from 0052f7c8 to 0062f7cf has its CatchHandler @ 0052f7d8 */
  return;
}


