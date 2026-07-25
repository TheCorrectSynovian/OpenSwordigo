/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4E4C
 * Mangled: _ZN5Caver17ParticleComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ParticleComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 8
 *   insn=0x00000000002A4E5C string=0x00000000002A4E60 "xV"
 *   insn=0x00000000002A4E60 string=0x00000000002A4E64 """
 *   insn=0x00000000002A4E60 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002A4E64 string=0x00000000002A4E68 ""
 *   insn=0x00000000002A4E68 string=0x00000000002A4E6C "`""
 *   insn=0x00000000002A4E7C string=0x00000000002A4E80 "a\n@"
 *   insn=0x00000000002A4E84 string=0x00000000002A4E88 ""
 *   insn=0x00000000002A4E88 string=0x00000000002A4E8C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleComponent::LoadFromProtobufMessage(
        Caver::ParticleComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x19
  __int64 result; // x0

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::ParticleComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E95C0);
  result = sub_56A6A8((char *)this + 112);
  *((_DWORD *)this + 32) = *(_DWORD *)(Message + 24);
  return result;
}

