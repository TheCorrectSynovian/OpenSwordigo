/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033E140
 * Mangled: _ZN5Caver30ConfigureOverlayViewController17ViewWillDisappearEv
 * Demangled: Caver::ConfigureOverlayViewController::ViewWillDisappear(void)
 *
 * Callers: 1
 *   0x000000000033DE4C  Caver::ConfigureOverlayViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000200C10  Caver::ConfigureOverlayView::AddTransitionAnimations(bool)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ConfigureOverlayViewController::ViewWillDisappear(Caver::ConfigureOverlayView **this)
{
  Caver::ConfigureOverlayView::AddTransitionAnimations(this[12]);
}

