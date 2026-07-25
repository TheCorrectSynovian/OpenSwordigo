/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203CB0
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite9WriteBoolEibPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 34
 *   0x00000000002D08A8  Caver::Proto::Polygon::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DC39C  Caver::Proto::MapNode_Portal::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DD7F0  Caver::Proto::MapNode::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E04FC  Caver::Proto::Item::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E305C  Caver::Proto::EntityClass::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E4B54  Caver::Proto::GuideTarget::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E6070  Caver::Proto::GameOptions::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002EB050  Caver::Proto::PlayerProfile::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002ECCB0  Caver::Proto::QuestState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F068C  Caver::Proto::GameState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F22E0  Caver::Proto::LevelState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002FECC0  Caver::Proto::SceneObject::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000300E74  Caver::Proto::SceneObjectGroup::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000303A98  Caver::Proto::ModelComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000304788  Caver::Proto::KeyframeAnimationComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003069D4  Caver::Proto::GroundPolygonComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000308204  Caver::Proto::GroundMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030C5B0  Caver::Proto::CollisionShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030D37C  Caver::Proto::DamageComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000311C1C  Caver::Proto::AnimationControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003149E0  Caver::Proto::EntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000316074  Caver::Proto::PressureTriggerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000316914  Caver::Proto::DoorControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000317384  Caver::Proto::ProgramComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000317E44  Caver::Proto::MonsterEntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000318A38  Caver::Proto::PhysicsObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000003194A0  Caver::Proto::BreakableObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031ECA4  Caver::Proto::ParticleEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032B8DC  Caver::Proto::SwingComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032D4B4  Caver::Proto::PortalComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032E9F8  Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000330BD8  Caver::Proto::ItemDropComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000335AC0  Caver::Proto::ProjectileControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E3034  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203CB8 string=0x0000000000203CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteBool(
        google::protobuf::internal::WireFormatLite *this,
        int a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  return _ZN6google8protobuf8internal14WireFormatLite9WriteBoolEibPNS0_2io17CodedOutputStreamE(this, a2, a3, a4);
}

