/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F56D0
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite10WriteInt32EiiPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 64
 *   0x00000000002D2254  Caver::Proto::Texture_ConversionInfo::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D3E80  Caver::Proto::Font_Glyph::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D500C  Caver::Proto::Font::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DD7F0  Caver::Proto::MapNode::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DEBBC  Caver::Proto::MapZone::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E04FC  Caver::Proto::Item::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E148C  Caver::Proto::Skill::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E91C8  Caver::Proto::PlayerProfile_Counter::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002EB050  Caver::Proto::PlayerProfile::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F22E0  Caver::Proto::LevelState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F2DB0  Caver::Proto::CharacterState_ItemState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F4298  Caver::Proto::CharacterState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002FB920  Caver::Proto::Component::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000304788  Caver::Proto::KeyframeAnimationComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000304EF8  Caver::Proto::BlendAnimationComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000305998  Caver::Proto::ModelTransformControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000309064  Caver::Proto::GroundMeshGeneratorComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030A79C  Caver::Proto::WaterMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030D37C  Caver::Proto::DamageComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030DDF8  Caver::Proto::HealthComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030E750  Caver::Proto::BoneControlledCollisionShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000311C1C  Caver::Proto::AnimationControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003124B0  Caver::Proto::CharAnimControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000313C50  Caver::Proto::CharControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003149E0  Caver::Proto::EntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000315020  Caver::Proto::BushControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000315678  Caver::Proto::ElevatorControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000316914  Caver::Proto::DoorControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003194A0  Caver::Proto::BreakableObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000319EF8  Caver::Proto::EntityControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031ECA4  Caver::Proto::ParticleEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003217B8  Caver::Proto::FireEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003225F8  Caver::Proto::SimpleGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000322C94  Caver::Proto::ParticleObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000323DF8  Caver::Proto::MonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000324398  Caver::Proto::WalkingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000324A6C  Caver::Proto::ChargingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003252DC  Caver::Proto::SnappingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003261B4  Caver::Proto::AttackComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000326AB8  Caver::Proto::LeapingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032706C  Caver::Proto::SkellyMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003278B0  Caver::Proto::StaticMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000327F20  Caver::Proto::ShootingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003284D4  Caver::Proto::BatMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000328B90  Caver::Proto::BouncingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003290F8  Caver::Proto::MonsterDeathControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000329574  Caver::Proto::GenericMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032A350  Caver::Proto::SwingableWeaponComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032B0BC  Caver::Proto::SwingableWeaponControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032B8DC  Caver::Proto::SwingComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032C310  Caver::Proto::WeaponGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032D4B4  Caver::Proto::PortalComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032DD0C  Caver::Proto::SpawnPointComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032E9F8  Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032FDBC  Caver::Proto::ItemDropComponent_ItemDropEntry::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000332574  Caver::Proto::PortalEffectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000333010  Caver::Proto::MagicBoltComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000333A80  Caver::Proto::MagicExplosionComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000334580  Caver::Proto::SkillComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000334BE4  Caver::Proto::MagicSpellCastComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000335438  Caver::Proto::FireBreathComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000336A6C  Caver::Proto::MagicHookshotComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000337FF0  Caver::Proto::MeshData::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E2D7C  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F56D8 string=0x00000000001F56DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteInt32(
        google::protobuf::internal::WireFormatLite *this,
        int a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  return _ZN6google8protobuf8internal14WireFormatLite10WriteInt32EiiPNS0_2io17CodedOutputStreamE(this, a2, a3, a4);
}

