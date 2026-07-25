/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF930
 * Mangled: ._ZN5Caver9GUIButton11CancelPressEv
 * Demangled: Caver::GUIButton::CancelPress(void)
 *
 * Callers: 3
 *   0x00000000003D64EC  Caver::GameOverlayView::CancelInput(void)
 *   0x00000000003D6544  Caver::GameOverlayView::SetControlsHidden(bool)
 *   0x00000000003D685C  Caver::GameOverlayView::SetShowsUseButton(bool)
 *
 * Callees: 1
 *   0x0000000000496188  Caver::GUIButton::CancelPress(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF938 string=0x00000000001FF93C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIButton::CancelPress(Caver::GUIButton *this)
{
  return _ZN5Caver9GUIButton11CancelPressEv(this);
}

