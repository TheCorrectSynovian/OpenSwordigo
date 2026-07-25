/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033E3F4
 * Mangled: _ZN5Caver30ConfigureOverlayViewController40ConfigureOverlayViewDismissButtonPressedEPNS_20ConfigureOverlayViewE
 * Demangled: Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed(Caver::ConfigureOverlayView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000033E3F8 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed(
        Caver::GUIViewController **this,
        Caver::ConfigureOverlayView *a2)
{
  return Caver::GUIViewController::DismissModalViewController(this[5]);
}

