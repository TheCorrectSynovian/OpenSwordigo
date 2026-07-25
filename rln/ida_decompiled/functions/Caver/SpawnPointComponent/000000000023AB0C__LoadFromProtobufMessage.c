/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023AB0C
 * Mangled: _ZN5Caver19SpawnPointComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SpawnPointComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 14
 *   insn=0x000000000023AB1C string=0x000000000023AB20 "H"
 *   insn=0x000000000023AB20 string=0x000000000023AB24 "h%"
 *   insn=0x000000000023AB20 string=0x00000000001FA840 "0'"
 *   insn=0x000000000023AB24 string=0x000000000023AB28 "iD"
 *   insn=0x000000000023AB28 string=0x000000000023AB2C "`""
 *   insn=0x000000000023AB38 string=0x000000000023AB3C ""
 *   insn=0x000000000023AB3C string=0x000000000023AB40 "I%"
 *   insn=0x000000000023AB40 string=0x000000000023AB44 ")%@"
 *   insn=0x000000000023AB48 string=0x000000000023AB4C "@"
 *   insn=0x000000000023AB4C string=0x000000000023AB50 ")"
 *   insn=0x000000000023AB54 string=0x000000000023AB58 "("
 *   insn=0x000000000023AB58 string=0x000000000023AB5C "\t@"
 *   insn=0x000000000023AB5C string=0x000000000023AB60 "\t"
 *   insn=0x000000000023AB60 string=0x000000000023AB64 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpawnPointComponent::LoadFromProtobufMessage(
        Caver::SpawnPointComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x9

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = google::protobuf::internal::ExtensionSet::GetMessage(
             (const Caver::Proto::Component *)((char *)a2 + 8),
             Caver::Proto::SpawnPointComponent::extension,
             (const google::protobuf::MessageLite *)qword_6E9770);
  *((_DWORD *)this + 28) = *(_DWORD *)(result + 12);
  if ( *(_QWORD *)(result + 16) )
    v5 = result;
  else
    v5 = Caver::Proto::SpawnPointComponent::default_instance_;
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 20);
  *(_QWORD *)((char *)this + 116) = v7;
  *((_DWORD *)this + 31) = v6;
  return result;
}

