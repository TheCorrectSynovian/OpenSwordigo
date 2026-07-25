/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBAB0
 * Mangled: ._ZN5Caver5Proto10FloatColor5ClearEv
 * Demangled: Caver::Proto::FloatColor::Clear(void)
 *
 * Callers: 17
 *   0x0000000000303440  Caver::Proto::ModelComponent::Clear(void)
 *   0x0000000000307798  Caver::Proto::GroundMeshComponent::Clear(void)
 *   0x000000000030A38C  Caver::Proto::WaterMeshComponent::Clear(void)
 *   0x000000000030FD6C  Caver::Proto::LightComponent::Clear(void)
 *   0x000000000031D098  Caver::Proto::ParticleEmitter::Clear(void)
 *   0x00000000003210F4  Caver::Proto::FireEmitterComponent::Clear(void)
 *   0x0000000000322104  Caver::Proto::SimpleGlowComponent::Clear(void)
 *   0x0000000000329B70  Caver::Proto::SwingableWeaponComponent::Clear(void)
 *   0x000000000032BF24  Caver::Proto::WeaponGlowComponent::Clear(void)
 *   0x000000000032C90C  Caver::Proto::WeaponTrailComponent::Clear(void)
 *   0x0000000000332164  Caver::Proto::PortalEffectComponent::Clear(void)
 *   0x0000000000332C28  Caver::Proto::MagicBoltComponent::Clear(void)
 *   0x00000000003336C0  Caver::Proto::MagicExplosionComponent::Clear(void)
 *   0x0000000000335130  Caver::Proto::FireBreathComponent::Clear(void)
 *   0x0000000000335F40  Caver::Proto::MagicBombComponent::Clear(void)
 *   0x0000000000336660  Caver::Proto::MagicHookshotComponent::Clear(void)
 *   0x000000000033879C  Caver::Proto::MeshMaterial::Clear(void)
 *
 * Callees: 1
 *   0x00000000002D0E38  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FBAB4 string=0x00000000002D0E38 "p@9"
 *   insn=0x00000000001FBAB8 string=0x00000000001FBABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::FloatColor::Clear(Caver::Proto::FloatColor *this)
{
  return _ZN5Caver5Proto10FloatColor5ClearEv(this);
}

