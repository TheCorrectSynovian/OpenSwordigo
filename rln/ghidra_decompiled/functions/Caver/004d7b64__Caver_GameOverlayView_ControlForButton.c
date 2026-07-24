/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d7b64
 * Function: Caver::GameOverlayView::ControlForButton
 * Signature: undefined __thiscall ControlForButton(GameOverlayView * this, GUIButton * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::ControlForButton(Caver::GUIButton*) */

undefined4 __thiscall
Caver::GameOverlayView::ControlForButton(GameOverlayView *this,GUIButton *param_1)

{
  undefined4 uVar1;
  
  if (*(GUIButton **)(this + 0x140) == param_1) {
    return 1;
  }
  if (*(GUIButton **)(this + 0x150) == param_1) {
    return 2;
  }
  if (*(GUIButton **)(this + 0x160) == param_1) {
    return 3;
  }
  if (*(GUIButton **)(this + 0x170) == param_1) {
    return 4;
  }
  if (*(GUIButton **)(this + 0x180) == param_1) {
    return 5;
  }
  if (*(GUIButton **)(this + 400) == param_1) {
    return 6;
  }
  if (*(GUIButton **)(this + 0x1b8) == param_1) {
    return 7;
  }
  if (*(GUIButton **)(this + 0x1c8) != param_1) {
    uVar1 = 9;
    if (*(GUIButton **)(this + 0x1d8) != param_1) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 8;
}


