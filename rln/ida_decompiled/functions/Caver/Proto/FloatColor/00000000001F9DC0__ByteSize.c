/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9DC0
 * Mangled: ._ZNK5Caver5Proto10FloatColor8ByteSizeEv
 * Demangled: Caver::Proto::FloatColor::ByteSize(void)
 *
 * Callers: 17
 *   0x0000000000303BE4  Caver::Proto::ModelComponent::ByteSize(void)
 *   0x000000000030837C  Caver::Proto::GroundMeshComponent::ByteSize(void)
 *   0x000000000030A860  Caver::Proto::WaterMeshComponent::ByteSize(void)
 *   0x000000000031038C  Caver::Proto::LightComponent::ByteSize(void)
 *   0x000000000031D990  Caver::Proto::ParticleEmitter::ByteSize(void)
 *   0x000000000032191C  Caver::Proto::FireEmitterComponent::ByteSize(void)
 *   0x0000000000322710  Caver::Proto::SimpleGlowComponent::ByteSize(void)
 *   0x000000000032A4F8  Caver::Proto::SwingableWeaponComponent::ByteSize(void)
 *   0x000000000032C3D4  Caver::Proto::WeaponGlowComponent::ByteSize(void)
 *   0x000000000032CB30  Caver::Proto::WeaponTrailComponent::ByteSize(void)
 *   0x0000000000332638  Caver::Proto::PortalEffectComponent::ByteSize(void)
 *   0x00000000003330D8  Caver::Proto::MagicBoltComponent::ByteSize(void)
 *   0x0000000000333B48  Caver::Proto::MagicExplosionComponent::ByteSize(void)
 *   0x00000000003354C8  Caver::Proto::FireBreathComponent::ByteSize(void)
 *   0x0000000000336164  Caver::Proto::MagicBombComponent::ByteSize(void)
 *   0x0000000000336B34  Caver::Proto::MagicHookshotComponent::ByteSize(void)
 *   0x0000000000338E1C  Caver::Proto::MeshMaterial::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002D1114  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9DC4 string=0x00000000002D1114 "p@9"
 *   insn=0x00000000001F9DC8 string=0x00000000001F9DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::FloatColor::ByteSize(Caver::Proto::FloatColor *this)
{
  return _ZNK5Caver5Proto10FloatColor8ByteSizeEv(this);
}

