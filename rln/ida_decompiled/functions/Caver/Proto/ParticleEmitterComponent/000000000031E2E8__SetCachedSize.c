/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031E2E8
 * Mangled: _ZNK5Caver5Proto24ParticleEmitterComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ParticleEmitterComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031E2B0  Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitterComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

