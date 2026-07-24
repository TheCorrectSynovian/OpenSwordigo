/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052f460
 * Function: Caver::PortalView::AnimateIn
 * Signature: undefined __thiscall AnimateIn(PortalView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::AnimateIn() */

void __thiscall Caver::PortalView::AnimateIn(PortalView *this)

{
  long lVar1;
  long lVar2;
  shared_ptr asStack_38 [8];
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GUIAnimation::AlphaAnimation((GUIAnimation *)this,0.0,1.0,0.25);
  GUIView::RemoveAllAnimations((GUIView *)this);
  GUIView::AddAnimation((GUIView *)this,asStack_38);
                    /* catch() { ... } // from try @ 0052f4e8 with catch @ 0052f4b8 */
  if ((local_30 != (long *)0x0) && (lVar2 = local_30[1], local_30[1] = lVar2 + -1, lVar2 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar2 = local_30[2];
                    /* try { // try from 0052f4d4 to 0062f4e7 has its CatchHandler @ 0052f50c */
    local_30[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 0052f4e8 to 0062f50f has its CatchHandler @ 0052f4b8 */
      (**(code **)(*local_30 + 0x18))(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 0052f4d4 with catch @ 0052f50c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


