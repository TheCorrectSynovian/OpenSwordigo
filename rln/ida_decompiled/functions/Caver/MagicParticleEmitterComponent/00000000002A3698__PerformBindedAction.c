/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3698
 * Mangled: _ZN5Caver29MagicParticleEmitterComponent19PerformBindedActionEi
 * Demangled: Caver::MagicParticleEmitterComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6350  Caver::ParticleEmitterComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A3698 string=0x00000000001F6350 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicParticleEmitterComponent::PerformBindedAction(
        Caver::MagicParticleEmitterComponent *this,
        int a2)
{
  return Caver::ParticleEmitterComponent::PerformBindedAction(this, a2);
}

