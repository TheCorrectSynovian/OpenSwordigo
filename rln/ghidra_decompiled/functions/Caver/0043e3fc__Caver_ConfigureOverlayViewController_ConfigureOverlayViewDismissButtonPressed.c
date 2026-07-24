/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e3fc
 * Function: Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed
 * Signature: undefined __thiscall ConfigureOverlayViewDismissButtonPressed(ConfigureOverlayViewController * this, ConfigureOverlayView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed(Caver::ConfigureOverlayView*)
    */

void __thiscall
Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed
          (ConfigureOverlayViewController *this,ConfigureOverlayView *param_1)

{
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + -0x20));
  return;
}


