/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033E3FC
 * Mangled: _ZThn72_N5Caver30ConfigureOverlayViewController40ConfigureOverlayViewDismissButtonPressedEPNS_20ConfigureOverlayViewE
 * Demangled: `non-virtual thunk to'Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed(Caver::ConfigureOverlayView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000033E400 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed(
        Caver::GUIViewController **this,
        Caver::ConfigureOverlayView *a2)
{
  return Caver::GUIViewController::DismissModalViewController(*(this - 4));
}

