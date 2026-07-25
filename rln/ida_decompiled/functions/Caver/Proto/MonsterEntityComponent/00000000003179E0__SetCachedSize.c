/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003179E0
 * Mangled: _ZNK5Caver5Proto22MonsterEntityComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::MonsterEntityComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000317944  Caver::Proto::MonsterEntityComponent::~MonsterEntityComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterEntityComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

