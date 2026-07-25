/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000280A84
 * Mangled: _ZNK5Caver24PhysicsPlatformComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::PhysicsPlatformComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F6620  Caver::Proto::PhysicsPlatformComponent::default_instance(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 12
 *   insn=0x0000000000280A98 string=0x0000000000280A9C "!"
 *   insn=0x0000000000280A9C string=0x0000000000280AA0 "(#"
 *   insn=0x0000000000280AA0 string=0x0000000000280AA4 "EF"
 *   insn=0x0000000000280AA4 string=0x0000000000280AA8 "s""
 *   insn=0x0000000000280AB0 string=0x00000000001F6620 "0'"
 *   insn=0x0000000000280AB4 string=0x0000000000280AB8 "b"
 *   insn=0x0000000000280AC8 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000280ACC string=0x0000000000280AD0 "\t"
 *   insn=0x0000000000280AD0 string=0x0000000000280AD4 ""
 *   insn=0x0000000000280AD8 string=0x0000000000280ADC ")"
 *   insn=0x0000000000280ADC string=0x0000000000280AE0 "\t"
 *   insn=0x0000000000280AE0 string=0x0000000000280AE4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsPlatformComponent::SaveToProtobufMessage(
        Caver::PhysicsPlatformComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::PhysicsPlatformComponent *v3; // x0
  __int64 result; // x0
  int v5; // w9
  __int64 v6; // x8

  v3 = (Caver::Proto::PhysicsPlatformComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::PhysicsPlatformComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 28);
  *(_QWORD *)(result + 12) = *(_QWORD *)((char *)this + 148);
  v6 = *(_QWORD *)((char *)this + 156);
  *(_DWORD *)(result + 28) = v5 | 0xF;
  *(_QWORD *)(result + 20) = v6;
  return result;
}

