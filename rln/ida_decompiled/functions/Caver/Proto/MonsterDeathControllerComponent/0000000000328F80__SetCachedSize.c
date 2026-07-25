/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328F80
 * Mangled: _ZNK5Caver5Proto31MonsterDeathControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000328F38  Caver::Proto::MonsterDeathControllerComponent::~MonsterDeathControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterDeathControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

