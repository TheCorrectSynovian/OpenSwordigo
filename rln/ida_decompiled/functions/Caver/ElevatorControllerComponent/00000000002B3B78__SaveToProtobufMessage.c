/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B3B78
 * Mangled: _ZNK5Caver27ElevatorControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ElevatorControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000202760  Caver::Proto::ElevatorControllerComponent::default_instance(void)
 *
 * Referenced strings: 13
 *   insn=0x00000000002B3B94 string=0x00000000002B3B98 "iA"
 *   insn=0x00000000002B3B98 string=0x00000000002B3B9C "s""
 *   insn=0x00000000002B3BA8 string=0x00000000002B3BAC "b"
 *   insn=0x00000000002B3BB8 string=0x00000000002B3BBC "m"
 *   insn=0x00000000002B3BBC string=0x00000000002B3BC0 ""
 *   insn=0x00000000002B3BBC string=0x00000000001F7570 "0'"
 *   insn=0x00000000002B3BC4 string=0x00000000002B3BC8 "\n"
 *   insn=0x00000000002B3BC8 string=0x00000000002B3BCC "\n"
 *   insn=0x00000000002B3BCC string=0x00000000002B3BD0 "\t"
 *   insn=0x00000000002B3BD4 string=0x00000000002B3BD8 "?\t"
 *   insn=0x00000000002B3BDC string=0x00000000002B3BE0 ")"
 *   insn=0x00000000002B3BE0 string=0x00000000002B3BE4 ""
 *   insn=0x00000000002B3BE4 string=0x00000000002B3BE8 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ElevatorControllerComponent::SaveToProtobufMessage(
        Caver::ElevatorControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ElevatorControllerComponent *v3; // x0
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w9
  unsigned int v7; // w9

  v3 = (Caver::Proto::ElevatorControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::ElevatorControllerComponent::default_instance(v3);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result[5];
  v6 = *((_DWORD *)this + 30);
  result[5] = v5 | 1;
  result[3] = v6;
  v7 = *((_DWORD *)this + 38);
  if ( v7 <= 2 )
  {
    result[4] = v7 + 1;
    result[5] = v5 | 3;
  }
  return result;
}

