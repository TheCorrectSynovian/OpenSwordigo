/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283280
 * Mangled: _ZN5Caver22HookshotTrailComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::HookshotTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC4E0  Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000283280 string=0x00000000001FC4E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::SetValueForBindedProperty(
        Caver::HookshotTrailComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::GlowComponent::SetValueForBindedProperty(this, a2, a3);
}

