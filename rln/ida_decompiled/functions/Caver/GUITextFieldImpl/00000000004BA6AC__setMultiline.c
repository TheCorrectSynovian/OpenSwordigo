/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA6AC
 * Mangled: _ZN5Caver16GUITextFieldImpl12setMultilineEb
 * Demangled: Caver::GUITextFieldImpl::setMultiline(bool)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004BA6AC string=0x00000000004BA6B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::setMultiline(__int64 this, char a2)
{
  *(_BYTE *)(this + 384) = a2 & 1;
  return this;
}

