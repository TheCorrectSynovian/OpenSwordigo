/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F51A0
 * Mangled: ._ZN5Caver24ParticleEmitterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 3
 *   0x00000000002A368C  Caver::MagicParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A3690  `non-virtual thunk to'Caver::MagicParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AA5A4  `non-virtual thunk to'Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F51A8 string=0x00000000001F51AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::SetValueForBindedProperty(
        Caver::ParticleEmitterComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver24ParticleEmitterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

