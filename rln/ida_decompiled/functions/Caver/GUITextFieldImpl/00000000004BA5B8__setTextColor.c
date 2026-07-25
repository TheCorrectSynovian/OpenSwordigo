/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA5B8
 * Mangled: _ZN5Caver16GUITextFieldImpl12setTextColorENS_5ColorE
 * Demangled: Caver::GUITextFieldImpl::setTextColor(Caver::Color)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F50A0  Caver::GUITextFieldImpl::UpdateText(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000004BA5B8 string=0x00000000004BA5BC "h"
 *   insn=0x00000000004BA5C0 string=0x00000000001F50A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::setTextColor(Caver::GUITextFieldImpl *a1, _DWORD *a2)
{
  *((_DWORD *)a1 + 90) = *a2;
  return Caver::GUITextFieldImpl::UpdateText(a1);
}

