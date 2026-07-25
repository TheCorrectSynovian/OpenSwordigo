/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256ADC
 * Mangled: _ZNK5Caver27CharAnimControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::CharAnimControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F77B0  Caver::AnimationControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001FA650  Caver::Proto::CharAnimControllerComponent::default_instance(void)
 *
 * Referenced strings: 26
 *   insn=0x0000000000256AF0 string=0x0000000000256AF4 "/"
 *   insn=0x0000000000256AF4 string=0x0000000000256AF8 "h$"
 *   insn=0x0000000000256AF4 string=0x00000000001F77B0 "0'"
 *   insn=0x0000000000256AF8 string=0x0000000000256AFC "5E"
 *   insn=0x0000000000256AFC string=0x0000000000256B00 "s""
 *   insn=0x0000000000256B08 string=0x00000000001FA650 "0'"
 *   insn=0x0000000000256B0C string=0x0000000000256B10 "b"
 *   insn=0x0000000000256B20 string=0x0000000000256B24 "$@"
 *   insn=0x0000000000256B20 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000256B28 string=0x0000000000256B2C "\n"
 *   insn=0x0000000000256B2C string=0x0000000000256B30 "\t"
 *   insn=0x0000000000256B30 string=0x0000000000256B34 "\n$"
 *   insn=0x0000000000256B38 string=0x0000000000256B3C "\n"
 *   insn=0x0000000000256B3C string=0x0000000000256B40 "\n$"
 *   insn=0x0000000000256B40 string=0x0000000000256B44 "\n\t"
 *   insn=0x0000000000256B44 string=0x0000000000256B48 "\t"
 *   insn=0x0000000000256B4C string=0x0000000000256B50 "\n$"
 *   insn=0x0000000000256B50 string=0x0000000000256B54 "\n"
 *   insn=0x0000000000256B54 string=0x0000000000256B58 "\t"
 *   insn=0x0000000000256B5C string=0x0000000000256B60 "\n$"
 *   insn=0x0000000000256B60 string=0x0000000000256B64 "\n"
 *   insn=0x0000000000256B64 string=0x0000000000256B68 ""
 *   insn=0x0000000000256B68 string=0x0000000000256B6C "\t"
 *   insn=0x0000000000256B70 string=0x0000000000256B74 "\n$"
 *   insn=0x0000000000256B74 string=0x0000000000256B78 "\t"
 *   insn=0x0000000000256B7C string=0x0000000000256B80 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::CharAnimControllerComponent::SaveToProtobufMessage(
        Caver::CharAnimControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::CharAnimControllerComponent *v3; // x0
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w9
  int v7; // w9
  int v8; // w9
  int v9; // w9

  v3 = (Caver::Proto::CharAnimControllerComponent *)Caver::AnimationControllerComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::CharAnimControllerComponent::default_instance(v3);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result[9];
  result[3] = *((_DWORD *)this + 48);
  result[9] = v5 | 1;
  v6 = *((_DWORD *)this + 54);
  result[9] = v5 | 3;
  result[4] = v6;
  v7 = *((_DWORD *)this + 60);
  result[9] = v5 | 7;
  result[5] = v7;
  v8 = *((_DWORD *)this + 66);
  result[9] = v5 | 0xF;
  result[6] = v8;
  v9 = *((_DWORD *)this + 72);
  result[9] = v5 | 0x1F;
  result[7] = v9;
  result[8] = *((_DWORD *)this + 78);
  result[9] = v5 | 0x3F;
  return result;
}

