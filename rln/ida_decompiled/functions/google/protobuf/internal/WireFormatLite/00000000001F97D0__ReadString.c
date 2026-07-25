/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F97D0
 * Mangled: ._ZN6google8protobuf8internal14WireFormatLite10ReadStringEPNS0_2io16CodedInputStreamEPSs
 * Demangled: google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *
 * Callers: 49
 *   0x00000000002D17CC  Caver::Proto::Texture_Subtexture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D2C78  Caver::Proto::Texture::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D4A18  Caver::Proto::Font::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D5BE4  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D6EC8  Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D7B40  Caver::Proto::SoundEffect::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D8E1C  Caver::Proto::MusicTrack::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002D9704  Caver::Proto::MusicPlaylist::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002DA884  Caver::Proto::EditorViewState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002DC0A4  Caver::Proto::MapNode_Portal::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002DD018  Caver::Proto::MapNode::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002DE804  Caver::Proto::MapZone::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002DFFB4  Caver::Proto::Item::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002E10C0  Caver::Proto::Skill::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002E1FFC  Caver::Proto::Quest::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002E2BC8  Caver::Proto::EntityClass::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002E38E0  Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002E45F8  Caver::Proto::GuideTarget::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002E8FFC  Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002EA650  Caver::Proto::PlayerProfile::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002EC264  Caver::Proto::StateProperties::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002ECADC  Caver::Proto::QuestState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002ED3F0  Caver::Proto::QuestText::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002EF658  Caver::Proto::GameState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002F1EE8  Caver::Proto::LevelState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002F2BE4  Caver::Proto::CharacterState_ItemState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002F37F8  Caver::Proto::CharacterState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002FB618  Caver::Proto::Component::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002FD4AC  Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002FE598  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003009C8  Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000302C24  Caver::Proto::SpriteComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003034DC  Caver::Proto::ModelComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000304454  Caver::Proto::KeyframeAnimationComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000309A5C  Caver::Proto::TextureMappingComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030E588  Caver::Proto::BoneControlledCollisionShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030F038  Caver::Proto::ObjectLinkControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000311390  Caver::Proto::SoundEffectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031B470  Caver::Proto::EntityInfoComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031C24C  Caver::Proto::BackgroundComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031F87C  Caver::Proto::ParticleComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032AE70  Caver::Proto::SwingableWeaponControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032D1D8  Caver::Proto::PortalComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032E58C  Caver::Proto::CollectableItemComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000032FA94  Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000330774  Caver::Proto::ItemDropComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000331640  Caver::Proto::OverlayTextComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003342AC  Caver::Proto::SkillComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 1
 *   0x00000000004E3338  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F97D8 string=0x00000000001F97DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *this)
{
  return _ZN6google8protobuf8internal14WireFormatLite10ReadStringEPNS0_2io16CodedInputStreamEPSs(this);
}

