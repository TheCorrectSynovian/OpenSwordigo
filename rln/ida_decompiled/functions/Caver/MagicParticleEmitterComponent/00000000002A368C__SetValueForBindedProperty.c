/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A368C
 * Mangled: _ZN5Caver29MagicParticleEmitterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::MagicParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F51A0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A368C string=0x00000000001F51A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicParticleEmitterComponent::SetValueForBindedProperty(
        Caver::MagicParticleEmitterComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::ParticleEmitterComponent::SetValueForBindedProperty(this, a2, a3);
}

