/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002019E0
 * Mangled: ._ZN5Caver7GUIView16IsFirstResponderEv
 * Demangled: Caver::GUIView::IsFirstResponder(void)
 *
 * Callers: 1
 *   0x0000000000491B58  Caver::GUIAlertView::Dismiss(void)
 *
 * Callees: 1
 *   0x00000000004A05C8  Caver::GUIView::BecomeFirstResponder(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002019E8 string=0x00000000002019EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIView::IsFirstResponder(Caver::GUIView *this)
{
  JUMPOUT(0x4A08B0);
}

