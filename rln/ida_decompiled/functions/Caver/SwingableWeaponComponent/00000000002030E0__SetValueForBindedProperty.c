/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002030E0
 * Mangled: ._ZN5Caver24SwingableWeaponComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002C5284  `non-virtual thunk to'Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002C4E2C  Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002030E8 string=0x00000000002030EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponComponent::SetValueForBindedProperty(
        Caver::SwingableWeaponComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver24SwingableWeaponComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

