/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F3748
 * Mangled: _ZNK5Caver5Proto14CharacterState13SetCachedSizeEi
 * Demangled: Caver::Proto::CharacterState::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002F3710  Caver::Proto::CharacterState::~CharacterState()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

