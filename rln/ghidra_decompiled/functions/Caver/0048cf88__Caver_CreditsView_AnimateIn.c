/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048cf88
 * Function: Caver::CreditsView::AnimateIn
 * Signature: undefined __thiscall AnimateIn(CreditsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CreditsView::AnimateIn() */

void __thiscall Caver::CreditsView::AnimateIn(CreditsView *this)

{
  long lVar1;
  long lVar2;
  GUIView *this_00;
  long local_38;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0048ce0c with catch @ 0048cfa8 */
  GUIAnimation::AlphaAnimation((GUIAnimation *)this,0.0,1.0,DAT_00683484);
                    /* try { // try from 0048cfcc to 0058cfd3 has its CatchHandler @ 0048d094 */
  *(undefined4 *)(local_38 + 0x58) = 0x3e99999a;
  this_00 = *(GUIView **)(this + 0x100);
                    /* try { // try from 0048cfd4 to 0058d087 has its CatchHandler @ 0048cd94 */
                    /* catch() { ... } // from try @ 0048cde4 with catch @ 0048cfd8 */
  GUIView::RemoveAllAnimations(this_00);
                    /* catch() { ... } // from try @ 0048cdc4 with catch @ 0048cfdc */
  GUIView::AddAnimation(this_00,(shared_ptr *)&local_38);
                    /* catch() { ... } // from try @ 0048cdf8 with catch @ 0048cff0
                       catch() { ... } // from try @ 0048ce38 with catch @ 0048cff0 */
  if ((local_30 != (long *)0x0) && (lVar2 = local_30[1], local_30[1] = lVar2 + -1, lVar2 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar2 = local_30[2];
    local_30[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*local_30 + 0x18))(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


