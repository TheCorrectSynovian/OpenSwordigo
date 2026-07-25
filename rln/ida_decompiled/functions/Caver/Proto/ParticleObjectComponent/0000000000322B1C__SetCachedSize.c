/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322B1C
 * Mangled: _ZNK5Caver5Proto23ParticleObjectComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ParticleObjectComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000322AD4  Caver::Proto::ParticleObjectComponent::~ParticleObjectComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleObjectComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

