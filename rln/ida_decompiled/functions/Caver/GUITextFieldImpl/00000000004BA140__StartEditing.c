/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA140
 * Mangled: _ZN5Caver16GUITextFieldImpl12StartEditingEb
 * Demangled: Caver::GUITextFieldImpl::StartEditing(bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFC90  Caver::StartTextInputWithDelegate(Caver::ITextInputDelegate *,std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000004BA140 string=0x00000000004BA144 ""
 *   insn=0x00000000004BA148 string=0x00000000004BA14C "\t0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::StartEditing(Caver::GUITextFieldImpl *this)
{
  *((_WORD *)this + 204) = 257;
  *((_DWORD *)this + 103) = 0;
  return Caver::StartTextInputWithDelegate();
}

