/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030CDDC
 * Mangled: _ZNK5Caver5Proto15DamageComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::DamageComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000030CD94  Caver::Proto::DamageComponent::~DamageComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DamageComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

