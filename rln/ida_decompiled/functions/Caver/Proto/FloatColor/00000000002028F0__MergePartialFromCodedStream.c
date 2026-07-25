/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002028F0
 * Mangled: ._ZN5Caver5Proto10FloatColor27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 17
 *   0x00000000003034DC  Caver::Proto::ModelComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003078F0  Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030A3DC  Caver::Proto::WaterMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030FDC4  Caver::Proto::LightComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031D0F4  Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000321170  Caver::Proto::FireEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032215C  Caver::Proto::SimpleGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000329BD0  Caver::Proto::SwingableWeaponComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032BF78  Caver::Proto::WeaponGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032C940  Caver::Proto::WeaponTrailComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003321B4  Caver::Proto::PortalEffectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000332C6C  Caver::Proto::MagicBoltComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000333704  Caver::Proto::MagicExplosionComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000033516C  Caver::Proto::FireBreathComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000335F74  Caver::Proto::MagicBombComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003366A0  Caver::Proto::MagicHookshotComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000338814  Caver::Proto::MeshMaterial::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002D0E54  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002028F8 string=0x00000000002028FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::FloatColor::MergePartialFromCodedStream(
        Caver::Proto::FloatColor *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto10FloatColor27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

