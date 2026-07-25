/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C13C
 * Mangled: _ZN5Caver15HealthComponent9InterfaceEv
 * Demangled: Caver::HealthComponent::Interface(void)
 *
 * Callers: 27
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x0000000000266170  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *   0x0000000000266470  Caver::DamageComponent::HandleMessage(int,void *)
 *   0x000000000026F200  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *   0x0000000000271810  sub_271810
 *   0x000000000027186C  sub_27186C
 *   0x00000000002718F0  sub_2718F0
 *   0x000000000027194C  sub_27194C
 *   0x00000000002719C8  sub_2719C8
 *   0x0000000000271A1C  sub_271A1C
 *   0x0000000000271D9C  Caver::HealthComponent::ImplementsInterface(long)
 *   0x0000000000271DB0  Caver::HealthComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000027267C  Caver::HeroEntityComponent::Prepare(void)
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x000000000027BDB8  Caver::MonsterEntityComponent::Prepare(void)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x000000000034A6BC  Caver::GameSceneController::UpdateTarget(void)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x00000000003694AC  Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000021C140 string=0x000000000021C13C "@&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::HealthComponent::Interface(
        Caver::HealthComponent *this))(Caver::HealthComponent *__hidden this)
{
  return Caver::HealthComponent::Interface;
}

