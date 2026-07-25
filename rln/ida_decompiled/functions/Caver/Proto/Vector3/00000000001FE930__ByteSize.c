/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE930
 * Mangled: ._ZNK5Caver5Proto7Vector38ByteSizeEv
 * Demangled: Caver::Proto::Vector3::ByteSize(void)
 *
 * Callers: 12
 *   0x00000000002DAF4C  Caver::Proto::EditorViewState::ByteSize(void)
 *   0x0000000000303BE4  Caver::Proto::ModelComponent::ByteSize(void)
 *   0x0000000000305A78  Caver::Proto::ModelTransformControllerComponent::ByteSize(void)
 *   0x000000000030F5E8  Caver::Proto::ObjectLinkControllerComponent::ByteSize(void)
 *   0x000000000031038C  Caver::Proto::LightComponent::ByteSize(void)
 *   0x0000000000310CA4  Caver::Proto::ShadowComponent::ByteSize(void)
 *   0x000000000031D990  Caver::Proto::ParticleEmitter::ByteSize(void)
 *   0x000000000031EE30  Caver::Proto::ParticleEmitterComponent::ByteSize(void)
 *   0x000000000032191C  Caver::Proto::FireEmitterComponent::ByteSize(void)
 *   0x0000000000323480  Caver::Proto::OrbitControllerComponent::ByteSize(void)
 *   0x000000000032DD7C  Caver::Proto::SpawnPointComponent::ByteSize(void)
 *   0x0000000000332638  Caver::Proto::PortalEffectComponent::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002CEAA8  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE934 string=0x00000000002CEAA8 "`@9H"
 *   insn=0x00000000001FE938 string=0x00000000001FE93C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Vector3::ByteSize(Caver::Proto::Vector3 *this)
{
  return _ZNK5Caver5Proto7Vector38ByteSizeEv(this);
}

