/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028DBD4
 * Mangled: _ZN5Caver14SkillComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SkillComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 19
 *   insn=0x000000000028DBE8 string=0x00000000001FA840 "0'"
 *   insn=0x000000000028DBEC string=0x000000000028DBF0 "-C"
 *   insn=0x000000000028DBFC string=0x000000000028DC00 "d"
 *   insn=0x000000000028DC08 string=0x000000000028DC0C "iz@"
 *   insn=0x000000000028DC0C string=0x000000000028DC10 "?"
 *   insn=0x000000000028DC14 string=0x000000000028DC18 "`B@"
 *   insn=0x000000000028DC18 string=0x000000000028DC1C "hz"
 *   insn=0x000000000028DC24 string=0x000000000028DC28 "@"
 *   insn=0x000000000028DC28 string=0x000000000028DC2C ""
 *   insn=0x000000000028DC2C string=0x000000000028DC30 ""
 *   insn=0x000000000028DC34 string=0x000000000028DC38 ""
 *   insn=0x000000000028DC38 string=0x000000000028DC3C ""
 *   insn=0x000000000028DC44 string=0x000000000028DC48 "`"
 *   insn=0x000000000028DC54 string=0x000000000028DC58 ")"
 *   insn=0x000000000028DC5C string=0x000000000028DC60 ")"
 *   insn=0x000000000028DC60 string=0x000000000028DC64 "("
 *   insn=0x000000000028DC64 string=0x000000000028DC68 "@"
 *   insn=0x000000000028DC68 string=0x000000000028DC6C ""
 *   insn=0x000000000028DC6C string=0x000000000028DC70 "hF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillComponent::LoadFromProtobufMessage(
        Caver::SkillComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x20
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8
  __int64 result; // x0
  __int64 v9; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::SkillComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9838);
  v5 = *(_DWORD *)(Message + 12);
  if ( *((_DWORD *)this + 30) != v5 )
  {
    v6 = (_DWORD *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 30) = v5;
    *((_QWORD *)this + 16) = 0;
    if ( v6 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  result = sub_56A6A8((char *)this + 160);
  if ( *(_QWORD *)(Message + 24) )
    v9 = Message;
  else
    v9 = Caver::Proto::SkillComponent::default_instance_;
  *((_QWORD *)this + 17) = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 12LL);
  return result;
}

