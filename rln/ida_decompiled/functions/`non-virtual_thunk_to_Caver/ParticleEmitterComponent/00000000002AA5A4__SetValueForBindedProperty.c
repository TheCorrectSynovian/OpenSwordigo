/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AA5A4
 * Mangled: _ZThn16_N5Caver24ParticleEmitterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F51A0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002AA5A8 string=0x00000000001F51A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ParticleEmitterComponent::SetValueForBindedProperty(
        Caver::ParticleEmitterComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::ParticleEmitterComponent::SetValueForBindedProperty(
           (Caver::ParticleEmitterComponent *)((char *)this - 16),
           a2,
           a3);
}

