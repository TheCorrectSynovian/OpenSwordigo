/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4A00
 * Mangled: ._ZN6google8protobuf8internal21StringTypeHandlerBase3NewEv
 * Demangled: google::protobuf::internal::StringTypeHandlerBase::New(void)
 *
 * Callers: 13
 *   0x00000000002DA884  Caver::Proto::EditorViewState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002DB1B0  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *   0x00000000002EC264  Caver::Proto::StateProperties::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002ED3F0  Caver::Proto::QuestText::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002F37F8  Caver::Proto::CharacterState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002FD4AC  Caver::Proto::ObjectLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003009C8  Caver::Proto::SceneObjectGroup::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003AC040  Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *   0x00000000003C3BB4  Caver::QuestText::SaveToProtobufMessage(Caver::Proto::QuestText *)
 *   0x00000000003C3E94  Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties *)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x00000000004752D4  Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup *)
 *   0x00000000004DC140  google::protobuf::internal::ExtensionSet::GetRepeatedString(int,int)
 *
 * Callees: 1
 *   0x00000000004E2828  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4A08 string=0x00000000001F4A0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::StringTypeHandlerBase::New(
        google::protobuf::internal::StringTypeHandlerBase *this)
{
  return _ZN6google8protobuf8internal21StringTypeHandlerBase3NewEv(this);
}

