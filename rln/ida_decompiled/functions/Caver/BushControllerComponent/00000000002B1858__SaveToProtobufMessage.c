/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B1858
 * Mangled: _ZNK5Caver23BushControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::BushControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FADB0  Caver::Proto::BushControllerComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 16
 *   insn=0x00000000002B1874 string=0x00000000002B1878 ""
 *   insn=0x00000000002B1878 string=0x00000000002B187C "s""
 *   insn=0x00000000002B1880 string=0x00000000002B1884 "K%"
 *   insn=0x00000000002B1884 string=0x00000000001FADB0 "0'"
 *   insn=0x00000000002B1888 string=0x00000000002B188C "b"
 *   insn=0x00000000002B1898 string=0x00000000002B189C "5"
 *   insn=0x00000000002B189C string=0x00000000002B18A0 ""
 *   insn=0x00000000002B189C string=0x00000000001F7570 "0'"
 *   insn=0x00000000002B18A4 string=0x00000000002B18A8 "\n"
 *   insn=0x00000000002B18A8 string=0x00000000002B18AC "\t"
 *   insn=0x00000000002B18AC string=0x00000000002B18B0 "\n"
 *   insn=0x00000000002B18B4 string=0x00000000002B18B8 "\n"
 *   insn=0x00000000002B18B8 string=0x00000000002B18BC "\n"
 *   insn=0x00000000002B18BC string=0x00000000002B18C0 "\t"
 *   insn=0x00000000002B18C0 string=0x00000000002B18C4 "\t"
 *   insn=0x00000000002B18C8 string=0x00000000002B18CC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::BushControllerComponent::SaveToProtobufMessage(
        Caver::BushControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::BushControllerComponent *v3; // x0
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w9

  v3 = (Caver::Proto::BushControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::BushControllerComponent::default_instance(v3);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result[6];
  result[3] = *((_DWORD *)this + 30);
  result[6] = v5 | 1;
  v6 = *((_DWORD *)this + 36);
  result[6] = v5 | 3;
  result[4] = v6;
  result[5] = *((_DWORD *)this + 42);
  result[6] = v5 | 7;
  return result;
}

