/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333688
 * Mangled: _ZNK5Caver5Proto23MagicExplosionComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::MagicExplosionComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000333600  Caver::Proto::MagicExplosionComponent::~MagicExplosionComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicExplosionComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

