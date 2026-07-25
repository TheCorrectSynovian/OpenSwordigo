/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C148
 * Mangled: _ZN5Caver15DamageComponent9InterfaceEv
 * Demangled: Caver::DamageComponent::Interface(void)
 *
 * Callers: 21
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x0000000000266470  Caver::DamageComponent::HandleMessage(int,void *)
 *   0x0000000000266668  sub_266668
 *   0x00000000002669B4  Caver::DamageComponent::ImplementsInterface(long)
 *   0x00000000002669C8  Caver::DamageComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000026F200  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x000000000027BDB8  Caver::MonsterEntityComponent::Prepare(void)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *   0x0000000000289A6C  Caver::MagicHookshotComponent::Prepare(void)
 *   0x000000000028CBCC  Caver::ProjectileControllerComponent::Prepare(void)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *   0x00000000002C528C  Caver::SwingableWeaponComponent::Prepare(void)
 *   0x0000000000368DE8  Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036963C  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036A318  Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell(Caver::SceneObject *)
 *   0x000000000036A510  Caver::HeroEquipmentManager::ApplyTrinketToSpell(Caver::SceneObject *,boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000021C14C string=0x000000000021C148 "@&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::DamageComponent::Interface(
        Caver::DamageComponent *this))(Caver::DamageComponent *__hidden this)
{
  return Caver::DamageComponent::Interface;
}

