/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA090
 * Mangled: ._ZN5Caver29FloatColorFromProtobufMessageERKNS_5Proto10FloatColorE
 * Demangled: Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *
 * Callers: 17
 *   0x0000000000221B88  Caver::LightComponent::RegisterLibrary(void)
 *   0x0000000000224688  Caver::ModelComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002825C0  Caver::FireBreathComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000283EC4  Caver::MagicBoltComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002858F4  Caver::MagicBombComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000286D94  Caver::MagicExplosionComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000289460  Caver::MagicHookshotComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002A1DBC  Caver::FireEmitterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002AD620  Caver::PortalEffectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002AF72C  Caver::SimpleGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C20C0  Caver::WaterMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C3FBC  Caver::SwingableWeaponComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002CA878  Caver::WeaponGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002CC9EC  Caver::WeaponTrailComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000443F08  Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callees: 1
 *   0x0000000000489DE4  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA094 string=0x0000000000489DE4 "\t"
 *   insn=0x00000000001FA098 string=0x00000000001FA09C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FloatColorFromProtobufMessage(Caver *this, const Caver::Proto::FloatColor *a2)
{
  return _ZN5Caver29FloatColorFromProtobufMessageERKNS_5Proto10FloatColorE(this, a2);
}

