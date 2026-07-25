/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026EA0C
 * Mangled: _ZN5Caver19EntityInfoComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::EntityInfoComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x000000000026EA20 string=0x00000000001FA840 "0'"
 *   insn=0x000000000026EA24 string=0x000000000026EA28 "AA"
 *   insn=0x000000000026EA28 string=0x000000000026EA2C "`""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityInfoComponent::LoadFromProtobufMessage(
        Caver::EntityInfoComponent *this,
        const Caver::Proto::Component *a2)
{
  Caver::Component::LoadFromProtobufMessage(this, a2);
  google::protobuf::internal::ExtensionSet::GetMessage(
    (const Caver::Proto::Component *)((char *)a2 + 8),
    Caver::Proto::EntityInfoComponent::extension,
    (const google::protobuf::MessageLite *)qword_6E9560);
  return sub_56A6A8((char *)this + 120);
}

