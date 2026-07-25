/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C8D0
 * Mangled: _ZNK5Caver5Proto20WeaponTrailComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::WeaponTrailComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000032C848  Caver::Proto::WeaponTrailComponent::~WeaponTrailComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponTrailComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

