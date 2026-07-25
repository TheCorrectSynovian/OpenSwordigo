/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023E23C
 * Mangled: _ZN5Caver23TextureMappingComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::TextureMappingComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 15
 *   insn=0x000000000023E24C string=0x000000000023E250 "|"
 *   insn=0x000000000023E250 string=0x000000000023E254 "H%"
 *   insn=0x000000000023E250 string=0x00000000001FA840 "0'"
 *   insn=0x000000000023E254 string=0x000000000023E258 ""
 *   insn=0x000000000023E274 string=0x000000000023E278 "h"
 *   insn=0x000000000023E278 string=0x000000000023E27C "H"
 *   insn=0x000000000023E27C string=0x000000000023E280 "I%"
 *   insn=0x000000000023E284 string=0x000000000023E288 ")"
 *   insn=0x000000000023E28C string=0x000000000023E290 ")"
 *   insn=0x000000000023E290 string=0x000000000023E294 "("
 *   insn=0x000000000023E294 string=0x000000000023E298 ""
 *   insn=0x000000000023E298 string=0x000000000023E29C ""
 *   insn=0x000000000023E29C string=0x000000000023E2A0 "hB"
 *   insn=0x000000000023E2B0 string=0x000000000023E2B4 "`"
 *   insn=0x000000000023E2C4 string=0x000000000023E2C8 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextureMappingComponent::LoadFromProtobufMessage(
        Caver::TextureMappingComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 result; // x0
  __int64 v5; // x20
  int v6; // w8
  __int64 v7; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = google::protobuf::internal::ExtensionSet::GetMessage(
             (const Caver::Proto::Component *)((char *)a2 + 8),
             Caver::Proto::TextureMappingComponent::extension,
             (const google::protobuf::MessageLite *)qword_6E9398);
  v5 = result;
  v6 = *(_DWORD *)(result + 40);
  if ( (v6 & 1) != 0 )
  {
    result = sub_56A6A8((char *)this + 112);
    v6 = *(_DWORD *)(v5 + 40);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        return result;
      goto LABEL_4;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *((_DWORD *)this + 32) = *(_DWORD *)(v5 + 24);
  if ( (v6 & 4) == 0 )
    return result;
LABEL_4:
  if ( *(_QWORD *)(v5 + 32) )
    v7 = v5;
  else
    v7 = Caver::Proto::TextureMappingComponent::default_instance_;
  *(_QWORD *)((char *)this + 132) = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 12LL);
  return result;
}

