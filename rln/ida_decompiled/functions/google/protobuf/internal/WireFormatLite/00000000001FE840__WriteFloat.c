/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE840
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite10WriteFloatEifPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 51
 *   0x00000000002CE48C  Caver::Proto::Vector2::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002CEA30  Caver::Proto::Vector3::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002CF080  Caver::Proto::Rectangle::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002CF804  Caver::Proto::Box::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002CFFD0  Caver::Proto::Circle::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D1080  Caver::Proto::FloatColor::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D1A78  Caver::Proto::Texture_Subtexture::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D6538  Caver::Proto::GUIMargins::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D7DC4  Caver::Proto::SoundEffect::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D8FC0  Caver::Proto::MusicTrack::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E305C  Caver::Proto::EntityClass::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E6070  Caver::Proto::GameOptions::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002EB050  Caver::Proto::PlayerProfile::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002FC3BC  Caver::Proto::ObjectTemplate::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002FECC0  Caver::Proto::SceneObject::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000303A98  Caver::Proto::ModelComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000304788  Caver::Proto::KeyframeAnimationComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000304EF8  Caver::Proto::BlendAnimationComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000305998  Caver::Proto::ModelTransformControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003069D4  Caver::Proto::GroundPolygonComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000309064  Caver::Proto::GroundMeshGeneratorComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000309D0C  Caver::Proto::TextureMappingComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030C5B0  Caver::Proto::CollisionShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030D37C  Caver::Proto::DamageComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000310274  Caver::Proto::LightComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000310C14  Caver::Proto::ShadowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000311590  Caver::Proto::SoundEffectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000313C50  Caver::Proto::CharControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000316074  Caver::Proto::PressureTriggerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000318A38  Caver::Proto::PhysicsObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000319EF8  Caver::Proto::EntityControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031ADB4  Caver::Proto::PhysicsPlatformComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031D85C  Caver::Proto::ParticleEmitter::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031FA20  Caver::Proto::ParticleComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003217B8  Caver::Proto::FireEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003225F8  Caver::Proto::SimpleGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003233F0  Caver::Proto::OrbitControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000323DF8  Caver::Proto::MonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000324A6C  Caver::Proto::ChargingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003261B4  Caver::Proto::AttackComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000328B90  Caver::Proto::BouncingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032A350  Caver::Proto::SwingableWeaponComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032B8DC  Caver::Proto::SwingComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032C310  Caver::Proto::WeaponGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032F328  Caver::Proto::TouchableComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032FDBC  Caver::Proto::ItemDropComponent_ItemDropEntry::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000333010  Caver::Proto::MagicBoltComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000333A80  Caver::Proto::MagicExplosionComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000338D0C  Caver::Proto::MeshMaterial::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000033D41C  Caver::Proto::UnpackedMesh::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E2FB4  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE848 string=0x00000000001FE84C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteFloat(
        google::protobuf::internal::WireFormatLite *this,
        google::protobuf::io::CodedOutputStream *a2,
        float a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  return _ZN6google8protobuf8internal14WireFormatLite10WriteFloatEifPNS0_2io17CodedOutputStreamE(this, a2, a3, a4);
}

