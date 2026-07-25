/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE5E0
 * Mangled: ._ZN5Caver11SceneObject13HandleMessageEiPv
 * Demangled: Caver::SceneObject::HandleMessage(int,void *)
 *
 * Callers: 17
 *   0x000000000023FDA0  Caver::TouchableComponent::Trigger(void)
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x000000000025DAE0  Caver::CharControllerComponent::DropWithoutAnimation(void)
 *   0x000000000025F130  Caver::CharControllerComponent::Use(void)
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *   0x000000000026610C  Caver::DamageComponent::DeliverImpact(Caver::DamageImpact *)
 *   0x0000000000266170  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *   0x0000000000269460  Caver::EntityComponent::HandleMessage(int,void *)
 *   0x000000000026C0F0  Caver::EntityControllerComponent::Update(float)
 *   0x000000000026CB50  Caver::EntityControllerComponent::HandleMessage(int,void *)
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000027F73C  Caver::PhysicsObjectComponent::HandleMessage(int,void *)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x0000000000465578  Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x0000000000473558  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE5E8 string=0x00000000001FE5EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneObject::HandleMessage(Caver::SceneObject *this, int a2, void *a3)
{
  JUMPOUT(0x473714);
}

