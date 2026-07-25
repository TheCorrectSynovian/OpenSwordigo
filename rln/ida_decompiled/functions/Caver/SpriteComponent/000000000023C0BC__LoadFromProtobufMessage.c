/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023C0BC
 * Mangled: _ZN5Caver15SpriteComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SpriteComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 6
 *   insn=0x000000000023C0D0 string=0x000000000023C0D4 "H%"
 *   insn=0x000000000023C0D0 string=0x00000000001FA840 "0'"
 *   insn=0x000000000023C0D4 string=0x000000000023C0D8 "IC"
 *   insn=0x000000000023C0D8 string=0x000000000023C0DC "`""
 *   insn=0x000000000023C0E4 string=0x000000000023C0E8 "*"
 *   insn=0x000000000023C0F8 string=0x000000000023C0FC "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpriteComponent::LoadFromProtobufMessage(
        Caver::SpriteComponent *this,
        const Caver::Proto::Component *a2)
{
  Caver::Component::LoadFromProtobufMessage(this, a2);
  google::protobuf::internal::ExtensionSet::GetMessage(
    (const Caver::Proto::Component *)((char *)a2 + 8),
    Caver::Proto::SpriteComponent::extension,
    (const google::protobuf::MessageLite *)qword_6E92F0);
  return sub_56A6A8((char *)this + 112);
}

