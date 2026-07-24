/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d685c
 * Function: Caver::GameOverlayView::SetShowsUseButton
 * Signature: undefined __thiscall SetShowsUseButton(GameOverlayView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::SetShowsUseButton(bool) */

void __thiscall Caver::GameOverlayView::SetShowsUseButton(GameOverlayView *this,bool param_1)

{
  GameOverlayView GVar1;
  long lVar2;
  long lVar3;
  long local_48;
  long *plStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((GameOverlayView)param_1 != this[0x1a1]) {
                    /* try { // try from 004d6894 to 005d68af has its CatchHandler @ 004d6a7c */
    this[0x1a1] = (GameOverlayView)param_1;
    GUIButton::CancelPress(*(GUIButton **)(this + 0x170));
    GUIButton::CancelPress(*(GUIButton **)(this + 0x180));
    if (this[0x1a0] == (GameOverlayView)0x0) {
      GVar1 = this[0x1a1];
      *(byte *)(*(long *)(this + 0x180) + 0xe4) = (byte)GVar1 ^ 1;
      lVar3 = *(long *)(this + 0x170);
      if (GVar1 == (GameOverlayView)0x0) {
        CharacterState::AnyItemOfType(&local_48,*(long *)(this + 0xf8) + 0x10,1);
        *(bool *)(lVar3 + 0xe4) = local_48 == 0;
        if ((plStack_40 != (long *)0x0) &&
           (lVar3 = plStack_40[1], plStack_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          lVar3 = plStack_40[2];
          plStack_40[2] = lVar3 + -1;
          if (lVar3 + -1 == 0) {
            (**(code **)(*plStack_40 + 0x18))(plStack_40);
          }
        }
      }
      else {
        *(undefined1 *)(lVar3 + 0xe4) = 1;
      }
    }
    else {
                    /* try { // try from 004d68b0 to 005d6a7f has its CatchHandler @ 004d6840 */
      *(undefined1 *)(*(long *)(this + 0x180) + 0xe4) = 1;
      *(undefined1 *)(*(long *)(this + 0x170) + 0xe4) = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


