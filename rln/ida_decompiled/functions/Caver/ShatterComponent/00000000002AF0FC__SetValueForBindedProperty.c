/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF0FC
 * Mangled: _ZN5Caver16ShatterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ShatterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002AF0FC string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShatterComponent::SetValueForBindedProperty(
        Caver::ShatterComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::Component::SetValueForBindedProperty(this, a2, a3);
}

