/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215A90
 * Mangled: _ZN5Caver23CollisionShapeComponent9InterfaceEv
 * Demangled: Caver::CollisionShapeComponent::Interface(void)
 *
 * Callers: 18
 *   0x0000000000215454  Caver::BoneControlledCollisionShapeComponent::ImplementsInterface(long)
 *   0x0000000000215494  Caver::BoneControlledCollisionShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x000000000021BBB0  Caver::CollisionShapeComponent::ImplementsInterface(long)
 *   0x000000000021BBD8  Caver::CollisionShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021BEC4  Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>(std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>> *)
 *   0x0000000000230324  Caver::PortalComponent::Prepare(void)
 *   0x0000000000231280  Caver::PortalComponent::className(void)
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *   0x0000000000268C2C  Caver::EntityComponent::Prepare(void)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002B2E18  Caver::DoorControllerComponent::Prepare(void)
 *   0x00000000002B31F8  Caver::DoorControllerComponent::SetCollisionEnabled(bool)
 *   0x00000000002B3264  Caver::DoorControllerComponent::Close(void)
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000004653C4  Caver::Scene::RemoveObject(boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::CollisionShapeComponent::Interface(
        Caver::CollisionShapeComponent *this))(Caver::CollisionShapeComponent *__hidden this)
{
  return Caver::CollisionShapeComponent::Interface;
}

