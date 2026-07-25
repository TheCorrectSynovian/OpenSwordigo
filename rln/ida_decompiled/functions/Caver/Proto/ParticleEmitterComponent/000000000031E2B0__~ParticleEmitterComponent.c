/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031E2B0
 * Mangled: _ZN5Caver5Proto24ParticleEmitterComponentD0Ev
 * Demangled: Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAF10  Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent()
 *   0x000000000031E2E8  Caver::Proto::ParticleEmitterComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000031E2C0 string=0x00000000001FAF10 "0'"
 *   insn=0x000000000031E2D0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031E2E0 string=0x000000000031E2E4 "x"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent(
        Caver::Proto::ParticleEmitterComponent *this)
{
  Caver::Proto::ParticleEmitterComponent::~ParticleEmitterComponent(this);
  operator delete(this);
}

