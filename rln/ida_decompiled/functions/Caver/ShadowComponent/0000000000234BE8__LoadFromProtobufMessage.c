/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000234BE8
 * Mangled: _ZN5Caver15ShadowComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ShadowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 12
 *   insn=0x0000000000234BFC string=0x00000000001FA840 "0'"
 *   insn=0x0000000000234C00 string=0x0000000000234C04 "ID"
 *   insn=0x0000000000234C04 string=0x0000000000234C08 "`""
 *   insn=0x0000000000234C10 string=0x0000000000234C14 "_("
 *   insn=0x0000000000234C14 string=0x0000000000234C18 ""
 *   insn=0x0000000000234C1C string=0x0000000000234C20 ")-A"
 *   insn=0x0000000000234C24 string=0x0000000000234C28 ""
 *   insn=0x0000000000234C28 string=0x0000000000234C2C ")"
 *   insn=0x0000000000234C30 string=0x0000000000234C34 "("
 *   insn=0x0000000000234C34 string=0x0000000000234C38 "@"
 *   insn=0x0000000000234C38 string=0x0000000000234C3C "\t"
 *   insn=0x0000000000234C3C string=0x0000000000234C40 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShadowComponent::LoadFromProtobufMessage(
        Caver::ShadowComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x9

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = google::protobuf::internal::ExtensionSet::GetMessage(
             (const Caver::Proto::Component *)((char *)a2 + 8),
             Caver::Proto::ShadowComponent::extension,
             (const google::protobuf::MessageLite *)qword_6E9440);
  *(_QWORD *)((char *)this + 124) = *(_QWORD *)(result + 12);
  if ( *(_QWORD *)(result + 24) )
    v5 = result;
  else
    v5 = Caver::Proto::ShadowComponent::default_instance_;
  v6 = *(_QWORD *)(v5 + 24);
  v7 = *(_QWORD *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 20);
  *(_QWORD *)((char *)this + 132) = v7;
  *((_DWORD *)this + 35) = v6;
  return result;
}

