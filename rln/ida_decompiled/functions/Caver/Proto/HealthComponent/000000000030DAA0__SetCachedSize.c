/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030DAA0
 * Mangled: _ZNK5Caver5Proto15HealthComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::HealthComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000030DA18  Caver::Proto::HealthComponent::~HealthComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HealthComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

