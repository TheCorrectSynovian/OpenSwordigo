/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF190
 * Mangled: ._ZN5Caver5Proto10FloatColor9MergeFromERKS1_
 * Demangled: Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *
 * Callers: 20
 *   0x00000000002D0BF4  Caver::Proto::FloatColor::FloatColor(Caver::Proto::FloatColor const&)
 *   0x00000000002D1158  Caver::Proto::FloatColor::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D115C  Caver::Proto::FloatColor::CopyFrom(Caver::Proto::FloatColor const&)
 *   0x0000000000302F08  Caver::Proto::ModelComponent::ModelComponent(Caver::Proto::ModelComponent const&)
 *   0x0000000000306EB8  Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
 *   0x0000000000309FB8  Caver::Proto::WaterMeshComponent::WaterMeshComponent(Caver::Proto::WaterMeshComponent const&)
 *   0x000000000030F928  Caver::Proto::LightComponent::LightComponent(Caver::Proto::LightComponent const&)
 *   0x000000000031CBA8  Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter const&)
 *   0x000000000031FC2C  Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *   0x0000000000321CCC  Caver::Proto::SimpleGlowComponent::SimpleGlowComponent(Caver::Proto::SimpleGlowComponent const&)
 *   0x0000000000329714  Caver::Proto::SwingableWeaponComponent::SwingableWeaponComponent(Caver::Proto::SwingableWeaponComponent const&)
 *   0x000000000032BB6C  Caver::Proto::WeaponGlowComponent::WeaponGlowComponent(Caver::Proto::WeaponGlowComponent const&)
 *   0x000000000032C638  Caver::Proto::WeaponTrailComponent::WeaponTrailComponent(Caver::Proto::WeaponTrailComponent const&)
 *   0x0000000000331D90  Caver::Proto::PortalEffectComponent::PortalEffectComponent(Caver::Proto::PortalEffectComponent const&)
 *   0x00000000003328D8  Caver::Proto::MagicBoltComponent::MagicBoltComponent(Caver::Proto::MagicBoltComponent const&)
 *   0x0000000000333378  Caver::Proto::MagicExplosionComponent::MagicExplosionComponent(Caver::Proto::MagicExplosionComponent const&)
 *   0x0000000000334E14  Caver::Proto::FireBreathComponent::FireBreathComponent(Caver::Proto::FireBreathComponent const&)
 *   0x0000000000335C6C  Caver::Proto::MagicBombComponent::MagicBombComponent(Caver::Proto::MagicBombComponent const&)
 *   0x00000000003362FC  Caver::Proto::MagicHookshotComponent::MagicHookshotComponent(Caver::Proto::MagicHookshotComponent const&)
 *   0x0000000000338310  Caver::Proto::MeshMaterial::MeshMaterial(Caver::Proto::MeshMaterial const&)
 *
 * Callees: 1
 *   0x00000000002D0BF4  Caver::Proto::FloatColor::FloatColor(Caver::Proto::FloatColor const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF198 string=0x00000000001FF19C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor *this, const Caver::Proto::FloatColor *a2)
{
  JUMPOUT(0x2D0C44);
}

