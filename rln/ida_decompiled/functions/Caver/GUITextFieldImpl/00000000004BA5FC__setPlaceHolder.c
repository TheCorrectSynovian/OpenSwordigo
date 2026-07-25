/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA5FC
 * Mangled: _ZN5Caver16GUITextFieldImpl14setPlaceHolderERKSs
 * Demangled: Caver::GUITextFieldImpl::setPlaceHolder(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F50A0  Caver::GUITextFieldImpl::UpdateText(void)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x00000000004BA608 string=0x00000000004BA60C "`B"
 *   insn=0x00000000004BA60C string=0x00000000004BA610 "&"
 *   insn=0x00000000004BA620 string=0x00000000001F50A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::setPlaceHolder(Caver::GUITextFieldImpl *a1)
{
  sub_56A6A8((char *)a1 + 400);
  return Caver::GUITextFieldImpl::UpdateText(a1);
}

