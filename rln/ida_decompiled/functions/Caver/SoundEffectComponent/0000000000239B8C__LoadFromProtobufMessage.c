/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000239B8C
 * Mangled: _ZN5Caver20SoundEffectComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SoundEffectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 8
 *   insn=0x0000000000239B9C string=0x0000000000239BA0 "("
 *   insn=0x0000000000239BA0 string=0x0000000000239BA4 "h%"
 *   insn=0x0000000000239BA0 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000239BA4 string=0x0000000000239BA8 "AE"
 *   insn=0x0000000000239BA8 string=0x0000000000239BAC "`""
 *   insn=0x0000000000239BB4 string=0x0000000000239BB8 "v"
 *   insn=0x0000000000239BBC string=0x0000000000239BC0 "a\n@"
 *   insn=0x0000000000239BC8 string=0x0000000000239BCC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffectComponent::LoadFromProtobufMessage(
        Caver::SoundEffectComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x19
  __int64 result; // x0

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::SoundEffectComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9458);
  result = sub_56A6A8((char *)this + 120);
  *((_QWORD *)this + 16) = *(_QWORD *)(Message + 24);
  return result;
}

