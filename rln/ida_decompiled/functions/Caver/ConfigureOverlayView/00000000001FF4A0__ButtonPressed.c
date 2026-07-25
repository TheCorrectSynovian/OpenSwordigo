/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF4A0
 * Mangled: ._ZN5Caver20ConfigureOverlayView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::ConfigureOverlayView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x00000000003C8890  Caver::ConfigureOverlayView::HitTest(Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000003C6014  Caver::ConfigureOverlayView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF4A8 string=0x00000000001FF4AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ConfigureOverlayView::ButtonPressed()
{
  return _ZN5Caver20ConfigureOverlayView13ButtonPressedEPvPNS_8GUIEventE();
}

