/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299678
 * Mangled: _ZNK5Caver26MonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000203D80  Caver::Proto::MonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 16
 *   insn=0x000000000029968C string=0x0000000000299690 "$"
 *   insn=0x0000000000299690 string=0x0000000000299694 "H""
 *   insn=0x0000000000299694 string=0x0000000000299698 ""
 *   insn=0x0000000000299698 string=0x000000000029969C "s""
 *   insn=0x00000000002996A8 string=0x00000000002996AC "b"
 *   insn=0x00000000002996BC string=0x00000000002996C0 ""
 *   insn=0x00000000002996BC string=0x00000000001F7570 "0'"
 *   insn=0x00000000002996C4 string=0x00000000002996C8 "\n"
 *   insn=0x00000000002996C8 string=0x00000000002996CC "\t"
 *   insn=0x00000000002996CC string=0x00000000002996D0 "\n"
 *   insn=0x00000000002996D4 string=0x00000000002996D8 "\n"
 *   insn=0x00000000002996D8 string=0x00000000002996DC "\n"
 *   insn=0x00000000002996DC string=0x00000000002996E0 ""
 *   insn=0x00000000002996E0 string=0x00000000002996E4 "\t"
 *   insn=0x00000000002996E8 string=0x00000000002996EC "\t"
 *   insn=0x00000000002996F0 string=0x00000000002996F4 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::MonsterControllerComponent::SaveToProtobufMessage(
        Caver::MonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::MonsterControllerComponent *v3; // x0
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w9

  v3 = (Caver::Proto::MonsterControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::MonsterControllerComponent::default_instance(v3);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result[7];
  result[3] = *((_DWORD *)this + 30);
  result[7] = v5 | 1;
  v6 = *((_DWORD *)this + 36);
  result[7] = v5 | 3;
  result[4] = v6;
  result[5] = *((_DWORD *)this + 42);
  result[6] = *((_DWORD *)this + 50);
  result[7] = v5 | 0xF;
  return result;
}

