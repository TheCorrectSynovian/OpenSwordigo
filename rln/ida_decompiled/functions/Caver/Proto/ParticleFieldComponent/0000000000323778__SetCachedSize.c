/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323778
 * Mangled: _ZNK5Caver5Proto22ParticleFieldComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ParticleFieldComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000323730  Caver::Proto::ParticleFieldComponent::~ParticleFieldComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleFieldComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

