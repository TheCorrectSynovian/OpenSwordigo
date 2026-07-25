/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F50A0
 * Mangled: ._ZN5Caver16GUITextFieldImpl10UpdateTextEv
 * Demangled: Caver::GUITextFieldImpl::UpdateText(void)
 *
 * Callers: 3
 *   0x00000000004BA5B8  Caver::GUITextFieldImpl::setTextColor(Caver::Color)
 *   0x00000000004BA5CC  Caver::GUITextFieldImpl::setText(std::string const&)
 *   0x00000000004BA5FC  Caver::GUITextFieldImpl::setPlaceHolder(std::string const&)
 *
 * Callees: 1
 *   0x00000000004BA220  Caver::GUITextFieldImpl::UpdateText(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F50A8 string=0x00000000001F50AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITextFieldImpl::UpdateText(Caver::GUITextFieldImpl *this)
{
  return _ZN5Caver16GUITextFieldImpl10UpdateTextEv(this);
}

