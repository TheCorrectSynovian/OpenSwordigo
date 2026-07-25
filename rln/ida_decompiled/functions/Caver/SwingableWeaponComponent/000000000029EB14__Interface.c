/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029EB14
 * Mangled: _ZN5Caver24SwingableWeaponComponent9InterfaceEv
 * Demangled: Caver::SwingableWeaponComponent::Interface(void)
 *
 * Callers: 6
 *   0x000000000029DC48  Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *   0x000000000029EB14  Caver::SwingableWeaponComponent::Interface(void)
 *   0x00000000002C7460  Caver::SwingableWeaponComponent::ImplementsInterface(long)
 *   0x00000000002C7474  Caver::SwingableWeaponComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x000000000036963C  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000029EB18 string=0x000000000029EB14 "@""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::SwingableWeaponComponent::Interface(
        Caver::SwingableWeaponComponent *this))(Caver::SwingableWeaponComponent *__hidden this)
{
  return Caver::SwingableWeaponComponent::Interface;
}

