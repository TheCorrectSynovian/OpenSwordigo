/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF100
 * Mangled: _ZThn16_N5Caver16ShatterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ShatterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002AF104 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ShatterComponent::SetValueForBindedProperty(
        Caver::ShatterComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::Component::SetValueForBindedProperty((Caver::ShatterComponent *)((char *)this - 16), a2, a3);
}

