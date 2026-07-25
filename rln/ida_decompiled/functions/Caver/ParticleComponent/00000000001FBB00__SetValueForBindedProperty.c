/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBB00
 * Mangled: ._ZN5Caver17ParticleComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002A5928  `non-virtual thunk to'Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002A556C  Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBB08 string=0x00000000001FBB0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleComponent::SetValueForBindedProperty(
        Caver::ParticleComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver17ParticleComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

