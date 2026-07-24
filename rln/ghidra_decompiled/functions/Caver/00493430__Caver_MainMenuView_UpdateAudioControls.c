/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00493430
 * Function: Caver::MainMenuView::UpdateAudioControls
 * Signature: undefined __thiscall UpdateAudioControls(MainMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::UpdateAudioControls() */

void __thiscall Caver::MainMenuView::UpdateAudioControls(MainMenuView *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  GameOptions::sharedOptions((GameOptions *)this);
  if (*(char *)(local_38 + 0x20) == '\0') {
    GUIButton::SetImage(*(GUIButton **)(this + 0x1c8),(intrusive_ptr *)(this + 0x1e0));
  }
  else {
    GUIButton::SetImage(*(GUIButton **)(this + 0x1c8),(intrusive_ptr *)(this + 0x1d8));
  }
  if (*(char *)(local_38 + 0x21) == '\0') {
    GUIButton::SetImage(*(GUIButton **)(this + 0x1b8),(intrusive_ptr *)(this + 0x1f0));
  }
  else {
    GUIButton::SetImage(*(GUIButton **)(this + 0x1b8),(intrusive_ptr *)(this + 0x1e8));
  }
  if ((local_30 != (long *)0x0) && (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar3 = local_30[2];
    local_30[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_30 + 0x18))(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


