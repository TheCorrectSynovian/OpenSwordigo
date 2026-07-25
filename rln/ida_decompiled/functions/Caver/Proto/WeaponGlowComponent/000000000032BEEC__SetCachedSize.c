/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032BEEC
 * Mangled: _ZNK5Caver5Proto19WeaponGlowComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::WeaponGlowComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000032BE50  Caver::Proto::WeaponGlowComponent::~WeaponGlowComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponGlowComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

