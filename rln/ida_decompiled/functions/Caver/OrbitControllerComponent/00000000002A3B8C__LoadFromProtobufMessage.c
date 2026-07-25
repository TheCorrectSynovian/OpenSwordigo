/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3B8C
 * Mangled: _ZN5Caver24OrbitControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::OrbitControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 15
 *   insn=0x00000000002A3B9C string=0x00000000002A3BA0 "(["
 *   insn=0x00000000002A3BA0 string=0x00000000002A3BA4 """
 *   insn=0x00000000002A3BA0 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002A3BA4 string=0x00000000002A3BA8 ""
 *   insn=0x00000000002A3BA8 string=0x00000000002A3BAC "`""
 *   insn=0x00000000002A3BB4 string=0x00000000002A3BB8 "vl"
 *   insn=0x00000000002A3BB8 string=0x00000000002A3BBC "\t""
 *   insn=0x00000000002A3BBC string=0x00000000002A3BC0 "@"
 *   insn=0x00000000002A3BC0 string=0x00000000002A3BC4 ")}D"
 *   insn=0x00000000002A3BC8 string=0x00000000002A3BCC ")"
 *   insn=0x00000000002A3BCC string=0x00000000002A3BD0 "("
 *   insn=0x00000000002A3BD0 string=0x00000000002A3BD4 "\t@"
 *   insn=0x00000000002A3BD4 string=0x00000000002A3BD8 "\t"
 *   insn=0x00000000002A3BD8 string=0x00000000002A3BDC ""
 *   insn=0x00000000002A3BE4 string=0x00000000002A3BE8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OrbitControllerComponent::LoadFromProtobufMessage(
        Caver::OrbitControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x9

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = google::protobuf::internal::ExtensionSet::GetMessage(
             (const Caver::Proto::Component *)((char *)a2 + 8),
             Caver::Proto::OrbitControllerComponent::extension,
             (const google::protobuf::MessageLite *)qword_6E9600);
  if ( *(_QWORD *)(result + 16) )
    v5 = result;
  else
    v5 = Caver::Proto::OrbitControllerComponent::default_instance_;
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 20);
  *(_QWORD *)((char *)this + 124) = v7;
  *((_DWORD *)this + 33) = v6;
  *((_QWORD *)this + 17) = *(_QWORD *)(result + 24);
  return result;
}

