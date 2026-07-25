/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A9CB8
 * Mangled: _ZThn16_N5Caver24ParticleEmitterComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3B60  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A9CBC string=0x00000000001F3B60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ParticleEmitterComponent::ValueForBindedProperty(
        Caver::ParticleEmitterComponent *this,
        int a2)
{
  return Caver::ParticleEmitterComponent::ValueForBindedProperty(
           (Caver::ParticleEmitterComponent *)((char *)this - 16),
           a2);
}

