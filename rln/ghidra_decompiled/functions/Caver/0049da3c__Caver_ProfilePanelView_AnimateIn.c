/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049da3c
 * Function: Caver::ProfilePanelView::AnimateIn
 * Signature: undefined __thiscall AnimateIn(ProfilePanelView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::AnimateIn() */

void __thiscall Caver::ProfilePanelView::AnimateIn(ProfilePanelView *this)

{
  long lVar1;
  long lVar2;
  GUIView *this_00;
  long local_38;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GUIAnimation::AlphaAnimation((GUIAnimation *)this,0.0,1.0,DAT_00683484);
  *(undefined4 *)(local_38 + 0x58) = 0x3ecccccd;
  this_00 = *(GUIView **)(this + 0x178);
  GUIView::RemoveAllAnimations(this_00);
  GUIView::AddAnimation(this_00,(shared_ptr *)&local_38);
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


