/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB3D0
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldISsE9MergeFromERKS2_
 * Demangled: google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *
 * Callers: 7
 *   0x00000000002DA000  Caver::Proto::EditorViewState::EditorViewState(Caver::Proto::EditorViewState const&)
 *   0x00000000002EBF5C  Caver::Proto::StateProperties::StateProperties(Caver::Proto::StateProperties const&)
 *   0x00000000002ECED8  Caver::Proto::QuestText::QuestText(Caver::Proto::QuestText const&)
 *   0x00000000002F12C8  Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000300304  Caver::Proto::SceneObjectGroup::SceneObjectGroup(Caver::Proto::SceneObjectGroup const&)
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *
 * Callees: 1
 *   0x00000000002DB1B0  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB3D8 string=0x00000000001FB3DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<std::string>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldISsE9MergeFromERKS2_();
}

