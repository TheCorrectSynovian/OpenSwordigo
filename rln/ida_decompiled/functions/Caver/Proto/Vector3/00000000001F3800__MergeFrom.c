/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3800
 * Mangled: ._ZN5Caver5Proto7Vector39MergeFromERKS1_
 * Demangled: Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *
 * Callers: 15
 *   0x00000000002CE624  Caver::Proto::Vector3::Vector3(Caver::Proto::Vector3 const&)
 *   0x00000000002CEAE0  Caver::Proto::Vector3::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002CEAE4  Caver::Proto::Vector3::CopyFrom(Caver::Proto::Vector3 const&)
 *   0x00000000002DA000  Caver::Proto::EditorViewState::EditorViewState(Caver::Proto::EditorViewState const&)
 *   0x0000000000302F08  Caver::Proto::ModelComponent::ModelComponent(Caver::Proto::ModelComponent const&)
 *   0x000000000030517C  Caver::Proto::ModelTransformControllerComponent::ModelTransformControllerComponent(Caver::Proto::ModelTransformControllerComponent const&)
 *   0x000000000030E9D4  Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent(Caver::Proto::ObjectLinkControllerComponent const&)
 *   0x000000000030F928  Caver::Proto::LightComponent::LightComponent(Caver::Proto::LightComponent const&)
 *   0x000000000031063C  Caver::Proto::ShadowComponent::ShadowComponent(Caver::Proto::ShadowComponent const&)
 *   0x000000000031CBA8  Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter const&)
 *   0x000000000031DD14  Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent(Caver::Proto::ParticleEmitterComponent const&)
 *   0x000000000031FC2C  Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *   0x0000000000322E28  Caver::Proto::OrbitControllerComponent::OrbitControllerComponent(Caver::Proto::OrbitControllerComponent const&)
 *   0x000000000032D79C  Caver::Proto::SpawnPointComponent::SpawnPointComponent(Caver::Proto::SpawnPointComponent const&)
 *   0x0000000000331D90  Caver::Proto::PortalEffectComponent::PortalEffectComponent(Caver::Proto::PortalEffectComponent const&)
 *
 * Callees: 1
 *   0x00000000002CE624  Caver::Proto::Vector3::Vector3(Caver::Proto::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3808 string=0x00000000001F380C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::Vector3::MergeFrom()
{
  JUMPOUT(0x2CE674);
}

