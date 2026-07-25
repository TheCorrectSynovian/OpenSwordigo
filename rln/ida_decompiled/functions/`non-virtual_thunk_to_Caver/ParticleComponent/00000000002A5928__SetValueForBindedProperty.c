/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A5928
 * Mangled: _ZThn16_N5Caver17ParticleComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBB00  Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002A5928 string=0x00000000002A592C "uX"
 *   insn=0x00000000002A592C string=0x00000000001FBB00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ParticleComponent::SetValueForBindedProperty(
        Caver::ParticleComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::ParticleComponent::SetValueForBindedProperty((Caver::ParticleComponent *)((char *)this - 16), a2, a3);
}

