/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B1908
 * Mangled: _ZThn16_N5Caver23BushControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::BushControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002B190C string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BushControllerComponent::SetValueForBindedProperty(
        Caver::BushControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::Component::SetValueForBindedProperty((Caver::BushControllerComponent *)((char *)this - 16), a2, a3);
}

