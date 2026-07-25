/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3690
 * Mangled: _ZThn16_N5Caver29MagicParticleEmitterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::MagicParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F51A0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A3694 string=0x00000000001F51A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicParticleEmitterComponent::SetValueForBindedProperty(
        Caver::MagicParticleEmitterComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::ParticleEmitterComponent::SetValueForBindedProperty(
           (Caver::MagicParticleEmitterComponent *)((char *)this - 16),
           a2,
           a3);
}

