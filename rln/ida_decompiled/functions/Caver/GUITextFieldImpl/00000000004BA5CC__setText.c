/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA5CC
 * Mangled: _ZN5Caver16GUITextFieldImpl7setTextERKSs
 * Demangled: Caver::GUITextFieldImpl::setText(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F50A0  Caver::GUITextFieldImpl::UpdateText(void)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x00000000004BA5D8 string=0x00000000004BA5DC "`""
 *   insn=0x00000000004BA5DC string=0x00000000004BA5E0 "2"
 *   insn=0x00000000004BA5F0 string=0x00000000001F50A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::setText(Caver::GUITextFieldImpl *a1)
{
  sub_56A6A8((char *)a1 + 392);
  return Caver::GUITextFieldImpl::UpdateText(a1);
}

