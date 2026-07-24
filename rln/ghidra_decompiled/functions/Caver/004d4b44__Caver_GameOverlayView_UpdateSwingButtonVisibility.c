/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d4b44
 * Function: Caver::GameOverlayView::UpdateSwingButtonVisibility
 * Signature: undefined __thiscall UpdateSwingButtonVisibility(GameOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::UpdateSwingButtonVisibility() */

void __thiscall Caver::GameOverlayView::UpdateSwingButtonVisibility(GameOverlayView *this)

{
  long lVar1;
  long lVar2;
  long local_38;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x170);
  if ((this[0x1a0] == (GameOverlayView)0x0) && (this[0x1a1] == (GameOverlayView)0x0)) {
    CharacterState::AnyItemOfType(&local_38,*(long *)(this + 0xf8) + 0x10,1);
    *(bool *)(lVar2 + 0xe4) = local_38 == 0;
    if ((local_30 != (long *)0x0) &&
       (lVar2 = local_30[1], local_30[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_30 + 0x10))(local_30);
      lVar2 = local_30[2];
      local_30[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*local_30 + 0x18))(local_30);
      }
    }
  }
  else {
    *(undefined1 *)(lVar2 + 0xe4) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


