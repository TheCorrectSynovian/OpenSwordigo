/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026EEC8
 * Mangled: _ZThn16_N5Caver19EntityInfoComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::EntityInfoComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002013B0  Caver::EntityInfoComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000026EEC8 string=0x000000000026EECC "9I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::EntityInfoComponent::SetValueForBindedProperty(
        Caver::EntityInfoComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::EntityInfoComponent::SetValueForBindedProperty(
           (Caver::EntityInfoComponent *)((char *)this - 16),
           a2,
           a3);
}

