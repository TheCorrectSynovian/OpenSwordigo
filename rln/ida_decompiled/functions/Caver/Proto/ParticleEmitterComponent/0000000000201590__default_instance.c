/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201590
 * Mangled: ._ZN5Caver5Proto24ParticleEmitterComponent16default_instanceEv
 * Demangled: Caver::Proto::ParticleEmitterComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *
 * Callees: 1
 *   0x00000000002FA3C8  Caver::Proto::ParticleEmitterComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201598 string=0x000000000020159C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ParticleEmitterComponent::default_instance(
        Caver::Proto::ParticleEmitterComponent *this)
{
  return _ZN5Caver5Proto24ParticleEmitterComponent16default_instanceEv(this);
}

