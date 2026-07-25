/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F7E4
 * Mangled: _ZNK5Caver5Proto17ParticleComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ParticleComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031F6E8  Caver::Proto::ParticleComponent::~ParticleComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

