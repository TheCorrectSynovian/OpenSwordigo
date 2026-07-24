/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d7c18
 * Function: Caver::GameOverlayView::SetControlButtonsInvisible
 * Signature: undefined __thiscall SetControlButtonsInvisible(GameOverlayView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::SetControlButtonsInvisible(bool) */

void __thiscall
Caver::GameOverlayView::SetControlButtonsInvisible(GameOverlayView *this,bool param_1)

{
  if ((GameOverlayView)param_1 != this[0x13c]) {
    this[0x13c] = (GameOverlayView)param_1;
    *(bool *)(*(long *)(this + 0x140) + 0x124) = param_1;
    *(bool *)(*(long *)(this + 0x150) + 0x124) = param_1;
    *(bool *)(*(long *)(this + 0x170) + 0x124) = param_1;
    *(bool *)(*(long *)(this + 0x160) + 0x124) = param_1;
    *(bool *)(*(long *)(this + 400) + 0x124) = param_1;
    *(bool *)(*(long *)(this + 0x180) + 0x124) = param_1;
  }
  return;
}


