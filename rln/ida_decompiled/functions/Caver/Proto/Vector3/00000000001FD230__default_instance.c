/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD230
 * Mangled: ._ZN5Caver5Proto7Vector316default_instanceEv
 * Demangled: Caver::Proto::Vector3::default_instance(void)
 *
 * Callers: 14
 *   0x00000000002D9E48  Caver::Proto::protobuf_AddDesc_EditorViewState_2eproto(void)
 *   0x00000000002D9F24  Caver::Proto::EditorViewState::InitAsDefaultInstance(void)
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *   0x00000000002F98F4  Caver::Proto::ModelComponent::InitAsDefaultInstance(void)
 *   0x00000000002F99C0  Caver::Proto::ModelTransformControllerComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9D3C  Caver::Proto::ObjectLinkControllerComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9DA0  Caver::Proto::LightComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9DFC  Caver::Proto::ShadowComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA370  Caver::Proto::ParticleEmitter::InitAsDefaultInstance(void)
 *   0x00000000002FA39C  Caver::Proto::ParticleEmitterComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA42C  Caver::Proto::FireEmitterComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA528  Caver::Proto::OrbitControllerComponent::InitAsDefaultInstance(void)
 *   0x00000000002FAA14  Caver::Proto::SpawnPointComponent::InitAsDefaultInstance(void)
 *   0x00000000002FABA4  Caver::Proto::PortalEffectComponent::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002CE7E8  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD238 string=0x00000000001FD23C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Vector3::default_instance(Caver::Proto::Vector3 *this)
{
  return _ZN5Caver5Proto7Vector316default_instanceEv(this);
}

