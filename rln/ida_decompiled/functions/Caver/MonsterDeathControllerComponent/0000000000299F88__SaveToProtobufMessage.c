/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299F88
 * Mangled: _ZNK5Caver31MonsterDeathControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::MonsterDeathControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FE870  Caver::Proto::MonsterDeathControllerComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 10
 *   insn=0x0000000000299FA0 string=0x0000000000299FA4 "h""
 *   insn=0x0000000000299FA4 string=0x0000000000299FA8 "]D"
 *   insn=0x0000000000299FA8 string=0x0000000000299FAC "s""
 *   insn=0x0000000000299FB0 string=0x0000000000299FB4 "/"
 *   insn=0x0000000000299FB8 string=0x0000000000299FBC "b"
 *   insn=0x0000000000299FC8 string=0x0000000000299FCC "iu"
 *   insn=0x0000000000299FCC string=0x0000000000299FD0 ""
 *   insn=0x0000000000299FCC string=0x00000000001F7570 "0'"
 *   insn=0x0000000000299FD4 string=0x0000000000299FD8 ""
 *   insn=0x0000000000299FD8 string=0x0000000000299FDC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterDeathControllerComponent::SaveToProtobufMessage(
        Caver::MonsterDeathControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::MonsterDeathControllerComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8

  v3 = (Caver::Proto::MonsterDeathControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::MonsterDeathControllerComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 16) | 1;
  *(_DWORD *)(result + 12) = *((_DWORD *)this + 30);
  *(_DWORD *)(result + 16) = v5;
  return result;
}

