/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003358A0
 * Mangled: _ZNK5Caver5Proto29ProjectileControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ProjectileControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000335858  Caver::Proto::ProjectileControllerComponent::~ProjectileControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProjectileControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

