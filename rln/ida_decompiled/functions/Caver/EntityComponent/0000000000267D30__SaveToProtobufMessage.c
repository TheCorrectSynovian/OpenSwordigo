/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267D30
 * Mangled: _ZNK5Caver15EntityComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::EntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x00000000001FF290  Caver::EntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000202780  Caver::Proto::EntityComponent::default_instance(void)
 *
 * Referenced strings: 11
 *   insn=0x0000000000267D44 string=0x0000000000267D48 "v]"
 *   insn=0x0000000000267D48 string=0x0000000000267D4C "$"
 *   insn=0x0000000000267D4C string=0x0000000000267D50 ""
 *   insn=0x0000000000267D50 string=0x0000000000267D54 "s""
 *   insn=0x0000000000267D60 string=0x0000000000267D64 "b"
 *   insn=0x0000000000267D74 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000267D78 string=0x0000000000267D7C "\t"
 *   insn=0x0000000000267D7C string=0x0000000000267D80 ""
 *   insn=0x0000000000267D84 string=0x0000000000267D88 ")"
 *   insn=0x0000000000267D88 string=0x0000000000267D8C "\t"
 *   insn=0x0000000000267D8C string=0x0000000000267D90 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityComponent::SaveToProtobufMessage(
        Caver::EntityComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::EntityComponent *v3; // x0
  __int64 result; // x0
  int v5; // w9
  char v6; // w8

  v3 = (Caver::Proto::EntityComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::EntityComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 20);
  *(_DWORD *)(result + 12) = *((_DWORD *)this + 28);
  v6 = *((_BYTE *)this + 236);
  *(_DWORD *)(result + 20) = v5 | 3;
  *(_BYTE *)(result + 16) = v6;
  return result;
}

