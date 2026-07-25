/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7750
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite11WriteStringEiRKSsPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 49
 *   0x00000000002D1A78  Caver::Proto::Texture_Subtexture::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D3160  Caver::Proto::Texture::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D500C  Caver::Proto::Font::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D5E04  Caver::Proto::Program::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D7294  Caver::Proto::GUIViewLayout::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D7DC4  Caver::Proto::SoundEffect::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D8FC0  Caver::Proto::MusicTrack::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002D99CC  Caver::Proto::MusicPlaylist::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DAE10  Caver::Proto::EditorViewState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DC39C  Caver::Proto::MapNode_Portal::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DD7F0  Caver::Proto::MapNode::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002DEBBC  Caver::Proto::MapZone::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E04FC  Caver::Proto::Item::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E148C  Caver::Proto::Skill::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E22A4  Caver::Proto::Quest::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E305C  Caver::Proto::EntityClass::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E3A7C  Caver::Proto::GuideTarget_LevelObject::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E4B54  Caver::Proto::GuideTarget::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002E91C8  Caver::Proto::PlayerProfile_Counter::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002EB050  Caver::Proto::PlayerProfile::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002EC3B4  Caver::Proto::StateProperties::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002ECCB0  Caver::Proto::QuestState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002ED5D8  Caver::Proto::QuestText::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F068C  Caver::Proto::GameState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F22E0  Caver::Proto::LevelState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F2DB0  Caver::Proto::CharacterState_ItemState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002F4298  Caver::Proto::CharacterState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002FB920  Caver::Proto::Component::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002FDAC4  Caver::Proto::ObjectLibrary::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000002FECC0  Caver::Proto::SceneObject::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000300E74  Caver::Proto::SceneObjectGroup::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000302D2C  Caver::Proto::SpriteComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000303A98  Caver::Proto::ModelComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000304788  Caver::Proto::KeyframeAnimationComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000309D0C  Caver::Proto::TextureMappingComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030E750  Caver::Proto::BoneControlledCollisionShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000030F4F0  Caver::Proto::ObjectLinkControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000311590  Caver::Proto::SoundEffectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031B578  Caver::Proto::EntityInfoComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031C354  Caver::Proto::BackgroundComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000031FA20  Caver::Proto::ParticleComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032B0BC  Caver::Proto::SwingableWeaponControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032D4B4  Caver::Proto::PortalComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032E9F8  Caver::Proto::CollectableItemComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x000000000032FDBC  Caver::Proto::ItemDropComponent_ItemDropEntry::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000330BD8  Caver::Proto::ItemDropComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000331A0C  Caver::Proto::OverlayTextComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x0000000000334580  Caver::Proto::SkillComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E30B4  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7758 string=0x00000000001F775C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::WriteString(
        int a1,
        int a2,
        google::protobuf::io::CodedOutputStream *this)
{
  return _ZN6google8protobuf8internal14WireFormatLite11WriteStringEiRKSsPNS0_2io17CodedOutputStreamE(a1, a2, this);
}

