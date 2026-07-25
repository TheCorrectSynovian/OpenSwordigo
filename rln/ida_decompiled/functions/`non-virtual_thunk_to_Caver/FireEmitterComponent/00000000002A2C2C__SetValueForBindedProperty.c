/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A2C2C
 * Mangled: _ZThn16_N5Caver20FireEmitterComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::FireEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCA60  Caver::FireEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A2C30 string=0x00000000001FCA60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::FireEmitterComponent::SetValueForBindedProperty(
        Caver::FireEmitterComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::FireEmitterComponent::SetValueForBindedProperty(
           (Caver::FireEmitterComponent *)((char *)this - 16),
           a2,
           a3);
}

