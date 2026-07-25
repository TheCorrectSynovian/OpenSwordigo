/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ACBEC
 * Mangled: _ZNK5Caver23ParticleObjectComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ParticleObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4B90  Caver::Proto::ParticleObjectComponent::default_instance(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 9
 *   insn=0x00000000002ACC08 string=0x00000000002ACC0C "5F"
 *   insn=0x00000000002ACC0C string=0x00000000002ACC10 "s""
 *   insn=0x00000000002ACC18 string=0x00000000001F4B90 "P'"
 *   insn=0x00000000002ACC1C string=0x00000000002ACC20 "b"
 *   insn=0x00000000002ACC2C string=0x00000000002ACC30 "P*"
 *   insn=0x00000000002ACC30 string=0x00000000002ACC34 ""
 *   insn=0x00000000002ACC30 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002ACC38 string=0x00000000002ACC3C ""
 *   insn=0x00000000002ACC3C string=0x00000000002ACC40 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleObjectComponent::SaveToProtobufMessage(
        Caver::ParticleObjectComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ParticleObjectComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8

  v3 = (Caver::Proto::ParticleObjectComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::ParticleObjectComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 16) | 1;
  *(_DWORD *)(result + 12) = *((_DWORD *)this + 30);
  *(_DWORD *)(result + 16) = v5;
  return result;
}

