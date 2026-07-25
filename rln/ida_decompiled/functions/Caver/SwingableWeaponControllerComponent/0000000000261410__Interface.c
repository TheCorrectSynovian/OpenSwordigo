/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261410
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent9InterfaceEv
 * Demangled: Caver::SwingableWeaponControllerComponent::Interface(void)
 *
 * Callers: 6
 *   0x0000000000261340  Caver::ComponentOutlet<Caver::SwingableWeaponControllerComponent>::Interface(void)
 *   0x0000000000261410  Caver::SwingableWeaponControllerComponent::Interface(void)
 *   0x000000000026BC7C  Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>> *)
 *   0x00000000002C9420  Caver::SwingableWeaponControllerComponent::ImplementsInterface(long)
 *   0x00000000002C9434  Caver::SwingableWeaponControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000368DE8  Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::SwingableWeaponControllerComponent::Interface(
        Caver::SwingableWeaponControllerComponent *this))(Caver::SwingableWeaponControllerComponent *__hidden this)
{
  return Caver::SwingableWeaponControllerComponent::Interface;
}

