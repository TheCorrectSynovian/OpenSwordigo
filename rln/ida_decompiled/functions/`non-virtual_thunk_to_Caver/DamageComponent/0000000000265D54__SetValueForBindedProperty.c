/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000265D54
 * Mangled: _ZThn16_N5Caver15DamageComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::DamageComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6C30  Caver::DamageComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000265D58 string=0x00000000001F6C30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::DamageComponent::SetValueForBindedProperty(
        Caver::DamageComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::DamageComponent::SetValueForBindedProperty((Caver::DamageComponent *)((char *)this - 16), a2, a3);
}

