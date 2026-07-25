/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6CE0
 * Mangled: ._ZN5Caver9Component10BindOutletEiRKSsPNS_19ComponentOutletBaseEb
 * Demangled: Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *
 * Callers: 40
 *   0x000000000021394C  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *   0x000000000021C154  Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *   0x000000000021F9D8  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *   0x0000000000226A04  Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(void)
 *   0x000000000022F3C8  Caver::FontText::~FontText()
 *   0x0000000000256100  Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000269C68  Caver::EntityControllerComponent::EntityControllerComponent(void)
 *   0x0000000000282208  Caver::FireBreathComponent::FireBreathComponent(void)
 *   0x00000000002839E0  Caver::MagicBoltComponent::MagicBoltComponent(void)
 *   0x00000000002868F4  Caver::MagicExplosionComponent::MagicExplosionComponent(void)
 *   0x0000000000288D9C  Caver::MagicExplosionComponent::className(void)
 *   0x000000000028B580  Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *   0x000000000028D810  Caver::ProjectileControllerComponent::className(void)
 *   0x0000000000290618  Caver::SpellComponent::className(void)
 *   0x0000000000292EF0  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *   0x0000000000293DB4  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *   0x000000000029521C  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *   0x0000000000296F64  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *   0x000000000029858C  std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::AttackComponent>*,std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>>,boost::intrusive_ptr<Caver::AttackComponent> const&)
 *   0x0000000000299114  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *   0x0000000000299C40  Caver::MonsterControllerComponent::className(void)
 *   0x000000000029C204  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *   0x000000000029D66C  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *   0x000000000029EB20  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *   0x00000000002A00DC  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *   0x00000000002A0FE4  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *   0x00000000002A1A00  Caver::FireEmitterComponent::FireEmitterComponent(void)
 *   0x00000000002A5CFC  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *   0x00000000002AC914  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *   0x00000000002AD2B8  Caver::PortalEffectComponent::PortalEffectComponent(void)
 *   0x00000000002B1320  Caver::BushControllerComponent::BushControllerComponent(void)
 *   0x00000000002B2344  Caver::DoorControllerComponent::DoorControllerComponent(void)
 *   0x00000000002B3878  Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *   0x00000000002BBB48  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *   0x00000000002C1D0C  Caver::WaterMeshComponent::WaterMeshComponent(void)
 *   0x00000000002C3464  Caver::SwingableWeaponComponent::SwingableWeaponComponent(void)
 *   0x00000000002C76B8  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *   0x00000000002C9468  Caver::SwingableWeaponControllerComponent::className(void)
 *   0x00000000002CA560  Caver::SwingComponent::className(void)
 *
 * Callees: 1
 *   0x0000000000243380  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6CE8 string=0x00000000001F6CEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Component::BindOutlet()
{
  return _ZN5Caver9Component10BindOutletEiRKSsPNS_19ComponentOutletBaseEb();
}

