/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267CE4
 * Mangled: _ZN5Caver15EntityComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::EntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000001F4D30  Caver::EntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 7
 *   insn=0x0000000000267CF8 string=0x0000000000267CFC "$"
 *   insn=0x0000000000267CF8 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000267CFC string=0x0000000000267D00 ""
 *   insn=0x0000000000267D00 string=0x0000000000267D04 "`""
 *   insn=0x0000000000267D0C string=0x0000000000267D10 " \"
 *   insn=0x0000000000267D10 string=0x0000000000267D14 ""
 *   insn=0x0000000000267D18 string=0x0000000000267D1C "@@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityComponent::LoadFromProtobufMessage(
        Caver::EntityComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 result; // x0

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = google::protobuf::internal::ExtensionSet::GetMessage(
             (const Caver::Proto::Component *)((char *)a2 + 8),
             Caver::Proto::EntityComponent::extension,
             (const google::protobuf::MessageLite *)qword_6E9498);
  *((_DWORD *)this + 28) = *(_DWORD *)(result + 12);
  *((_BYTE *)this + 236) = *(_BYTE *)(result + 16);
  return result;
}

