/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002036C0
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *
 * Callees: 1
 *   0x00000000002C8748  Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002036C8 string=0x00000000002036CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(
        Caver::SwingableWeaponControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver34SwingableWeaponControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

