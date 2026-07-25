/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCF28
 * Mangled: _ZThn16_N5Caver20WeaponTrailComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::WeaponTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201040  Caver::WeaponTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002CCF28 string=0x00000000002CCF2C "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::WeaponTrailComponent::SetValueForBindedProperty(
        Caver::WeaponTrailComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::WeaponTrailComponent::SetValueForBindedProperty(
           (Caver::WeaponTrailComponent *)((char *)this - 16),
           a2,
           a3);
}

