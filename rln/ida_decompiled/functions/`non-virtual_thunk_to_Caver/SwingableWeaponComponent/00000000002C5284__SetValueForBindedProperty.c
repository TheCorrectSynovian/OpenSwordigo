/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C5284
 * Mangled: _ZThn16_N5Caver24SwingableWeaponComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002030E0  Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SwingableWeaponComponent::SetValueForBindedProperty(
        Caver::SwingableWeaponComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::SwingableWeaponComponent::SetValueForBindedProperty(
           (Caver::SwingableWeaponComponent *)((char *)this - 16),
           a2,
           a3);
}

