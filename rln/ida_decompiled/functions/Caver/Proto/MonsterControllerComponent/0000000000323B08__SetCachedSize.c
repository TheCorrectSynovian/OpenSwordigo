/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323B08
 * Mangled: _ZNK5Caver5Proto26MonsterControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::MonsterControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000323AC0  Caver::Proto::MonsterControllerComponent::~MonsterControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

