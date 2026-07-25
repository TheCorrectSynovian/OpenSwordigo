/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3684
 * Mangled: _ZThn16_N5Caver29MagicParticleEmitterComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::MagicParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3B60  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002A3684 string=0x00000000002A3688 "6A"
 *   insn=0x00000000002A3688 string=0x00000000001F3B60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicParticleEmitterComponent::ValueForBindedProperty(
        Caver::MagicParticleEmitterComponent *this,
        int a2)
{
  return Caver::ParticleEmitterComponent::ValueForBindedProperty(
           (Caver::MagicParticleEmitterComponent *)((char *)this - 16),
           a2);
}

