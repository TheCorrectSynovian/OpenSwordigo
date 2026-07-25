/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6310
 * Mangled: ._ZN5Caver5Proto10FloatColor16default_instanceEv
 * Demangled: Caver::Proto::FloatColor::default_instance(void)
 *
 * Callers: 18
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *   0x00000000002F98F4  Caver::Proto::ModelComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9A78  Caver::Proto::GroundMeshComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9B5C  Caver::Proto::WaterMeshComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9DA0  Caver::Proto::LightComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA370  Caver::Proto::ParticleEmitter::InitAsDefaultInstance(void)
 *   0x00000000002FA42C  Caver::Proto::FireEmitterComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA498  Caver::Proto::SimpleGlowComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA874  Caver::Proto::SwingableWeaponComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA930  Caver::Proto::WeaponGlowComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA98C  Caver::Proto::WeaponTrailComponent::InitAsDefaultInstance(void)
 *   0x00000000002FABA4  Caver::Proto::PortalEffectComponent::InitAsDefaultInstance(void)
 *   0x00000000002FAC00  Caver::Proto::MagicBoltComponent::InitAsDefaultInstance(void)
 *   0x00000000002FAC54  Caver::Proto::MagicExplosionComponent::InitAsDefaultInstance(void)
 *   0x00000000002FAD30  Caver::Proto::FireBreathComponent::InitAsDefaultInstance(void)
 *   0x00000000002FADB8  Caver::Proto::MagicBombComponent::InitAsDefaultInstance(void)
 *   0x00000000002FAE0C  Caver::Proto::MagicHookshotComponent::InitAsDefaultInstance(void)
 *   0x00000000002FAF20  Caver::Proto::MeshMaterial::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002D0DD8  Caver::Proto::FloatColor::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6318 string=0x00000000001F631C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::FloatColor::default_instance(Caver::Proto::FloatColor *this)
{
  return _ZN5Caver5Proto10FloatColor16default_instanceEv(this);
}

