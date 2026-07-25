/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6350
 * Mangled: ._ZN5Caver24ParticleEmitterComponent19PerformBindedActionEi
 * Demangled: Caver::ParticleEmitterComponent::PerformBindedAction(int)
 *
 * Callers: 2
 *   0x00000000002A3698  Caver::MagicParticleEmitterComponent::PerformBindedAction(int)
 *   0x00000000002A369C  `non-virtual thunk to'Caver::MagicParticleEmitterComponent::PerformBindedAction(int)
 *
 * Callees: 1
 *   0x00000000002AA5AC  Caver::ParticleEmitterComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6358 string=0x00000000001F635C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::PerformBindedAction(Caver::ParticleEmitterComponent *this, int a2)
{
  return _ZN5Caver24ParticleEmitterComponent19PerformBindedActionEi(this, a2);
}

