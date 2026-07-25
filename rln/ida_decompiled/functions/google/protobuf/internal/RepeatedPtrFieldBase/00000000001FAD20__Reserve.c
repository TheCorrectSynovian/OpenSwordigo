/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAD20
 * Mangled: ._ZN6google8protobuf8internal20RepeatedPtrFieldBase7ReserveEi
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Callers: 84
 *   0x0000000000276128  Caver::ItemDropComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002D0568  Caver::Proto::Polygon::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D09C4  google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Vector2> const&)
 *   0x00000000002D2C78  Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D33EC  google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture> const&)
 *   0x00000000002D4A18  Caver::Proto::Font::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D534C  google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph> const&)
 *   0x00000000002D6774  Caver::Proto::GUIViewLayout::GUIViewLayout(Caver::Proto::GUIViewLayout const&)
 *   0x00000000002D6EC8  Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D8398  Caver::Proto::SoundLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D86D0  google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect> const&)
 *   0x00000000002D9704  Caver::Proto::MusicPlaylist::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D9B7C  google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack> const&)
 *   0x00000000002DA884  Caver::Proto::EditorViewState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002DB1B0  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *   0x00000000002DD018  Caver::Proto::MapNode::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002DDC30  google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal> const&)
 *   0x00000000002DDF78  Caver::Proto::MapZone::MapZone(Caver::Proto::MapZone const&)
 *   0x00000000002DF2C8  Caver::Proto::Map::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002E45F8  Caver::Proto::GuideTarget::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002E4F00  google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject> const&)
 *   0x00000000002E51E8  Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions const&)
 *   0x00000000002E5908  Caver::Proto::GameOptions::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002E6E98  Caver::Proto::GameData::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002E7AA8  google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Item> const&)
 *   0x00000000002E7BF8  google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Skill> const&)
 *   0x00000000002E7D20  google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Quest> const&)
 *   0x00000000002E7FE4  google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add(void)
 *   0x00000000002E80CC  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *   0x00000000002E8208  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::EntityClass>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *   0x00000000002E8330  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *   0x00000000002EA650  Caver::Proto::PlayerProfile::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002EB688  google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter> const&)
 *   0x00000000002EC264  Caver::Proto::StateProperties::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002ED3F0  Caver::Proto::QuestText::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002EF658  Caver::Proto::GameState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002F0FA8  google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::LevelState> const&)
 *   0x00000000002F10BC  google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestState> const&)
 *   0x00000000002F11BC  google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestText> const&)
 *   0x00000000002F37F8  Caver::Proto::CharacterState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002F49F4  google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState> const&)
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *   0x00000000002FD4AC  Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002FDE24  google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate> const&)
 *   0x00000000003009C8  Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *   0x0000000000301B2C  Caver::Proto::Scene::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000305D30  Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *   0x00000000003063B0  Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003078F0  Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031E3F0  Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031F08C  google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter> const&)
 *   0x0000000000330774  Caver::Proto::ItemDropComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000330DDC  google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ItemDropComponent_ItemDropEntry> const&)
 *   0x0000000000339D60  Caver::Proto::Mesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000033B0BC  google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MeshData> const&)
 *   0x000000000033DAC4  google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(void)
 *   0x000000000033DCBC  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *   0x00000000003AC040  Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *   0x00000000003BA46C  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *   0x00000000003BEE30  Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode *)
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *   0x00000000003C3BB4  Caver::QuestText::SaveToProtobufMessage(Caver::Proto::QuestText *)
 *   0x00000000003C3E94  Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties *)
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x00000000004752D4  Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup *)
 *   0x00000000004834EC  Caver::MusicPlaylist::SaveToProtobufMessage(Caver::Proto::MusicPlaylist *)
 *   0x00000000004859C8  Caver::SoundLibrary::SaveToProtobufMessage(Caver::Proto::SoundLibrary *)
 *   0x0000000000489E98  Caver::SavePolygonToProtobufMessage(Caver::Polygon const&,Caver::Proto::Polygon *)
 *   0x00000000004A8028  Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *   0x00000000004C9694  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *   0x00000000004DC140  google::protobuf::internal::ExtensionSet::GetRepeatedString(int,int)
 *   0x00000000004DC718  google::protobuf::internal::ExtensionSet::GetRepeatedMessage(int,int)
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *
 * Callees: 1
 *   0x00000000004E26D8  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAD28 string=0x00000000001FAD2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
        google::protobuf::internal::RepeatedPtrFieldBase *this,
        int a2)
{
  return _ZN6google8protobuf8internal20RepeatedPtrFieldBase7ReserveEi(this, a2);
}

