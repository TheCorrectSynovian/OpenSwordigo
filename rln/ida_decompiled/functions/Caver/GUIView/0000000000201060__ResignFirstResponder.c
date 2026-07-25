/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201060
 * Mangled: ._ZN5Caver7GUIView20ResignFirstResponderEv
 * Demangled: Caver::GUIView::ResignFirstResponder(void)
 *
 * Callers: 1
 *   0x00000000004BA1A0  Caver::GUITextFieldImpl::ResignFirstResponder(void)
 *
 * Callees: 1
 *   0x00000000004A05C8  Caver::GUIView::BecomeFirstResponder(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201068 string=0x000000000020106C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIView::ResignFirstResponder(Caver::GUIView *this)
{
  JUMPOUT(0x4A0754);
}

