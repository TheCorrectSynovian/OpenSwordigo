/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA6C0
 * Mangled: _ZN5Caver16GUITextFieldImpl19setImmediateUpdatesEb
 * Demangled: Caver::GUITextFieldImpl::setImmediateUpdates(bool)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004BA6C0 string=0x00000000004BA6C4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::setImmediateUpdates(__int64 this, char a2)
{
  *(_BYTE *)(this + 385) = a2 & 1;
  return this;
}

