/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FED90
 * Mangled: ._ZNK6google8protobuf8internal12ExtensionSet10GetMessageEiRKNS0_11MessageLiteE
 * Demangled: google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Callers: 78
 *   0x0000000000213E7C  Caver::BoneControlledCollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000217C08  Caver::CollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021C504  Caver::AnimationControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021D77C  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021E674  Caver::BlendAnimationComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000021FFEC  Caver::KeyframeAnimationComponent::RegisterLibrary(void)
 *   0x0000000000221B88  Caver::LightComponent::RegisterLibrary(void)
 *   0x0000000000224688  Caver::ModelComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000226C70  Caver::ModelTransformControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000228BB4  Caver::ObjectLinkControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000022D020  Caver::OverlayTextComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000022F8A8  Caver::PortalComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000231690  Caver::ProgramComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023323C  Caver::PropertiesComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000234BE8  Caver::ShadowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000239B8C  Caver::SoundEffectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023AB0C  Caver::SpawnPointComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023C0BC  Caver::SpriteComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023E23C  Caver::TextureMappingComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023F538  Caver::TouchableComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002546AC  Caver::BreakableObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002568EC  Caver::CharAnimControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000025A218  Caver::CharControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000261A70  Caver::CollectableItemComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000263ED8  Caver::DamageComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000267034  Caver::EntityActionComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000267CE4  Caver::EntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000026A308  Caver::EntityControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000026EA0C  Caver::EntityInfoComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000026FA90  Caver::HealthComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000272138  Caver::HeroEntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000275BF8  Caver::ItemDropComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000027B148  Caver::MonsterEntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000027DF4C  Caver::PhysicsObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000280A04  Caver::PhysicsPlatformComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002825C0  Caver::FireBreathComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000283EC4  Caver::MagicBoltComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002858F4  Caver::MagicBombComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000286D94  Caver::MagicExplosionComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000289460  Caver::MagicHookshotComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028B8C0  Caver::MagicSpellCastComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028C5FC  Caver::ProjectileControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028DBD4  Caver::SkillComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028FAE4  Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000290D6C  Caver::AttackComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000293378  Caver::BatMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000294108  Caver::BouncingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000295774  Caver::ChargingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000297240  Caver::GenericMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000298BAC  Caver::LeapingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000029957C  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000299F08  Caver::MonsterDeathControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000029C578  Caver::ShootingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000029DA00  Caver::SkellyMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000029F28C  Caver::SnappingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A0690  Caver::StaticMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A1218  Caver::WalkingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A1DBC  Caver::FireEmitterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A3B8C  Caver::OrbitControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A4E4C  Caver::ParticleComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000002ACB6C  Caver::ParticleObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002AD620  Caver::PortalEffectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002AF72C  Caver::SimpleGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B175C  Caver::BushControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B28A0  Caver::DoorControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B3AD4  Caver::ElevatorControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B53F0  Caver::PressureTriggerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BC1E4  Caver::GroundMeshGeneratorComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C20C0  Caver::WaterMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C3FBC  Caver::SwingableWeaponComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C7D10  Caver::SwingableWeaponControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C9710  Caver::SwingComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002CA878  Caver::WeaponGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002CC9EC  Caver::WeaponTrailComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000004DC53C  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FED94 string=0x00000000004DC53C "\n@"
 *   insn=0x00000000001FED98 string=0x00000000001FED9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetMessage(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        const google::protobuf::MessageLite *a3)
{
  return _ZNK6google8protobuf8internal12ExtensionSet10GetMessageEiRKNS0_11MessageLiteE(this, a2, a3);
}

