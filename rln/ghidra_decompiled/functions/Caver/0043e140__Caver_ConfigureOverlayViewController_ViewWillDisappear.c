/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e140
 * Function: Caver::ConfigureOverlayViewController::ViewWillDisappear
 * Signature: undefined __thiscall ViewWillDisappear(ConfigureOverlayViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayViewController::ViewWillDisappear() */

void __thiscall
Caver::ConfigureOverlayViewController::ViewWillDisappear(ConfigureOverlayViewController *this)

{
  ConfigureOverlayView::AddTransitionAnimations(*(ConfigureOverlayView **)(this + 0x60),true);
  return;
}


