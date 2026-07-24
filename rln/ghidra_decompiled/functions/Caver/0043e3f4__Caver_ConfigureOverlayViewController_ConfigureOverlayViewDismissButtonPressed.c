/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e3f4
 * Function: Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed
 * Signature: undefined __cdecl ConfigureOverlayViewDismissButtonPressed(ConfigureOverlayView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed(Caver::ConfigureOverlayView*)
    */

void Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed
               (ConfigureOverlayView *param_1)

{
  GUIViewController::DismissModalViewController(*(GUIViewController **)(param_1 + 0x28));
  return;
}


