/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8050
 * Mangled: ._ZN5Caver25StopTextInputWithDelegateEPNS_18ITextInputDelegateE
 * Demangled: Caver::StopTextInputWithDelegate(Caver::ITextInputDelegate *)
 *
 * Callers: 3
 *   0x00000000004B9748  Caver::GUITextFieldImpl::~GUITextFieldImpl()
 *   0x00000000004B9B68  Caver::GUITextFieldImpl::StopEditing(void)
 *   0x00000000004BA1A0  Caver::GUITextFieldImpl::ResignFirstResponder(void)
 *
 * Callees: 1
 *   0x00000000004793DC  Caver::StopTextInputWithDelegate(Caver::ITextInputDelegate *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8058 string=0x00000000001F805C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StopTextInputWithDelegate()
{
  return _ZN5Caver25StopTextInputWithDelegateEPNS_18ITextInputDelegateE();
}

