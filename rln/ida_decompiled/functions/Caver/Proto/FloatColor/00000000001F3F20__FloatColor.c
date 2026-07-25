/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3F20
 * Mangled: ._ZN5Caver5Proto10FloatColorC2Ev
 * Demangled: Caver::Proto::FloatColor::FloatColor(void)
 *
 * Callers: 51
 *   0x0000000000221DE0  Caver::LightComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002247DC  Caver::ModelComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000282714  Caver::FireBreathComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000284030  Caver::MagicBoltComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028598C  Caver::MagicBombComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000286ED8  Caver::MagicExplosionComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002895F8  Caver::MagicHookshotComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A1FD0  Caver::FireEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002AD7D8  Caver::PortalEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002AF810  Caver::SimpleGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C21F8  Caver::WaterMeshComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002C42CC  Caver::SwingableWeaponComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002CA9B4  Caver::WeaponGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002CCB04  Caver::WeaponTrailComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000302F08  Caver::Proto::ModelComponent::ModelComponent(Caver::Proto::ModelComponent const&)
 *   0x00000000003034DC  Caver::Proto::ModelComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000306EB8  Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
 *   0x00000000003078F0  Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000309FB8  Caver::Proto::WaterMeshComponent::WaterMeshComponent(Caver::Proto::WaterMeshComponent const&)
 *   0x000000000030A3DC  Caver::Proto::WaterMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030F928  Caver::Proto::LightComponent::LightComponent(Caver::Proto::LightComponent const&)
 *   0x000000000030FDC4  Caver::Proto::LightComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031CBA8  Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter const&)
 *   0x000000000031D0F4  Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031FC2C  Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *   0x0000000000321170  Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000321CCC  Caver::Proto::SimpleGlowComponent::SimpleGlowComponent(Caver::Proto::SimpleGlowComponent const&)
 *   0x000000000032215C  Caver::Proto::SimpleGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000329714  Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent(Caver::Proto::SwingableWeaponComponent const&)
 *   0x0000000000329BD0  Caver::Proto::SwingableWeaponComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032BB6C  Caver::Proto::WeaponGlowComponent::WeaponGlowComponent(Caver::Proto::WeaponGlowComponent const&)
 *   0x000000000032BF78  Caver::Proto::WeaponGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032C638  Caver::Proto::WeaponTrailComponent::WeaponTrailComponent(Caver::Proto::WeaponTrailComponent const&)
 *   0x000000000032C940  Caver::Proto::WeaponTrailComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000331D90  Caver::Proto::PortalEffectComponent::PortalEffectComponent(Caver::Proto::PortalEffectComponent const&)
 *   0x00000000003321B4  Caver::Proto::PortalEffectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003328D8  Caver::Proto::MagicBoltComponent::MagicBoltComponent(Caver::Proto::MagicBoltComponent const&)
 *   0x0000000000332C6C  Caver::Proto::MagicBoltComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000333378  Caver::Proto::MagicExplosionComponent::MagicExplosionComponent(Caver::Proto::MagicExplosionComponent const&)
 *   0x0000000000333704  Caver::Proto::MagicExplosionComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000334E14  Caver::Proto::FireBreathComponent::FireBreathComponent(Caver::Proto::FireBreathComponent const&)
 *   0x000000000033516C  Caver::Proto::FireBreathComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000335C6C  Caver::Proto::MagicBombComponent::MagicBombComponent(Caver::Proto::MagicBombComponent const&)
 *   0x0000000000335F74  Caver::Proto::MagicBombComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003362FC  Caver::Proto::MagicHookshotComponent::MagicHookshotComponent(Caver::Proto::MagicHookshotComponent const&)
 *   0x00000000003366A0  Caver::Proto::MagicHookshotComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000338310  Caver::Proto::MeshMaterial::MeshMaterial(Caver::Proto::MeshMaterial const&)
 *   0x0000000000338814  Caver::Proto::MeshMaterial::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000443F08  Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *
 * Callees: 1
 *   0x00000000002D0B70  Caver::Proto::Polygon::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3F28 string=0x00000000001F3F2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::FloatColor::FloatColor(Caver::Proto::FloatColor *this)
{
  JUMPOUT(0x2D0BC8);
}

