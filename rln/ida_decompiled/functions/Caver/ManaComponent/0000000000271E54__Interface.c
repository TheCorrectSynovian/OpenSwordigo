/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271E54
 * Mangled: _ZN5Caver13ManaComponent9InterfaceEv
 * Demangled: Caver::ManaComponent::Interface(void)
 *
 * Callers: 9
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x0000000000271A94  sub_271A94
 *   0x0000000000271B10  sub_271B10
 *   0x0000000000271E54  Caver::ManaComponent::Interface(void)
 *   0x000000000027267C  Caver::HeroEntityComponent::Prepare(void)
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x000000000027AE38  Caver::ManaComponent::ImplementsInterface(long)
 *   0x000000000027AE4C  Caver::ManaComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000036A378  Caver::HeroEquipmentManager::ApplyTrinketToSpells(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::ManaComponent::Interface(
        Caver::ManaComponent *this))(Caver::ManaComponent *__hidden this)
{
  return Caver::ManaComponent::Interface;
}

