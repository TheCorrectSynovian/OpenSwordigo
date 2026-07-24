/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d4b1c
 * Function: Caver::GameOverlayView::UpdateUseButtonVisibility
 * Signature: undefined __thiscall UpdateUseButtonVisibility(GameOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::UpdateUseButtonVisibility() */

void __thiscall Caver::GameOverlayView::UpdateUseButtonVisibility(GameOverlayView *this)

{
  if (this[0x1a0] != (GameOverlayView)0x0) {
    *(undefined1 *)(*(long *)(this + 0x180) + 0xe4) = 1;
    return;
  }
  *(byte *)(*(long *)(this + 0x180) + 0xe4) = (byte)this[0x1a1] ^ 1;
  return;
}


