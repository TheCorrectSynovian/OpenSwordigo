/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6CB0
 * Mangled: ._ZN6google8protobuf8internal21StringTypeHandlerBase6DeleteEPSs
 * Demangled: google::protobuf::internal::StringTypeHandlerBase::Delete(std::string *)
 *
 * Callers: 8
 *   0x00000000002DA000  Caver::Proto::EditorViewState::EditorViewState(Caver::Proto::EditorViewState const&)
 *   0x00000000002EBF5C  Caver::Proto::StateProperties::StateProperties(Caver::Proto::StateProperties const&)
 *   0x00000000002ECED8  Caver::Proto::QuestText::QuestText(Caver::Proto::QuestText const&)
 *   0x00000000002F30A8  Caver::Proto::CharacterState::CharacterState(Caver::Proto::CharacterState const&)
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *   0x00000000002FCE78  Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *   0x0000000000300304  Caver::Proto::SceneObjectGroup::SceneObjectGroup(Caver::Proto::SceneObjectGroup const&)
 *   0x00000000004D87B8  google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *
 * Callees: 1
 *   0x00000000004E2850  google::protobuf::internal::StringTypeHandlerBase::Delete(std::string *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6CB8 string=0x00000000001F6CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::internal::StringTypeHandlerBase::Delete()
{
  return _ZN6google8protobuf8internal21StringTypeHandlerBase6DeleteEPSs();
}

