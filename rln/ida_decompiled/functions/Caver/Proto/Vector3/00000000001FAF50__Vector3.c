/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAF50
 * Mangled: ._ZN5Caver5Proto7Vector3C2Ev
 * Demangled: Caver::Proto::Vector3::Vector3(void)
 *
 * Callers: 35
 *   0x0000000000221DE0  Caver::LightComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002247DC  Caver::ModelComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000226D64  Caver::ModelTransformControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000228C7C  Caver::ObjectLinkControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000234C58  Caver::ShadowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000023AB7C  Caver::SpawnPointComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A1FD0  Caver::FireEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A3BFC  Caver::OrbitControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000002AD7D8  Caver::PortalEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002DA000  Caver::Proto::EditorViewState::EditorViewState(Caver::Proto::EditorViewState const&)
 *   0x00000000002DA884  Caver::Proto::EditorViewState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000302F08  Caver::Proto::ModelComponent::ModelComponent(Caver::Proto::ModelComponent const&)
 *   0x00000000003034DC  Caver::Proto::ModelComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030517C  Caver::Proto::ModelTransformControllerComponent::ModelTransformControllerComponent(Caver::Proto::ModelTransformControllerComponent const&)
 *   0x00000000003055AC  Caver::Proto::ModelTransformControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030E9D4  Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent(Caver::Proto::ObjectLinkControllerComponent const&)
 *   0x000000000030F038  Caver::Proto::ObjectLinkControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030F928  Caver::Proto::LightComponent::LightComponent(Caver::Proto::LightComponent const&)
 *   0x000000000030FDC4  Caver::Proto::LightComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031063C  Caver::Proto::ShadowComponent::ShadowComponent(Caver::Proto::ShadowComponent const&)
 *   0x0000000000310994  Caver::Proto::ShadowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031CBA8  Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter const&)
 *   0x000000000031D0F4  Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031DD14  Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent(Caver::Proto::ParticleEmitterComponent const&)
 *   0x000000000031E3F0  Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031FC2C  Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *   0x0000000000321170  Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000322E28  Caver::Proto::OrbitControllerComponent::OrbitControllerComponent(Caver::Proto::OrbitControllerComponent const&)
 *   0x0000000000323170  Caver::Proto::OrbitControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032D79C  Caver::Proto::SpawnPointComponent::SpawnPointComponent(Caver::Proto::SpawnPointComponent const&)
 *   0x000000000032DAC4  Caver::Proto::SpawnPointComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000331D90  Caver::Proto::PortalEffectComponent::PortalEffectComponent(Caver::Proto::PortalEffectComponent const&)
 *   0x00000000003321B4  Caver::Proto::PortalEffectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *
 * Callees: 1
 *   0x00000000002CE5A4  Caver::Proto::Vector2::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAF58 string=0x00000000001FAF5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Vector3::Vector3(Caver::Proto::Vector3 *this)
{
  JUMPOUT(0x2CE5FC);
}

