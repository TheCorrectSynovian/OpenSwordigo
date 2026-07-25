/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7570
 * Mangled: ._ZN6google8protobuf8internal12ExtensionSet14MutableMessageEihRKNS0_11MessageLiteEPKNS0_15FieldDescriptorE
 * Demangled: google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *
 * Callers: 80
 *   0x0000000000213F00  Caver::BoneControlledCollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000217DC4  Caver::CollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000021C604  Caver::AnimationControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000021D77C  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021E6EC  Caver::BlendAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002201E8  Caver::KeyframeAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000221DE0  Caver::LightComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002247DC  Caver::ModelComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000226D64  Caver::ModelTransformControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000228C7C  Caver::ObjectLinkControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000022D0C0  Caver::OverlayTextComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000022F984  Caver::PortalComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000231738  Caver::ProgramComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000233298  Caver::PropertiesComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000234C58  Caver::ShadowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000239BE0  Caver::SoundEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023AB7C  Caver::SpawnPointComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023C100  Caver::SpriteComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023E2D4  Caver::TextureMappingComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023F59C  Caver::TouchableComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000254730  Caver::BreakableObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000256ADC  Caver::CharAnimControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000025A740  Caver::CharControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000261B10  Caver::CollectableItemComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000263F90  Caver::DamageComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000267090  Caver::EntityActionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000267D30  Caver::EntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000026A4E0  Caver::EntityControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000026EA50  Caver::EntityInfoComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000026FB18  Caver::HealthComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000272194  Caver::HeroEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000276128  Caver::ItemDropComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000027B1EC  Caver::MonsterEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000027E034  Caver::PhysicsObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000280A84  Caver::PhysicsPlatformComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000282714  Caver::FireBreathComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000284030  Caver::MagicBoltComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028598C  Caver::MagicBombComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000286ED8  Caver::MagicExplosionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002895F8  Caver::MagicHookshotComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028B980  Caver::MagicSpellCastComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028C654  Caver::ProjectileControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028DC80  Caver::SkillComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028FB40  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000290EE0  Caver::AttackComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000293438  Caver::BatMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002941C8  Caver::BouncingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000295890  Caver::ChargingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002972C0  Caver::GenericMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000298CAC  Caver::LeapingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000299678  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000299F88  Caver::MonsterDeathControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000029C638  Caver::ShootingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000029DB00  Caver::SkellyMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000029F400  Caver::SnappingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A0758  Caver::StaticMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A1298  Caver::WalkingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A1FD0  Caver::FireEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A3BFC  Caver::OrbitControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A4EA0  Caver::ParticleComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000002ACBEC  Caver::ParticleObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002AD7D8  Caver::PortalEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002AF810  Caver::SimpleGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B1858  Caver::BushControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B29D8  Caver::DoorControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B3B78  Caver::ElevatorControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B54AC  Caver::PressureTriggerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BC374  Caver::GroundMeshGeneratorComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002BEF94  Caver::GroundPolygonComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002C21F8  Caver::WaterMeshComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002C42CC  Caver::SwingableWeaponComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002C7DAC  Caver::SwingableWeaponControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002C97A4  Caver::SwingComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002CA9B4  Caver::WeaponGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002CCB04  Caver::WeaponTrailComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004DC594  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7578 string=0x00000000001F757C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::internal::ExtensionSet::MutableMessage()
{
  return _ZN6google8protobuf8internal12ExtensionSet14MutableMessageEihRKNS0_11MessageLiteEPKNS0_15FieldDescriptorE();
}

