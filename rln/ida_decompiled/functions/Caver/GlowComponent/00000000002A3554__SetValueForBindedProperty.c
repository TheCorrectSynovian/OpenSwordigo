/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3554
 * Mangled: _ZN5Caver13GlowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FC4E0  Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A3554 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GlowComponent::SetValueForBindedProperty(
        Caver::GlowComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::Component::SetValueForBindedProperty(this, a2, a3);
}

