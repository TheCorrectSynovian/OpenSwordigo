/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329B30
 * Mangled: _ZNK5Caver5Proto24SwingableWeaponComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::SwingableWeaponComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000329AA8  Caver::Proto::SwingableWeaponComponent::~SwingableWeaponComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

