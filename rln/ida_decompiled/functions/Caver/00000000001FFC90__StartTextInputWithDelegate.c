/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFC90
 * Mangled: ._ZN5Caver26StartTextInputWithDelegateEPNS_18ITextInputDelegateERKSs
 * Demangled: Caver::StartTextInputWithDelegate(Caver::ITextInputDelegate *,std::string const&)
 *
 * Callers: 3
 *   0x00000000004BA140  Caver::GUITextFieldImpl::StartEditing(bool)
 *   0x00000000004BA15C  Caver::GUITextFieldImpl::BecomeFirstResponder(void)
 *   0x00000000004BA1F4  Caver::GUITextFieldImpl::TouchEnded(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004792AC  Caver::StartTextInputWithDelegate(Caver::ITextInputDelegate *,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFC98 string=0x00000000001FFC9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StartTextInputWithDelegate()
{
  return _ZN5Caver26StartTextInputWithDelegateEPNS_18ITextInputDelegateERKSs();
}

