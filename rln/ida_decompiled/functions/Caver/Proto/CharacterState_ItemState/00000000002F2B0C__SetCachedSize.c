/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2B0C
 * Mangled: _ZNK5Caver5Proto24CharacterState_ItemState13SetCachedSizeEi
 * Demangled: Caver::Proto::CharacterState_ItemState::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002F2A10  Caver::Proto::CharacterState_ItemState::~CharacterState_ItemState()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState_ItemState::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

