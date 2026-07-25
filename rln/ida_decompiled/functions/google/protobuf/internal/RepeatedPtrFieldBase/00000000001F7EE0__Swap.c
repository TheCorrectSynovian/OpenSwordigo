/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7EE0
 * Mangled: ._ZN6google8protobuf8internal20RepeatedPtrFieldBase4SwapEPS2_
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Callers: 27
 *   0x00000000002D0AFC  Caver::Proto::Polygon::Swap(Caver::Proto::Polygon*)
 *   0x00000000002D3540  Caver::Proto::Texture::Swap(Caver::Proto::Texture*)
 *   0x00000000002D5490  Caver::Proto::Font::Swap(Caver::Proto::Font*)
 *   0x00000000002D74DC  Caver::Proto::GUIViewLayout::Swap(Caver::Proto::GUIViewLayout*)
 *   0x00000000002D884C  Caver::Proto::SoundLibrary::Swap(Caver::Proto::SoundLibrary*)
 *   0x00000000002D9CCC  Caver::Proto::MusicPlaylist::Swap(Caver::Proto::MusicPlaylist*)
 *   0x00000000002DB2CC  Caver::Proto::EditorViewState::Swap(Caver::Proto::EditorViewState*)
 *   0x00000000002DDD98  Caver::Proto::MapNode::Swap(Caver::Proto::MapNode*)
 *   0x00000000002DEE88  Caver::Proto::MapZone::Swap(Caver::Proto::MapZone*)
 *   0x00000000002DF668  Caver::Proto::Map::Swap(Caver::Proto::Map*)
 *   0x00000000002E5068  Caver::Proto::GuideTarget::Swap(Caver::Proto::GuideTarget*)
 *   0x00000000002E63E8  Caver::Proto::GameOptions::Swap(Caver::Proto::GameOptions*)
 *   0x00000000002E7EA8  Caver::Proto::GameData::Swap(Caver::Proto::GameData*)
 *   0x00000000002EBDC8  Caver::Proto::PlayerProfile::Swap(Caver::Proto::PlayerProfile*)
 *   0x00000000002EC4FC  Caver::Proto::StateProperties::Swap(Caver::Proto::StateProperties*)
 *   0x00000000002ED778  Caver::Proto::QuestText::Swap(Caver::Proto::QuestText*)
 *   0x00000000002F16EC  Caver::Proto::GameState::Swap(Caver::Proto::GameState*)
 *   0x00000000002F4B54  Caver::Proto::CharacterState::Swap(Caver::Proto::CharacterState*)
 *   0x00000000002FDFC4  Caver::Proto::ObjectLibrary::Swap(Caver::Proto::ObjectLibrary*)
 *   0x0000000000300160  Caver::Proto::SceneObject::Swap(Caver::Proto::SceneObject*)
 *   0x0000000000301124  Caver::Proto::SceneObjectGroup::Swap(Caver::Proto::SceneObjectGroup*)
 *   0x0000000000302664  Caver::Proto::Scene::Swap(Caver::Proto::Scene*)
 *   0x0000000000306CF0  Caver::Proto::GroundPolygonComponent::Swap(Caver::Proto::GroundPolygonComponent*)
 *   0x0000000000308650  Caver::Proto::GroundMeshComponent::Swap(Caver::Proto::GroundMeshComponent*)
 *   0x000000000031F1EC  Caver::Proto::ParticleEmitterComponent::Swap(Caver::Proto::ParticleEmitterComponent*)
 *   0x0000000000330F44  Caver::Proto::ItemDropComponent::Swap(Caver::Proto::ItemDropComponent*)
 *   0x000000000033B208  Caver::Proto::Mesh::Swap(Caver::Proto::Mesh*)
 *
 * Callees: 1
 *   0x00000000004E2764  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7EE8 string=0x00000000001F7EEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Swap(
        google::protobuf::internal::RepeatedPtrFieldBase *a1,
        google::protobuf::internal::RepeatedPtrFieldBase *a2)
{
  return _ZN6google8protobuf8internal20RepeatedPtrFieldBase4SwapEPS2_(a1, a2);
}

