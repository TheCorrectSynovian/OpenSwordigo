/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F61C0
 * Mangled: ._ZN5Caver17ParticleComponent23AddTypeToParticleSystemEPNS_14ParticleSystemE
 * Demangled: Caver::ParticleComponent::AddTypeToParticleSystem(Caver::ParticleSystem *)
 *
 * Callers: 1
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002A5938  Caver::ParticleComponent::AddTypeToParticleSystem(Caver::ParticleSystem *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F61C8 string=0x00000000001F61CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleComponent::AddTypeToParticleSystem(
        Caver::ParticleComponent *this,
        Caver::ParticleSystem *a2)
{
  return _ZN5Caver17ParticleComponent23AddTypeToParticleSystemEPNS_14ParticleSystemE(this, a2);
}

