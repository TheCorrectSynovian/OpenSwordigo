/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002016B0
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponent12CreateWeaponEv
 * Demangled: Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *
 * Callers: 3
 *   0x00000000002C8748  Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C8ED8  Caver::SwingableWeaponControllerComponent::Prepare(void)
 *   0x0000000000368DE8  Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002016B8 string=0x00000000002016BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponControllerComponent::CreateWeapon(
        Caver::SwingableWeaponControllerComponent *this)
{
  return _ZN5Caver34SwingableWeaponControllerComponent12CreateWeaponEv(this);
}

