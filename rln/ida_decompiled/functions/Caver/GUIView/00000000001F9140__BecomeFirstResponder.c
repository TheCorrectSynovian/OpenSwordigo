/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9140
 * Mangled: ._ZN5Caver7GUIView20BecomeFirstResponderEv
 * Demangled: Caver::GUIView::BecomeFirstResponder(void)
 *
 * Callers: 1
 *   0x00000000004BA15C  Caver::GUITextFieldImpl::BecomeFirstResponder(void)
 *
 * Callees: 1
 *   0x00000000004A05C8  Caver::GUIView::BecomeFirstResponder(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9148 string=0x00000000001F914C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::BecomeFirstResponder(Caver::GUIView *this)
{
  return _ZN5Caver7GUIView20BecomeFirstResponderEv(this);
}

