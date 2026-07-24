/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d64ec
 * Function: Caver::GameOverlayView::CancelInput
 * Signature: undefined __thiscall CancelInput(GameOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::CancelInput() */

void __thiscall Caver::GameOverlayView::CancelInput(GameOverlayView *this)

{
  GUIButton::CancelPress(*(GUIButton **)(this + 0x140));
  GUIButton::CancelPress(*(GUIButton **)(this + 0x150));
  GUIButton::CancelPress(*(GUIButton **)(this + 0x160));
  GUIButton::CancelPress(*(GUIButton **)(this + 0x170));
  GUIButton::CancelPress(*(GUIButton **)(this + 0x180));
  GUIButton::CancelPress(*(GUIButton **)(this + 400));
  GUIButton::CancelPress(*(GUIButton **)(this + 0x1b8));
  GUIButton::CancelPress(*(GUIButton **)(this + 0x1c8));
  return;
}


