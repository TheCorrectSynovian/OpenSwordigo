/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A369C
 * Mangled: _ZThn16_N5Caver29MagicParticleEmitterComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::MagicParticleEmitterComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6350  Caver::ParticleEmitterComponent::PerformBindedAction(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002A369C string=0x00000000002A36A0 ",K"
 *   insn=0x00000000002A36A0 string=0x00000000001F6350 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicParticleEmitterComponent::PerformBindedAction(
        Caver::MagicParticleEmitterComponent *this,
        int a2)
{
  return Caver::ParticleEmitterComponent::PerformBindedAction(
           (Caver::MagicParticleEmitterComponent *)((char *)this - 16),
           a2);
}

