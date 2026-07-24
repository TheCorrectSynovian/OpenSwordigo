/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ef714
 * Function: Caver::StoreView::AnimateOut
 * Signature: undefined __thiscall AnimateOut(StoreView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreView::AnimateOut() */

void __thiscall Caver::StoreView::AnimateOut(StoreView *this)

{
  long lVar1;
  long *plVar2;
  StoreView *this_00;
  long lVar3;
  GUIView *this_01;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = this;
  if (*(long *)(this + 0xf0) != 0) {
    GUIAnimation::ScaleAnimation((GUIAnimation *)this,1.0,0.0,0.25);
    *(undefined1 *)(local_48 + 0xb8) = 0;
    this_01 = *(GUIView **)(this + 0xf0);
    GUIView::RemoveAllAnimations(this_01);
    this_00 = (StoreView *)GUIView::AddAnimation(this_01,(shared_ptr *)&local_48);
    plVar2 = local_40;
    if ((local_40 != (long *)0x0) &&
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      this_00 = (StoreView *)(**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        this_00 = (StoreView *)(**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  GUIAnimation::AlphaAnimation((GUIAnimation *)this_00,1.0,0.0,0.25);
  *(undefined1 *)(local_48 + 0xb8) = 0;
  GUIView::RemoveAllAnimations((GUIView *)this);
  GUIView::AddAnimation((GUIView *)this,(shared_ptr *)&local_48);
  if ((local_40 != (long *)0x0) && (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = local_40[2];
    local_40[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


