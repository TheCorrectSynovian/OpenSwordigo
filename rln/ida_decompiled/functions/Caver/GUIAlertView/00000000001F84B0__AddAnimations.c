/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F84B0
 * Mangled: ._ZN5Caver12GUIAlertView13AddAnimationsEb
 * Demangled: Caver::GUIAlertView::AddAnimations(bool)
 *
 * Callers: 2
 *   0x00000000004918F0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x0000000000491B58  Caver::GUIAlertView::Dismiss(void)
 *
 * Callees: 1
 *   0x000000000048F638  Caver::GUIAlertView::AddAnimations(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F84B8 string=0x00000000001F84BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAlertView::AddAnimations(Caver::GUIAlertView *this, bool a2)
{
  return _ZN5Caver12GUIAlertView13AddAnimationsEb(this, a2);
}

